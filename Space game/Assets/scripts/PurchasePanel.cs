using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PurchasePanel : MonoBehaviour {

	public bool active;
	public static string shipToPurchase;
	public int gold;
	public int gems;


	// Use this for initialization
	void Start () {
		transform.localScale = Vector2.zero;
		Debug.Log ("gold price: " + gold);
		Debug.Log ("gems price: " + gems);
	}
	
	// Update is called once per frame
	void Update () {
		Vector2 panelSize = transform.localScale;

		if (active == true) {
			panelSize.x += Time.deltaTime / 6;
			panelSize.x = Mathf.Clamp (panelSize.x, 0f, 0.072f); 
			panelSize.y += Time.deltaTime / 6;
			panelSize.y = Mathf.Clamp (panelSize.y, 0f, 0.085f); 
		} else {
			panelSize = Vector2.zero;
		}

		transform.localScale = panelSize;
	}
	void FixedUpdate(){
		transform.position = Vector2.zero;
	}
	public void SetActive(bool isActive){
		active = isActive;
	}
	public void BuyWithGems(){ // these methods called on click by purchase buttons
		if (Money.money >= gold) {
			PlayerPrefsManager.UnlockShip (shipToPurchase, 1);
			PlayerPrefsManager.AddMoney (-gold);
		} else {
			Debug.Log ("NOT ENOUGH MONEY!!!!");
		}
	}
	public void BuyWithGold(){
		if (Gems.gems >= gems) {
			PlayerPrefsManager.UnlockShip (shipToPurchase, 1); // 1 for boolean int not locked
			PlayerPrefsManager.AddGems (-gems);
		} else {
			Debug.Log ("NOT ENOUGH Gems!!!!");
		}
	}
}
