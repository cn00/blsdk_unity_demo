using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using LitJson;

#if UNITY_IOS
public class BLSdkManagerIOS : BLSdkManagerBase
{
	[DllImport("__Internal")] private static extern string BLSdkInit(string gameid, string cpid
		, string serverid, string appkey, string sandboxKey);
	[DllImport("__Internal")] private static extern void BLSdkOpenLoginView();
	[DllImport("__Internal")] private static extern void BLSdkLogout();
	[DllImport("__Internal")] private static extern int BLSdkRealName(); // 实名制
	[DllImport("__Internal")] private static extern void BLSdkCreateRole(string name, string roleid);// 创建角色
	[DllImport("__Internal")] private static extern void BLSdkUserInfo();// 获取用户信息[json]
	[DllImport("__Internal")] private static extern void BLSdkNotifyGameServer();// 通知游戏区服
	[DllImport("__Internal")] private static extern void BLSdkPay(string itemId, string outTradeNo, string money 
		, string productName, string productCount, string productDescription, string extension);//

	void Start()
	{
		SdkInit();
	}

    BLAuth mAuth = null;
    BLAuth Auth
    {
        get { return mAuth; }
    }
    // 接收 Native 消息
    public void NativeMessageHandler(string json)
	{
		Debug.LogFormat("NativeMessage: {0}", json);
        JsonData reader = JsonMapper.ToObject(json);
        string type = reader["type"].ToString();
        JsonData body = reader["body"];
        switch(type)
        {
        case "login":
            // success
            if(body["status"].ToString() == "success")
            {
                //BLAuth auth = new BLAuth();
                //auth.accessKey=body["accessKey"].ToString();
                //auth.account = body["account"].ToString();
                //auth.mid = body["mid"].ToString();
                //auth.nickname = body["nickname"].ToString();
                //auth.expire = body["expire"].ToString();
                BLAuth auth = JsonMapper.ToObject<BLAuth>(body.ToJson());
                mAuth = auth;
            }
            // failed

            break;
        case "logout":

            break;
        case "auth":
            // success

            // failed

            break;
        case "payment":
            // success

            // failed

            break;

        }
    }

	public override void SdkInit()
	{
		string s = "";
		Debug.LogFormat ("csharp init SDK begin");
		s = BLSdkInit("266", "1", "507"
			, "b9f9fdf0ad3c49d6b2f1c77c7eae7a31"
			, "7abee0aec6a14fb087f2a74bebc6191f"
		);
		Debug.LogFormat ("csharp init SDK end {0}", s);
	}

	public override void SdkOpenLoginView()
	{
		Debug.LogFormat ("csharp SdkOpenLoginView begin");
		BLSdkOpenLoginView();
		Debug.LogFormat ("csharp SdkOpenLoginView end");
	}

	public override void SdkLogout()
	{
		BLSdkLogout();
		Debug.LogFormat ("csharp SdkLogout end");
	}

	public override void SdkRealName() // 实名制
	{
		var isRealName = BLSdkRealName();
	}

	public void SdkCreateRoleTest()
	{
		Debug.LogFormat ("csharp SdkCreateRoleTest begin");
		SdkCreateRole("test001", "10000");
		Debug.LogFormat ("csharp SdkCreateRoleTest end");
	}
	public override void SdkCreateRole(string name, string roleid)// 创建角色
	{
		BLSdkCreateRole(name, roleid);
	}

	public override void SdkUserInfo()// 获取用户信息[json]
	{
		Debug.LogFormat ("csharp SdkUserInfo begin");
		BLSdkUserInfo();
		Debug.LogFormat ("csharp SdkUserInfo end");
	}

	public override void SdkNotifyGameServer()// 通知游戏区服
	{
		Debug.LogFormat ("csharp SdkNotifyGameServer begin");
		BLSdkNotifyGameServer();
		Debug.LogFormat ("csharp SdkNotifyGameServer end");
	}

	//test pay
	public void SdkPayTest()
	{
		Debug.LogFormat ("csharp SdkPayTest begin");
		SdkPay(
		  "test_itemId"
		, "10001"
		, "9988"
		, "test_productName"
		, "123"
		, "test_productDescription"
		, "test_extension");
		Debug.LogFormat ("csharp SdkPayTest end");
	}
	public override void SdkPay(
	      string itemId
		, string outTradeNo
		, string money
		, string productName
		, string productCount
		, string productDescription
		, string extension) 
	{
		BLSdkPay(
			  itemId
			, outTradeNo
			, money
			, productName
			, productCount
			, productDescription
			, extension);
	}
}
#endif //UNITY_ANDROID || UNITY_IOS