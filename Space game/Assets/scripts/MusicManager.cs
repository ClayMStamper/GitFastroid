using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MusicManager : MonoBehaviour {

	public AudioClip[] levelMusicChangeArray;
	bool volumeFadeOut;
	AudioClip thisLevelMusic;

	private AudioSource audioSource;

	// Use this for initialization
	void Awake(){
		DontDestroyOnLoad (gameObject);
	}
	void Start(){
		audioSource = GetComponent<AudioSource>();
		//audioSource.Play ();

	}
	// Update is called once per frame
	void Update () {
		if (volumeFadeOut == true) {
			audioSource.volume -= Time.deltaTime * 2;
			if (audioSource.volume <= 0) {
				volumeFadeOut = false;
				SwapTrack ();
			}
		} else{
			if (audioSource.volume < 1) {
				audioSource.volume += Time.deltaTime * 2 ;
			} 
		}
	}
	void OnLevelWasLoaded(int level){
		NextTrack (level);
	}
	public void changeVolume(float volume){
		audioSource.volume = volume;
	}
	void NextTrack(int level){
		thisLevelMusic = levelMusicChangeArray [level];
		//		Debug.Log ("Playing clip " + levelMusicChangeArray[level]);
		if (thisLevelMusic){
			if (audioSource.clip!= thisLevelMusic) { // if there is an audio clip attatched
				volumeFadeOut = true;
			}
		}
	}
	void SwapTrack(){
		audioSource.clip = thisLevelMusic;
		audioSource.loop = true;
		audioSource.Play ();
	}
}
