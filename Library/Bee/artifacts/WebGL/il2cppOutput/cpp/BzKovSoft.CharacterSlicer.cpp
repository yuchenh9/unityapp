#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>
struct Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Transform>
struct IEqualityComparer_1_tD4E2164C5E70B4D606744749A66FC3CBE9EB8180;
// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.Joint>
struct List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.Queue`1<BzKovSoft.ObjectSlicer.SliceTry>
struct Queue_1_t08FF7DB2435CDC19AF4EC8A9ABF2A3496B417881;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Transform>[]
struct SlotU5BU5D_tFEF55D1F1BCB4F97FD11EAA15EB9CCC3E470213D;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
// BzKovSoft.ObjectSlicer.BzMeshSliceResult[]
struct BzMeshSliceResultU5BU5D_tDD57A9F855CA423849E070AE19E5219CF498FFDD;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Joint[]
struct JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// BzKovSoft.ObjectSlicer.StaticComponentManager/ColliderSliceResult[]
struct ColliderSliceResultU5BU5D_tCF8DD18E889ACB64D1FEEB1F9C825AB685F242F0;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// BzKovSoft.ObjectSlicer.BzMeshData
struct BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB;
// BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter
struct BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5;
// BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter
struct BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B;
// BzKovSoft.ObjectSlicer.BzSliceTryData
struct BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017;
// BzKovSoft.ObjectSlicer.BzSliceTryResult
struct BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2;
// BzKovSoft.ObjectSlicer.BzSliceableBase
struct BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A;
// BzKovSoft.CharacterSlicer.BzSliceableCharacterBase
struct BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// BzKovSoft.CharacterSlicer.CharacterComponentManagerFast
struct CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2;
// UnityEngine.CharacterJoint
struct CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134;
// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer
struct CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// BzKovSoft.ObjectSlicer.IBzSliceAdapter
struct IBzSliceAdapter_tE795AFBC985C534E2794D1C28D98B68EEDB4DC22;
// BzKovSoft.ObjectSlicer.IComponentManager
struct IComponentManager_tB4117161302E25F7F2C6DBFE59FACC98C53CFAA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// BzKovSoft.ObjectSlicer.SliceTry
struct SliceTry_t8EE1CB43F4399AF50E6B134A94D951EDADBDF48D;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// BzKovSoft.ObjectSlicer.StaticComponentManager
struct StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t7342B517610EE6E277FB060ED3C983CE68E0463A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_tA9EE5C77A13FDC19DB5B3340F27245C620480F65;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_tA1451D76D0A21C15B71AC8B380CC097DF71951F3;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t8D4AC99C7F2D51F3161C7E91E41E51097640CE97;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t32503D9F2F1A9E9E183779774CEFC13425BF6670;
// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B;
// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F;
// BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh
struct AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C;
// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c
struct U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E;
// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj
struct CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t80E5CC9586C1782157CDE6EA3518737643CEDDDF;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09325806A1AF4E429D32A70DF06BD3EF2B59A709;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5F387D1F39E349452AFB5580235EB5C5B4F7B8;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11;
IL2CPP_EXTERN_C String_t* _stringLiteral13F3FFBA103E9115CB9A805A48F47952B3907F84;
IL2CPP_EXTERN_C String_t* _stringLiteral14C5FBCE2E96544CD88334F086D612B8AC3D5ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral1EDDACB2A2E15FDDF14FA22D42346768E311B9E5;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral31D159E683556C06B3B3963D92483B6867EB3233;
IL2CPP_EXTERN_C String_t* _stringLiteral38AFACDBF6E04056D7FD9642DEC62C704E0110BC;
IL2CPP_EXTERN_C String_t* _stringLiteral45A08673F184915CA5FE6D7B3B2ACBDF94E230DE;
IL2CPP_EXTERN_C String_t* _stringLiteral67DFED8BE27A55FDACF1DD15B4825806E320883A;
IL2CPP_EXTERN_C String_t* _stringLiteral7725E7B12B31C3EFD2967489A6512077E2DFCDDC;
IL2CPP_EXTERN_C String_t* _stringLiteral84105173D49B35C842628E03AB273A634DDA06B0;
IL2CPP_EXTERN_C String_t* _stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56;
IL2CPP_EXTERN_C String_t* _stringLiteral88BDF3D0791A560245652E772545C49897854443;
IL2CPP_EXTERN_C String_t* _stringLiteral9769ECD6B61E89817C91AFBDBC215F3BB8E32BA4;
IL2CPP_EXTERN_C String_t* _stringLiteral99B49C8AC6F425C02CDE07D059438E49CAF20734;
IL2CPP_EXTERN_C String_t* _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4166C49C7439DBBFA713A83D8BA4CE3FFE0C5E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC;
IL2CPP_EXTERN_C String_t* _stringLiteralBBBBDA89EC0528F6EC13A6F6C534B63E3F363875;
IL2CPP_EXTERN_C String_t* _stringLiteralBE06FBE28F4C32B7353C8C05AACDDDF6491A1591;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC85B20D4B77CFC6ACE2EE3CD0DAF0EBB9AD4E6;
IL2CPP_EXTERN_C String_t* _stringLiteralC4CE6520B95CA6C28E54C3B77287BE1F2177CBD6;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C const RuntimeMethod* CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m29F4F1AEA0F99889842E545B502C5D798FD581DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CharacterComponentManagerFast_CreateJoint_m5A7619C86510E3ADB38C76B9C5DD864175ACA7D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CharacterComponentManagerFast_OnCompletePerSide_mCE293B2A4D018363552D82654B24F6A61C1BF03E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFAC2FDF1E3BE3A5913D6354085830579754062D2 
{
};

// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tFEF55D1F1BCB4F97FD11EAA15EB9CCC3E470213D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Joint>
struct List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// BzKovSoft.ObjectSlicer.BzMeshData
struct BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BzKovSoft.ObjectSlicer.BzMeshData::Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___Vertices_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BzKovSoft.ObjectSlicer.BzMeshData::Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___Normals_1;
	// System.Collections.Generic.List`1<UnityEngine.Color> BzKovSoft.ObjectSlicer.BzMeshData::Colors
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___Colors_2;
	// System.Collections.Generic.List`1<UnityEngine.Color32> BzKovSoft.ObjectSlicer.BzMeshData::Colors32
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___Colors32_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> BzKovSoft.ObjectSlicer.BzMeshData::UV
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___UV_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> BzKovSoft.ObjectSlicer.BzMeshData::UV2
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___UV2_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> BzKovSoft.ObjectSlicer.BzMeshData::UV3
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___UV3_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> BzKovSoft.ObjectSlicer.BzMeshData::UV4
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___UV4_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> BzKovSoft.ObjectSlicer.BzMeshData::Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___Tangents_8;
	// System.Collections.Generic.List`1<UnityEngine.BoneWeight> BzKovSoft.ObjectSlicer.BzMeshData::BoneWeights
	List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* ___BoneWeights_9;
	// UnityEngine.Matrix4x4[] BzKovSoft.ObjectSlicer.BzMeshData::Bindposes
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___Bindposes_10;
	// System.Int32[][] BzKovSoft.ObjectSlicer.BzMeshData::SubMeshes
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___SubMeshes_11;
	// UnityEngine.Material[] BzKovSoft.ObjectSlicer.BzMeshData::Materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___Materials_12;
};

// BzKovSoft.ObjectSlicer.BzSliceTryResult
struct BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2  : public RuntimeObject
{
	// BzKovSoft.ObjectSlicer.BzMeshSliceResult[] BzKovSoft.ObjectSlicer.BzSliceTryResult::meshItems
	BzMeshSliceResultU5BU5D_tDD57A9F855CA423849E070AE19E5219CF498FFDD* ___meshItems_0;
	// System.Boolean BzKovSoft.ObjectSlicer.BzSliceTryResult::sliced
	bool ___sliced_1;
	// System.Object BzKovSoft.ObjectSlicer.BzSliceTryResult::addData
	RuntimeObject* ___addData_2;
	// UnityEngine.GameObject BzKovSoft.ObjectSlicer.BzSliceTryResult::outObjectNeg
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___outObjectNeg_3;
	// UnityEngine.GameObject BzKovSoft.ObjectSlicer.BzSliceTryResult::outObjectPos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___outObjectPos_4;
};

// BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper
struct CenterOfMassColliderBasedHelper_tD9B5BA8D78EF6B1A36224ADD309C852AA4A343E1  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D  : public RuntimeObject
{
};

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B  : public RuntimeObject
{
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer_4;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t8D4AC99C7F2D51F3161C7E91E41E51097640CE97* ___typeMapping_5;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t80E5CC9586C1782157CDE6EA3518737643CEDDDF* ___serializerData_6;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t7342B517610EE6E277FB060ED3C983CE68E0463A* ___onUnreferencedObject_8;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_tA9EE5C77A13FDC19DB5B3340F27245C620480F65* ___onUnknownAttribute_9;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_tA1451D76D0A21C15B71AC8B380CC097DF71951F3* ___onUnknownElement_10;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t32503D9F2F1A9E9E183779774CEFC13425BF6670* ___onUnknownNode_11;
};

// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F  : public RuntimeObject
{
};

// BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh
struct AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C  : public RuntimeObject
{
	// BzKovSoft.ObjectSlicer.IBzSliceAdapter BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh::adapter
	RuntimeObject* ___adapter_0;
	// UnityEngine.Mesh BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_1;
};

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c
struct U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E  : public RuntimeObject
{
};

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.JointDrive
struct JointDrive_t02FEB3A7895F33D040010E2BE5377313FAFC3CB6 
{
	// System.Single UnityEngine.JointDrive::m_PositionSpring
	float ___m_PositionSpring_0;
	// System.Single UnityEngine.JointDrive::m_PositionDamper
	float ___m_PositionDamper_1;
	// System.Single UnityEngine.JointDrive::m_MaximumForce
	float ___m_MaximumForce_2;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.SoftJointLimit
struct SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 
{
	// System.Single UnityEngine.SoftJointLimit::m_Limit
	float ___m_Limit_0;
	// System.Single UnityEngine.SoftJointLimit::m_Bounciness
	float ___m_Bounciness_1;
	// System.Single UnityEngine.SoftJointLimit::m_ContactDistance
	float ___m_ContactDistance_2;
};

// UnityEngine.SoftJointLimitSpring
struct SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 
{
	// System.Single UnityEngine.SoftJointLimitSpring::m_Spring
	float ___m_Spring_0;
	// System.Single UnityEngine.SoftJointLimitSpring::m_Damper
	float ___m_Damper_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Xml.Serialization.XmlRootAttribute::elementName
	String_t* ___elementName_0;
	// System.Boolean System.Xml.Serialization.XmlRootAttribute::isNullable
	bool ___isNullable_1;
	// System.String System.Xml.Serialization.XmlRootAttribute::ns
	String_t* ___ns_2;
};

// System.Xml.Schema.XmlSchema
struct XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D  : public XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D
{
	// System.String System.Xml.Schema.XmlSchema::id
	String_t* ___id_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter
struct BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5  : public RuntimeObject
{
	// UnityEngine.Matrix4x4 BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter::_l2w
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____l2w_0;
	// UnityEngine.Matrix4x4 BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter::_w2l
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____w2l_1;
	// UnityEngine.Vector3[] BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter::_vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____vertices_2;
};

// BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter
struct BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B  : public RuntimeObject
{
	// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_0;
	// UnityEngine.Matrix4x4 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_w2l
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____w2l_1;
	// UnityEngine.Matrix4x4 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_l2w
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____l2w_2;
	// UnityEngine.Vector3[] BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____vertices_3;
	// UnityEngine.Matrix4x4[] BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_charToW
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____charToW_4;
	// UnityEngine.BoneWeight[] BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_boneWeights
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ____boneWeights_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// BzKovSoft.ObjectSlicer.BzSliceTryData
struct BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017  : public RuntimeObject
{
	// BzKovSoft.ObjectSlicer.IComponentManager BzKovSoft.ObjectSlicer.BzSliceTryData::componentManager
	RuntimeObject* ___componentManager_0;
	// UnityEngine.Plane BzKovSoft.ObjectSlicer.BzSliceTryData::plane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane_1;
	// System.Object BzKovSoft.ObjectSlicer.BzSliceTryData::addData
	RuntimeObject* ___addData_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// BzKovSoft.ObjectSlicer.StaticComponentManager
struct StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90  : public RuntimeObject
{
	// UnityEngine.GameObject BzKovSoft.ObjectSlicer.StaticComponentManager::_originalObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____originalObject_0;
	// UnityEngine.Plane BzKovSoft.ObjectSlicer.StaticComponentManager::_plane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ____plane_1;
	// BzKovSoft.ObjectSlicer.StaticComponentManager/ColliderSliceResult[] BzKovSoft.ObjectSlicer.StaticComponentManager::_colliderResults
	ColliderSliceResultU5BU5D_tCF8DD18E889ACB64D1FEEB1F9C825AB685F242F0* ____colliderResults_2;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>
struct Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// BzKovSoft.CharacterSlicer.CharacterComponentManagerFast
struct CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2  : public StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CharacterJoint
struct CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134  : public Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682
{
	// UnityEngine.Quaternion UnityEngine.CharacterJoint::targetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation_4;
	// UnityEngine.Vector3 UnityEngine.CharacterJoint::targetAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetAngularVelocity_5;
	// UnityEngine.JointDrive UnityEngine.CharacterJoint::rotationDrive
	JointDrive_t02FEB3A7895F33D040010E2BE5377313FAFC3CB6 ___rotationDrive_6;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// BzKovSoft.ObjectSlicer.BzSliceableBase
struct BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material BzKovSoft.ObjectSlicer.BzSliceableBase::defaultSliceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultSliceMaterial_4;
	// System.Boolean BzKovSoft.ObjectSlicer.BzSliceableBase::asynchronously
	bool ___asynchronously_5;
	// System.Boolean BzKovSoft.ObjectSlicer.BzSliceableBase::useLazyRunner
	bool ___useLazyRunner_6;
	// System.Collections.Generic.Queue`1<BzKovSoft.ObjectSlicer.SliceTry> BzKovSoft.ObjectSlicer.BzSliceableBase::_sliceTrys
	Queue_1_t08FF7DB2435CDC19AF4EC8A9ABF2A3496B417881* ____sliceTrys_7;
	// BzKovSoft.ObjectSlicer.SliceTry BzKovSoft.ObjectSlicer.BzSliceableBase::lastSuccessfulSlice
	SliceTry_t8EE1CB43F4399AF50E6B134A94D951EDADBDF48D* ___lastSuccessfulSlice_8;
};

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer
struct CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// BzKovSoft.CharacterSlicer.BzSliceableCharacterBase
struct BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2  : public BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A
{
};

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj
struct CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D  : public BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2
{
};

// <Module>

// <Module>

// System.Collections.Generic.HashSet`1<UnityEngine.Transform>

// System.Collections.Generic.HashSet`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.BoneWeight>

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>

// System.Collections.Generic.List`1<UnityEngine.Joint>
struct List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Joint>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rigidbody>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// BzKovSoft.ObjectSlicer.BzMeshData

// BzKovSoft.ObjectSlicer.BzMeshData

// BzKovSoft.ObjectSlicer.BzSliceTryResult

// BzKovSoft.ObjectSlicer.BzSliceTryResult

// BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper

// BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// System.Xml.XmlReader

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_StaticFields
{
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold_0;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration_1;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles_2;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback_3;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___serializerTypes_7;
};

// System.Xml.Serialization.XmlSerializer

// System.Xml.XmlWriter

// System.Xml.XmlWriter

// BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh

// BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c
struct U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields
{
	// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::<>9
	U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* ___U3CU3E9_0;
	// System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult> BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::<>9__2_0
	Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* ___U3CU3E9__2_0_1;
};

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c

// UnityEngine.BoneWeight

// UnityEngine.BoneWeight

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// System.Single

// System.Single

// UnityEngine.SoftJointLimit

// UnityEngine.SoftJointLimit

// UnityEngine.SoftJointLimitSpring

// UnityEngine.SoftJointLimitSpring

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Xml.Serialization.XmlRootAttribute

// System.Xml.Serialization.XmlRootAttribute

// System.Xml.Schema.XmlSchema
struct XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D_StaticFields
{
	// System.Int32 System.Xml.Schema.XmlSchema::globalIdCounter
	int32_t ___globalIdCounter_1;
};

// System.Xml.Schema.XmlSchema

// UnityEngine.Bounds

// UnityEngine.Bounds

// BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter

// BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter

// BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter

// BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Plane

// UnityEngine.Plane

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// BzKovSoft.ObjectSlicer.BzSliceTryData

// BzKovSoft.ObjectSlicer.BzSliceTryData

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Shader

// UnityEngine.Shader

// BzKovSoft.ObjectSlicer.StaticComponentManager

// BzKovSoft.ObjectSlicer.StaticComponentManager

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>

// System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>

// System.ArgumentException

// System.ArgumentException

// BzKovSoft.CharacterSlicer.CharacterComponentManagerFast

// BzKovSoft.CharacterSlicer.CharacterComponentManagerFast

// UnityEngine.Collider

// UnityEngine.Collider

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.Joint

// UnityEngine.Joint

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.CapsuleCollider

// UnityEngine.CapsuleCollider

// UnityEngine.CharacterJoint

// UnityEngine.CharacterJoint

// UnityEngine.MeshCollider

// UnityEngine.MeshCollider

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SphereCollider

// UnityEngine.SphereCollider

// BzKovSoft.ObjectSlicer.BzSliceableBase

// BzKovSoft.ObjectSlicer.BzSliceableBase

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer
struct CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_StaticFields
{
	// System.Boolean BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::_initialized
	bool ____initialized_4;
};

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer

// BzKovSoft.CharacterSlicer.BzSliceableCharacterBase

// BzKovSoft.CharacterSlicer.BzSliceableCharacterBase

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649  : public RuntimeArray
{
	ALIGN_FIELD (8) Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* m_Items[1];

	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.BoneWeight>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_gshared (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetComponent<System.Object>(UnityEngine.Transform,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CenterOfMassColliderBasedHelper_GetComponent_TisRuntimeObject_m430BF43E394AAAFC8519554EDDD1CB9FF5DD441E_gshared (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_child, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_possibleComponents, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_results, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdapterAndMesh__ctor_mD2E74C7B27349682989A56D89F135DC1644FE2FE (AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::.ctor(UnityEngine.SkinnedMeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter__ctor_m825529E621C02AF87A4C146BED56A800E5F95EBE (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___0_renderer, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter::.ctor(UnityEngine.Vector3[],UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceMeshFilterAdapter__ctor_m67F3D3E052C03BBB071C37032767DA1F3D06B4F4 (BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_vertices, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___1_renderer, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::.ctor(UnityEngine.GameObject,UnityEngine.Plane,UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast__ctor_m4B51BE1E7BD78171D135A21CD9A85A7F831B7ABB (CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___1_plane, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___2_colliders, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceTryData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceTryData__ctor_mF1226EB5DEE50D7C53CE75C4F001C52B3573BFE2 (BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceableBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableBase__ctor_m6F111C5837AB106F5983FA37B013DDE8A0E0BC78 (BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform[] UnityEngine.SkinnedMeshRenderer::get_bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* SkinnedMeshRenderer_get_bones_mEB62CD46E7CE5C0F682C29FD0E14188707F05F09 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4[] UnityEngine.Mesh::get_bindposes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Mesh_get_bindposes_mC3B3C3E380881881345B8737895C28C521F70F8D (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.BoneWeight[] UnityEngine.Mesh::get_boneWeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* Mesh_get_boneWeights_m2091E7E793A60853ACC7928BFDC1FF8F0DC4C7E9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.BoneWeight::get_weight0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.BoneWeight::get_weight1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.BoneWeight::get_weight2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.BoneWeight::get_weight3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetWorldPos(BzKovSoft.ObjectSlicer.BzMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetWorldPos_m77BC8403387F3DC82099515B86947BC8D30BCEC2 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* ___0_meshData, int32_t ___1_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<UnityEngine.BoneWeight>::get_Item(System.Int32)
inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2 (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F (*) (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F*, int32_t, const RuntimeMethod*))List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlRootAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* __this, String_t* ___0_elementName, const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Xml.Serialization.XmlRootAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0 (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, Type_t* ___0_type, XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* ___1_root, const RuntimeMethod* method) ;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8 (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_xmlReader, const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Xml.XmlWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1 (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___0_xmlWriter, RuntimeObject* ___1_o, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Collider> BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetColliders(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* CenterOfMassColliderBasedHelper_GetColliders_m46329B7AA7E954985F6E9A35085BE39663040A11 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___1_possibleColliders, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___2_possibleRigids, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider>::get_Count()
inline int32_t List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Collider>::get_Item(System.Int32)
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetColliderCenter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CenterOfMassColliderBasedHelper_GetColliderCenter_mC17168B918EC38352E25C409EA775B9DD00CA70A (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m9D4A68D102498C7DBCD91278FF5EE7EE0BF2B188 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshCollider::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetCollidersRec(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CenterOfMassColliderBasedHelper_GetCollidersRec_m2C485C2F5B629314A422B30DD6110CA61F1DFBDF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___1_colliders, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___2_possibleColliders, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___3_possibleRigids, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Collider>::Contains(T)
inline bool List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Add(T)
inline void List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetComponent<UnityEngine.Rigidbody>(UnityEngine.Transform,T[])
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m29F4F1AEA0F99889842E545B502C5D798FD581DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_child, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___1_possibleComponents, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649*, const RuntimeMethod*))CenterOfMassColliderBasedHelper_GetComponent_TisRuntimeObject_m430BF43E394AAAFC8519554EDDD1CB9FF5DD441E_gshared)(___0_child, ___1_possibleComponents, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.StaticComponentManager::.ctor(UnityEngine.GameObject,UnityEngine.Plane,UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticComponentManager__ctor_m600C60D6213DACA5F7CD06D2D7397E7B995C3DF6 (StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___1_plane, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___2_colliders, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.StaticComponentManager::RepairColliders(UnityEngine.GameObject,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.Collider>,System.Collections.Generic.List`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticComponentManager_RepairColliders_m2135B594DD71F08938808945EC9D7E826F2976B1 (StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_resultNeg, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_resultPos, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___2_collidersNeg, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___3_collidersPos, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::OnCompletePerSide(System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast_OnCompletePerSide_mCE293B2A4D018363552D82654B24F6A61C1BF03E (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___0_colliders, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_go, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::BeginSample(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline (String_t* ___0_name, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::.ctor()
inline void List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025 (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::RigidHaveColliders(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterComponentManagerFast_RigidHaveColliders_m33E8A4AB91B5D34221391684B8E712575544CF2B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_tr, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___1_colliders, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::Add(T)
inline void List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Profiling.Profiler::EndSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Joint>::.ctor()
inline void List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656 (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Joint>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* ___1_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___0_includeInactive, ___1_results, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Joint>::get_Item(System.Int32)
inline Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516 (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody>::Contains(T)
inline bool List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Joint>::set_Item(System.Int32,T)
inline void List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, int32_t ___0_index, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, int32_t, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Joint>::get_Count()
inline int32_t List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_inline (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody>::get_Item(System.Int32)
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody>::get_Count()
inline int32_t List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Transform>::.ctor()
inline void HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753 (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::IsAlreadyConnected(UnityEngine.Transform,UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Joint>,System.Collections.Generic.HashSet`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterComponentManagerFast_IsAlreadyConnected_m4F0A130A7328BFE9B5F36F0F24EF45EB0C76C122 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_from, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_to, List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* ___2_joints, HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* ___3_ocupied, const RuntimeMethod* method) ;
// UnityEngine.Joint BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::CreateJoint(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* CharacterComponentManagerFast_CreateJoint_m5A7619C86510E3ADB38C76B9C5DD864175ACA7D5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_itemA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_itemB, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Joint>::Add(T)
inline void List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_inline (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// System.Boolean BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::CalculateCenter(UnityEngine.Rigidbody,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CenterOfMassColliderBasedHelper_CalculateCenter_m0AC84269012E6EE2F77FB45CA774DB9ECDD9A9C8 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_rigidbody, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___1_possibleColliders, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___2_possibleRigids, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Transform>::Add(T)
inline bool HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801 (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Transform>::Remove(T)
inline bool HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.CharacterJoint>()
inline CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_anchor_m89447EF25E0FC6DB9D22562BAF3BDA3E6D04029C (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_autoConfigureConnectedAnchor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_autoConfigureConnectedAnchor_mF61D716174DE67CD94FF042881E9052357679E02 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_connectedAnchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedAnchor_m2A40C3C4FB583E9DBC020222A21F577C066D5D90 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedBody_mE9E631476E9D4264E8DC0D6307146F5EB64D3ED4 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SoftJointLimit::set_limit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftJointLimit_set_limit_m34B7F00528D7F5B03D2AC39E44AFD96F0EAADF1A (SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_lowTwistLimit(UnityEngine.SoftJointLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_lowTwistLimit_m8DC922DE93DAB94B329B3C672061AA9741A4C02E (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_highTwistLimit(UnityEngine.SoftJointLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_highTwistLimit_m11EFDBE8CBF92BD43F147C20F247B250CB432C32 (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_swing1Limit(UnityEngine.SoftJointLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_swing1Limit_mBA202634AF5606DA1D59B94EF3E359C7B4FD012E (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_swing2Limit(UnityEngine.SoftJointLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_swing2Limit_mBA612E2C6E50BAAAA798FAA03490150D379BC744 (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SoftJointLimitSpring::set_spring(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftJointLimitSpring_set_spring_m9A216142953ECC1CEE5080D603D18F9D1BD0A6EA (SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SoftJointLimitSpring::set_damper(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftJointLimitSpring_set_damper_mA86F8E250BA84A6DC3E84DC1A40319A39CD5CFD6 (SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_twistLimitSpring(UnityEngine.SoftJointLimitSpring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_twistLimitSpring_mF37BF3C4F77EBA9F1926FA8F07081D315A9C2031 (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_swingLimitSpring(UnityEngine.SoftJointLimitSpring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_swingLimitSpring_mBD4D7812652BE202BEB031F2E1997B70F0F87258 (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 ___0_value, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializer_Init_m53BA060D2CF5C95A59CFDF866DC34EFE89BA54F3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Mesh BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::GetMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* CharacterSlicerInitializer_GetMesh_m6274B46801C86F5645F6D6BF5814C4879F57B07E (const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_rootBone(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj>()
inline CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8AB4590574801447E5178140DF68ADE98F8F7207 (Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_inNormal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_inPoint, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceableBase::Slice(UnityEngine.Plane,System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableBase_Slice_m3F109FFAD0697B9DB5823CD7060EF3375F175B1E (BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___0_plane, Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* ___1_callBack, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_boneWeights(UnityEngine.BoneWeight[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableCharacterBase__ctor_m5A4946C42E3E557ED472C7B40785B0E1CCCB05BC (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0270A043A9E72A23703328CFC2E90A6ED413238 (U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::ValidateArguments(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_inline (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::BeginSampleImpl(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_BeginSampleImpl_m7CA0C092A61229CA7BF617E521F2DE0E2B155CEA (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_targetObject, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableCharacterBase_Awake_m31B0C977D45F6E8D5A1258540531432EA3FC617B (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC85B20D4B77CFC6ACE2EE3CD0DAF0EBB9AD4E6);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		V_0 = L_0;
		// if (animator != null && animator.updateMode != AnimatorUpdateMode.AnimatePhysics)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = V_0;
		int32_t L_4;
		L_4 = Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB(L_3, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// UnityEngine.Debug.LogWarning("Recomended to use Animator.UpdateMode = AnimatePhysics for your sliceable character");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralBEC85B20D4B77CFC6ACE2EE3CD0DAF0EBB9AD4E6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::GetAdapterAndMesh(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* BzSliceableCharacterBase_GetAdapterAndMesh_m5AA2B9044FDB0EC069E89038CFB99C286A59C893 (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_renderer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_1 = NULL;
	bool V_2 = false;
	AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* V_3 = NULL;
	AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* V_4 = NULL;
	bool V_5 = false;
	AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* V_6 = NULL;
	{
		// var skinnedRenderer = renderer as SkinnedMeshRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_renderer;
		V_0 = ((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)IsInstClass((RuntimeObject*)L_0, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var));
		// if (skinnedRenderer != null)
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// var result = new AdapterAndMesh();
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_4 = (AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C*)il2cpp_codegen_object_new(AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C_il2cpp_TypeInfo_var);
		AdapterAndMesh__ctor_mD2E74C7B27349682989A56D89F135DC1644FE2FE(L_4, NULL);
		V_3 = L_4;
		// result.mesh = skinnedRenderer.sharedMesh;
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_5 = V_3;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_6 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7;
		L_7 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_6, NULL);
		L_5->___mesh_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___mesh_1), (void*)L_7);
		// result.adapter = new BzSliceSkinnedMeshAdapter(skinnedRenderer);
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_8 = V_3;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_9 = V_0;
		BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* L_10 = (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B*)il2cpp_codegen_object_new(BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B_il2cpp_TypeInfo_var);
		BzSliceSkinnedMeshAdapter__ctor_m825529E621C02AF87A4C146BED56A800E5F95EBE(L_10, L_9, NULL);
		L_8->___adapter_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___adapter_0), (void*)L_10);
		// return result;
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_11 = V_3;
		V_4 = L_11;
		goto IL_008e;
	}

IL_0037:
	{
		// var meshRenderer = renderer as MeshRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = ___0_renderer;
		V_1 = ((MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)IsInstClass((RuntimeObject*)L_12, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var));
		// if (meshRenderer != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		// var result = new AdapterAndMesh();
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_16 = (AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C*)il2cpp_codegen_object_new(AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C_il2cpp_TypeInfo_var);
		AdapterAndMesh__ctor_mD2E74C7B27349682989A56D89F135DC1644FE2FE(L_16, NULL);
		V_6 = L_16;
		// result.mesh = meshRenderer.gameObject.GetComponent<MeshFilter>().sharedMesh;
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_17 = V_6;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_18 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_20;
		L_20 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_19, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21;
		L_21 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_20, NULL);
		L_17->___mesh_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___mesh_1), (void*)L_21);
		// result.adapter = new BzSliceMeshFilterAdapter(result.mesh.vertices, meshRenderer);
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_22 = V_6;
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_23 = V_6;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_24 = L_23->___mesh_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25;
		L_25 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_24, NULL);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_26 = V_1;
		BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5* L_27 = (BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5*)il2cpp_codegen_object_new(BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5_il2cpp_TypeInfo_var);
		BzSliceMeshFilterAdapter__ctor_m67F3D3E052C03BBB071C37032767DA1F3D06B4F4(L_27, L_25, L_26, NULL);
		L_22->___adapter_0 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___adapter_0), (void*)L_27);
		// return result;
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_28 = V_6;
		V_4 = L_28;
		goto IL_008e;
	}

IL_0089:
	{
		// return null;
		V_4 = (AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C*)NULL;
		goto IL_008e;
	}

IL_008e:
	{
		// }
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_29 = V_4;
		return L_29;
	}
}
// BzKovSoft.ObjectSlicer.BzSliceTryData BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::PrepareData(UnityEngine.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* BzSliceableCharacterBase_PrepareData_m93DC413AF38B3AA7069CBDCCA4D58CBB4DD0025F (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___0_plane, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* V_1 = NULL;
	BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* V_2 = NULL;
	{
		// var collidersArr = GetComponentsInChildren<Collider>();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_0;
		L_0 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		V_0 = L_0;
		// var componentManager = new CharacterComponentManagerFast(this.gameObject, plane, collidersArr);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_2 = ___0_plane;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3 = V_0;
		CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* L_4 = (CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2*)il2cpp_codegen_object_new(CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2_il2cpp_TypeInfo_var);
		CharacterComponentManagerFast__ctor_m4B51BE1E7BD78171D135A21CD9A85A7F831B7ABB(L_4, L_1, L_2, L_3, NULL);
		V_1 = L_4;
		// return new BzSliceTryData()
		// {
		//     componentManager = componentManager,
		//     plane = plane,
		// };
		BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* L_5 = (BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017*)il2cpp_codegen_object_new(BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017_il2cpp_TypeInfo_var);
		BzSliceTryData__ctor_mF1226EB5DEE50D7C53CE75C4F001C52B3573BFE2(L_5, NULL);
		BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* L_6 = L_5;
		CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* L_7 = V_1;
		L_6->___componentManager_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___componentManager_0), (void*)L_7);
		BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* L_8 = L_6;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_9 = ___0_plane;
		L_8->___plane_1 = L_9;
		V_2 = L_8;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* L_10 = V_2;
		return L_10;
	}
}
// System.Void BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableCharacterBase__ctor_m5A4946C42E3E557ED472C7B40785B0E1CCCB05BC (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, const RuntimeMethod* method) 
{
	{
		BzSliceableBase__ctor_m6F111C5837AB106F5983FA37B013DDE8A0E0BC78(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::.ctor(UnityEngine.SkinnedMeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter__ctor_m825529E621C02AF87A4C146BED56A800E5F95EBE (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___0_renderer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	{
		// public BzSliceSkinnedMeshAdapter(SkinnedMeshRenderer renderer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _position = renderer.gameObject.transform.position;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_0 = ___0_renderer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->____position_0 = L_3;
		// var mesh = renderer.sharedMesh;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_4 = ___0_renderer;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5;
		L_5 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_4, NULL);
		V_0 = L_5;
		// _vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7;
		L_7 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_6, NULL);
		__this->____vertices_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_3), (void*)L_7);
		// var bones = renderer.bones;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_8 = ___0_renderer;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9;
		L_9 = SkinnedMeshRenderer_get_bones_mEB62CD46E7CE5C0F682C29FD0E14188707F05F09(L_8, NULL);
		V_1 = L_9;
		// var bindposes = mesh.bindposes;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_11;
		L_11 = Mesh_get_bindposes_mC3B3C3E380881881345B8737895C28C521F70F8D(L_10, NULL);
		V_2 = L_11;
		// _charToW = new Matrix4x4[bones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_13 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)));
		__this->____charToW_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charToW_4), (void*)L_13);
		// _w2l = renderer.gameObject.transform.worldToLocalMatrix;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_14 = ___0_renderer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17;
		L_17 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_16, NULL);
		__this->____w2l_1 = L_17;
		// _l2w = renderer.gameObject.transform.localToWorldMatrix;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_18 = ___0_renderer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21;
		L_21 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_20, NULL);
		__this->____l2w_2 = L_21;
		// for (int i = 0; i < bones.Length; i++)
		V_3 = 0;
		goto IL_00bb;
	}

IL_007d:
	{
		// var tr = bones[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_22 = V_1;
		int32_t L_23 = V_3;
		int32_t L_24 = L_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_4 = L_25;
		// if (tr == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_27;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		// continue;
		goto IL_00b7;
	}

IL_0093:
	{
		// var toW = tr.localToWorldMatrix * bindposes[i];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30;
		L_30 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_29, NULL);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_31 = V_2;
		int32_t L_32 = V_3;
		int32_t L_33 = L_32;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_35;
		L_35 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_30, L_34, NULL);
		V_5 = L_35;
		// _charToW[i] = toW;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_36 = __this->____charToW_4;
		int32_t L_37 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_38 = V_5;
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_38);
	}

IL_00b7:
	{
		// for (int i = 0; i < bones.Length; i++)
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00bb:
	{
		// for (int i = 0; i < bones.Length; i++)
		int32_t L_40 = V_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_41 = V_1;
		V_7 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))? 1 : 0);
		bool L_42 = V_7;
		if (L_42)
		{
			goto IL_007d;
		}
	}
	{
		// _boneWeights = mesh.boneWeights;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_43 = V_0;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_44;
		L_44 = Mesh_get_boneWeights_m2091E7E793A60853ACC7928BFDC1FF8F0DC4C7E9(L_43, NULL);
		__this->____boneWeights_5 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boneWeights_5), (void*)L_44);
		// }
		return;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetWorldPos(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetWorldPos_mEBE35047B6EFD9E8C592C56963AA2EA00532A530 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// Vector3 position = _vertices[index];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->____vertices_3;
		int32_t L_1 = ___0_index;
		int32_t L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// var boneWeight = _boneWeights[index];
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_4 = __this->____boneWeights_5;
		int32_t L_5 = ___0_index;
		int32_t L_6 = L_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// Vector3 newPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_8;
		// if (boneWeight.weight0 > 0f)
		float L_9;
		L_9 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9((&V_1), NULL);
		V_3 = (bool)((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex0].MultiplyPoint3x4(position) * boneWeight.weight0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_12 = __this->____charToW_4;
		int32_t L_13;
		L_13 = BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13))), L_14, NULL);
		float L_16;
		L_16 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_17, NULL);
		V_2 = L_18;
	}

IL_005e:
	{
		// if (boneWeight.weight1 > 0f)
		float L_19;
		L_19 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504((&V_1), NULL);
		V_4 = (bool)((((float)L_19) > ((float)(0.0f)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex1].MultiplyPoint3x4(position) * boneWeight.weight1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_22 = __this->____charToW_4;
		int32_t L_23;
		L_23 = BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), L_24, NULL);
		float L_26;
		L_26 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_27, NULL);
		V_2 = L_28;
	}

IL_009d:
	{
		// if (boneWeight.weight2 > 0f)
		float L_29;
		L_29 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E((&V_1), NULL);
		V_5 = (bool)((((float)L_29) > ((float)(0.0f)))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00dc;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex2].MultiplyPoint3x4(position) * boneWeight.weight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_32 = __this->____charToW_4;
		int32_t L_33;
		L_33 = BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_32)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_33))), L_34, NULL);
		float L_36;
		L_36 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_37, NULL);
		V_2 = L_38;
	}

IL_00dc:
	{
		// if (boneWeight.weight3 > 0f)
		float L_39;
		L_39 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1((&V_1), NULL);
		V_6 = (bool)((((float)L_39) > ((float)(0.0f)))? 1 : 0);
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_011b;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex3].MultiplyPoint3x4(position) * boneWeight.weight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_42 = __this->____charToW_4;
		int32_t L_43;
		L_43 = BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_42)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_43))), L_44, NULL);
		float L_46;
		L_46 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_45, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_47, NULL);
		V_2 = L_48;
	}

IL_011b:
	{
		// return newPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_2;
		V_7 = L_49;
		goto IL_0120;
	}

IL_0120:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_7;
		return L_50;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetLocalPos(BzKovSoft.ObjectSlicer.BzMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetLocalPos_m6F4417F57D3F89755D0FAE60FADC5D0AAA748EDB (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* ___0_meshData, int32_t ___1_index, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var v = GetWorldPos(meshData, index);
		BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* L_0 = ___0_meshData;
		int32_t L_1 = ___1_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = BzSliceSkinnedMeshAdapter_GetWorldPos_m77BC8403387F3DC82099515B86947BC8D30BCEC2(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// return _w2l.MultiplyPoint3x4(v);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = (&__this->____w2l_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_3, L_4, NULL);
		V_1 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetWorldPos(BzKovSoft.ObjectSlicer.BzMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetWorldPos_m77BC8403387F3DC82099515B86947BC8D30BCEC2 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* ___0_meshData, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// Vector3 position = meshData.Vertices[index];
		BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* L_0 = ___0_meshData;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = L_0->___Vertices_0;
		int32_t L_2 = ___1_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_1, L_2, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_0 = L_3;
		// var boneWeight = meshData.BoneWeights[index];
		BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* L_4 = ___0_meshData;
		List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* L_5 = L_4->___BoneWeights_9;
		int32_t L_6 = ___1_index;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_7;
		L_7 = List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2(L_5, L_6, List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_RuntimeMethod_var);
		V_1 = L_7;
		// Vector3 newPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_8;
		// if (boneWeight.weight0 > 0f)
		float L_9;
		L_9 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9((&V_1), NULL);
		V_3 = (bool)((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex0].MultiplyPoint3x4(position) * boneWeight.weight0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_12 = __this->____charToW_4;
		int32_t L_13;
		L_13 = BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13))), L_14, NULL);
		float L_16;
		L_16 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_17, NULL);
		V_2 = L_18;
	}

IL_005e:
	{
		// if (boneWeight.weight1 > 0f)
		float L_19;
		L_19 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504((&V_1), NULL);
		V_4 = (bool)((((float)L_19) > ((float)(0.0f)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex1].MultiplyPoint3x4(position) * boneWeight.weight1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_22 = __this->____charToW_4;
		int32_t L_23;
		L_23 = BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), L_24, NULL);
		float L_26;
		L_26 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_27, NULL);
		V_2 = L_28;
	}

IL_009d:
	{
		// if (boneWeight.weight2 > 0f)
		float L_29;
		L_29 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E((&V_1), NULL);
		V_5 = (bool)((((float)L_29) > ((float)(0.0f)))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00dc;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex2].MultiplyPoint3x4(position) * boneWeight.weight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_32 = __this->____charToW_4;
		int32_t L_33;
		L_33 = BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_32)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_33))), L_34, NULL);
		float L_36;
		L_36 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_37, NULL);
		V_2 = L_38;
	}

IL_00dc:
	{
		// if (boneWeight.weight3 > 0f)
		float L_39;
		L_39 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1((&V_1), NULL);
		V_6 = (bool)((((float)L_39) > ((float)(0.0f)))? 1 : 0);
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_011b;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex3].MultiplyPoint3x4(position) * boneWeight.weight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_42 = __this->____charToW_4;
		int32_t L_43;
		L_43 = BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_42)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_43))), L_44, NULL);
		float L_46;
		L_46 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_45, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_47, NULL);
		V_2 = L_48;
	}

IL_011b:
	{
		// return newPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_2;
		V_7 = L_49;
		goto IL_0120;
	}

IL_0120:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_7;
		return L_50;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_InverseTransformDirection_m16CE7F52A904C91067DDEE73BD5491C97AAD6ED1 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _w2l.MultiplyPoint3x4(p + _l2w.MultiplyPoint3x4(Vector3.zero));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = (&__this->____w2l_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_p;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = (&__this->____l2w_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_0, L_5, NULL);
		V_0 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
// System.Boolean BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::Check(BzKovSoft.ObjectSlicer.BzMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BzSliceSkinnedMeshAdapter_Check_mB9A1C369927E4B43991470D3CFA3CF8331D9C233 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* ___0_meshData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::RebuildMesh(UnityEngine.Mesh,UnityEngine.Material[],UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter_RebuildMesh_m4FC8E6B0204BB254C9E7E15AEF3A83F511E9F4AC (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___1_materials, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___2_meshRenderer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((SkinnedMeshRenderer)meshRenderer).sharedMesh = mesh;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___2_meshRenderer;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = ___0_mesh;
		SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)CastclassClass((RuntimeObject*)L_0, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var)), L_1, NULL);
		// meshRenderer.sharedMaterials = materials;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = ___2_meshRenderer;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = ___1_materials;
		Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2(L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetObjectCenterInWorldSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetObjectCenterInWorldSpace_mE270AF5103CEB39A9AC2A05E6BA185EC444D794F (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____position_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Xml.Schema.XmlSchema BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetSchema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* BzSliceSkinnedMeshAdapter_GetSchema_m51DD2FC9A3B9207640DE0A96B306D6C530FECD2B (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, const RuntimeMethod* method) 
{
	XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* V_0 = NULL;
	{
		// return null;
		V_0 = (XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* L_0 = V_0;
		return L_0;
	}
}
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::ReadXml(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter_ReadXml_mDF6ADB806A8772DDE9A3FA835E9AE05CF1CF9F9D (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BDF3D0791A560245652E772545C49897854443);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC);
		s_Il2CppMethodInitialized = true;
	}
	XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* V_0 = NULL;
	{
		// reader.ReadToDescendant("position");
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_0 = ___0_reader;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, String_t* >::Invoke(38 /* System.Boolean System.Xml.XmlReader::ReadToDescendant(System.String) */, L_0, _stringLiteral88BDF3D0791A560245652E772545C49897854443);
		// var serializer = new XmlSerializer(typeof(Vector3), new XmlRootAttribute("position"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_4 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_4, _stringLiteral88BDF3D0791A560245652E772545C49897854443, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_5 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_5, L_3, L_4, NULL);
		V_0 = L_5;
		// _position = (Vector3)serializer.Deserialize(reader);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_6 = V_0;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_7 = ___0_reader;
		RuntimeObject* L_8;
		L_8 = XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8(L_6, L_7, NULL);
		__this->____position_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_8, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// serializer = new XmlSerializer(typeof(Vector3[]), new XmlRootAttribute("vertices"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_11 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_11, _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_12 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_12, L_10, L_11, NULL);
		V_0 = L_12;
		// _vertices = (Vector3[])serializer.Deserialize(reader);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_13 = V_0;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_14 = ___0_reader;
		RuntimeObject* L_15;
		L_15 = XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8(L_13, L_14, NULL);
		__this->____vertices_3 = ((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)Castclass((RuntimeObject*)L_15, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_3), (void*)((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)Castclass((RuntimeObject*)L_15, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var)));
		// serializer = new XmlSerializer(typeof(Matrix4x4[]), new XmlRootAttribute("charToW"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_18 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_18, _stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_19 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_19, L_17, L_18, NULL);
		V_0 = L_19;
		// _charToW = (Matrix4x4[])serializer.Deserialize(reader);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_20 = V_0;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_21 = ___0_reader;
		RuntimeObject* L_22;
		L_22 = XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8(L_20, L_21, NULL);
		__this->____charToW_4 = ((Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)Castclass((RuntimeObject*)L_22, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charToW_4), (void*)((Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)Castclass((RuntimeObject*)L_22, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var)));
		// serializer = new XmlSerializer(typeof(BoneWeight[]), new XmlRootAttribute("boneWeights"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_25 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_25, _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_26 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_26, L_24, L_25, NULL);
		V_0 = L_26;
		// _boneWeights = (BoneWeight[])serializer.Deserialize(reader);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_27 = V_0;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_28 = ___0_reader;
		RuntimeObject* L_29;
		L_29 = XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8(L_27, L_28, NULL);
		__this->____boneWeights_5 = ((BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)Castclass((RuntimeObject*)L_29, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boneWeights_5), (void*)((BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)Castclass((RuntimeObject*)L_29, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::WriteXml(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter_WriteXml_m441C415938F142B6D46C9BBE5EDB724BBAB3A3AD (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___0_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BDF3D0791A560245652E772545C49897854443);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC);
		s_Il2CppMethodInitialized = true;
	}
	XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* V_0 = NULL;
	{
		// var serializer = new XmlSerializer(typeof(Vector3), new XmlRootAttribute("position"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_2 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_2, _stringLiteral88BDF3D0791A560245652E772545C49897854443, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_3 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_3, L_1, L_2, NULL);
		V_0 = L_3;
		// serializer.Serialize(writer, _position);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_4 = V_0;
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_5 = ___0_writer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_7);
		XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1(L_4, L_5, L_8, NULL);
		// serializer = new XmlSerializer(typeof(Vector3[]), new XmlRootAttribute("vertices"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_11 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_11, _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_12 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_12, L_10, L_11, NULL);
		V_0 = L_12;
		// serializer.Serialize(writer, _vertices);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_13 = V_0;
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_14 = ___0_writer;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = __this->____vertices_3;
		XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1(L_13, L_14, (RuntimeObject*)L_15, NULL);
		// serializer = new XmlSerializer(typeof(Matrix4x4[]), new XmlRootAttribute("charToW"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_18 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_18, _stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_19 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_19, L_17, L_18, NULL);
		V_0 = L_19;
		// serializer.Serialize(writer, _charToW);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_20 = V_0;
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_21 = ___0_writer;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_22 = __this->____charToW_4;
		XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1(L_20, L_21, (RuntimeObject*)L_22, NULL);
		// serializer = new XmlSerializer(typeof(BoneWeight[]), new XmlRootAttribute("boneWeights"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_25 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_25, _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_26 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_26, L_24, L_25, NULL);
		V_0 = L_26;
		// serializer.Serialize(writer, _boneWeights);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_27 = V_0;
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_28 = ___0_writer;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_29 = __this->____boneWeights_5;
		XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1(L_27, L_28, (RuntimeObject*)L_29, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::CalculateCenter(UnityEngine.Rigidbody,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CenterOfMassColliderBasedHelper_CalculateCenter_m0AC84269012E6EE2F77FB45CA774DB9ECDD9A9C8 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_rigidbody, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___1_possibleColliders, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___2_possibleRigids, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	{
		// var colliders = GetColliders(rigidbody.transform, possibleColliders, possibleRigids);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = ___0_rigidbody;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_2 = ___1_possibleColliders;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_3 = ___2_possibleRigids;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_4;
		L_4 = CenterOfMassColliderBasedHelper_GetColliders_m46329B7AA7E954985F6E9A35085BE39663040A11(L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// if (colliders.Count == 0)
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_5 = V_0;
		int32_t L_6;
		L_6 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_5, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// rigidbody.mass = 0.001f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = ___0_rigidbody;
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_8, (0.00100000005f), NULL);
		// return false;
		V_4 = (bool)0;
		goto IL_00b8;
	}

IL_0031:
	{
		// Vector3 origin = rigidbody.transform.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = ___0_rigidbody;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		V_1 = L_11;
		// Vector3 v = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_12;
		// for (int i = 0; i < colliders.Count; i++)
		V_5 = 0;
		goto IL_0082;
	}

IL_0048:
	{
		// var collider = colliders[i];
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_13 = V_0;
		int32_t L_14 = V_5;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15;
		L_15 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_13, L_14, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		V_6 = L_15;
		// Vector3 center = GetColliderCenter(collider);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = CenterOfMassColliderBasedHelper_GetColliderCenter_mC17168B918EC38352E25C409EA775B9DD00CA70A(L_16, NULL);
		V_7 = L_17;
		// center = collider.transform.TransformPoint(center) - origin;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18 = V_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_22, NULL);
		V_7 = L_23;
		// v += center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_25, NULL);
		V_2 = L_26;
		// for (int i = 0; i < colliders.Count; i++)
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0082:
	{
		// for (int i = 0; i < colliders.Count; i++)
		int32_t L_28 = V_5;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_29 = V_0;
		int32_t L_30;
		L_30 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_29, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_8;
		if (L_31)
		{
			goto IL_0048;
		}
	}
	{
		// v /= colliders.Count;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_2;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_33 = V_0;
		int32_t L_34;
		L_34 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_33, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_32, ((float)L_34), NULL);
		V_2 = L_35;
		// rigidbody.centerOfMass = rigidbody.transform.InverseTransformDirection(v);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_36 = ___0_rigidbody;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_37 = ___0_rigidbody;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_38, L_39, NULL);
		Rigidbody_set_centerOfMass_m9D4A68D102498C7DBCD91278FF5EE7EE0BF2B188(L_36, L_40, NULL);
		// return true;
		V_4 = (bool)1;
		goto IL_00b8;
	}

IL_00b8:
	{
		// }
		bool L_41 = V_4;
		return L_41;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetColliderCenter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CenterOfMassColliderBasedHelper_GetColliderCenter_mC17168B918EC38352E25C409EA775B9DD00CA70A (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84105173D49B35C842628E03AB273A634DDA06B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBBBDA89EC0528F6EC13A6F6C534B63E3F363875);
		s_Il2CppMethodInitialized = true;
	}
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* V_0 = NULL;
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* V_1 = NULL;
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* V_2 = NULL;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_3 = NULL;
	bool V_4 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// BoxCollider bCldr = collider as BoxCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_collider;
		V_0 = ((BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)IsInstClass((RuntimeObject*)L_0, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var));
		// SphereCollider sCldr = collider as SphereCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___0_collider;
		V_1 = ((SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275*)IsInstClass((RuntimeObject*)L_1, SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var));
		// CapsuleCollider cCldr = collider as CapsuleCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_collider;
		V_2 = ((CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808*)IsInstClass((RuntimeObject*)L_2, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var));
		// MeshCollider mCldr = collider as MeshCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_collider;
		V_3 = ((MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*)IsInstClass((RuntimeObject*)L_3, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var));
		// if (!object.ReferenceEquals(bCldr, null))
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_4 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// return bCldr.center;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7(L_6, NULL);
		V_5 = L_7;
		goto IL_00a8;
	}

IL_0032:
	{
		// if (!object.ReferenceEquals(sCldr, null))
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_8 = V_1;
		V_6 = (bool)((!(((RuntimeObject*)(SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// return sCldr.center;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E(L_10, NULL);
		V_5 = L_11;
		goto IL_00a8;
	}

IL_0047:
	{
		// if (!object.ReferenceEquals(cCldr, null))
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_12 = V_2;
		V_7 = (bool)((!(((RuntimeObject*)(CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// return cCldr.center;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_14, NULL);
		V_5 = L_15;
		goto IL_00a8;
	}

IL_005c:
	{
		// if (!object.ReferenceEquals(mCldr, null))
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_16 = V_3;
		V_8 = (bool)((!(((RuntimeObject*)(MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		// return mCldr.sharedMesh.bounds.center;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_18 = V_3;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_19;
		L_19 = MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E(L_18, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_20;
		L_20 = Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100(L_19, NULL);
		V_9 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_9), NULL);
		V_5 = L_21;
		goto IL_00a8;
	}

IL_007f:
	{
		// UnityEngine.Debug.LogError("Collider type '" + collider.GetType().Name + "' not supported");
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_22 = ___0_collider;
		Type_t* L_23;
		L_23 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_22, NULL);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral84105173D49B35C842628E03AB273A634DDA06B0, L_24, _stringLiteralBBBBDA89EC0528F6EC13A6F6C534B63E3F363875, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_25, NULL);
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_5 = L_26;
		goto IL_00a8;
	}

IL_00a8:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_5;
		return L_27;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Collider> BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetColliders(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* CenterOfMassColliderBasedHelper_GetColliders_m46329B7AA7E954985F6E9A35085BE39663040A11 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___1_possibleColliders, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___2_possibleRigids, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* V_0 = NULL;
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* V_1 = NULL;
	{
		// List<Collider> colliders = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_0, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		V_0 = L_0;
		// GetCollidersRec(transform, colliders, possibleColliders, possibleRigids);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_transform;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_2 = V_0;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_3 = ___1_possibleColliders;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_4 = ___2_possibleRigids;
		CenterOfMassColliderBasedHelper_GetCollidersRec_m2C485C2F5B629314A422B30DD6110CA61F1DFBDF(L_1, L_2, L_3, L_4, NULL);
		// return colliders;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_5 = V_0;
		V_1 = L_5;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_6 = V_1;
		return L_6;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetCollidersRec(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CenterOfMassColliderBasedHelper_GetCollidersRec_m2C485C2F5B629314A422B30DD6110CA61F1DFBDF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___1_colliders, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___2_possibleColliders, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___3_possibleRigids, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m29F4F1AEA0F99889842E545B502C5D798FD581DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	int32_t V_1 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		// var currentColliders = transform.GetComponents<Collider>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1;
		L_1 = Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C(L_0, Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = 0; i < currentColliders.Length; i++)
		V_1 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		// var cldr = currentColliders[i];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (possibleColliders.Contains(cldr))
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_6 = ___2_possibleColliders;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = V_2;
		bool L_8;
		L_8 = List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40(L_6, L_7, List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0026;
		}
	}
	{
		// colliders.Add(cldr);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_10 = ___1_colliders;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = V_2;
		List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline(L_10, L_11, List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
	}

IL_0026:
	{
		// for (int i = 0; i < currentColliders.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < currentColliders.Length; i++)
		int32_t L_13 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_14 = V_0;
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))? 1 : 0);
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_000c;
		}
	}
	{
		// for (int i = 0; i < transform.childCount; i++)
		V_5 = 0;
		goto IL_0070;
	}

IL_003c:
	{
		// var child = transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___0_transform;
		int32_t L_17 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_16, L_17, NULL);
		V_6 = L_18;
		// if (GetComponent<Rigidbody>(child, possibleRigids) != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_6;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_20 = ___3_possibleRigids;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21;
		L_21 = CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m29F4F1AEA0F99889842E545B502C5D798FD581DF(L_19, L_20, CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m29F4F1AEA0F99889842E545B502C5D798FD581DF_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_22;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_005e;
		}
	}
	{
		// continue;
		goto IL_006a;
	}

IL_005e:
	{
		// GetCollidersRec(child, colliders, possibleColliders, possibleRigids);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_6;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_25 = ___1_colliders;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_26 = ___2_possibleColliders;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_27 = ___3_possibleRigids;
		CenterOfMassColliderBasedHelper_GetCollidersRec_m2C485C2F5B629314A422B30DD6110CA61F1DFBDF(L_24, L_25, L_26, L_27, NULL);
	}

IL_006a:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0070:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_29 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ___0_transform;
		int32_t L_31;
		L_31 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_30, NULL);
		V_8 = (bool)((((int32_t)L_29) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_8;
		if (L_32)
		{
			goto IL_003c;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::.ctor(UnityEngine.GameObject,UnityEngine.Plane,UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast__ctor_m4B51BE1E7BD78171D135A21CD9A85A7F831B7ABB (CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___1_plane, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___2_colliders, const RuntimeMethod* method) 
{
	{
		// : base(go, plane, colliders)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_1 = ___1_plane;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = ___2_colliders;
		StaticComponentManager__ctor_m600C60D6213DACA5F7CD06D2D7397E7B995C3DF6(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::OnSlicedMainThread(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Renderer[],UnityEngine.Renderer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast_OnSlicedMainThread_m19352783F8D81218F048CEF22A09DF196EA051C7 (CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_resultObjNeg, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_resultObjPos, RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___2_renderersNeg, RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___3_renderersPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* V_0 = NULL;
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* V_1 = NULL;
	{
		// var cldrsL = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_0, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		V_0 = L_0;
		// var cldrsR = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_1 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_1, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		V_1 = L_1;
		// RepairColliders(resultObjNeg, resultObjPos, cldrsL, cldrsR);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_resultObjNeg;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___1_resultObjPos;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_4 = V_0;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_5 = V_1;
		StaticComponentManager_RepairColliders_m2135B594DD71F08938808945EC9D7E826F2976B1(__this, L_2, L_3, L_4, L_5, NULL);
		// OnCompletePerSide(cldrsL, resultObjNeg);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_6 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___0_resultObjNeg;
		CharacterComponentManagerFast_OnCompletePerSide_mCE293B2A4D018363552D82654B24F6A61C1BF03E(L_6, L_7, NULL);
		// OnCompletePerSide(cldrsR, resultObjPos);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___1_resultObjPos;
		CharacterComponentManagerFast_OnCompletePerSide_mCE293B2A4D018363552D82654B24F6A61C1BF03E(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::OnCompletePerSide(System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast_OnCompletePerSide_mCE293B2A4D018363552D82654B24F6A61C1BF03E (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___0_colliders, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_go, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09325806A1AF4E429D32A70DF06BD3EF2B59A709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5F387D1F39E349452AFB5580235EB5C5B4F7B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14C5FBCE2E96544CD88334F086D612B8AC3D5ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38AFACDBF6E04056D7FD9642DEC62C704E0110BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45A08673F184915CA5FE6D7B3B2ACBDF94E230DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67DFED8BE27A55FDACF1DD15B4825806E320883A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9769ECD6B61E89817C91AFBDBC215F3BB8E32BA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B49C8AC6F425C02CDE07D059438E49CAF20734);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE06FBE28F4C32B7353C8C05AACDDDF6491A1591);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4CE6520B95CA6C28E54C3B77287BE1F2177CBD6);
		s_Il2CppMethodInitialized = true;
	}
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* V_0 = NULL;
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* V_1 = NULL;
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* V_2 = NULL;
	List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_7 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_8 = NULL;
	int32_t V_9 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* V_15 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_16 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	int32_t V_25 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_26 = NULL;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	int32_t V_31 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_32 = NULL;
	Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* V_33 = NULL;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_38 = NULL;
	bool V_39 = false;
	int32_t V_40 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_41 = NULL;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_47 = NULL;
	bool V_48 = false;
	bool V_49 = false;
	int32_t V_50 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_51 = NULL;
	bool V_52 = false;
	bool V_53 = false;
	int32_t V_54 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_55 = NULL;
	bool V_56 = false;
	bool V_57 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// Profiler.BeginSample("OnCompletePerSide");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral67DFED8BE27A55FDACF1DD15B4825806E320883A, NULL);
		// Rigidbody[] rigids = go.GetComponentsInChildren<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___1_go;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F(L_0, GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var);
		V_0 = L_1;
		// List<Rigidbody> rigidsInside = new List<Rigidbody>();
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_2 = (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*)il2cpp_codegen_object_new(List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025(L_2, List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		V_1 = L_2;
		// Profiler.BeginSample("prepare rigidsInside");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral38AFACDBF6E04056D7FD9642DEC62C704E0110BC, NULL);
		// for (int i = 0; i < rigids.Length; i++)
		V_9 = 0;
		goto IL_0059;
	}

IL_0029:
	{
		// var rigid = rigids[i];
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_3 = V_0;
		int32_t L_4 = V_9;
		int32_t L_5 = L_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_10 = L_6;
		// bool haveColliders = RigidHaveColliders(rigid.transform, colliders);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = V_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_9 = ___0_colliders;
		bool L_10;
		L_10 = CharacterComponentManagerFast_RigidHaveColliders_m33E8A4AB91B5D34221391684B8E712575544CF2B(L_8, L_9, NULL);
		V_11 = L_10;
		// if (haveColliders)
		bool L_11 = V_11;
		V_12 = L_11;
		bool L_12 = V_12;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// rigidsInside.Add(rigid);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_13 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14 = V_10;
		List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline(L_13, L_14, List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
	}

IL_0052:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_15 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0059:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_16 = V_9;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_17 = V_0;
		V_13 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0);
		bool L_18 = V_13;
		if (L_18)
		{
			goto IL_0029;
		}
	}
	{
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// Profiler.BeginSample("remove joints");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral09325806A1AF4E429D32A70DF06BD3EF2B59A709, NULL);
		// var freeEnds = new List<Rigidbody>();
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_19 = (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*)il2cpp_codegen_object_new(List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025(L_19, List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		V_2 = L_19;
		// List<Joint> joints = new List<Joint>();
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_20 = (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*)il2cpp_codegen_object_new(List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E_il2cpp_TypeInfo_var);
		List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656(L_20, List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656_RuntimeMethod_var);
		V_3 = L_20;
		// go.GetComponentsInChildren<Joint>(false, joints);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ___1_go;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_22 = V_3;
		GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573(L_21, (bool)0, L_22, GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573_RuntimeMethod_var);
		// for (int i = 0; i < joints.Count; i++)
		V_14 = 0;
		goto IL_0155;
	}

IL_0094:
	{
		// var joint = joints[i];
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_23 = V_3;
		int32_t L_24 = V_14;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_25;
		L_25 = List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516(L_23, L_24, List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var);
		V_15 = L_25;
		// if (joint.connectedBody == null)
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_26 = V_15;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27;
		L_27 = Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_20 = L_28;
		bool L_29 = V_20;
		if (!L_29)
		{
			goto IL_00b8;
		}
	}
	{
		// continue;
		goto IL_014f;
	}

IL_00b8:
	{
		// var rigidFrom = joint.GetComponent<Rigidbody>();
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_30 = V_15;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_31;
		L_31 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_30, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_16 = L_31;
		// var rigidTo = joint.connectedBody.GetComponent<Rigidbody>();
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_32 = V_15;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33;
		L_33 = Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59(L_32, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34;
		L_34 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_33, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_17 = L_34;
		// var insideFrom = rigidsInside.Contains(rigidFrom);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_35 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_36 = V_16;
		bool L_37;
		L_37 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_35, L_36, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		V_18 = L_37;
		// var insideTo = rigidsInside.Contains(rigidTo);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_38 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_39 = V_17;
		bool L_40;
		L_40 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_38, L_39, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		V_19 = L_40;
		// if (!insideFrom | !insideTo)
		bool L_41 = V_18;
		bool L_42 = V_19;
		V_21 = (bool)((int32_t)(((((int32_t)L_41) == ((int32_t)0))? 1 : 0)|((((int32_t)L_42) == ((int32_t)0))? 1 : 0)));
		bool L_43 = V_21;
		if (!L_43)
		{
			goto IL_014e;
		}
	}
	{
		// if (insideFrom && !freeEnds.Contains(rigidFrom))
		bool L_44 = V_18;
		if (!L_44)
		{
			goto IL_0106;
		}
	}
	{
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_45 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = V_16;
		bool L_47;
		L_47 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_45, L_46, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		G_B12_0 = ((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		goto IL_0107;
	}

IL_0106:
	{
		G_B12_0 = 0;
	}

IL_0107:
	{
		V_22 = (bool)G_B12_0;
		bool L_48 = V_22;
		if (!L_48)
		{
			goto IL_0118;
		}
	}
	{
		// freeEnds.Add(rigidFrom);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_49 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_50 = V_16;
		List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline(L_49, L_50, List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
	}

IL_0118:
	{
		// if (insideTo && !freeEnds.Contains(rigidTo))
		bool L_51 = V_19;
		if (!L_51)
		{
			goto IL_0129;
		}
	}
	{
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_52 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_53 = V_17;
		bool L_54;
		L_54 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_52, L_53, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		G_B17_0 = ((((int32_t)L_54) == ((int32_t)0))? 1 : 0);
		goto IL_012a;
	}

IL_0129:
	{
		G_B17_0 = 0;
	}

IL_012a:
	{
		V_23 = (bool)G_B17_0;
		bool L_55 = V_23;
		if (!L_55)
		{
			goto IL_013b;
		}
	}
	{
		// freeEnds.Add(rigidTo);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_56 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_57 = V_17;
		List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline(L_56, L_57, List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
	}

IL_013b:
	{
		// UnityEngine.Object.Destroy(joint);
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_58 = V_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_58, NULL);
		// joints[i] = null; // mark as deleted
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_59 = V_3;
		int32_t L_60 = V_14;
		List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA(L_59, L_60, (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682*)NULL, List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA_RuntimeMethod_var);
	}

IL_014e:
	{
	}

IL_014f:
	{
		// for (int i = 0; i < joints.Count; i++)
		int32_t L_61 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0155:
	{
		// for (int i = 0; i < joints.Count; i++)
		int32_t L_62 = V_14;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_63 = V_3;
		int32_t L_64;
		L_64 = List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_inline(L_63, List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var);
		V_24 = (bool)((((int32_t)L_62) < ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_24;
		if (L_65)
		{
			goto IL_0094;
		}
	}
	{
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// Profiler.BeginSample("join parts");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral14C5FBCE2E96544CD88334F086D612B8AC3D5ED3, NULL);
		// Profiler.BeginSample("find main (central) rigid");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral45A08673F184915CA5FE6D7B3B2ACBDF94E230DE, NULL);
		// int rigidIndex = 0;
		V_4 = 0;
		// int subRigidCount = 0;
		V_5 = 0;
		// for (int i = 0; i < freeEnds.Count; i++)
		V_25 = 0;
		goto IL_01c2;
	}

IL_018f:
	{
		// var part = freeEnds[i];
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_66 = V_2;
		int32_t L_67 = V_25;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_68;
		L_68 = List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E(L_66, L_67, List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		V_26 = L_68;
		// int count = part.GetComponentsInChildren<Rigidbody>().Length;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_69 = V_26;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_70;
		L_70 = Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391(L_69, Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		V_27 = ((int32_t)(((RuntimeArray*)L_70)->max_length));
		// if (count > subRigidCount)
		int32_t L_71 = V_27;
		int32_t L_72 = V_5;
		V_28 = (bool)((((int32_t)L_71) > ((int32_t)L_72))? 1 : 0);
		bool L_73 = V_28;
		if (!L_73)
		{
			goto IL_01bb;
		}
	}
	{
		// subRigidCount = count;
		int32_t L_74 = V_27;
		V_5 = L_74;
		// rigidIndex = i;
		int32_t L_75 = V_25;
		V_4 = L_75;
	}

IL_01bb:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_76 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c2:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_77 = V_25;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_78 = V_2;
		int32_t L_79;
		L_79 = List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline(L_78, List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		V_29 = (bool)((((int32_t)L_77) < ((int32_t)L_79))? 1 : 0);
		bool L_80 = V_29;
		if (L_80)
		{
			goto IL_018f;
		}
	}
	{
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// Profiler.BeginSample("connect");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11, NULL);
		// Transform main = null;
		V_6 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// if (freeEnds.Count > 0)
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_81 = V_2;
		int32_t L_82;
		L_82 = List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline(L_81, List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		V_30 = (bool)((((int32_t)L_82) > ((int32_t)0))? 1 : 0);
		bool L_83 = V_30;
		if (!L_83)
		{
			goto IL_0287;
		}
	}
	{
		// main = freeEnds[rigidIndex].transform;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_84 = V_2;
		int32_t L_85 = V_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_86;
		L_86 = List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E(L_84, L_85, List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_86, NULL);
		V_6 = L_87;
		// for (int i = 0; i < freeEnds.Count; i++)
		V_31 = 0;
		goto IL_0276;
	}

IL_020d:
	{
		// if (i == rigidIndex)
		int32_t L_88 = V_31;
		int32_t L_89 = V_4;
		V_34 = (bool)((((int32_t)L_88) == ((int32_t)L_89))? 1 : 0);
		bool L_90 = V_34;
		if (!L_90)
		{
			goto IL_021d;
		}
	}
	{
		// continue;
		goto IL_0270;
	}

IL_021d:
	{
		// var part = freeEnds[i].transform;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_91 = V_2;
		int32_t L_92 = V_31;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_93;
		L_93 = List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E(L_91, L_92, List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_93, NULL);
		V_32 = L_94;
		// Profiler.BeginSample("IsAlreadyConnected");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral99B49C8AC6F425C02CDE07D059438E49CAF20734, NULL);
		// if (IsAlreadyConnected(part, main, joints, new HashSet<Transform>()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95 = V_32;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96 = V_6;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_97 = V_3;
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_98 = (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*)il2cpp_codegen_object_new(HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753(L_98, HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753_RuntimeMethod_var);
		bool L_99;
		L_99 = CharacterComponentManagerFast_IsAlreadyConnected_m4F0A130A7328BFE9B5F36F0F24EF45EB0C76C122(L_95, L_96, L_97, L_98, NULL);
		V_35 = L_99;
		bool L_100 = V_35;
		if (!L_100)
		{
			goto IL_0255;
		}
	}
	{
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// continue;
		goto IL_0270;
	}

IL_0255:
	{
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// Joint newJoint = CreateJoint(part, main);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101 = V_32;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = V_6;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_103;
		L_103 = CharacterComponentManagerFast_CreateJoint_m5A7619C86510E3ADB38C76B9C5DD864175ACA7D5(L_101, L_102, NULL);
		V_33 = L_103;
		// joints.Add(newJoint);
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_104 = V_3;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_105 = V_33;
		List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_inline(L_104, L_105, List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_RuntimeMethod_var);
	}

IL_0270:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_106 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_0276:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_107 = V_31;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_108 = V_2;
		int32_t L_109;
		L_109 = List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline(L_108, List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		V_36 = (bool)((((int32_t)L_107) < ((int32_t)L_109))? 1 : 0);
		bool L_110 = V_36;
		if (L_110)
		{
			goto IL_020d;
		}
	}
	{
	}

IL_0287:
	{
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// Profiler.BeginSample("rearrange objects");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral9769ECD6B61E89817C91AFBDBC215F3BB8E32BA4, NULL);
		// oldRoot = go.transform.Find("rootChrSlr");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = ___1_go;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112;
		L_112 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_111, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_112, _stringLiteral0B5F387D1F39E349452AFB5580235EB5C5B4F7B8, NULL);
		V_7 = L_113;
		// if (oldRoot == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_114, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_37 = L_115;
		bool L_116 = V_37;
		if (!L_116)
		{
			goto IL_0369;
		}
	}
	{
		// var animator = go.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = ___1_go;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_118;
		L_118 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_117, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_38 = L_118;
		// oldRoot = animator.GetBoneTransform(HumanBodyBones.Hips);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_119 = V_38;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_120;
		L_120 = Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56(L_119, 0, NULL);
		V_7 = L_120;
		// if (oldRoot == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_122;
		L_122 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_121, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_39 = L_122;
		bool L_123 = V_39;
		if (!L_123)
		{
			goto IL_034e;
		}
	}
	{
		// for (int i = 0; i < go.transform.childCount; i++)
		V_40 = 0;
		goto IL_0338;
	}

IL_02e8:
	{
		// var rigid = go.transform.GetChild(i).GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = ___1_go;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_124, NULL);
		int32_t L_126 = V_40;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127;
		L_127 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_125, L_126, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_128;
		L_128 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_127, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_41 = L_128;
		// if (rigid == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_129 = V_41;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_130;
		L_130 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_129, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_42 = L_130;
		bool L_131 = V_42;
		if (!L_131)
		{
			goto IL_030e;
		}
	}
	{
		// continue;
		goto IL_0332;
	}

IL_030e:
	{
		// if (oldRoot != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_133;
		L_133 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_132, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_43 = L_133;
		bool L_134 = V_43;
		if (!L_134)
		{
			goto IL_0328;
		}
	}
	{
		// throw new InvalidOperationException("Cannot find root object. Several objects with rigidbody was found");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_135 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_135, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EDDACB2A2E15FDDF14FA22D42346768E311B9E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_135, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CharacterComponentManagerFast_OnCompletePerSide_mCE293B2A4D018363552D82654B24F6A61C1BF03E_RuntimeMethod_var)));
	}

IL_0328:
	{
		// oldRoot = rigid.transform;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_136 = V_41;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_137;
		L_137 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_136, NULL);
		V_7 = L_137;
	}

IL_0332:
	{
		// for (int i = 0; i < go.transform.childCount; i++)
		int32_t L_138 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_0338:
	{
		// for (int i = 0; i < go.transform.childCount; i++)
		int32_t L_139 = V_40;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = ___1_go;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_141;
		L_141 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_140, NULL);
		int32_t L_142;
		L_142 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_141, NULL);
		V_44 = (bool)((((int32_t)L_139) < ((int32_t)L_142))? 1 : 0);
		bool L_143 = V_44;
		if (L_143)
		{
			goto IL_02e8;
		}
	}
	{
	}

IL_034e:
	{
		// if (oldRoot == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_145;
		L_145 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_144, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_45 = L_145;
		bool L_146 = V_45;
		if (!L_146)
		{
			goto IL_0368;
		}
	}
	{
		// throw new InvalidOperationException("No root with rigidbody found");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_147 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_147, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7725E7B12B31C3EFD2967489A6512077E2DFCDDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_147, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CharacterComponentManagerFast_OnCompletePerSide_mCE293B2A4D018363552D82654B24F6A61C1BF03E_RuntimeMethod_var)));
	}

IL_0368:
	{
	}

IL_0369:
	{
		// var newRoot = new GameObject("rootChrSlr").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_148 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_148, _stringLiteral0B5F387D1F39E349452AFB5580235EB5C5B4F7B8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_149;
		L_149 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_148, NULL);
		V_8 = L_149;
		// newRoot.SetParent(go.transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_150 = V_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_151 = ___1_go;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_152;
		L_152 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_151, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_150, L_152, (bool)0, NULL);
		// for (int i = 0; i < freeEnds.Count; i++)
		V_46 = 0;
		goto IL_03b0;
	}

IL_038e:
	{
		// var freeEnd = freeEnds[i];
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_153 = V_2;
		int32_t L_154 = V_46;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_155;
		L_155 = List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E(L_153, L_154, List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		V_47 = L_155;
		// freeEnd.transform.SetParent(newRoot, true);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_156 = V_47;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_157;
		L_157 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_156, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_158 = V_8;
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_157, L_158, (bool)1, NULL);
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_159 = V_46;
		V_46 = ((int32_t)il2cpp_codegen_add(L_159, 1));
	}

IL_03b0:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_160 = V_46;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_161 = V_2;
		int32_t L_162;
		L_162 = List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline(L_161, List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		V_48 = (bool)((((int32_t)L_160) < ((int32_t)L_162))? 1 : 0);
		bool L_163 = V_48;
		if (L_163)
		{
			goto IL_038e;
		}
	}
	{
		// if (main != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_164 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_165;
		L_165 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_164, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_49 = L_165;
		bool L_166 = V_49;
		if (!L_166)
		{
			goto IL_03dd;
		}
	}
	{
		// oldRoot.SetParent(main, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_167 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_168 = V_6;
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_167, L_168, (bool)1, NULL);
		goto IL_03ea;
	}

IL_03dd:
	{
		// oldRoot.SetParent(newRoot, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_169 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_170 = V_8;
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_169, L_170, (bool)1, NULL);
	}

IL_03ea:
	{
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// Profiler.BeginSample("delete rigidbodies");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteralC4CE6520B95CA6C28E54C3B77287BE1F2177CBD6, NULL);
		// for (int i = 0; i < rigids.Length; i++)
		V_50 = 0;
		goto IL_042e;
	}

IL_0400:
	{
		// var rigid = rigids[i];
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_171 = V_0;
		int32_t L_172 = V_50;
		int32_t L_173 = L_172;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_174 = (L_171)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_173));
		V_51 = L_174;
		// if (!rigidsInside.Contains(rigid))
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_175 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_176 = V_51;
		bool L_177;
		L_177 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_175, L_176, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		V_52 = (bool)((((int32_t)L_177) == ((int32_t)0))? 1 : 0);
		bool L_178 = V_52;
		if (!L_178)
		{
			goto IL_0427;
		}
	}
	{
		// UnityEngine.Object.Destroy(rigid);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_179 = V_51;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_179, NULL);
		// rigids[i] = null; // mark as deleted
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_180 = V_0;
		int32_t L_181 = V_50;
		ArrayElementTypeCheck (L_180, NULL);
		(L_180)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181), (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL);
	}

IL_0427:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_182 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add(L_182, 1));
	}

IL_042e:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_183 = V_50;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_184 = V_0;
		V_53 = (bool)((((int32_t)L_183) < ((int32_t)((int32_t)(((RuntimeArray*)L_184)->max_length))))? 1 : 0);
		bool L_185 = V_53;
		if (L_185)
		{
			goto IL_0400;
		}
	}
	{
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// Profiler.BeginSample("set center of mass and weight");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteralBE06FBE28F4C32B7353C8C05AACDDDF6491A1591, NULL);
		// for (int i = 0; i < rigids.Length; i++)
		V_54 = 0;
		goto IL_0479;
	}

IL_0451:
	{
		// var rigid = rigids[i];
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_186 = V_0;
		int32_t L_187 = V_54;
		int32_t L_188 = L_187;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_189 = (L_186)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_188));
		V_55 = L_189;
		// if (rigid == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_190 = V_55;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_191;
		L_191 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_190, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_56 = L_191;
		bool L_192 = V_56;
		if (!L_192)
		{
			goto IL_0468;
		}
	}
	{
		// continue;
		goto IL_0473;
	}

IL_0468:
	{
		// CenterOfMassColliderBasedHelper.CalculateCenter(rigid, colliders, rigids);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_193 = V_55;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_194 = ___0_colliders;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_195 = V_0;
		bool L_196;
		L_196 = CenterOfMassColliderBasedHelper_CalculateCenter_m0AC84269012E6EE2F77FB45CA774DB9ECDD9A9C8(L_193, L_194, L_195, NULL);
	}

IL_0473:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_197 = V_54;
		V_54 = ((int32_t)il2cpp_codegen_add(L_197, 1));
	}

IL_0479:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_198 = V_54;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_199 = V_0;
		V_57 = (bool)((((int32_t)L_198) < ((int32_t)((int32_t)(((RuntimeArray*)L_199)->max_length))))? 1 : 0);
		bool L_200 = V_57;
		if (L_200)
		{
			goto IL_0451;
		}
	}
	{
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// }
		return;
	}
}
// System.Boolean BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::IsAlreadyConnected(UnityEngine.Transform,UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Joint>,System.Collections.Generic.HashSet`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterComponentManagerFast_IsAlreadyConnected_m4F0A130A7328BFE9B5F36F0F24EF45EB0C76C122 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_from, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_to, List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* ___2_joints, HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* ___3_ocupied, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_0 = NULL;
	int32_t V_1 = 0;
	Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	{
		// List<Transform> connectedItems = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < joints.Count; ++i)
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		// var joint = joints[i];
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_1 = ___2_joints;
		int32_t L_2 = V_1;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_3;
		L_3 = List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516(L_1, L_2, List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var);
		V_2 = L_3;
		// if (joint == null)
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_4 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		// continue;
		goto IL_0069;
	}

IL_0021:
	{
		// if (joint.transform == from)
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_7 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_from;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		// connectedItems.Add(joint.connectedBody.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_12 = V_0;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_13 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14;
		L_14 = Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_12, L_15, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_0047:
	{
		// if (joint.connectedBody == from)
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_16 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17;
		L_17 = Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ___0_from;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, L_18, NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0068;
		}
	}
	{
		// connectedItems.Add(joint.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_21 = V_0;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_22 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_21, L_23, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_0068:
	{
	}

IL_0069:
	{
		// for (int i = 0; i < joints.Count; ++i)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < joints.Count; ++i)
		int32_t L_25 = V_1;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_26 = ___2_joints;
		int32_t L_27;
		L_27 = List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_inline(L_26, List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0; i < connectedItems.Count; i++)
		V_7 = 0;
		goto IL_00dd;
	}

IL_0081:
	{
		// var connectedItem = connectedItems[i];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_29 = V_0;
		int32_t L_30 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_29, L_30, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		V_8 = L_31;
		// if (!ocupied.Add(connectedItem))
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_32 = ___3_ocupied;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_8;
		bool L_34;
		L_34 = HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801(L_32, L_33, HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_10;
		if (!L_35)
		{
			goto IL_00a0;
		}
	}
	{
		// continue;
		goto IL_00d7;
	}

IL_00a0:
	{
		// if (connectedItem == to)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = ___1_to;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_36, L_37, NULL);
		V_11 = L_38;
		bool L_39 = V_11;
		if (!L_39)
		{
			goto IL_00b4;
		}
	}
	{
		// return true; // connected !!!
		V_12 = (bool)1;
		goto IL_00f2;
	}

IL_00b4:
	{
		// var connected = IsAlreadyConnected(connectedItem, to, joints, ocupied);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = V_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = ___1_to;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_42 = ___2_joints;
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_43 = ___3_ocupied;
		bool L_44;
		L_44 = CharacterComponentManagerFast_IsAlreadyConnected_m4F0A130A7328BFE9B5F36F0F24EF45EB0C76C122(L_40, L_41, L_42, L_43, NULL);
		V_9 = L_44;
		// ocupied.Remove(connectedItem);
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_45 = ___3_ocupied;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = V_8;
		bool L_47;
		L_47 = HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E(L_45, L_46, HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E_RuntimeMethod_var);
		// if (connected)
		bool L_48 = V_9;
		V_13 = L_48;
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_00d6;
		}
	}
	{
		// return true;
		V_12 = (bool)1;
		goto IL_00f2;
	}

IL_00d6:
	{
	}

IL_00d7:
	{
		// for (int i = 0; i < connectedItems.Count; i++)
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00dd:
	{
		// for (int i = 0; i < connectedItems.Count; i++)
		int32_t L_51 = V_7;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_52 = V_0;
		int32_t L_53;
		L_53 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_52, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_51) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_14;
		if (L_54)
		{
			goto IL_0081;
		}
	}
	{
		// return false;
		V_12 = (bool)0;
		goto IL_00f2;
	}

IL_00f2:
	{
		// }
		bool L_55 = V_12;
		return L_55;
	}
}
// System.Boolean BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::RigidHaveColliders(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterComponentManagerFast_RigidHaveColliders_m33E8A4AB91B5D34221391684B8E712575544CF2B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_tr, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___1_colliders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	int32_t V_1 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// var cldrs = tr.GetComponents<Collider>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_tr;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1;
		L_1 = Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C(L_0, Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		V_0 = L_1;
		// for (int j = 0; j < cldrs.Length; j++)
		V_1 = 0;
		goto IL_0026;
	}

IL_000c:
	{
		// Collider cldr = cldrs[j];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (colliders.Contains(cldr))
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_6 = ___1_colliders;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = V_2;
		bool L_8;
		L_8 = List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40(L_6, L_7, List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		V_4 = (bool)1;
		goto IL_0087;
	}

IL_0021:
	{
		// for (int j = 0; j < cldrs.Length; j++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0026:
	{
		// for (int j = 0; j < cldrs.Length; j++)
		int32_t L_11 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_12 = V_0;
		V_5 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_000c;
		}
	}
	{
		// for (int i = 0; i < tr.childCount; i++)
		V_6 = 0;
		goto IL_0072;
	}

IL_0037:
	{
		// var ch = tr.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___0_tr;
		int32_t L_15 = V_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_14, L_15, NULL);
		V_7 = L_16;
		// if (ch.GetComponent<Rigidbody>() != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_7;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18;
		L_18 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_17, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_19;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_0058;
		}
	}
	{
		// continue;
		goto IL_006c;
	}

IL_0058:
	{
		// if (RigidHaveColliders(ch, colliders))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_7;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_22 = ___1_colliders;
		bool L_23;
		L_23 = CharacterComponentManagerFast_RigidHaveColliders_m33E8A4AB91B5D34221391684B8E712575544CF2B(L_21, L_22, NULL);
		V_9 = L_23;
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_006b;
		}
	}
	{
		// return true;
		V_4 = (bool)1;
		goto IL_0087;
	}

IL_006b:
	{
	}

IL_006c:
	{
		// for (int i = 0; i < tr.childCount; i++)
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0072:
	{
		// for (int i = 0; i < tr.childCount; i++)
		int32_t L_26 = V_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = ___0_tr;
		int32_t L_28;
		L_28 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_27, NULL);
		V_10 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_10;
		if (L_29)
		{
			goto IL_0037;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0087;
	}

IL_0087:
	{
		// }
		bool L_30 = V_4;
		return L_30;
	}
}
// UnityEngine.Joint BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::CreateJoint(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* CharacterComponentManagerFast_CreateJoint_m5A7619C86510E3ADB38C76B9C5DD864175ACA7D5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_itemA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_itemB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13F3FFBA103E9115CB9A805A48F47952B3907F84);
		s_Il2CppMethodInitialized = true;
	}
	CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* V_0 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_1 = NULL;
	SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* V_9 = NULL;
	{
		// Profiler.BeginSample("CreateJoint");
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral13F3FFBA103E9115CB9A805A48F47952B3907F84, NULL);
		// var joint = itemA.gameObject.AddComponent<CharacterJoint>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_itemA;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_2;
		L_2 = GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759(L_1, GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759_RuntimeMethod_var);
		V_0 = L_2;
		// var rigid = itemB.GetComponent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___1_itemB;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_3, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_1 = L_4;
		// joint.anchor = Vector3.zero;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Joint_set_anchor_m89447EF25E0FC6DB9D22562BAF3BDA3E6D04029C(L_5, L_6, NULL);
		// joint.autoConfigureConnectedAnchor = false;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_7 = V_0;
		Joint_set_autoConfigureConnectedAnchor_mF61D716174DE67CD94FF042881E9052357679E02(L_7, (bool)0, NULL);
		// joint.connectedAnchor = new Vector3();
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_8 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_5;
		Joint_set_connectedAnchor_m2A40C3C4FB583E9DBC020222A21F577C066D5D90(L_8, L_9, NULL);
		// joint.connectedBody = rigid;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_10 = V_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = V_1;
		Joint_set_connectedBody_mE9E631476E9D4264E8DC0D6307146F5EB64D3ED4(L_10, L_11, NULL);
		// joint.lowTwistLimit = new SoftJointLimit { limit = -limit / 2f };
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_12 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5));
		SoftJointLimit_set_limit_m34B7F00528D7F5B03D2AC39E44AFD96F0EAADF1A((&V_6), (-22.5f), NULL);
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_13 = V_6;
		CharacterJoint_set_lowTwistLimit_m8DC922DE93DAB94B329B3C672061AA9741A4C02E(L_12, L_13, NULL);
		// joint.highTwistLimit = new SoftJointLimit { limit = limit / 2f };
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_14 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5));
		SoftJointLimit_set_limit_m34B7F00528D7F5B03D2AC39E44AFD96F0EAADF1A((&V_6), (22.5f), NULL);
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_15 = V_6;
		CharacterJoint_set_highTwistLimit_m11EFDBE8CBF92BD43F147C20F247B250CB432C32(L_14, L_15, NULL);
		// SoftJointLimit jl = new SoftJointLimit { limit = limit };
		il2cpp_codegen_initobj((&V_6), sizeof(SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5));
		SoftJointLimit_set_limit_m34B7F00528D7F5B03D2AC39E44AFD96F0EAADF1A((&V_6), (45.0f), NULL);
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_16 = V_6;
		V_2 = L_16;
		// joint.swing1Limit = jl;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_17 = V_0;
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_18 = V_2;
		CharacterJoint_set_swing1Limit_mBA202634AF5606DA1D59B94EF3E359C7B4FD012E(L_17, L_18, NULL);
		// joint.swing2Limit = jl;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_19 = V_0;
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_20 = V_2;
		CharacterJoint_set_swing2Limit_mBA612E2C6E50BAAAA798FAA03490150D379BC744(L_19, L_20, NULL);
		// SoftJointLimitSpring jls = new SoftJointLimitSpring { spring = 20f, damper = 1f };
		il2cpp_codegen_initobj((&V_7), sizeof(SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0));
		SoftJointLimitSpring_set_spring_m9A216142953ECC1CEE5080D603D18F9D1BD0A6EA((&V_7), (20.0f), NULL);
		SoftJointLimitSpring_set_damper_mA86F8E250BA84A6DC3E84DC1A40319A39CD5CFD6((&V_7), (1.0f), NULL);
		SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 L_21 = V_7;
		V_3 = L_21;
		// joint.twistLimitSpring = jls;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_22 = V_0;
		SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 L_23 = V_3;
		CharacterJoint_set_twistLimitSpring_mF37BF3C4F77EBA9F1926FA8F07081D315A9C2031(L_22, L_23, NULL);
		// joint.swingLimitSpring = jls;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_24 = V_0;
		SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 L_25 = V_3;
		CharacterJoint_set_swingLimitSpring_mBD4D7812652BE202BEB031F2E1997B70F0F87258(L_24, L_25, NULL);
		// if (rigid == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_27;
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00f8;
		}
	}
	{
		// throw new InvalidOperationException();
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CharacterComponentManagerFast_CreateJoint_m5A7619C86510E3ADB38C76B9C5DD864175ACA7D5_RuntimeMethod_var)));
	}

IL_00f8:
	{
		// var dist = itemA.position - itemB.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ___0_itemA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___1_itemB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_33, NULL);
		V_4 = L_34;
		// joint.anchor = itemA.InverseTransformDirection(-dist);
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_35 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = ___0_itemA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_36, L_38, NULL);
		Joint_set_anchor_m89447EF25E0FC6DB9D22562BAF3BDA3E6D04029C(L_35, L_39, NULL);
		// Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		// return joint;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_40 = V_0;
		V_9 = L_40;
		goto IL_012a;
	}

IL_012a:
	{
		// }
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_41 = V_9;
		return L_41;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializer_Start_m41D4814B9E1FDF6E91FA671FC3CD561A530D53D3 (CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548* __this, const RuntimeMethod* method) 
{
	{
		// Init();
		CharacterSlicerInitializer_Init_m53BA060D2CF5C95A59CFDF866DC34EFE89BA54F3(NULL);
		// }
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializer_Init_m53BA060D2CF5C95A59CFDF866DC34EFE89BA54F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_3 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_4 = NULL;
	CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* V_5 = NULL;
	Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* V_6 = NULL;
	bool V_7 = false;
	Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* G_B4_0 = NULL;
	Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* G_B3_0 = NULL;
	{
		// if (_initialized)
		bool L_0 = ((CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_StaticFields*)il2cpp_codegen_static_fields_for(CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_il2cpp_TypeInfo_var))->____initialized_4;
		V_7 = L_0;
		bool L_1 = V_7;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_012b;
	}

IL_0011:
	{
		// _initialized = true;
		((CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_StaticFields*)il2cpp_codegen_static_fields_for(CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_il2cpp_TypeInfo_var))->____initialized_4 = (bool)1;
		// var go = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_2, NULL);
		V_0 = L_2;
		// var b1 = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_3, NULL);
		V_1 = L_3;
		// var b2 = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_4, NULL);
		V_2 = L_4;
		// b1.transform.parent = go.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, L_8, NULL);
		// b2.transform.parent = b1.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_10, L_12, NULL);
		// var r = go.AddComponent<SkinnedMeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_14;
		L_14 = GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6(L_13, GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		V_3 = L_14;
		// r.sharedMesh = GetMesh();
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_15 = V_3;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16;
		L_16 = CharacterSlicerInitializer_GetMesh_m6274B46801C86F5645F6D6BF5814C4879F57B07E(NULL);
		SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(L_15, L_16, NULL);
		// r.rootBone = b1.transform;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_17 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355(L_17, L_19, NULL);
		// r.bones = new[]
		// {
		//     b1.transform,
		//     b2.transform,
		// };
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_20 = V_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)2);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_24);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_27);
		SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7(L_20, L_25, NULL);
		// var animator = go.AddComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_0;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29;
		L_29 = GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F(L_28, GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F_RuntimeMethod_var);
		V_4 = L_29;
		// animator.updateMode = AnimatorUpdateMode.AnimatePhysics;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = V_4;
		Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056(L_30, 1, NULL);
		// go.AddComponent<Rigidbody>().isKinematic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32;
		L_32 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_31, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_32, (bool)1, NULL);
		// b1.AddComponent<Rigidbody>().isKinematic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34;
		L_34 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_33, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_34, (bool)1, NULL);
		// b2.AddComponent<Rigidbody>().isKinematic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_36;
		L_36 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_35, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_36, (bool)1, NULL);
		// go.AddComponent<BoxCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_0;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_38;
		L_38 = GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23(L_37, GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		// var slicer = go.AddComponent<CharacterSlicerInitializerObj>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_0;
		CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* L_40;
		L_40 = GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0(L_39, GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0_RuntimeMethod_var);
		V_5 = L_40;
		// slicer.asynchronously = false;
		CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* L_41 = V_5;
		((BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A*)L_41)->___asynchronously_5 = (bool)0;
		// slicer.defaultSliceMaterial = new Material(Shader.Find("Standard"));
		CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* L_42 = V_5;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_43;
		L_43 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_44, L_43, NULL);
		((BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A*)L_42)->___defaultSliceMaterial_4 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A*)L_42)->___defaultSliceMaterial_4), (void*)L_44);
		// Action<BzSliceTryResult> action = (x) =>
		// {
		//     if (!x.sliced)
		//         throw new InvalidOperationException("Not sliced");
		// 
		//     Destroy(x.outObjectNeg);
		//     Destroy(x.outObjectPos);
		// };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_45 = ((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_46 = L_45;
		G_B3_0 = L_46;
		if (L_46)
		{
			G_B4_0 = L_46;
			goto IL_0110;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* L_47 = ((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_48 = (Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F*)il2cpp_codegen_object_new(Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F_il2cpp_TypeInfo_var);
		Action_1__ctor_m8AB4590574801447E5178140DF68ADE98F8F7207(L_48, L_47, (intptr_t)((void*)U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C_RuntimeMethod_var), NULL);
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_49 = L_48;
		((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_49);
		G_B4_0 = L_49;
	}

IL_0110:
	{
		V_6 = G_B4_0;
		// slicer.Slice(new Plane(Vector3.up, Vector3.zero), action);
		CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* L_50 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_53;
		memset((&L_53), 0, sizeof(L_53));
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&L_53), L_51, L_52, /*hidden argument*/NULL);
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_54 = V_6;
		BzSliceableBase_Slice_m3F109FFAD0697B9DB5823CD7060EF3375F175B1E(L_50, L_53, L_54, NULL);
	}

IL_012b:
	{
		// }
		return;
	}
}
// UnityEngine.Mesh BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::GetMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* CharacterSlicerInitializer_GetMesh_m6274B46801C86F5645F6D6BF5814C4879F57B07E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_2 = NULL;
	{
		// var mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// mesh.vertices = new[]
		// {
		//     new Vector3(-1, -1, 0),
		//     new Vector3( 0,  1, 0),
		//     new Vector3( 1, -1, 0),
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (-1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_1, L_7, NULL);
		// mesh.triangles = new[] { 0, 1, 2 };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)2);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_9, L_12, NULL);
		// mesh.boneWeights = new[]
		// {
		//     new BoneWeight { boneIndex0 = 0, weight0 = 1 },
		//     new BoneWeight { boneIndex0 = 1, weight0 = 1 },
		//     new BoneWeight { boneIndex0 = 0, weight0 = 1 },
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13 = V_0;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_14 = (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)SZArrayNew(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var, (uint32_t)3);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_15 = L_14;
		il2cpp_codegen_initobj((&V_1), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC((&V_1), 0, NULL);
		BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7((&V_1), (1.0f), NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_16 = V_1;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F)L_16);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_17 = L_15;
		il2cpp_codegen_initobj((&V_1), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC((&V_1), 1, NULL);
		BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7((&V_1), (1.0f), NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_18 = V_1;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F)L_18);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_19 = L_17;
		il2cpp_codegen_initobj((&V_1), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC((&V_1), 0, NULL);
		BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7((&V_1), (1.0f), NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_20 = V_1;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F)L_20);
		Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7(L_13, L_19, NULL);
		// mesh.bindposes = new[]
		// {
		//     Matrix4x4.identity,
		//     Matrix4x4.identity,
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_22 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_23 = L_22;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24;
		L_24 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_24);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_25 = L_23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_26);
		Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_21, L_25, NULL);
		// return mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27 = V_0;
		V_2 = L_27;
		goto IL_0122;
	}

