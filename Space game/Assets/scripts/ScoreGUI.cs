using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreGUI : MonoBehaviour {

	public string index, username, score;
	public Text myIndex, myUsername, myScore;

	// Use this for initialization
	void Start () {
		UpdateText ();
	}
	
	public void UpdateText(){
		myIndex.text = index;
		myUsername.text = username;
		myScore.text = score;
	}
}
