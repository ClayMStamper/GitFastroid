using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreGUI : MonoBehaviour {

	public string index, username, score;
	public Text myIndex, myUsername, myScore;
	public bool isMyName;

	// Use this for initialization
	void Start () {
		UpdateText ();

	}
	
	public void UpdateText(){
		myIndex.text = index;
		string usernameWithSpace = username.Replace ("+", " ");
		myUsername.text = usernameWithSpace;
		myScore.text = score;
	}
}
