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
    private List<Friendly> friends;
    public Friendly friendTemp;
    public turret turretTemp;
    public Enemy[] enemies;
    public string dbase;
    private string IP;
    private int numbots;
    private CCCPInfo info;
    public statushandler stats;
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
    class dbaseresp
    {
        public string dname;
    }
    class CCCPInfo
    {
        public int[] AssignedBots;
        public string Gamestaus;
        public int Numbots;
    }
    void Start()
    {
        friends = new List<Friendly>();
        IP = "localhost";
        Debug.Log("Trying to enter getdomin");
        StartCoroutine(getDomain());
    }
    private void Update()
    {
        StartCoroutine(Upload());

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
        if (results.Length != 0)
        {
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
                Vector3 newpos = new Vector3(xPos/2, friend.transform.position.y, yPos/2);
                friend.transform.position = newpos;
                Vector3 neworient = new Vector3(0, orient);
                friend.transform.eulerAngles = neworient;
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

                Vector3 neworient = new Vector3(0, orient);
                enemy.transform.eulerAngles = neworient;
                enemy.health = health;
                enemy.turr.transform.eulerAngles = new Vector3(90, turretPos);
            }
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
        if (friends.Count !=0)
        {
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
        }
        else
        {
            send = "{}";
        }
       // Debug.Log(send);
        return send;
    }
    IEnumerator checkIn()
    {
        using (UnityWebRequest www = UnityWebRequest.Get("http://" + IP+"/info"))
        {
            Debug.Log("CHECKING IN DOMAIN");
            yield return www.Send();
            Friendly newFriendly;
            turret newTurret;
            if (www.isNetworkError)
            {
                Debug.Log("NETWORK ERROR IN GETDOMAIN");
                Debug.Log(www.error);
            }
            else
            {
                info =JsonUtility.FromJson<CCCPInfo>(www.downloadHandler.text);
                Debug.Log(info.AssignedBots);
                foreach(int idnum in info.AssignedBots)
                {
                    Debug.Log("Creating New Object");
                    newFriendly = Instantiate(friendTemp);
                    newTurret = Instantiate(turretTemp);
                    newFriendly.idnum = idnum;
                    newFriendly.turr = newTurret;
                    newTurret.chassis = newFriendly.gameObject;
                    newTurret.target = newTurret.gameObject;
                    friends.Add(newFriendly);
                    //stats.friends.Add(newFriendly);
                }
            }
        }
    }
    IEnumerator getDomain()
    {
        Debug.Log(dbase);
        using (UnityWebRequest www = UnityWebRequest.Post("http://" + dbase,"foo"))
        {
            Debug.Log("GETTING DOMAIN");
            yield return www.Send();

            if (www.isNetworkError)
            {
                Debug.Log("NETWORK ERROR IN GETDOMAIN");
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log(www.downloadHandler.text);
                IP = JsonUtility.FromJson<dbaseresp>(www.downloadHandler.text).dname;
                Debug.Log(IP);
                StartCoroutine(checkIn());
            }
        }
    }
    IEnumerator Upload()
    {
        //Debug.Log(IP);
        string msg =  genJSON();
        byte[] myData = System.Text.Encoding.UTF8.GetBytes(msg);
        using (UnityWebRequest www = UnityWebRequest.Put("http://" + IP, myData))
        {
            yield return www.Send();

            if (www.isNetworkError)
            {
                Debug.Log("NETWORK ERROR");
                Debug.Log(www.error);
            }
            else
            {
                results = www.downloadHandler.data;
            }
        }
        DoLast();
    }
}