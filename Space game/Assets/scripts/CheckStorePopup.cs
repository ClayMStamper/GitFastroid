using UnityEngine;
using System.Collections;

public class CheckStorePopup : MonoBehaviour {

	public GameObject storePopup, leaderboardPopup;

	void Start () {
		if (Money.money >= 50 && PlayerPrefsManager.GetPopUpShown (storePopup.name) == 0) {
			storePopup.SetActive (true);
			PlayerPrefsManager.SetPopUpShown (storePopup.name);
		} else if (Highscore.highscore >= 10 && PlayerPrefsManager.GetPopUpShown (leaderboardPopup.name) == 0) {
			leaderboardPopup.SetActive (true);
			PlayerPrefsManager.SetPopUpShown (leaderboardPopup.name);
		}
	}
}
