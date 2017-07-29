using UnityEngine;
using System.Collections;

public class FirstTimePlayInfo : MonoBehaviour {

	public string key;


	void Start () {
		int shown = PlayerPrefsManager.GetInfoPopupShown (key);
		if (shown != 0) // if shown already destroy
			Destroy (gameObject);
		PlayerPrefsManager.SetInfoPopupShown (key, 1); // has been shown
	}

}
