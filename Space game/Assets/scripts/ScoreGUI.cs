using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreGUI : MonoBehaviour {

	public string index, username, score;
	public Text myIndex, myUsername, myScore;
	public bool isMyName;
	public Image myBG;

	// Use this for initialization
	void Start () {
		UpdateText ();
		//Invoke ("Highlight", 0.1f);
		print (username + " " + Name.name);
		if (username.Replace ("+", " ") == Name.name) {
			isMyName = true;
		}
	}

	void Update(){
		if (myBG.color == Color.yellow || isMyName == false) {
			return;
		}
		myBG.color = Color.yellow;
	}
	
	public void UpdateText(){
		myIndex.text = index;
		string usernameWithSpace = username.Replace ("+", " ");
		myUsername.text = usernameWithSpace;
		myScore.text = score;
	}
}
