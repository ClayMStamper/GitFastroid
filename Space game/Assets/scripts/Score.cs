using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Score : MonoBehaviour {

	public static float score = 0;
	public static float[] scores; 
	bool moneyAddedYet = false;
	Text text;

	void Start(){
		score = 0;
		text = GetComponent <Text> ();
	}

	void Update () {
		if (PlayerScript.alive == true) {
			score += Time.deltaTime;
			text.text = "Score: " + score;
		} 
		else if (moneyAddedYet == false) { // if player is dead and score hasnt been added to money yet
			moneyAddedYet = true;          // then add score to money once
			PlayerPrefsManager.AddMoney (score);
			PopupAdPlayer.scoreSum += score;
		}
		if (score > Highscore.highscore) {
			Highscore.highscore = score;
			PlayerPrefsManager.SetHighScore (score);

		} 
	}
}
