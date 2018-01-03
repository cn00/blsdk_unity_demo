using UnityEngine;
using System.Collections.Generic;

/*--------------------------------------------------
	Monoシングルトン
---------------------------------------------------*/
public abstract class MonoSingleton<Type> : MonoBehaviour where Type : MonoBehaviour
{
	private static Type m_instance;
	public static Type Instance { get{ return m_instance; } }
	
	/*--------------------------------------------------
		コンストラクタ
	---------------------------------------------------*/
	void
	Awake()
	{
		if( m_instance != null )
		{
			Destroy( gameObject );
			return;
		}

		m_instance = this as Type;
		if( m_instance == null )
		{
			Destroy( gameObject );
			return;
		}

		onAwake();
//		DontDestroyOnLoad( gameObject );
	}
	
	/*--------------------------------------------------
		デストラクタ
	---------------------------------------------------*/
	void
	OnDestroy()
	{
		if( m_instance == this )
		{
			m_instance = null;
			onDestroy();
		}
	}

	/*--------------------------------------------------
		コールバック
	---------------------------------------------------*/
	protected virtual void onAwake()	{}
	protected virtual void onDestroy()	{}
}

