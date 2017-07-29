using UnityEngine;
using System.Collections;

public class GemUpdater : MonoBehaviour {

	public void UpdateGems(){
		Debug.Log (PlayerPrefsManager.GetGems ());
		Gems.gems = PlayerPrefsManager.GetGems ();
	}
}
