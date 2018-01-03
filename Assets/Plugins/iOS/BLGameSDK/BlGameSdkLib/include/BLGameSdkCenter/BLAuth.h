//
//  BLAuth.h
//  iblauthdemo
//
//  Created by ZhangRui on 14-2-20.
//  Copyright (c) 2014年 bilibili. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kBilibiliGameSdkAccountsKey;
typedef void (^IconBlock)(NSData *data,NSError *error); //一个block返回,返回获取头像的结果

@interface BLAuth : NSObject

+ (BLAuth *)sharedAuth;
+ (void)setSharedAuth:(BLAuth *)auth;
- (NSDictionary *)packDictionary;
- (void)unpackDictionary:(NSDictionary *)dic;
- (BOOL)isExpired;
- (BOOL)isOriginallyExpired;
+ (void)clean;
- (void)checkValidatity;

+ (void)addAccount:(NSString *)account uid:(NSString *)uid;
- (void)cacheInfo;
- (void)clearInfo;
+ (BLAuth *)getAuthWithAccount:(NSString *)account;
+ (BLAuth *)getAuthWithUid:(NSString *)account;
- (void)getAvatarData:(IconBlock)block;
- (NSData *)localAvatarData;//获取本地缓存的头像数据
- (void)setExpiredString:(NSString *)expireDate;

@property(nonatomic,strong) NSString *mid;          // 用户唯一ID
@property(nonatomic,strong) NSString *accessKey;    // 登录凭证
@property(nonatomic,strong) NSString *account;      // 用户名
@property(nonatomic,strong) NSString *nickname;     // 用户昵称
@property(nonatomic,strong) NSString *avatar;       // 头像地址
@property(nonatomic,strong) NSString *big_avatar;   // 大头像地址
@property(nonatomic,strong,readonly) NSString *expire;       // 过期时间
@property(nonatomic,assign) BOOL     activated;     // 是否激活
@property(nonatomic,assign) BOOL     isTourist;     // 是否游客
@property(nonatomic,assign) BOOL     isAuthentication;     // 是否实名认证


//内部参数，无需使用
@property(nonatomic,strong,readonly) NSString *originExpire; //accessKey的有效时间
@property(nonatomic,strong) NSString *role;//角色

@end
