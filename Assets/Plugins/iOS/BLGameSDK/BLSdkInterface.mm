
#import "BLSdkInterface.h"
#import "BLA3GameSDKDelegate.h"

#if defined(__cplusplus)  
extern "C"{  
#endif  

extern void UnitySendMessage(const char *, const char *, const char *);
extern NSString* _CreateNSString (const char* string);  

      
char* _MakeStringCopy( const char* string)  
{  
    if (NULL == string) {  
        return NULL;  
    }  
    char* res = (char*)malloc(strlen(string)+1);  
    strcpy(res, string);  
    return res;  
}  


const char* BLSdkInit()
{
    NSLog(@"BilibiliSdkInit began oc");
    [[BLGameSdk defaultGameSdk] initWithGameid:@"51"
                                          cpId:@"1"
                                      serverid:@"109"
                                        appKey:@"3361ea7ec6474d75ae3c22d6e73fcbdd"
                                    sandboxKey:@"MFSNXYBILIGAMEJ1612"
                                      delegate:[A3BLGameSDKDelegate alloc]];

    NSLog(@"BilibiliSdkInit end oc");
    return _MakeStringCopy("BilibiliSdkInit_OK");
}

    const char* BilibiliSdkInit()
    {
        BLSdkInit();
    }

    const char* BLSdkInit2(const char* gameId
                           , const char* cpId
                           , const char* serverId
                           , const char* appKey
                           , const char* sandboxKey)
    {
        NSLog(@"BilibiliSdkInit began oc gameid:%@, cpid%@, serverid%@, appkey%@, sandboxkey%@", gameId, cpId, serverId, appKey, sandboxKey);
        [[BLGameSdk defaultGameSdk] initWithGameid:[NSString stringWithUTF8String:gameId]
                                              cpId:[NSString stringWithUTF8String:cpId]
                                          serverid:[NSString stringWithUTF8String:serverId]
                                            appKey:[NSString stringWithUTF8String:appKey]
                                        sandboxKey:[NSString stringWithUTF8String:sandboxKey]
                                          delegate:[A3BLGameSDKDelegate alloc]];
        
        NSLog(@"BilibiliSdkInit end oc");
        return _MakeStringCopy("BilibiliSdkInit_OK");
    }


#if defined(__cplusplus)
}  
#endif  
