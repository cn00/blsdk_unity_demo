

#import "BLA3GameSDKDelegate.h"

#if defined(__cplusplus)  
extern "C"{  
#endif  

	extern void UnitySendMessage(const char* objName, const char* handleName, const char* message);

    static id delegate = nil;
	char* _MakeStringCopy( const char* string)  
	{  
		if (NULL == string) {  
			return NULL;  
		}  
		char* res = (char*)malloc(strlen(string)+1);  
		strcpy(res, string);  
		return res;  
	}  

	const char* BLSdkInit(
		  const char* gameId
		, const char* cpId
		, const char* serverId
		, const char* appKey
		, const char* sandboxKey)
	{
		NSLog(@"BilibiliSdkInit began oc gameid:%s, cpid:%s, serverid:%s, appkey:%s, sandboxkey:%s"
			, gameId, cpId, serverId, appKey, sandboxKey);
        
        delegate = [A3BLGameSDKDelegate alloc];
        [[BLGameSdk defaultGameSdk]
           initWithGameid:[NSString stringWithUTF8String:gameId]
           cpId:[NSString stringWithUTF8String:cpId]
           serverid:[NSString stringWithUTF8String:serverId]
           appKey:[NSString stringWithUTF8String:appKey]
           sandboxKey:[NSString stringWithUTF8String:sandboxKey]
           delegate:delegate];
		
        
        NSString *openUrl = @"biligame://passToken/";
        [[BLGameSdk defaultGameSdk] setGameOpenUrl:openUrl];
        
        NSLog(@"BilibiliSdkInit end oc");
		return _MakeStringCopy("oc_return_BilibiliSdkInit_OK");
	}


	void BLSdkOpenLoginView()
	{
		[[BLGameSdk defaultGameSdk] showLoginView];
	}

	void BLSdkLogout()
	{
	    [[BLGameSdk defaultGameSdk] logout];
	}

	int BLSdkRealName() // 实名制0=no, 1=yes
	{
    	BOOL isRealName = [[BLGameSdk defaultGameSdk] isRealNameAuth];
    	if (isRealName == YES)
    	{
    		return 1;
    	}
    	else
    	{
    		return 0;
    	}
	}

	// 创建角色
	void BLSdkCreateRole(const char* name, const char* roleid)
	{
    	[[BLGameSdk defaultGameSdk] 
    		createRole:[NSString stringWithUTF8String:name] 
    		roleid:[NSString stringWithUTF8String:roleid]];
	}

	void BLSdkUserInfo()// 获取用户信息[json]
	{
    	[[BLGameSdk defaultGameSdk] getUserInfoWithAccessKey:[delegate accessKey]];
	}

	// 通知游戏区服
	void BLSdkNotifyGameServer(
		  const char* serverId
		, const char* serverName
		, const char* roleid
		, const char* roleName
	){
    
	    [[BLGameSdk defaultGameSdk] 
			notifyZoneWithServerid:[NSString stringWithUTF8String:serverId] 
			serverName:[NSString stringWithUTF8String:serverName] 
			roleid:[NSString stringWithUTF8String:roleid] 
			roleName:[NSString stringWithUTF8String:roleName]];

	}

	void BLSdkPay(
		  const char* itemId
		, const char* outTradeNo
		, const char* money
		, const char* productName
		, const char* productCount
		, const char* productDescription
		, const char* extension )
	{
    	//[[BLGameSdk defaultGameSdk] payWithItemIdentifier:@"item1" accessKey:[delegate accessKey]];

		NSLog(@"SdkPay oc itemId:%s, outTradeNo:%s, productName:%s, productCount:%s, productDescription:%s, extension:%s, accessKey:%@"
			, itemId, outTradeNo, productName, productCount, productDescription, extension, [delegate accessKey]);

		[[BLGameSdk defaultGameSdk] 
			payWithItemIdentifier:[NSString stringWithUTF8String:itemId]
			outTradeNo:[NSString stringWithUTF8String:outTradeNo]
			money:[[NSString stringWithUTF8String:money] integerValue]
			productName:[NSString stringWithUTF8String:productName]
			productCount:[[NSString stringWithUTF8String:productCount] integerValue]
			productDescription:[NSString stringWithUTF8String:productDescription]
			extension:[NSString stringWithUTF8String:extension]
			accessKey:[delegate accessKey]];

	}
    
    const char* BLSdkAccessKey()
    {
        return _MakeStringCopy([[delegate accessKey] UTF8String]);
    }
    
    const char* BLSdkUid()
    {
        return _MakeStringCopy([[delegate uid] UTF8String]);
    }

#if defined(__cplusplus)
}  
#endif  
