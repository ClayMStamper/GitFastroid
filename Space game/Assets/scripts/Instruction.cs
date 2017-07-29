using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Instruction : MonoBehaviour {

	Text text;
	public float fadeTime;
	private Color currentColor = Color.white;
	private float alphaChange;
	int shown = 1;
	bool dim = true;


	void Start(){
		text = GetComponent <Text> ();
	}

	void Update(){
		if (dim == true) {
			alphaChange = Time.deltaTime / fadeTime;
			currentColor.a -= alphaChange;
			text.color = currentColor;
			if (text.color.a <= 0)
				dim = false;
		} else if (dim == false) {
			alphaChange = Time.deltaTime / fadeTime;
			currentColor.a += alphaChange;
			text.color = currentColor;
			if (text.color.a >= 1)
				dim = true;
		}
	}
}
