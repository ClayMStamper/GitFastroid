using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ButtonPricesManager : MonoBehaviour {

	public int gems;
	public int gold;
	private GameObject goldPrice;
	private GameObject gemsPrice;
	Text gemsText;
	Text goldText;

	// Use this for initialization
	void Start () {
		goldPrice = GetComponentInChildren <GoldPrice> ().gameObject;
		gemsPrice = GetComponentInChildren <GemsPrice> ().gameObject;
		goldText = goldPrice.GetComponent <Text> ();
		gemsText = gemsPrice.GetComponent <Text> ();
		if (gold >= 1000) {
			goldText.text = (gold / 1000).ToString() + "k";
		} else {
			goldText.text = gold.ToString ();
		}
		gemsText.text = gems.ToString ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
