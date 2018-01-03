//
//  BLDataSdk.h
//  dataCollectionSdkDemo
//
//  Created by bilibili on 16/5/24.
//  Copyright © 2016年 bilibili. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLDataSdk : NSObject

+ (instancetype)sharedDataSdk;

/**
 *  初始化参数
 *  @param gameid   游戏id
 *  @param cpid     cpid
 */
- (void)initWithGameid:(NSString *)gameid cpid:(NSString *)cpid;


/**
 *  设置当前用户
 *  uid 用户的b站uid
 *  serverid 用户所在服务器的serverid, 此serverid为我方分配的id
 */
- (void)setCurrentUser:(NSString *)uid serverid:(NSString *)serverid;

- (void)applicationDidEnterBackground;

- (void)applicationDidBecomeActive;

@end
