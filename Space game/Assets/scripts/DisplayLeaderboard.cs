using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class DisplayLeaderboard : MonoBehaviour {

	public Text[] highscoreText;
	Leaderboard leaderboard;

	void Start () {
		for (int i = 1; i < highscoreText.Length; i++) {
			Vector3 newPos = highscoreText [i].gameObject.transform.position;
			newPos.y = highscoreText [i - 1].gameObject.transform.position.y - 0.5f;
			highscoreText [i].gameObject.transform.position = newPos;
		}
		for (int i = 0; i < highscoreText.Length; i++) {
			highscoreText [i].text = i + 1 + ". Fetching...";
		}

		leaderboard = GetComponent <Leaderboard> ();

		StartCoroutine ("RefreshHighscores");
	}

	public void OnHighscoresDownloaded(Leaderboard.Score[] highscoreList){
		for (int i = 0; i < highscoreText.Length; i++) {
			highscoreText [i].text = i + 1 + ". ";
			if (highscoreList.Length > i) {
				highscoreText [i].text += highscoreList [i].name + ":     " + highscoreList [i].score;
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
