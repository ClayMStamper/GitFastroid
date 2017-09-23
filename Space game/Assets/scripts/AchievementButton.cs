using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class AchievementButton : MonoBehaviour {
	
	int myLeaderboardIndex;
	public bool asteroidType, gemType, backgroundType;
	public bool unlocked, selected;
	public Sprite sprite;
	public Image myImage, myBackgroundImage;
	public GameObject myLock, selectedPanel;
	public int highScoreToBeat, leaderBoardIndex, gemsAtOnce, moneyAtOnce;
	public GameObject mySkinPrefab;
	public string myPlayerPrefsUnlockKey;

	void Start(){
		myImage.sprite = sprite;
		if (PlayerPrefsManager.GetIsSkinUnlocked (myPlayerPrefsUnlockKey) == 1) {
			unlocked = true;
		}
		if (highScoreToBeat != 0) {
			if (Highscore.highscore >= highScoreToBeat) {
				unlocked = true;
				return;
			}
		} else if (leaderBoardIndex != 0) {
			print ("checking leaderboard index");
			Leaderboard.Score[] scores = LeaderboardTracker.GetInstance ().highscores;
			for (int i = 0; i < scores.Length; i++) {
				//print (scores [i].name);
				if (PlayerPrefsManager.GetIsNameClaimed (scores [i].name) == 1) {
					myLeaderboardIndex = i + 1;
					print (myLeaderboardIndex);
					break;
				}
			}
			if (myLeaderboardIndex <= leaderBoardIndex) {
				unlocked = true;
			}
		} else if (gemsAtOnce != 0) {
			unlocked = true;
		} else if (moneyAtOnce != 0) {
			unlocked = true;
		} else { //automatically unlocked
			unlocked = true;
		}

		if (unlocked == true) {
			PlayerPrefsManager.SetSkinUnlocked (myPlayerPrefsUnlockKey);
			GetComponent <Button> ().interactable = true;
			//myBackgroundImage.color = Color.white;
			myLock.SetActive (false);
		} else {
			GetComponent <Button> ().interactable = false;
			//myBackgroundImage.color = Color.grey;
			myLock.SetActive (true);
		}
	}

	public void SetSelected(){

	}

	public void EquipGemSkin(){
		SkinManager.GetInstance ().gem = mySkinPrefab;
	}
	public void EquipAsteroidSkin(){
		SkinManager.GetInstance ().asteroid = mySkinPrefab;
	}
	public void EquipBackgroundSkin(){
		SkinManager.GetInstance ().background = mySkinPrefab;
	}
}
