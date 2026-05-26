using System.Collections;
using UnityEngine;

public class Hello
{
    public static void Run()
    {
         Debug.Log("Hello, World");

        GameObject go = new GameObject("Test1");
        go.AddComponent<Print>();

        GameObject go2 = new GameObject("Test2");
        go2.AddComponent<Test>();
    }
}