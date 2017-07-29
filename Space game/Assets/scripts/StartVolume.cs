using UnityEngine;
using System.Collections;

public class StartVolume : MonoBehaviour {
	float volume;
	MusicManager musicManager;
	float masterVolume;
	int firstStart; // first start as a boolean integer
	// Use this for initialization
	void Start () {
		firstStart = PlayerPrefs.GetInt ("firstStart"); // first start = true if first time
		if (firstStart == 0) {
			PlayerPrefs.SetInt ("firstStart", 1); // first start now equals false
			PlayerPrefsManager.SetMasterVolume (1); // initialize first start volume to 1
			PlayerPrefsManager.SetSelectedShip("a1"); // doesnt have to do with volume but best place to have this
		}
		volume = PlayerPrefsManager.GetMasterVolume ();
		musicManager = FindObjectOfType <MusicManager> ();
		musicManager.GetComponent <AudioSource> ().volume = volume;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
