using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using System;

class NetworkInter : MonoBehaviour
{
    private byte[] results;
    public Friendly[] friends;
    private int numbots;
    void Start()
    {



    }
    private void Update()
    {
        StartCoroutine(Upload(DoLast));

    }
    void DoLast()
    {
        numbots = results[0];
        ulong xPos;
        ulong yPos;
        ulong turretPos;
        ulong orient;
        ulong health;
        foreach (var friend in friends)
        {
            xPos = BitConverter.ToUInt64(results, 2 + friend.idnum * 8);

            yPos = BitConverter.ToUInt64(results, 2 + numbots * 8 + friend.idnum * 8);
            turretPos = BitConverter.ToUInt64(results, 2 + 2 * numbots * 8 + friend.idnum * 8);
            orient = BitConverter.ToUInt64(results, 2 + 3 * numbots * 8 + friend.idnum * 8);
            health = BitConverter.ToUInt64(results, 2 + 4 * numbots * 8 + friend.idnum * 8);
            friend.transform.position = new Vector3(xPos, friend.transform.position.y, yPos);
            friend.transform.eulerAngles = new Vector3(0, orient);
            friend.turretpos = turretPos;
            friend.health = health;
        }
    }
    IEnumerator Upload(Action doLast)
    {
        byte[] myData = System.Text.Encoding.UTF8.GetBytes("This is some test data");
        foreach (var friend in friends)
        {
        }
            using (UnityWebRequest www = UnityWebRequest.Put("http://10.186.83.129", myData))
        {
            yield return www.Send();

            if (www.isError)
            {
                Debug.Log(www.error);
            }
            else
            {
                results = www.downloadHandler.data;
            }
        }
        doLast();
    }
}