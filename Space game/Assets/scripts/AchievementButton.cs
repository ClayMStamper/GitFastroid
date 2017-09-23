using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class AchievementButton : MonoBehaviour {
	
	int myLeaderboardIndex;
	public static AchievementButton selectedGem, selectedBackground, selectedAsteroid;
	public bool asteroidType, gemType, backgroundType;
	public bool unlocked;
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
		if (asteroidType) {
			if (PlayerPrefsManager.GetSelectedSkin ("SelectedAsteroid") == myPlayerPrefsUnlockKey){
				selectedPanel.transform.position = transform.position;
			}
		} else if (gemType) {
			if (PlayerPrefsManager.GetSelectedSkin ("SelectedGem") == myPlayerPrefsUnlockKey){
				selectedPanel.transform.position = transform.position;
			}
		} else if (backgroundType) {
			if (PlayerPrefsManager.GetSelectedSkin ("SelectedBackground") == myPlayerPrefsUnlockKey){
				selectedPanel.transform.position = transform.position;
			}
		} else {
			Debug.LogError ("NO TYPE ON ACHIEVEMENT BUTTON");
		}
		//UNLOCK CONDITIONS
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
			
		// is unlocked start conditions
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
		print ("SETTING SELECTED");
		selectedPanel.transform.position = transform.position;
		if (gemType == true) {
			PlayerPrefsManager.SetSelectedSkin ("SelectedGem", myPlayerPrefsUnlockKey);
			EquipGemSkin ();
		}
		if (asteroidType == true) {
			PlayerPrefsManager.SetSelectedSkin ("SelectedAsteroid", myPlayerPrefsUnlockKey);
			EquipAsteroidSkin ();
		}
		if (backgroundType == true) {
			PlayerPrefsManager.SetSelectedSkin ("SelectedBackground", myPlayerPrefsUnlockKey);
			EquipBackgroundSkin ();
		}
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
