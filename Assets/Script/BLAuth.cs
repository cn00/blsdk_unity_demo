using System;

/// <summary>
/// Summary description for Class1
/// </summary>
public class BLAuth
{
    public string mid;          // 用户唯一ID
    public string accessKey;    // 登录凭证
    public string account;      // 用户名
    public string nickname;     // 用户昵称
    public string avatar;       // 头像地址
    public string big_avatar;   // 大头像地址
    public string expire;       // 过期时间
    public bool activated;     // 是否激活
    public bool isTourist;     // 是否游客
    public bool isAuthentication;     // 是否实名认证

    public string ToString()
    {

    }
}
