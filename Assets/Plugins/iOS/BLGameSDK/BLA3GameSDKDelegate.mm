//
//  A3BLGameSDKDelegate.h
//  ActGame
//
//  Created by cn on 16/7/18.
//
//

#ifndef BLA3GameSDKDelegate_h
#define BLA3GameSDKDelegate_h

#import "BLA3GameSDKDelegate.h"
#import "BLPayment.h"
#import "BLAuth.h"

@interface A3BLGameSDKDelegate()<BLGameSdkDelegate> {
    int gameMoney;
 }
@property (nonatomic, strong) NSString *accessKey;
@property (nonatomic, strong) NSString *uid;
@end

@implementation A3BLGameSDKDelegate


#pragma mark - BLGameSdkDelegate

- (void)didLoginSuccessWithAccessKey:(NSString *)accessKey uid:(NSString *)uid {
    
    NSString *msg = [NSString stringWithFormat:@"登录成功返回参数\naccessKey:%@\nuid:%@\n",accessKey,uid];
    
    [self alertDelayWithTitle:@"登陆成功"
                      message:msg];
}

- (void)didLoginFailureWithError:(NSError *)error {
    NSString *msg = [NSString stringWithFormat:@"登录失败返回\n错误码：%li\n错误信息：%@\n",(long)error.code,error.localizedDescription];
    [self alertDelayError:error withTitle:@"登录失败" message:msg];
}

- (void)didGetUserInfoSuccessWithBLAuth:(BLAuth *)auth {
    NSString *msg = [NSString stringWithFormat:@"获取用户信息返回参数\nmid:%@\naccessKey:%@\naccount:%@\nnickname:%@\navatar:%@\nbig_avatar:%@\nexpire:%@\nactivated:%i\nisTourist:%i\n",auth.mid,auth.accessKey,auth.account,auth.nickname,auth.avatar,auth.big_avatar,auth.expire,auth.activated,auth.isTourist];
    
    [self alertDelayWithTitle:@"获取用户信息成功" message:msg];
}

- (void)didGetUserInfoFailureWithError:(NSError *)error {
    NSString *msg = [NSString stringWithFormat:@"获取用户信息失败返回\n错误码：%li\n错误信息：%@\n",(long)error.code,error.localizedDescription];
    [self alertDelayError:error withTitle:@"获取用户信息失败" message:msg];
}

- (void)didPaySuccessWithPayment:(BLPayment *)payment {
    NSString *orderNo = payment.blOrderNo;
    NSString *uid = [BLAuth sharedAuth].mid;
    
    NSDictionary *userInfo = @{@"orderNo":orderNo,@"uid":uid};
    NSTimer *timer = [NSTimer scheduledTimerWithTimeInterval:30 target:self selector:@selector(checkOrder:) userInfo:userInfo repeats:YES];
    [timer fire];
    
    NSString *msg =[NSString stringWithFormat:@"支付成功返回参数：\nidentifier:%@\nmoney:%lu\noutTradeNo:%@\nproductName:%@\nproductCount:%lu\nprodectDescription:%@\nextension:%@\nquantity:%lu\nblRechargeOrderNo:%@\nblOrderNo:%@\ntransactionid:%@\ncurrency:%@\ncountryCode:%@\nprice:%@\ntitle:%@\n",payment.identifier,(unsigned long)payment.money,payment.outTradeNo,payment.productName,(unsigned long)payment.productCount,payment.prodectDescription,payment.extension,(unsigned long)payment.quantity,payment.blRechargeOrderNo,payment.blOrderNo,payment.transactionid,payment.currency,payment.countryCode,payment.price,payment.title];
    [self alertDelayWithTitle:@"支付成功" message:msg];
}


