using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawn : MonoBehaviour
{
    [SerializeField]
    private GameObject[] prefabs;
    [SerializeField]
    public bool click=false;
    [SerializeField]
    public string selected;
    private bool myBool=false;
    private Dictionary<string, GameObject> myDictionary = new Dictionary<string, GameObject>();

    public void Spawn1(string theselected)
    {
        foreach (GameObject prefab in prefabs)
        {
            // Do something with the prefab
           if(theselected==prefab.name){
                Instantiate(prefab,transform.position,transform.rotation);
                break;
           }
            Debug.Log("not found");
        }
    }
    // Start is called before the first frame update
    void Awake()
    {
        // Load the prefab from the "Assets/Resources" folder
        //prefab = Resources.Load<GameObject>("pan");
    }
     private void LoopThroughPrefabs()
    {
        foreach (GameObject prefab in prefabs)
        {
            // Do something with the prefab
            Debug.Log(prefab.name);
            myDictionary.Add(prefab.name,prefab);
        }
    }
    void Start()
    {
        LoopThroughPrefabs();
    }

    // Update is called once per frame
    void Update()
    {
        if(click!=myBool){
            Spawn1(selected);
            myBool=!myBool;
        }
    }
}
