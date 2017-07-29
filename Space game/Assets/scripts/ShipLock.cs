using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ShipLock : MonoBehaviour {

	public int isUnlocked;
	public GameObject purchasePanel;
	PurchasePanel purchasePanelScript;
	public GameObject parent;

	// Use this for initialization
	void Start () {
		purchasePanelScript = FindObjectOfType <PurchasePanel> ();
		//purchasePanel.SetActive (false);
		parent = gameObject.GetComponentInParent <ShipSelector> ().gameObject;
		//Debug.Log (parent);
		//Debug.Log (parent.name);
		if (PlayerPrefsManager.GetShipLockStatus(parent.name) == null) {
			PlayerPrefsManager.UnlockShip (parent.name, isUnlocked);
		}
		isUnlocked = PlayerPrefsManager.GetShipLockStatus (parent.name);
		if (isUnlocked == 0) { // disable button interaction if locked
			parent.GetComponent <Button> ().interactable = false;
		}
	}
	
	// Update is called once per frame
	void Update () {
		isUnlocked = PlayerPrefsManager.GetShipLockStatus (parent.name);
		if (isUnlocked == 1) { // disable button interaction if locked
			parent.GetComponent <Button> ().interactable = true;
			Destroy (this.gameObject);
		}
	}
	public void SetPurchasePanel(){
		//Debug.Log (parent.name);
		purchasePanel.transform.localScale = Vector2.zero;
		PurchasePanel.shipToPurchase = parent.name;
		Debug.Log ("gold price: " + parent.GetComponent <ButtonPricesManager> ().gold);
		purchasePanelScript.gold = parent.GetComponent <ButtonPricesManager> ().gold;
		purchasePanelScript.gems = parent.GetComponent <ButtonPricesManager> ().gems;

	}
}
