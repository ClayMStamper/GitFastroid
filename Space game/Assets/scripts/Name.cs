using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Name : MonoBehaviour {

	public static string name;
	InputField input;
	public string[] swearWords;

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
	string FilterText (string input){
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
