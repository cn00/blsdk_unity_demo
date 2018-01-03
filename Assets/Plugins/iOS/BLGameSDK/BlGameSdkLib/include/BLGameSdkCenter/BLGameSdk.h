//
//  BLGameSdk.h
//  iblauthdemo
//
//  Created by bilibili on 15/1/9.
//  Copyright (c) 2015年 bilibili. All rights reserved.
//

#import "BLAuth.h"
#import <UIKit/UIKit.h>

#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

@class BLPayment;

@protocol BLGameSdkDelegate<NSObject>

@required

- (void)didLoginSuccessWithAccessKey:(NSString *)accessKey uid:(NSString *)uid;
- (void)didLoginFailureWithError:(NSError *)error;
- (void)didPaySuccessWithPayment:(BLPayment *)payment;
- (void)didPayFailureWithPayment:(BLPayment *)payment error:(NSError *)error;
- (void)didLogout;

@optional

- (void)didGetUserInfoSuccessWithBLAuth:(BLAuth *)auth;
- (void)didGetUserInfoFailureWithError:(NSError *)error;

@end


@protocol BLGameSdkInteralDelegate <BLGameSdkDelegate>

@required
- (void)didContinuePayWithPayment:(BLPayment *)payment;

@end

@interface BLGameSdk : NSObject

+ (instancetype)defaultGameSdk;

+ (NSString *)SdkVersion;

@property (nonatomic,strong) NSString *gameid;
@property (nonatomic,strong) NSString *cpid;
@property (nonatomic,strong) NSString *appkey;
@property (nonatomic,weak) id<BLGameSdkDelegate> SdkDelegate;

/**
 *  游戏的openUrl, 供Bilibili返回用
 */
@property (nonatomic,strong) NSString *gameOpenUrl;

/**
 *  gameid 即 appid,游戏id
 *  cpid 即 merchantId,商户id
 *  serverid , 我方分配的serverid，如果有多个，初始化的时候可填其中任意一个
 *  appkey 客户端token
 *  sandboxkey 沙盒支付验证key
 *  delegate sdk委托，用于接收回调信息
 */
- (void)initWithGameid:(NSString *)gameid
                  cpId:(NSString *)cpid
              serverid:(NSString *)serverid
                appKey:(NSString *)appKey
            sandboxKey:(NSString *)key
              delegate:(id<BLGameSdkDelegate>) delegate;

/**
 *  登陆接口
 */
- (void)showLoginView;

/**
 *  获取用户信息接口
 */
- (void)getUserInfoWithAccessKey:(NSString *)access;


- (BOOL)isRealNameAuth;

/**
 *  内购支付
 *  identifier, 商品内购identifier
 *  outTradeNo, 商户的订单号
 *  money, 商品价格， 如6rmb 则为 600， 单位为分
 *  productName, 商品名称， 如 ”钻石“
 *  productCount, 商品数量， 如 “100”
 *  extension, 透传信息
 *  accessKey, 登陆后的token
 *  delegate, 支付委托
 */
- (void)payWithItemIdentifier:(NSString *)identifier
                   outTradeNo:(NSString *)outTradeNo
                        money:(NSUInteger)money
                  productName:(NSString *)productName
                 productCount:(NSUInteger)count
           productDescription:(NSString *)des
                    extension:(NSString *)extensionInfo
                    accessKey:(NSString *)accessKey;

/**
 *  当前是否处于沙盒
 */
- (void)enbableSandbox:(BOOL)sandbox;

/**
 *  创建角色
 *  roleid,  游戏角色id
 *  roleName, 游戏角色名
 */
- (void)createRole:(NSString *)role roleid:(NSString *)roleid;

/**
 *  通知区服用户信息接口
 *  serverid, 我放分配的服务器id, 请确保是当前用户所在区服
 *  serverName , 服务器名
 *  roleid,  游戏角色id
 *  roleName, 游戏角色名
 */
- (void)notifyZoneWithServerid:(NSString *)serverid serverName:(NSString *)servername roleid:(NSString *)roleid roleName:(NSString *)roleName;

/**
 *  登出
 */
- (void)logout;

- (void)clearTourist;

- (void)didGetToken:(NSURL *)token;

/**
 *  设置主题（Option）
 */
- (void)setThemeBundleName:(NSString *)bundleName;

- (void)setThemeFontColor:(UIColor *)color;

- (void)setButtonEdgeInsets:(UIEdgeInsets)edgeInsets;

- (void)setBackgroundEdgeInsets:(UIEdgeInsets)edgeInsets;

- (void)setConfirmButtonFontColor:(UIColor *)color;

- (void)setRegButtonFontColor:(UIColor *)color;

- (void)setCheckBoxFontColor:(UIColor *)color;

@end
