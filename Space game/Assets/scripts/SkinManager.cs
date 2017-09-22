using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class SkinManager : MonoBehaviour {

	public static SkinManager instance;
	public 	GameObject asteroid, gem, background;
	EfficientSpawnerScript[] spawners;

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

	void OnLevelWasLoaded(int level){
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

	void Start () {
	}
}