//这里模拟游戏去cp方服务端查询订单状态
- (void)checkOrder:(NSTimer *)timer {
    NSDictionary *userInfo = timer.userInfo;
    NSString *orderNo = userInfo[@"orderNo"];
    NSString *uid = userInfo[@"uid"];
    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:@"http://172.16.7.29:5500/v1/check.orders/"]];
    [request setHTTPMethod:@"POST"];
    
    NSString *param = [NSString stringWithFormat:@"game_id=85&uid=%@&order_no=%@",uid,orderNo];
    NSData *data = [param dataUsingEncoding:NSUTF8StringEncoding];
    
    request.HTTPBody = data;
    
    [NSURLConnection sendAsynchronousRequest:request queue:[NSOperationQueue new] completionHandler:^(NSURLResponse * _Nullable response, NSData * _Nullable data, NSError * _Nullable connectionError) {
        if (connectionError) {
            NSLog(@"%@",connectionError);
        } else {
            if(data == nil) {
                return;
            }
            
            NSError *jsonError;
            NSDictionary *result = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableLeaves error:&jsonError];
            
            int code = [result[@"code"] intValue];
            
            if (code == 0) {
                NSNumber *coin = result[@"coin"];
                [self performSelectorOnMainThread:@selector(addGameMoney:) withObject:coin waitUntilDone:NO];
                
            }
        }
    }];
}

- (void)addGameMoney:(NSNumber *)coin {
    
}



- (void)didPayFailureWithPayment:(BLPayment *)payment error:(NSError *)error{
    // Notice!!!
    // 支付失败时消费单号不一定存在
    NSString *msg =[NSString stringWithFormat:@"支付失败返回参数：\nidentifier:%@\nmoney:%lu\noutTradeNo:%@\nproductName:%@\nproductCount:%lu\nprodectDescription:%@\nextension:%@\nquantity:%lu\nblRechargeOrderNo:%@\nblOrderNo:%@\ntransactionid:%@\ncurrency:%@\ncountryCode:%@\nprice:%@\ntitle:%@\n",payment.identifier,(unsigned long)payment.money,payment.outTradeNo,payment.productName,(unsigned long)payment.productCount,payment.prodectDescription,payment.extension,(unsigned long)payment.quantity,payment.blRechargeOrderNo,payment.blOrderNo,payment.transactionid,payment.currency,payment.countryCode,payment.price,payment.title];
    [self alertDelayError:error withTitle:@"支付失败" message:msg];
}

- (void)didLogout {
    [self alertWithTitle:@"已登出" message:@"已登出"];
}

- (void)alertDelayError:(NSError *)error withTitle:(NSString *)title message:(NSString *)message {
    
    NSString *fullMessage = [NSString stringWithFormat:@"%@: (%ld)(%@)",
                             message,
                             (long)error.code,
                             error.userInfo[NSLocalizedDescriptionKey]];
    
    [self alertDelayWithTitle:title message:fullMessage];
}

- (void)alertDelayWithTitle:(NSString *)title message:(NSString *)message
{
    SEL aSelector = NSSelectorFromString(@"alertWithTitle:message:");
    
    if([self respondsToSelector:aSelector]) {
        NSInvocation *inv = [NSInvocation invocationWithMethodSignature:[self methodSignatureForSelector:aSelector]];
        [inv setSelector:aSelector];
        [inv setTarget:self];
        
        [inv setArgument:&(title) atIndex:2]; //arguments 0 and 1 are self and _cmd respectively, automatically set by NSInvocation
        [inv setArgument:&(message) atIndex:3]; //arguments 0 and 1 are self and _cmd respectively, automatically set by NSInvocation
        [inv performSelector:@selector(invoke) withObject:message afterDelay:2];
    }
}

- (void)alertWithTitle:(NSString *)title message:(NSString *)message
{
    [[[UIAlertView alloc] initWithTitle:title
                                message:message
                               delegate:nil
                      cancelButtonTitle:@"返回"
                      otherButtonTitles:nil] show];
}
- (IBAction)touchRealName:(id)sender {
    BOOL isRealName = [[BLGameSdk defaultGameSdk] isRealNameAuth];
    
    [self alertWithTitle:@"实名认证"
                 message:isRealName ? @"已通过实名认证" : @"未通过实名认证"];
    
}


@end
#endif /* A3BLGameSDKDelegate_h */
