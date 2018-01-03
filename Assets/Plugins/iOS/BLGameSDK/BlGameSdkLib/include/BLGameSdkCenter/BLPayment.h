//
//  BLPayment.h
//  iblauthdemo
//
//  Created by bilibili on 15/3/27.
//  Copyright (c) 2015年 bilibili. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLPayment : NSObject

typedef NS_ENUM(NSInteger, BLPaymentStatus) {
    BLPaymentStatusLocalOverTime   = -3,// 本地请求校验接口超时
    BLPaymentStatusOrderFail       = -2,// 下单失败
    BLPaymentStatusSearchProduct   = -1,// 查询商品
    BLPaymentStatusOrdered         = 0, // 下单成功, 还未支付
    BLPaymentStatusChargeFail      = 1, // 支付成功，充值失败
    BLPaymentStatusPaySuccess      = 2, // 支付成功且验证成功
    BLPaymentStatusPayFail         = 3, // 支付成功，消费失败
    BLPaymentStatusVerifyFail      = 4, // 支付成功，验证失败， 需重试
    BLPaymentStatusPayCancelled    = 5, // 取消支付
    BLPaymentStatusNotifyingApple  = 6, // 支付成功，通知苹果ing
    BLPaymentStatusInAppError      = 7, // 支付验证失败，in_app为空
    BLPaymentStatusServerOverTime  = 8, // 服务端支付验证超时
};

extern NSString *const kBLPaymentUid;
extern NSString *const kBLPaymentRechargeOrder;
extern NSString *const kBLPaymentProductId;
extern NSString *const kBLPaymentGuess;
extern NSString *const kBLPaymentResult;
extern NSString *const kBLPaymentReceipt;
extern NSString *const kBLPaymentTransactionid;
extern NSString *const kBLPaymentFailTransactionid;


@property (nonatomic, strong) NSString *identifier;         // 商品id, 内购产品的产品id
@property (nonatomic, assign) NSUInteger money;             // 商品价格, 例如 600 , 单位是分
@property (nonatomic, strong) NSString *outTradeNo;         // 商户订单号
@property (nonatomic, strong) NSString *productName;        // 商品名称, 如“钻石”
@property (nonatomic, assign) NSUInteger productCount;      // 商品数量, 如“100”
@property (nonatomic, strong) NSString *prodectDescription; // 商品描述, 如“100钻石”
@property (nonatomic, strong) NSString *extension;          // 透传信息
@property (nonatomic, assign) NSUInteger quantity;          // 购买数量, 默认是1
@property (nonatomic, strong) NSString *blRechargeOrderNo;  // Bilibili充值订单号
@property (nonatomic, strong) NSString *blOrderNo;          // Bilibili消费订单号， 用于查单
@property (nonatomic, assign) NSInteger guess;              // 是否猜单

/**
 *  苹果商店信息
 **/
@property (nonatomic, strong) NSString *transactionid;
@property (nonatomic, strong) NSString *currency;           // 币种
@property (nonatomic, strong) NSString *countryCode;        // 国家
@property (nonatomic, strong) NSString *price;
@property (nonatomic, strong) NSString *title;

//@property (nonatomic, strong) NSString *uid;                // 用户uid


// try to get payment by blTradeNo from local cache
+ (NSDictionary *)paymentDicWithBLTradeNo:(NSString *)bl;

// save payment to local
+ (void)saveWithUid:(NSString *)uid
          blTradeNo:(NSString *)blTradeNo
            receipt:(NSString *)data
      transactionid:(NSString *)transactionid
          failOrder:(BOOL)failorder
          productId:(NSString*)productId
             status:(BLPaymentStatus)res;

+ (void)saveWithUid:(NSString *)uid
          blTradeNo:(NSString *)blTradeNo
       guessTradeNo:(BOOL)guess
            receipt:(NSString *)data
      transactionid:(NSString *)transactionid
          failOrder:(BOOL)failorder
          productId:(NSString*)productId
             status:(BLPaymentStatus)res;

+ (NSMutableArray *)wrongOrders;

+ (NSString *)firstFailedOrder:(NSString *)productid transactionid:(NSString *)transactionid;


@end
