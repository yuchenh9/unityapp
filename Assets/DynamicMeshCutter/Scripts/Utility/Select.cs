using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using cakeslice;

namespace DynamicMeshCutter
{
    public static class Select
    {
        public static List<GameObject> selected = new List<GameObject>();
        public static List<GameObject> selectedNext = new List<GameObject>();
        public static void Toggle(GameObject target)
        {
            if (target.tag=="Untagged")
            {   
                Outline outline = target.GetComponent<Outline>();
                if(outline==null)
                    outline=target.AddComponent<Outline>();
                outline.eraseRenderer=false;
            } else {
                Outline outline = target.GetComponent<Outline>();
                if(outline==null)
                    outline=target.AddComponent<Outline>();
                outline.eraseRenderer=true;
            }
            //Debug.Log("Toggle:"+target.tag);

        }
        
        public static void Clear(){
        }
    }
}
