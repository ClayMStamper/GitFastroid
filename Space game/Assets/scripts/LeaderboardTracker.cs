using UnityEngine;
using System.Collections;

public class LeaderboardTracker : MonoBehaviour {

	public static LeaderboardTracker instance;
	public Leaderboard.Score[] highscores;
	public string[] myNames;
	Leaderboard leaderboard;

	void Awake(){
		if (instance == null) {
			instance = this;
			DontDestroyOnLoad (this);
		} else {
			Destroy (this);
		}
	}

	public static LeaderboardTracker GetInstance(){
		return instance;
	}

	void Start(){
		highscores = new Leaderboard.Score[100];
		leaderboard = GetComponent <Leaderboard> ();
		StartCoroutine (RefreshHighscores ());
	}

	public void OnHighscoresDownloaded(Leaderboard.Score[] highscoreList){
		for (int i = 0; i < highscoreList.Length; i++) {
			if (highscoreList.Length > i) {
				highscores[i].name = "" + highscoreList [i].name;
				highscores[i].score = int.Parse ("" + highscoreList [i].score);
			} else
				return;
		}
	}

	IEnumerator RefreshHighscores() {
		while (true) {
			leaderboard.DownloadHighscores ();
			yield return new WaitForSeconds (30);
		}
	}
}
