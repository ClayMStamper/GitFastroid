﻿using UnityEngine;
using System.Collections;

public class Leaderboard : MonoBehaviour {

	public string publicCode;
	const string privateCode = "5x-67OfgG02q70LDp93YuAtL_CEnfLzEKETqC_AGm19g";
	public string webURL;

	public Score[] highscoresList;
	public DisplayLeaderboard leaderboardDisplay;

	void Awake(){
		AddNewHighscore (Name.name, (int) Highscore.highscore);
		leaderboardDisplay = GetComponent <DisplayLeaderboard> ();
	}
		
	public void AddNewHighscore(string name, int score){
		StartCoroutine (UploadNewHighscore (name, score));
	}
	public void AddNewHighscore(){
		StartCoroutine (UploadNewHighscore (Name.name, (int) Highscore.highscore));
	}

	IEnumerator UploadNewHighscore (string name, int score){
		WWW www = new WWW (webURL + privateCode + "/add/" + WWW.EscapeURL(name) + "/" + score);
		yield return www;

		if (string.IsNullOrEmpty (www.error))
			print ("Upload succesful");
		else
			print ("Error uploading: " + www.error);
	}

	public void DownloadHighscores(){
		StartCoroutine ("DownloadHighscoresFromDatabase");
	}

	IEnumerator DownloadHighscoresFromDatabase (){
		WWW www = new WWW (webURL + publicCode + "/pipe/");
		yield return www;

		if (string.IsNullOrEmpty (www.error)){
			FormatHighscores (www.text);
			leaderboardDisplay.OnHighscoresDownloaded (highscoresList);
		}
		else
			print ("Error downloading: " + www.error);
	}

	void FormatHighscores(string textStream){
		string[] entries = textStream.Split (new char[] { '\n' }, System.StringSplitOptions.RemoveEmptyEntries);
		highscoresList = new Score[entries.Length];

		for (int i = 0; i < entries.Length; i++) {
			string[] entryInfo = entries [i].Split (new char[] { '|' });
			string name = entryInfo [0];
			int score = int.Parse (entryInfo [1]);
			highscoresList [i] = new Score (name, score);
			print (highscoresList [i].name + ": " + highscoresList [i].score);
		}
	}

	public struct Score{
		public string name;
		public int score;

		public Score (string _name, int _score){
			name = _name;
			score = _score;
		}
	}
}
