using UnityEngine;
using System.Collections;

public class PopupAdPlayer : MonoBehaviour {

	public float scoreThreshold; // how much time needs to accumulate before an ad plays
	public static float scoreSum;
	AdManager adManager;

	void Awake(){
		if (scoreSum >= scoreThreshold)
			PlayPopupAd ();
	}
	void start(){
		scoreThreshold = (Highscore.highscore / 2); // don't think this is working
		Debug.Log (scoreThreshold);
	}
	void PlayPopupAd(){
		scoreSum = 0f;
		AdManager.ShowAd ();
	}
}
