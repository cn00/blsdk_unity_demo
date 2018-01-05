using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

#if UNITY_ANDROID || UNITY_IOS
public class BLSdkManagerBase : MonoSingleton<BLSdkManagerBase>
{
    public virtual void SdkInit()
    {

    }

    public virtual void SdkOpenLoginView()
    {

    }

	public virtual void SdkLogout()
	{

	}
	
	public virtual void SdkRealName() // 实名制
	{

	}

	public virtual void SdkCreateRole(string name, string roleid)// 创建角色
	{

	}

	public virtual void SdkUserInfo()// 获取用户信息[json]
	{

	}

	public virtual void SdkNotifyGameServer()// 通知游戏区服
	{

	}

	public virtual void SdkPay(
	      string itemId
		, string outTradeNo
		, string money
		, string productName
		, string productCount
		, string productDescription
		, string extension)  
	{
		
	}

}
#endif //UNITY_ANDROID || UNITY_IOS