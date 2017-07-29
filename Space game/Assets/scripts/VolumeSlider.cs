using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class VolumeSlider : MonoBehaviour {

	Slider volumeSlider;
	MusicManager musicManager;
	float volume;

	// Use this for initialization
	void Start () {
		volumeSlider = GetComponent <Slider> ();
		volumeSlider.value = PlayerPrefsManager.GetMasterVolume ();
		musicManager = FindObjectOfType <MusicManager> ();
		if (musicManager) {
			volume = volumeSlider.value;
			musicManager.GetComponent <AudioSource> ().volume = volume;
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void VolumeChange(){
		if (musicManager) {
			volume = volumeSlider.value;
			musicManager.GetComponent <AudioSource> ().volume = volume;
			PlayerPrefsManager.SetMasterVolume (volume);
		}
	}
}
