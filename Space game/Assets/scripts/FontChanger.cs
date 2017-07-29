using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class FontChanger : MonoBehaviour {

	Text[] textArray;
	public Font newFont;

	// Use this for initialization
	void Start () {
		textArray = FindObjectsOfType <Text> ();
		for (int i = 0; i < textArray.Length; i++) {
			textArray [i].font = newFont;
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
