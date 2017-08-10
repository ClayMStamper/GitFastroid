using UnityEngine;
using UnityEngine.Advertisements;
using System.Collections;

public class AdManager : MonoBehaviour {

	public static void ShowAd(){
		if(Advertisement.IsReady()){
			Advertisement.Show ();
		}
	}
	public void ShowRewardAd(){
		if (Advertisement.IsReady("rewardedVideo")){
			var options = new ShowOptions { resultCallback = AdResults};
			Advertisement.Show ("rewardedVideo", options); // options is a variable of type ShowOptions
		}
	}

	private void AdResults(ShowResult result){
		switch (result) {
		case ShowResult.Finished:
			Debug.Log ("add finished");
			PlayerPrefsManager.AddGems (Random.Range(3,5));
			break;
		case ShowResult.Skipped:
			Debug.Log ("add skpped");
			break;
		case ShowResult.Failed:
			Debug.Log ("failed to launch ad");
			break;
		}
	}	
}
