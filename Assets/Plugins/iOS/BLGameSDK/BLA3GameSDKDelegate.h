//
//  A3BLGameSDKDelegate.h
//  ActGame
//
//  Created by cn on 16/7/18.
//
//

#ifndef A3BLGameSDKDelegate_h
#define A3BLGameSDKDelegate_h

#import "BLGameSdk.h"
@interface A3BLGameSDKDelegate : NSObject<BLGameSdkDelegate>
@property(nonatomic,strong) BLAuth* auth;
@property (nonatomic, strong) NSString *accessKey;
@property (nonatomic, strong) NSString *uid;
@end
#endif /* A3BLGameSDKDelegate_h */
