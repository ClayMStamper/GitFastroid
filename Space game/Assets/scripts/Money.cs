using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Money : MonoBehaviour {

	Text text;
	public static int money;

	// Use this for initialization
	void Start () {
		text = GetComponent <Text> ();
		money = PlayerPrefsManager.GetMoney ();
		text.text = money.ToString();
	}
	void Update(){
		money = PlayerPrefsManager.GetMoney ();
		text.text = money.ToString();
	}
}
