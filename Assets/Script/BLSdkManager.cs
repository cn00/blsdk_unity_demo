using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

#if UNITY_ANDROID || UNITY_IOS
public class BLSdkManager : MonoSingleton<BLSdkManager>
{
	[DllImport("__Internal")]
	private static extern string BLSdkInit(string gameid, string cpid, string serverid, string appkey, string sandboxKey);
	[DllImport("__Internal")]
	private static extern void BLSdkOpenLoginView();
	[DllImport("__Internal")]
	private static extern string BLSdkPay(string json);

    void Start()
    {
		initSDK();
    }

    public void initSDK()
    {
		Debug.LogFormat ("csharp init SDK begin");
#if UNITY_IOS
		var s = BLSdkInit("266", "1", "507", "b9f9fdf0ad3c49d6b2f1c77c7eae7a31", "7abee0aec6a14fb087f2a74bebc6191f");
#elif UNITY_ANDROID

#elif UNITY_STANDALONE

#endif
		Debug.LogFormat ("csharp init SDK end {0}", s);
    }

    public void SdkOpenLoginView()
    {
		BLSdkOpenLoginView();
    }
}
#endif //UNITY_ANDROID || UNITY_IOS