IL_0122:
	{
		// }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_28 = V_2;
		return L_28;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializer__ctor_mD0A3E931174C5F0E045D2E067AB3E918392D299A (CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializerObj__ctor_m3F3812B9BAB6C9ADB610189498F58C1E063E0420 (CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* __this, const RuntimeMethod* method) 
{
	{
		BzSliceableCharacterBase__ctor_m5A4946C42E3E557ED472C7B40785B0E1CCCB05BC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE597C0DAA0C10E65F50458D4A7B3EAD0C25566E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* L_0 = (U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E*)il2cpp_codegen_object_new(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF0270A043A9E72A23703328CFC2E90A6ED413238(L_0, NULL);
		((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0270A043A9E72A23703328CFC2E90A6ED413238 (U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::<Init>b__2_0(BzKovSoft.ObjectSlicer.BzSliceTryResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C (U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* __this, BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!x.sliced)
		BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2* L_0 = ___0_x;
		bool L_1 = L_0->___sliced_1;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// throw new InvalidOperationException("Not sliced");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4166C49C7439DBBFA713A83D8BA4CE3FFE0C5E9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C_RuntimeMethod_var)));
	}

IL_0019:
	{
		// Destroy(x.outObjectNeg);
		BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2* L_4 = ___0_x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___outObjectNeg_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// Destroy(x.outObjectPos);
		BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2* L_6 = ___0_x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___outObjectPos_4;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline (String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_inline(L_0, NULL);
		String_t* L_1 = ___0_name;
		Profiler_BeginSampleImpl_m7CA0C092A61229CA7BF617E521F2DE0E2B155CEA(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_inline (String_t* ___0_name, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31D159E683556C06B3B3963D92483B6867EB3233)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
