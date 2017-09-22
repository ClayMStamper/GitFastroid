using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class DisplayLeaderboard : MonoBehaviour {

	public GameObject[] highscoreText;
	Leaderboard leaderboard;

	void Start () {
		for (int i = 1; i < highscoreText.Length; i++) {
			Vector3 newPos = highscoreText [i].gameObject.transform.position;
			newPos.y = highscoreText [i - 1].gameObject.transform.position.y - 0.605f;
			highscoreText [i].gameObject.transform.position = newPos;
		}
		for (int i = 0; i < highscoreText.Length; i++) {
			highscoreText [i].GetComponent <ScoreGUI>().index = i + 1 + ". Fetching...";
		}

		leaderboard = GetComponent <Leaderboard> ();

		StartCoroutine ("RefreshHighscores");
	}

	public void OnHighscoresDownloaded(Leaderboard.Score[] highscoreList){
		for (int i = 0; i < highscoreText.Length; i++) {
			highscoreText [i].GetComponent <ScoreGUI>().index = i + 1 + ". ";
			if (highscoreList.Length > i) {
				highscoreText [i].GetComponent <ScoreGUI> ().username = "" + highscoreList [i].name;
				highscoreText [i].GetComponent <ScoreGUI> ().score = "" + highscoreList [i].score;
				highscoreText [i].GetComponent <ScoreGUI> ().UpdateText ();
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
