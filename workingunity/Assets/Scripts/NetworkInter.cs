using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;
using System;
using System.Text;
using UnityEngine;
using UnityEngine.AI;
using Newtonsoft.Json;

class NetworkInter : MonoBehaviour
{
    private byte[] results;
    public Friendly[] friends;
    public Enemy[] enemies;
    private int numbots;
    class toCCCP
    {
        public bool ready;
        public bool alldead;
        public List<Vector3[]> paths;
        public List<NavMeshPathStatus> status;
        public List<int> ids;
        public List<bool> fires;
        public List<ulong> Dturretposs;
    }
    void Start()
    {
        

    }
    private void Update()
    {
        StartCoroutine(Upload(DoLast));

    }
    public static string ByteArrayToString(byte[] ba)
    {
        StringBuilder hex = new StringBuilder(ba.Length * 2);
        foreach (byte b in ba)
            hex.AppendFormat("{0:x2}", b);
        return hex.ToString();
    }
    void DoLast()
    {
        Debug.Log("give me life");
        numbots = results[0];
        ulong xPos;
        ulong yPos;
        ulong orient;
        ulong health;
        ulong turretPos;
        foreach (var friend in friends)
        {
            xPos = BitConverter.ToUInt64(results, 2 + friend.idnum * 8);

            yPos = BitConverter.ToUInt64(results, 2 + numbots * 8 + friend.idnum * 8);
            turretPos = BitConverter.ToUInt64(results, 2 + 2 * numbots * 8 + friend.idnum * 8);
            orient = BitConverter.ToUInt64(results, 2 + 3 * numbots * 8 + friend.idnum * 8);
            health = BitConverter.ToUInt64(results, 2 + 4 * numbots * 8 + friend.idnum * 8);
            //friend.transform.position = new Vector3(xPos, friend.transform.position.y, yPos);
            friend.transform.eulerAngles = new Vector3(0, orient);
            friend.health = health;
            friend.turr.transform.eulerAngles = new Vector3(90, turretPos);
        }

        foreach (var enemy in enemies)
        {

            xPos = BitConverter.ToUInt64(results, 2 + enemy.idnum * 8);

            yPos = BitConverter.ToUInt64(results, 2 + numbots * 8 + enemy.idnum * 8);
            turretPos = BitConverter.ToUInt64(results, 2 + 2 * numbots * 8 + enemy.idnum * 8);
            orient = BitConverter.ToUInt64(results, 2 + 3 * numbots * 8 + enemy.idnum * 8);
            health = BitConverter.ToUInt64(results, 2 + 4 * numbots * 8 + enemy.idnum * 8);
            enemy.transform.position = new Vector3(xPos, enemy.transform.position.y, yPos);
            enemy.transform.eulerAngles = new Vector3(0, orient);
            enemy.health = health;
            enemy.turr.transform.eulerAngles = new Vector3(90, turretPos);
        }
    }
    private string genJSON()
    {
        toCCCP tocccp = new toCCCP();
        tocccp.ready = true;
        tocccp.alldead = false;
        tocccp.paths = new List<Vector3[]>();
        tocccp.status = new List<NavMeshPathStatus>();
        tocccp.ids = new List<int>();
        tocccp.Dturretposs = new List<ulong>();
        tocccp.fires = new List<bool>();

        NavMeshPath sendpath = new NavMeshPath();
        string send;
        foreach (var friend in friends)
        {
            sendpath = friend.pathS();
            tocccp.paths.Add(sendpath.corners);
            tocccp.status.Add(sendpath.status);
            tocccp.ids.Add(friend.idnum);
            tocccp.fires.Add(friend.fire);
            tocccp.Dturretposs.Add(friend.desiredturretpos);
        }

        send = JsonConvert.SerializeObject(tocccp);
        return send;
    }
    IEnumerator Upload(Action doLast)
    {
        string msg = genJSON();
        byte[] myData = System.Text.Encoding.UTF8.GetBytes(msg);
        using (UnityWebRequest www = UnityWebRequest.Put("http://192.168.42.23", myData))
        {
            yield return www.Send();

            if (www.isNetworkError)
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