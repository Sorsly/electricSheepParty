using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class statushandler : MonoBehaviour {
    private List<Friendly> friends;
    private List<Enemy> enemies;
    public GameObject defaulttext;
    public int offsetX;
    public int offsetY;
    public int offsetZ;
    private Dictionary<Friendly,TextMesh> friendlytexts;
    private Dictionary<Enemy,TextMesh> enemytexts;
    // Use this for initialization
    void Start()
    {

        friends = new List<Friendly>();
        enemies = new List<Enemy>();
    }
    public void addFriendly(Friendly friend)
    {
        friends.Add(friend);
    }
    public void addEnemy(Enemy enemy)
    {
        enemies.Add(enemy);
    }
    public void instantiateHealth()
    {
        foreach (var friend in friends)
        {
            friend.hovertext = Instantiate(defaulttext);
            TextMesh txtMesh = friend.hovertext.GetComponent<TextMesh>();
            txtMesh.text = "Friendly";
        }

        foreach (var enemy in enemies)
        {
            enemy.hovertext = Instantiate(defaulttext);
            TextMesh txtMesh = enemy.hovertext.GetComponent<TextMesh>();
            txtMesh.text = "enemy";
        }
    }
	// Update is called once per frame
	void Update () {
        foreach (var friend in friends)
        {
            TextMesh txtMesh = friend.hovertext.GetComponent<TextMesh>();
            txtMesh.text = friend.health.ToString();
            txtMesh.transform.position = new Vector3(friend.transform.position.x + offsetX, friend.transform.position.y+ offsetY , friend.transform.position.z + offsetZ);
        }

        foreach (var enemy in enemies)
        {
            TextMesh txtMesh = enemy.hovertext.GetComponent<TextMesh>();
            txtMesh.text = enemy.health.ToString();
            txtMesh.transform.position = new Vector3(enemy.transform.position.x + offsetX, enemy.transform.position.y + offsetY, enemy.transform.position.z + offsetZ);
        }
    }
}
