using UnityEngine;
using System.Collections;

public class DebugRelock : MonoBehaviour {

	public GameObject buttonToLock;

	void Start(){
		print (PlayerPrefsManager.GetIfHighScoreAlreadyReset ());
	}

	public void Lock(){
		PlayerPrefsManager.UnlockShip (buttonToLock.name, 0);
	}
	public void UnLock(){
		PlayerPrefsManager.UnlockShip (buttonToLock.name, 1);
	}
	public void AddMoney(){
		PlayerPrefsManager.AddGems (1000);
		PlayerPrefsManager.AddMoney (10000);
	}
	public void ResetHighscore(){
		if (PlayerPrefsManager.GetIfHighScoreAlreadyReset () != 0) {
			Highscore.highscore = 0;
			PlayerPrefsManager.SetHighScore (0);
		} else {
			PlayerPrefsManager.SetHighScoreAlreadyReset ();
		}
	}
}
