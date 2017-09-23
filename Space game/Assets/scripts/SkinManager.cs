using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class SkinManager : MonoBehaviour {

	public GameObject[] skinPrefabs;
	string[] skinPrefabKeys;
	public static SkinManager instance;
	public 	GameObject asteroid, gem, background;
	EfficientSpawnerScript[] spawners;
	//public Dictionary <string, GameObject> savedSkins;

	void Awake(){
		if (instance == null) {
			instance = this;
			DontDestroyOnLoad (this);
		} else {
			Destroy (this);
		}
	}

	public static SkinManager GetInstance(){
		return instance;
	}

	void Start () {
		//savedSkins = new Dictionary<string, GameObject> ();
		skinPrefabKeys = new string[skinPrefabs.Length];
		for (int i = 0; i < skinPrefabs.Length; i++) {
			skinPrefabKeys [i] = skinPrefabs [i].name + "KEY";
		}
		//set gem
		for (int i = 0; i < skinPrefabs.Length; i++){
			if (PlayerPrefsManager.GetSelectedSkin ("SelectedGem") == skinPrefabKeys [i]) {
				gem = skinPrefabs [i];
				print ("Gem = " + skinPrefabs [i]);
			}
		}
		//set Asteroid
		for (int i = 0; i < skinPrefabs.Length; i++){
			if (PlayerPrefsManager.GetSelectedSkin ("SelectedAsteroid") == skinPrefabKeys [i]) {
				asteroid = skinPrefabs [i];
				print ("Asteroid = " + skinPrefabs [i]);
			}
		}
		//set Background
		for (int i = 0; i < skinPrefabs.Length; i++){
			if (PlayerPrefsManager.GetSelectedSkin ("SelectedBackground") == skinPrefabKeys [i]) {
				background = skinPrefabs [i];
				print ("background = " + skinPrefabs [i]);
			}
		}
		//savedSkins.Add ("AsteroidKEY", skinPrefabs.

	}

	void OnLevelWasLoaded(int level){
		Start ();
		if (level == 6) {
			print ("SKINNING");
			// handle asteroid skins
			spawners = FindObjectsOfType <EfficientSpawnerScript> ();
			print (spawners);
			foreach (EfficientSpawnerScript spawner in spawners) {
				spawner.asteroidPrefab = asteroid;
				//handle gem skins
			}
			FindObjectOfType <GemSpawner> ().gem = gem;
			//handle background skins
			GameObject newBackground = Instantiate (background) as GameObject;
			newBackground.transform.SetParent (GameObject.FindGameObjectWithTag ("Background").transform);
		}
	}
		
}
