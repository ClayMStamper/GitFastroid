﻿using UnityEngine;
using System.Collections;

public class DebugRelock : MonoBehaviour {

	public GameObject buttonToLock;

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
		Highscore.highscore = 0;
		PlayerPrefsManager.SetHighScore (0);
	}
}
