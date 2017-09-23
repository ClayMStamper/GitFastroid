using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Name : MonoBehaviour {

	public static string name;
	InputField input;
	public string[] swearWords;
	public GameObject popupArrow;

	// Use this for initialization
	void Start () {
		input = GetComponent <InputField> ();
		name = PlayerPrefsManager.GetName ();
		input.text = name;

	}
	public void OnInputChange(){
		name = FilterText (input.text);
		PlayerPrefsManager.SetName (name);
		input.text = name;
	}
	public void OnEndEdit(){
		FindObjectOfType <NameChangeWarning> ().UpdateWarning ();
		if (checkForDuplicateName (input.text) == true) {
			print ("found duplicate name!");
			name = "(NAME-TAKEN)";
			input.text = "(NAME-TAKEN)";
			PlayerPrefsManager.SetName ("");
		}
	}

	bool checkForDuplicateName(string input){
		input = input.ToLower ();
		for (int i = 0; i < LeaderboardTracker.GetInstance ().highscores.Length; i++) {
			if (input == LeaderboardTracker.GetInstance ().highscores [i].name) { // name is taken
				if (PlayerPrefsManager.GetIsNameClaimed(input) == 1) {
					print ("I own duplicated name");
					return false;
				}
				return true;
			}
		}
		return false;
	}

	string FilterText (string input){
		popupArrow.SetActive (false);
		input = input.ToLower ();
		for (int i = 0; i < swearWords.Length; i++){
			if (input.Contains (swearWords[i])){
				Debug.Log ("found swear word: " + swearWords [i]);
				input = input.Replace (swearWords[i], "");
			}
		}
		for (int i = 0; i < swearWords.Length; i++) {
			if (input.Contains (swearWords [i])) {
				Debug.Log ("found swear word: " + swearWords [i]);
				input = input.Replace (swearWords [i], "");
			}
		}
		for (int i = 0; i < swearWords.Length; i++) {
			if (input.Contains (swearWords [i])) {
				Debug.Log ("found swear word: " + swearWords [i]);
				input = input.Replace (swearWords [i], "");
			}
		}
		return input;
	}
}
