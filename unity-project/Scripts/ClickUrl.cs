using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
public class ClickUrl : MonoBehaviour
{
    public string url;
    public void Open()
    {
        StartCoroutine(GetRequest(url));
    }
    IEnumerator GetRequest(string url)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
        {
            yield return webRequest.SendWebRequest();
        }
    }
}