using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class AchievementButton : MonoBehaviour {
	
	int myLeaderboardIndex;
	public bool unlocked;
	public Sprite sprite;
	public int highScoreToBeat, leaderBoardIndex, gemsAtOnce, moneyAtOnce;

	void Start(){
		Image myImage = GetComponent <Image> ();
		myImage.sprite = sprite;
		if (highScoreToBeat != 0) {
			if (Highscore.highscore >= highScoreToBeat) {
				unlocked = true;
				return;
			}
		} else if (leaderBoardIndex != 0) {
			Leaderboard.Score[] scores = LeaderboardTracker.GetInstance ().highscores;
			for (int i = 0; i < scores.Length; i++) {
				if (PlayerPrefsManager.GetIsNameClaimed (scores [i].name) == 1) {
					myLeaderboardIndex = i + 1;
					break;
				}
				print (myLeaderboardIndex);
			}
		} else if (gemsAtOnce != 0) {

		} else if (moneyAtOnce != 0) {

		} else { //automatically unlocked
			unlocked = true;
		}
	}
}
