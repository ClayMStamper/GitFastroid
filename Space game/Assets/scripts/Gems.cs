using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Gems : MonoBehaviour {

	Text text;
	public static int gems;
	bool updated = true; // gems text up to date
	int tmpGems; // to be used in update. Playerprefs shouldnt be used there

	// Use this for initialization
	void Start () {
		text = GetComponent <Text> ();
		gems = PlayerPrefsManager.GetGems ();
		text.text = gems.ToString();
	}
	void Update(){
		//Debug.Log (gems);
		//if (updated == false) { //if not updated yet then update
		//	updated = true;
			gems = PlayerPrefsManager.GetGems (); // not efficient to have playerprefs in update
		//}
		text.text = gems.ToString();
	}
	public void SetUpdatedFalse(){ // called by button to let the gems text update once
		updated = false;
	}
}
