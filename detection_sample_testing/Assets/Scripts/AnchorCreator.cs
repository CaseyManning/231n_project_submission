using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class AnchorCreator : MonoBehaviour
{
    public void RemoveAllAnchors()
    {
        Debug.Log($"DEBUG: Removing all anchors ({anchorDic.Count})");
        foreach (var anchor in anchorDic)
        {
            Destroy(anchor.Key.gameObject);
        }
        s_Hits.Clear();
        anchorDic.Clear();
    }

    void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();
        m_AnchorManager = GetComponent<ARAnchorManager>();
        GameObject cameraImage = GameObject.Find("Camera Image");
        phoneARCamera = cameraImage.GetComponent<PhoneARCamera>();
    }

    ARAnchor CreateAnchor(in ARRaycastHit hit)
    {
        // TODO: create plane anchor

        // create a regular anchor at the hit pose
        Debug.Log($"DEBUG: Creating regular anchor. distance: {hit.distance}. session distance: {hit.sessionRelativeDistance} type: {hit.hitType}.");
        return m_AnchorManager.AddAnchor(hit.pose);
    }

    private bool Pos2Anchor(float x, float y, BoundingBox outline)
    {
        // GameObject anchorObj = m_RaycastManager.raycastPrefab;
        // TextMesh anchorObj_mesh = anchorObj.GetComponent<TextMesh>();
        anchorObj_mesh.text = $"{outline.Label}: {(int)(outline.Confidence * 100)}%";
        // Perform the raycast
        if (m_RaycastManager.Raycast(new Vector2(x, y), s_Hits, trackableTypes))
        {
            // Raycast hits are sorted by distance, so the first one will be the closest hit.
            var hit = s_Hits[0];
            //TextMesh anchorObj = GameObject.Find("New Text").GetComponent<TextMesh>();
            // Create a new anchor
            Debug.Log("Creating Anchor");
            var anchor = CreateAnchor(hit);
            if (anchor)
            {
                Debug.Log($"DEBUG: creating anchor. {outline}");
                // Remember the anchor so we can remove it later.
                anchorDic.Add(anchor, outline);
                Debug.Log($"DEBUG: Current number of anchors {anchorDic.Count}.");
                return true;
            }
            else
            {
                Debug.Log("DEBUG: Error creating anchor");
                return false;
            }

        }
        else
        {
            //Debug.Log("Couldn't raycast");
        }
        return false;
    }

    void Update()
    {
        // If bounding boxes are not stable, return directly without raycast
        

    }

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    IDictionary<ARAnchor, BoundingBox> anchorDic = new Dictionary<ARAnchor, BoundingBox>();

    // from PhoneARCamera
    private List<BoundingBox> boxSavedOutlines;
    private float shiftX;
    private float shiftY;
    private float scaleFactor;

    public PhoneARCamera phoneARCamera;
    public ARRaycastManager m_RaycastManager;
    public TextMesh anchorObj_mesh;
    public ARAnchorManager m_AnchorManager;

    // Raycast against planes and feature points
    //const TrackableType trackableTypes = TrackableType.Planes;//FeaturePoint;
    const TrackableType trackableTypes = TrackableType.Planes | TrackableType.FeaturePoint;
}
