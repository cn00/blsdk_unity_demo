using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

#if UNITY_ANDROID || UNITY_IOS
public class BLSdkManager : MonoSingleton<BLSdkManager>
{
	[DllImport("__Internal")]
	private static extern string BLSdkInit();
	[DllImport("__Internal")]
	private static extern string BLSdkOpenLoginView();
	[DllImport("__Internal")]
	private static extern string BLSdkPay(string json);

    void Start()
    {
		initSDK();
    }

    public void initSDK()
    {
		Debug.LogFormat ("init SDK csharp begin");
        var s = BilibiliSdkInit();
		Debug.LogFormat ("init SDK csharp end {0}", s);
    }
}
#endif //UNITY_ANDROID || UNITY_IOS