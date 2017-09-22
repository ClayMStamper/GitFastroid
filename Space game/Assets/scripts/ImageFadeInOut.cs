using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ImageFadeInOut : MonoBehaviour {

	Image image;
	public float fadeTime;
	private Color currentColor = Color.white;
	private float alphaChange;
	bool dim = true;


	void Start(){
		image = GetComponent <Image> ();
	}

	void Update(){
		if (dim == true) {
			alphaChange = Time.deltaTime / fadeTime;
			currentColor.a -= alphaChange;
			image.color = currentColor;
			if (image.color.a <= .3f)
				dim = false;
		} else if (dim == false) {
			alphaChange = Time.deltaTime / fadeTime;
			currentColor.a += alphaChange;
			image.color = currentColor;
			if (image.color.a >= 1)
				dim = true;
		}
	}
}
