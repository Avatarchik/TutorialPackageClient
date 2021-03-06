using UnityEngine;
using System.Collections;

public class LuYouCameraAttachment : MonoBehaviour {
#if UNITY_ANDROID && !(UNITY_2_6 ||UNITY_2_6_1|| UNITY_3_0 ||UNITY_3_0_0|| UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 ||UNITY_4_0_1|| UNITY_4_2||UNITY_4_3)
	void OnRenderImage(RenderTexture src, RenderTexture dest){
		Graphics.Blit(src, dest);
		LuYou.CaptureFrame(src.GetNativeTextureID());
	}
#endif
}
