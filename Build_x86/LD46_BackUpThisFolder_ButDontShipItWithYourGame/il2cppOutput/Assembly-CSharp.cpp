#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// CameraMovement
struct CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4;
// CharacterController
struct CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB;
// DudeNeeds
struct DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F;
// Jerry
struct Jerry_t30C1CEA40E869A541484B2455BC69C9FB0E80E3D;
// JerryMovement
struct JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573;
// LilDoodMovement
struct LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E;
// Pathfinding
struct Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1;
// PlayerCamera
struct PlayerCamera_tF1E487BFA22293AE1490DCF28C21E288B564FF5D;
// PotGrowth
struct PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC;
// Readme
struct Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46;
// Readme/Section
struct Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985;
// Readme/Section[]
struct SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364;
// Retry
struct Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00;
// Room
struct Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823;
// Stairs
struct Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32;
// UnityEngine.Effector2D
struct Effector2D_t8B3B6D12D58089662060F3B2C98ACC7EDB966672;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.PlatformEffector2D
struct PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51;
IL2CPP_EXTERN_C String_t* _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7;
IL2CPP_EXTERN_C String_t* _stringLiteral1C3D35F1DC2DB1CC7A99556F0309FDB4C09283A7;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3;
IL2CPP_EXTERN_C String_t* _stringLiteral28002E0A109ED23F4433BF160A4C51C3472CA80A;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6066CB925E0D319D0D8D21FBAB826AAF7D0195;
IL2CPP_EXTERN_C String_t* _stringLiteral2E43BE5AECBD81E0C23C5D56EB737FB40D4A7DC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F;
IL2CPP_EXTERN_C String_t* _stringLiteral468C6C041BCEA0B892D7D8475778FD6D2FDB1A13;
IL2CPP_EXTERN_C String_t* _stringLiteral46E04A7FD01D0F03F367D19AF59E2C6D81D8381C;
IL2CPP_EXTERN_C String_t* _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral58CAEBADD832F4481DE8D18619A06BF39133897F;
IL2CPP_EXTERN_C String_t* _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6;
IL2CPP_EXTERN_C String_t* _stringLiteral7CCC8CDD025089025F69628E5F445F0C9EBD4C28;
IL2CPP_EXTERN_C String_t* _stringLiteral7D4995FB75E12BE685ECB50C48687B27C44C5943;
IL2CPP_EXTERN_C String_t* _stringLiteral882524F938B6A7F037958ADAACD77CD4B3733A02;
IL2CPP_EXTERN_C String_t* _stringLiteral92B6320812D86ABE48E76FBFBBE8BDE7170BF036;
IL2CPP_EXTERN_C String_t* _stringLiteral9DE07F060C37DB643330894874675E5E43D135FE;
IL2CPP_EXTERN_C String_t* _stringLiteralA24070E43D50C6088E5F97080AF0E0DA11295327;
IL2CPP_EXTERN_C String_t* _stringLiteralA2B4C5A1006EEF72BF9580BB027F12A5B22E513F;
IL2CPP_EXTERN_C String_t* _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8;
IL2CPP_EXTERN_C String_t* _stringLiteralF4A2384C3039333EFFAB6D033FFAC216BDD8A4DC;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6370E70911AF2BD12D07B6F7331FC402AD7D4;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6C7093BF8A910B42F442B945CA8BDCC9CE273B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6FB1E4E67A28FDD0474568CAE4AF30BC2CBC67;
IL2CPP_EXTERN_C String_t* _stringLiteralFD2E4A67A835FEF3BB45B318366EDFB231BCDCAF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m51F2595169CB099FA35B5DBFD9F9E056DF0324E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mC1E03B5C8F755D53A23982F3498E4E8BC4917D4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1_m2B1F22FA56BCE04B99BE1DC3B3025387AEE247B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56_m264CB10838725FAF7E7CCA41E980B70387B270AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_mD54950223AD8BD8D30B89144A0774268FEBDDC80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CameraMovement_MoveCamera_m83704845004C16663281296729C69A42E0423327_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMovement_Update_m9FC9432BAC7E92351E6568130FDEA7D6443A721B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CharacterController_FixedUpdate_m999302058B8376C49779002AADEECB67C708B56F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CharacterController_OnCollisionEnter2D_m2CCA673BA8348EE339B54059C460409968865B2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CharacterController_Planted_mEBD3119978D320987E70BCE589A30CD302375525_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CharacterController_Start_m0645EDF74E0B4D904B1C1EA002A34B4812B8C7FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CharacterController_Update_m0B4138A15A924D7AF12C5FC6865E0E9BB777561E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DudeNeeds_Start_m8F369218D7AB64699606E15149073355A6D6CD1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JerryMovement_GetRandomTarget_m96E3ABFDE90DCD5B7C316173DF4EA2D639662255_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JerryMovement_JumpingDude_m8741AF991BF51350A87C739AAAC7E7A5C6BD3F17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JerryMovement_Movement_m2967F3A123ADDCC8D5DD1D60E5E38D5ACE8935EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JerryMovement_OnTriggerEnter2D_m6194C78148F0616A20CDCE7A3B10C81729708B22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JerryMovement_PrintRoute_mF6509D48981EFCE184A316AB8507661B7881C094_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JerryMovement_SetRoute_m34132DCEA36FC8656D6548A4A96DB54A22C025BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JerryMovement_SetTarget_mBB68D09B446AE35155DF451FB885C06A561BCBE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JerryMovement_Start_mCF0D572E07C4BC2715A444702B9A11CA29CEF249_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JerryMovement__ctor_mD22BEACED9A777AB7A7633F89C2FB91E099BF73F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jerry_FixedUpdate_m317B9DD8DBD20CD6E600D91F87279290F3F6F37E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jerry_Start_m1B9461A5A10BE27DD00C5DFF4B91FA42D1E22D72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement_GetRandomTarget_m7135F978E2B1021806619F714CCE667C3DDCA1F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement_JumpingDude_m80B1B330B32195E38544DD1E36E2A7D3A8539DFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement_Movement_m69CB0DA20EA3557763C147B9C3C64270ED9D10FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement_OnTriggerEnter2D_mA7707691D27BCADFEBCA7FEBA05C99AC674C922F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement_OnTriggerExit2D_m55B12C209850D9FC0618FE13F6BAB8CF86E133C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement_PrintRoute_m91711DF2B0986AD6F6E77A9DFDBDB9C4DAA3BBCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement_SetRoute_m600CBF9538FDCB7A2ACD5F644C134C849CB68315_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement_SetTarget_m54CBE98C2C403E5CBD90165701C2640B99BB2318_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement_Start_mA322023564EB72040E76B8607F87C4660CE4B36C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LilDoodMovement__ctor_mC1D4E30DFE18A5BA59A5533D4DDA1F9072AA5DD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Pathfinding_GetConnectedRooms_m3D445850B4B0C398B75E818A2AB29C630B5B8657_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Pathfinding_Pathfind_m00B888F5F7E004A5EE862337086E241AFF4FC787_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Pathfinding__ctor_mE048C9A0235050893ACA27BB194B8CFC8811F99B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCamera_OnTriggerEnter2D_m0DA2C582DA633C5FBF7B1514386D725BACA71E6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PotGrowth_OnTriggerEnter2D_m0E940D1B3EA9BA389D3CB073C2631A302E95AA3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PotGrowth_Start_m1790BA0B04515CD56B5145ACD5D96492B50B182E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Retry_Start_m1A789365E328AB4F3F9243B5C494A7D93B075243_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Retry_Update_m6370A9ECC62715D8CA4B99CD2D5830CBFF0CB5A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_GetAllPreviousRooms_mDE98F4B80D522DF86560EDCDF52A284D64655FF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_GetRoute_m5D289AEAA29BD597761B9F392647B58918E61323_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stairs_AddToStairMask_m6947A30645F5AFFEB537DF82627C080F3B7E8B83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stairs_AddToWallMask_mBC48C43FEFED1654D7E6B660E4182526B997D23B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stairs_FixedUpdate_m8790F08FA529F0C3B262F935B4AA81FD30A8B12D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stairs_RemoveFromStairMask_m05F2042A3E80DB4659742B0277773A498BFA75BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stairs_RemoveFromWallMask_m27B61FB41A309177792F57E6B521ADABF57C31AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stairs_Start_m6E6D08009703EE0FB80460630BE458845031E3E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stairs_Update_m316C1B75AC74CE876CE6513DE3FB5BD4D4E58809_MetadataUsageId;
struct ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 ;

struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A  : public RuntimeObject
{
public:

public:
};


// Readme_Section
struct  Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985  : public RuntimeObject
{
public:
	// System.String Readme_Section::heading
	String_t* ___heading_0;
	// System.String Readme_Section::text
	String_t* ___text_1;
	// System.String Readme_Section::linkText
	String_t* ___linkText_2;
	// System.String Readme_Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// Room
struct  Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823  : public RuntimeObject
{
public:
	// Room Room::previousRoom
	Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * ___previousRoom_0;
	// System.String Room::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_previousRoom_0() { return static_cast<int32_t>(offsetof(Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823, ___previousRoom_0)); }
	inline Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * get_previousRoom_0() const { return ___previousRoom_0; }
	inline Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 ** get_address_of_previousRoom_0() { return &___previousRoom_0; }
	inline void set_previousRoom_0(Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * value)
	{
		___previousRoom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousRoom_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____items_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityTemplateProjects.SimpleCameraController_CameraState
struct  CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7  : public RuntimeObject
{
public:
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::z
	float ___z_5;

public:
	inline static int32_t get_offset_of_yaw_0() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___yaw_0)); }
	inline float get_yaw_0() const { return ___yaw_0; }
	inline float* get_address_of_yaw_0() { return &___yaw_0; }
	inline void set_yaw_0(float value)
	{
		___yaw_0 = value;
	}

	inline static int32_t get_offset_of_pitch_1() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___pitch_1)); }
	inline float get_pitch_1() const { return ___pitch_1; }
	inline float* get_address_of_pitch_1() { return &___pitch_1; }
	inline void set_pitch_1(float value)
	{
		___pitch_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct  Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector2>
struct  Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF 
{
public:
	// T System.Nullable`1::value
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF, ___value_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_value_0() const { return ___value_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Collision2D
struct  Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_RelativeVelocity_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_ReusedContacts_7;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_ReusedContacts_7;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_LegacyContacts_8;
};

// UnityEngine.CursorLockMode
struct  CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ForceMode2D
struct  ForceMode2D_t80F82E2BBC1733F0B88593968BA9CE9BC96A7E36 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_t80F82E2BBC1733F0B88593968BA9CE9BC96A7E36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Centroid_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Point_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Normal_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Readme
struct  Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme_Section[] Readme::sections
	SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___icon_4)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_icon_4() const { return ___icon_4; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___sections_6)); }
	inline SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Effector2D
struct  Effector2D_t8B3B6D12D58089662060F3B2C98ACC7EDB966672  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// CameraMovement
struct  CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Nullable`1<UnityEngine.Vector2> CameraMovement::startPos
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  ___startPos_4;
	// System.Nullable`1<UnityEngine.Vector2> CameraMovement::target
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  ___target_5;
	// System.Single CameraMovement::speed
	float ___speed_6;
	// System.Nullable`1<System.Single> CameraMovement::startTime
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___startTime_7;
	// UnityEngine.Transform CameraMovement::kitchen
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___kitchen_8;
	// UnityEngine.Transform CameraMovement::livingRoom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___livingRoom_9;
	// UnityEngine.Transform CameraMovement::diningRoom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___diningRoom_10;
	// UnityEngine.Transform CameraMovement::bathroom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___bathroom_11;
	// UnityEngine.Transform CameraMovement::landing
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___landing_12;
	// UnityEngine.Transform CameraMovement::bedroom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___bedroom_13;
	// UnityEngine.Transform CameraMovement::roofTerrace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___roofTerrace_14;

public:
	inline static int32_t get_offset_of_startPos_4() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___startPos_4)); }
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  get_startPos_4() const { return ___startPos_4; }
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * get_address_of_startPos_4() { return &___startPos_4; }
	inline void set_startPos_4(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  value)
	{
		___startPos_4 = value;
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___target_5)); }
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  get_target_5() const { return ___target_5; }
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  value)
	{
		___target_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_startTime_7() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___startTime_7)); }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  get_startTime_7() const { return ___startTime_7; }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * get_address_of_startTime_7() { return &___startTime_7; }
	inline void set_startTime_7(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  value)
	{
		___startTime_7 = value;
	}

	inline static int32_t get_offset_of_kitchen_8() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___kitchen_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_kitchen_8() const { return ___kitchen_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_kitchen_8() { return &___kitchen_8; }
	inline void set_kitchen_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___kitchen_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kitchen_8), (void*)value);
	}

	inline static int32_t get_offset_of_livingRoom_9() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___livingRoom_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_livingRoom_9() const { return ___livingRoom_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_livingRoom_9() { return &___livingRoom_9; }
	inline void set_livingRoom_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___livingRoom_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livingRoom_9), (void*)value);
	}

	inline static int32_t get_offset_of_diningRoom_10() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___diningRoom_10)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_diningRoom_10() const { return ___diningRoom_10; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_diningRoom_10() { return &___diningRoom_10; }
	inline void set_diningRoom_10(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___diningRoom_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diningRoom_10), (void*)value);
	}

	inline static int32_t get_offset_of_bathroom_11() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___bathroom_11)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_bathroom_11() const { return ___bathroom_11; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_bathroom_11() { return &___bathroom_11; }
	inline void set_bathroom_11(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___bathroom_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bathroom_11), (void*)value);
	}

	inline static int32_t get_offset_of_landing_12() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___landing_12)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_landing_12() const { return ___landing_12; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_landing_12() { return &___landing_12; }
	inline void set_landing_12(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___landing_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___landing_12), (void*)value);
	}

	inline static int32_t get_offset_of_bedroom_13() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___bedroom_13)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_bedroom_13() const { return ___bedroom_13; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_bedroom_13() { return &___bedroom_13; }
	inline void set_bedroom_13(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___bedroom_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bedroom_13), (void*)value);
	}

	inline static int32_t get_offset_of_roofTerrace_14() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___roofTerrace_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_roofTerrace_14() const { return ___roofTerrace_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_roofTerrace_14() { return &___roofTerrace_14; }
	inline void set_roofTerrace_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___roofTerrace_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roofTerrace_14), (void*)value);
	}
};


// CharacterController
struct  CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Animator CharacterController::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_4;
	// UnityEngine.CapsuleCollider2D CharacterController::capsuleCollider
	CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * ___capsuleCollider_5;
	// UnityEngine.Rigidbody2D CharacterController::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_6;
	// System.Single CharacterController::speedMultiplier
	float ___speedMultiplier_7;
	// System.Single CharacterController::direction
	float ___direction_8;
	// System.Single CharacterController::jumpForce
	float ___jumpForce_9;
	// UnityEngine.GameObject CharacterController::carrying
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___carrying_10;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB, ___animator_4)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_4() const { return ___animator_4; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}

	inline static int32_t get_offset_of_capsuleCollider_5() { return static_cast<int32_t>(offsetof(CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB, ___capsuleCollider_5)); }
	inline CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * get_capsuleCollider_5() const { return ___capsuleCollider_5; }
	inline CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 ** get_address_of_capsuleCollider_5() { return &___capsuleCollider_5; }
	inline void set_capsuleCollider_5(CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * value)
	{
		___capsuleCollider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capsuleCollider_5), (void*)value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB, ___rb_6)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_6() const { return ___rb_6; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}

	inline static int32_t get_offset_of_speedMultiplier_7() { return static_cast<int32_t>(offsetof(CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB, ___speedMultiplier_7)); }
	inline float get_speedMultiplier_7() const { return ___speedMultiplier_7; }
	inline float* get_address_of_speedMultiplier_7() { return &___speedMultiplier_7; }
	inline void set_speedMultiplier_7(float value)
	{
		___speedMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB, ___direction_8)); }
	inline float get_direction_8() const { return ___direction_8; }
	inline float* get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(float value)
	{
		___direction_8 = value;
	}

	inline static int32_t get_offset_of_jumpForce_9() { return static_cast<int32_t>(offsetof(CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB, ___jumpForce_9)); }
	inline float get_jumpForce_9() const { return ___jumpForce_9; }
	inline float* get_address_of_jumpForce_9() { return &___jumpForce_9; }
	inline void set_jumpForce_9(float value)
	{
		___jumpForce_9 = value;
	}

	inline static int32_t get_offset_of_carrying_10() { return static_cast<int32_t>(offsetof(CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB, ___carrying_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_carrying_10() const { return ___carrying_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_carrying_10() { return &___carrying_10; }
	inline void set_carrying_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___carrying_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___carrying_10), (void*)value);
	}
};


// DudeNeeds
struct  DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single DudeNeeds::thirstiness
	float ___thirstiness_4;
	// System.Boolean DudeNeeds::beingWatered
	bool ___beingWatered_5;
	// System.Single DudeNeeds::photosynthesis
	float ___photosynthesis_6;
	// System.Boolean DudeNeeds::inTheSun
	bool ___inTheSun_7;
	// System.Boolean DudeNeeds::dead
	bool ___dead_8;
	// System.Single DudeNeeds::growth
	float ___growth_9;
	// UnityEngine.GameObject DudeNeeds::ui
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ui_10;
	// UnityEngine.RectTransform DudeNeeds::sunBar
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___sunBar_11;
	// UnityEngine.RectTransform DudeNeeds::growthBar
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___growthBar_12;
	// UnityEngine.GameObject DudeNeeds::leaf
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___leaf_13;
	// System.Boolean DudeNeeds::fullyGrown
	bool ___fullyGrown_14;
	// System.Boolean DudeNeeds::planted
	bool ___planted_15;
	// System.Boolean DudeNeeds::isPhotosynthesising
	bool ___isPhotosynthesising_16;
	// System.Boolean DudeNeeds::isBorn
	bool ___isBorn_17;
	// System.Single DudeNeeds::timeUntilBirth
	float ___timeUntilBirth_18;
	// UnityEngine.SpriteRenderer DudeNeeds::spriteRenderer
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___spriteRenderer_19;
	// UnityEngine.Rigidbody2D DudeNeeds::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_20;
	// UnityEngine.PolygonCollider2D DudeNeeds::polygonCollider
	PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * ___polygonCollider_21;
	// UnityEngine.GameObject DudeNeeds::eyes
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___eyes_22;
	// UnityEngine.GameObject DudeNeeds::mouth
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mouth_23;
	// UnityEngine.GameObject DudeNeeds::spike
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spike_24;
	// System.Single DudeNeeds::growthMultiplier
	float ___growthMultiplier_25;

public:
	inline static int32_t get_offset_of_thirstiness_4() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___thirstiness_4)); }
	inline float get_thirstiness_4() const { return ___thirstiness_4; }
	inline float* get_address_of_thirstiness_4() { return &___thirstiness_4; }
	inline void set_thirstiness_4(float value)
	{
		___thirstiness_4 = value;
	}

	inline static int32_t get_offset_of_beingWatered_5() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___beingWatered_5)); }
	inline bool get_beingWatered_5() const { return ___beingWatered_5; }
	inline bool* get_address_of_beingWatered_5() { return &___beingWatered_5; }
	inline void set_beingWatered_5(bool value)
	{
		___beingWatered_5 = value;
	}

	inline static int32_t get_offset_of_photosynthesis_6() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___photosynthesis_6)); }
	inline float get_photosynthesis_6() const { return ___photosynthesis_6; }
	inline float* get_address_of_photosynthesis_6() { return &___photosynthesis_6; }
	inline void set_photosynthesis_6(float value)
	{
		___photosynthesis_6 = value;
	}

	inline static int32_t get_offset_of_inTheSun_7() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___inTheSun_7)); }
	inline bool get_inTheSun_7() const { return ___inTheSun_7; }
	inline bool* get_address_of_inTheSun_7() { return &___inTheSun_7; }
	inline void set_inTheSun_7(bool value)
	{
		___inTheSun_7 = value;
	}

	inline static int32_t get_offset_of_dead_8() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___dead_8)); }
	inline bool get_dead_8() const { return ___dead_8; }
	inline bool* get_address_of_dead_8() { return &___dead_8; }
	inline void set_dead_8(bool value)
	{
		___dead_8 = value;
	}

	inline static int32_t get_offset_of_growth_9() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___growth_9)); }
	inline float get_growth_9() const { return ___growth_9; }
	inline float* get_address_of_growth_9() { return &___growth_9; }
	inline void set_growth_9(float value)
	{
		___growth_9 = value;
	}

	inline static int32_t get_offset_of_ui_10() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___ui_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ui_10() const { return ___ui_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ui_10() { return &___ui_10; }
	inline void set_ui_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ui_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ui_10), (void*)value);
	}

	inline static int32_t get_offset_of_sunBar_11() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___sunBar_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_sunBar_11() const { return ___sunBar_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_sunBar_11() { return &___sunBar_11; }
	inline void set_sunBar_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___sunBar_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sunBar_11), (void*)value);
	}

	inline static int32_t get_offset_of_growthBar_12() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___growthBar_12)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_growthBar_12() const { return ___growthBar_12; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_growthBar_12() { return &___growthBar_12; }
	inline void set_growthBar_12(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___growthBar_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___growthBar_12), (void*)value);
	}

	inline static int32_t get_offset_of_leaf_13() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___leaf_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_leaf_13() const { return ___leaf_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_leaf_13() { return &___leaf_13; }
	inline void set_leaf_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___leaf_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leaf_13), (void*)value);
	}

	inline static int32_t get_offset_of_fullyGrown_14() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___fullyGrown_14)); }
	inline bool get_fullyGrown_14() const { return ___fullyGrown_14; }
	inline bool* get_address_of_fullyGrown_14() { return &___fullyGrown_14; }
	inline void set_fullyGrown_14(bool value)
	{
		___fullyGrown_14 = value;
	}

	inline static int32_t get_offset_of_planted_15() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___planted_15)); }
	inline bool get_planted_15() const { return ___planted_15; }
	inline bool* get_address_of_planted_15() { return &___planted_15; }
	inline void set_planted_15(bool value)
	{
		___planted_15 = value;
	}

	inline static int32_t get_offset_of_isPhotosynthesising_16() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___isPhotosynthesising_16)); }
	inline bool get_isPhotosynthesising_16() const { return ___isPhotosynthesising_16; }
	inline bool* get_address_of_isPhotosynthesising_16() { return &___isPhotosynthesising_16; }
	inline void set_isPhotosynthesising_16(bool value)
	{
		___isPhotosynthesising_16 = value;
	}

	inline static int32_t get_offset_of_isBorn_17() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___isBorn_17)); }
	inline bool get_isBorn_17() const { return ___isBorn_17; }
	inline bool* get_address_of_isBorn_17() { return &___isBorn_17; }
	inline void set_isBorn_17(bool value)
	{
		___isBorn_17 = value;
	}

	inline static int32_t get_offset_of_timeUntilBirth_18() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___timeUntilBirth_18)); }
	inline float get_timeUntilBirth_18() const { return ___timeUntilBirth_18; }
	inline float* get_address_of_timeUntilBirth_18() { return &___timeUntilBirth_18; }
	inline void set_timeUntilBirth_18(float value)
	{
		___timeUntilBirth_18 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_19() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___spriteRenderer_19)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_spriteRenderer_19() const { return ___spriteRenderer_19; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_spriteRenderer_19() { return &___spriteRenderer_19; }
	inline void set_spriteRenderer_19(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___spriteRenderer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_19), (void*)value);
	}

	inline static int32_t get_offset_of_rb_20() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___rb_20)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_20() const { return ___rb_20; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_20() { return &___rb_20; }
	inline void set_rb_20(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_20), (void*)value);
	}

	inline static int32_t get_offset_of_polygonCollider_21() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___polygonCollider_21)); }
	inline PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * get_polygonCollider_21() const { return ___polygonCollider_21; }
	inline PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 ** get_address_of_polygonCollider_21() { return &___polygonCollider_21; }
	inline void set_polygonCollider_21(PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * value)
	{
		___polygonCollider_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygonCollider_21), (void*)value);
	}

	inline static int32_t get_offset_of_eyes_22() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___eyes_22)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_eyes_22() const { return ___eyes_22; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_eyes_22() { return &___eyes_22; }
	inline void set_eyes_22(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___eyes_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eyes_22), (void*)value);
	}

	inline static int32_t get_offset_of_mouth_23() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___mouth_23)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mouth_23() const { return ___mouth_23; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mouth_23() { return &___mouth_23; }
	inline void set_mouth_23(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mouth_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouth_23), (void*)value);
	}

	inline static int32_t get_offset_of_spike_24() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___spike_24)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_spike_24() const { return ___spike_24; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_spike_24() { return &___spike_24; }
	inline void set_spike_24(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___spike_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spike_24), (void*)value);
	}

	inline static int32_t get_offset_of_growthMultiplier_25() { return static_cast<int32_t>(offsetof(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F, ___growthMultiplier_25)); }
	inline float get_growthMultiplier_25() const { return ___growthMultiplier_25; }
	inline float* get_address_of_growthMultiplier_25() { return &___growthMultiplier_25; }
	inline void set_growthMultiplier_25(float value)
	{
		___growthMultiplier_25 = value;
	}
};


// Jerry
struct  Jerry_t30C1CEA40E869A541484B2455BC69C9FB0E80E3D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rigidbody2D Jerry::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_4;
	// System.Single Jerry::upwardsForce
	float ___upwardsForce_5;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(Jerry_t30C1CEA40E869A541484B2455BC69C9FB0E80E3D, ___rb_4)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_upwardsForce_5() { return static_cast<int32_t>(offsetof(Jerry_t30C1CEA40E869A541484B2455BC69C9FB0E80E3D, ___upwardsForce_5)); }
	inline float get_upwardsForce_5() const { return ___upwardsForce_5; }
	inline float* get_address_of_upwardsForce_5() { return &___upwardsForce_5; }
	inline void set_upwardsForce_5(float value)
	{
		___upwardsForce_5 = value;
	}
};


// JerryMovement
struct  JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rigidbody2D JerryMovement::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_4;
	// System.Single JerryMovement::timeTilJump
	float ___timeTilJump_5;
	// System.Single JerryMovement::jumpForce
	float ___jumpForce_6;
	// UnityEngine.PolygonCollider2D JerryMovement::polygonCollider
	PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * ___polygonCollider_7;
	// Pathfinding JerryMovement::pathfinding
	Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * ___pathfinding_8;
	// UnityEngine.Vector2 JerryMovement::currentRoom
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___currentRoom_9;
	// System.String JerryMovement::currentRoomString
	String_t* ___currentRoomString_10;
	// UnityEngine.Vector2 JerryMovement::target
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___target_11;
	// System.Collections.ArrayList JerryMovement::route
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___route_12;
	// UnityEngine.Transform JerryMovement::kitchen
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___kitchen_13;
	// UnityEngine.Transform JerryMovement::livingRoom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___livingRoom_14;
	// UnityEngine.Transform JerryMovement::diningRoom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___diningRoom_15;
	// UnityEngine.Transform JerryMovement::bathroom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___bathroom_16;
	// UnityEngine.Transform JerryMovement::landing
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___landing_17;
	// UnityEngine.Transform JerryMovement::bedroom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___bedroom_18;
	// UnityEngine.Transform JerryMovement::roofTerrace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___roofTerrace_19;
	// Stairs JerryMovement::stairs
	Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * ___stairs_20;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___rb_4)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_timeTilJump_5() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___timeTilJump_5)); }
	inline float get_timeTilJump_5() const { return ___timeTilJump_5; }
	inline float* get_address_of_timeTilJump_5() { return &___timeTilJump_5; }
	inline void set_timeTilJump_5(float value)
	{
		___timeTilJump_5 = value;
	}

	inline static int32_t get_offset_of_jumpForce_6() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___jumpForce_6)); }
	inline float get_jumpForce_6() const { return ___jumpForce_6; }
	inline float* get_address_of_jumpForce_6() { return &___jumpForce_6; }
	inline void set_jumpForce_6(float value)
	{
		___jumpForce_6 = value;
	}

	inline static int32_t get_offset_of_polygonCollider_7() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___polygonCollider_7)); }
	inline PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * get_polygonCollider_7() const { return ___polygonCollider_7; }
	inline PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 ** get_address_of_polygonCollider_7() { return &___polygonCollider_7; }
	inline void set_polygonCollider_7(PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * value)
	{
		___polygonCollider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygonCollider_7), (void*)value);
	}

	inline static int32_t get_offset_of_pathfinding_8() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___pathfinding_8)); }
	inline Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * get_pathfinding_8() const { return ___pathfinding_8; }
	inline Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 ** get_address_of_pathfinding_8() { return &___pathfinding_8; }
	inline void set_pathfinding_8(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * value)
	{
		___pathfinding_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathfinding_8), (void*)value);
	}

	inline static int32_t get_offset_of_currentRoom_9() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___currentRoom_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_currentRoom_9() const { return ___currentRoom_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_currentRoom_9() { return &___currentRoom_9; }
	inline void set_currentRoom_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___currentRoom_9 = value;
	}

	inline static int32_t get_offset_of_currentRoomString_10() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___currentRoomString_10)); }
	inline String_t* get_currentRoomString_10() const { return ___currentRoomString_10; }
	inline String_t** get_address_of_currentRoomString_10() { return &___currentRoomString_10; }
	inline void set_currentRoomString_10(String_t* value)
	{
		___currentRoomString_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRoomString_10), (void*)value);
	}

	inline static int32_t get_offset_of_target_11() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___target_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_target_11() const { return ___target_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_target_11() { return &___target_11; }
	inline void set_target_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___target_11 = value;
	}

	inline static int32_t get_offset_of_route_12() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___route_12)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_route_12() const { return ___route_12; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_route_12() { return &___route_12; }
	inline void set_route_12(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___route_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___route_12), (void*)value);
	}

	inline static int32_t get_offset_of_kitchen_13() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___kitchen_13)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_kitchen_13() const { return ___kitchen_13; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_kitchen_13() { return &___kitchen_13; }
	inline void set_kitchen_13(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___kitchen_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kitchen_13), (void*)value);
	}

	inline static int32_t get_offset_of_livingRoom_14() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___livingRoom_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_livingRoom_14() const { return ___livingRoom_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_livingRoom_14() { return &___livingRoom_14; }
	inline void set_livingRoom_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___livingRoom_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livingRoom_14), (void*)value);
	}

	inline static int32_t get_offset_of_diningRoom_15() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___diningRoom_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_diningRoom_15() const { return ___diningRoom_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_diningRoom_15() { return &___diningRoom_15; }
	inline void set_diningRoom_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___diningRoom_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diningRoom_15), (void*)value);
	}

	inline static int32_t get_offset_of_bathroom_16() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___bathroom_16)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_bathroom_16() const { return ___bathroom_16; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_bathroom_16() { return &___bathroom_16; }
	inline void set_bathroom_16(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___bathroom_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bathroom_16), (void*)value);
	}

	inline static int32_t get_offset_of_landing_17() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___landing_17)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_landing_17() const { return ___landing_17; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_landing_17() { return &___landing_17; }
	inline void set_landing_17(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___landing_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___landing_17), (void*)value);
	}

	inline static int32_t get_offset_of_bedroom_18() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___bedroom_18)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_bedroom_18() const { return ___bedroom_18; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_bedroom_18() { return &___bedroom_18; }
	inline void set_bedroom_18(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___bedroom_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bedroom_18), (void*)value);
	}

	inline static int32_t get_offset_of_roofTerrace_19() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___roofTerrace_19)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_roofTerrace_19() const { return ___roofTerrace_19; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_roofTerrace_19() { return &___roofTerrace_19; }
	inline void set_roofTerrace_19(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___roofTerrace_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roofTerrace_19), (void*)value);
	}

	inline static int32_t get_offset_of_stairs_20() { return static_cast<int32_t>(offsetof(JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573, ___stairs_20)); }
	inline Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * get_stairs_20() const { return ___stairs_20; }
	inline Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 ** get_address_of_stairs_20() { return &___stairs_20; }
	inline void set_stairs_20(Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * value)
	{
		___stairs_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stairs_20), (void*)value);
	}
};


// LilDoodMovement
struct  LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rigidbody2D LilDoodMovement::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_4;
	// System.Single LilDoodMovement::timeTilJump
	float ___timeTilJump_5;
	// System.Single LilDoodMovement::jumpForce
	float ___jumpForce_6;
	// UnityEngine.PolygonCollider2D LilDoodMovement::polygonCollider
	PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * ___polygonCollider_7;
	// Pathfinding LilDoodMovement::pathfinding
	Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * ___pathfinding_8;
	// DudeNeeds LilDoodMovement::dudeNeeds
	DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * ___dudeNeeds_9;
	// UnityEngine.Vector2 LilDoodMovement::currentRoom
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___currentRoom_10;
	// System.String LilDoodMovement::currentRoomString
	String_t* ___currentRoomString_11;
	// UnityEngine.Vector2 LilDoodMovement::target
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___target_12;
	// System.Collections.ArrayList LilDoodMovement::route
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___route_13;
	// UnityEngine.Transform LilDoodMovement::kitchen
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___kitchen_14;
	// UnityEngine.Transform LilDoodMovement::livingRoom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___livingRoom_15;
	// UnityEngine.Transform LilDoodMovement::diningRoom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___diningRoom_16;
	// UnityEngine.Transform LilDoodMovement::bathroom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___bathroom_17;
	// UnityEngine.Transform LilDoodMovement::landing
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___landing_18;
	// UnityEngine.Transform LilDoodMovement::bedroom
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___bedroom_19;
	// UnityEngine.Transform LilDoodMovement::roofTerrace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___roofTerrace_20;
	// Stairs LilDoodMovement::stairs
	Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * ___stairs_21;
	// UnityEngine.Transform LilDoodMovement::defaultParent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___defaultParent_22;
	// System.Boolean LilDoodMovement::beingCarried
	bool ___beingCarried_23;
	// UnityEngine.AudioSource LilDoodMovement::boing
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___boing_24;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___rb_4)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_timeTilJump_5() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___timeTilJump_5)); }
	inline float get_timeTilJump_5() const { return ___timeTilJump_5; }
	inline float* get_address_of_timeTilJump_5() { return &___timeTilJump_5; }
	inline void set_timeTilJump_5(float value)
	{
		___timeTilJump_5 = value;
	}

	inline static int32_t get_offset_of_jumpForce_6() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___jumpForce_6)); }
	inline float get_jumpForce_6() const { return ___jumpForce_6; }
	inline float* get_address_of_jumpForce_6() { return &___jumpForce_6; }
	inline void set_jumpForce_6(float value)
	{
		___jumpForce_6 = value;
	}

	inline static int32_t get_offset_of_polygonCollider_7() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___polygonCollider_7)); }
	inline PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * get_polygonCollider_7() const { return ___polygonCollider_7; }
	inline PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 ** get_address_of_polygonCollider_7() { return &___polygonCollider_7; }
	inline void set_polygonCollider_7(PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * value)
	{
		___polygonCollider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygonCollider_7), (void*)value);
	}

	inline static int32_t get_offset_of_pathfinding_8() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___pathfinding_8)); }
	inline Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * get_pathfinding_8() const { return ___pathfinding_8; }
	inline Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 ** get_address_of_pathfinding_8() { return &___pathfinding_8; }
	inline void set_pathfinding_8(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * value)
	{
		___pathfinding_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathfinding_8), (void*)value);
	}

	inline static int32_t get_offset_of_dudeNeeds_9() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___dudeNeeds_9)); }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * get_dudeNeeds_9() const { return ___dudeNeeds_9; }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F ** get_address_of_dudeNeeds_9() { return &___dudeNeeds_9; }
	inline void set_dudeNeeds_9(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * value)
	{
		___dudeNeeds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dudeNeeds_9), (void*)value);
	}

	inline static int32_t get_offset_of_currentRoom_10() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___currentRoom_10)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_currentRoom_10() const { return ___currentRoom_10; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_currentRoom_10() { return &___currentRoom_10; }
	inline void set_currentRoom_10(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___currentRoom_10 = value;
	}

	inline static int32_t get_offset_of_currentRoomString_11() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___currentRoomString_11)); }
	inline String_t* get_currentRoomString_11() const { return ___currentRoomString_11; }
	inline String_t** get_address_of_currentRoomString_11() { return &___currentRoomString_11; }
	inline void set_currentRoomString_11(String_t* value)
	{
		___currentRoomString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRoomString_11), (void*)value);
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___target_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_target_12() const { return ___target_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___target_12 = value;
	}

	inline static int32_t get_offset_of_route_13() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___route_13)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_route_13() const { return ___route_13; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_route_13() { return &___route_13; }
	inline void set_route_13(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___route_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___route_13), (void*)value);
	}

	inline static int32_t get_offset_of_kitchen_14() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___kitchen_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_kitchen_14() const { return ___kitchen_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_kitchen_14() { return &___kitchen_14; }
	inline void set_kitchen_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___kitchen_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kitchen_14), (void*)value);
	}

	inline static int32_t get_offset_of_livingRoom_15() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___livingRoom_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_livingRoom_15() const { return ___livingRoom_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_livingRoom_15() { return &___livingRoom_15; }
	inline void set_livingRoom_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___livingRoom_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livingRoom_15), (void*)value);
	}

	inline static int32_t get_offset_of_diningRoom_16() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___diningRoom_16)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_diningRoom_16() const { return ___diningRoom_16; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_diningRoom_16() { return &___diningRoom_16; }
	inline void set_diningRoom_16(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___diningRoom_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diningRoom_16), (void*)value);
	}

	inline static int32_t get_offset_of_bathroom_17() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___bathroom_17)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_bathroom_17() const { return ___bathroom_17; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_bathroom_17() { return &___bathroom_17; }
	inline void set_bathroom_17(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___bathroom_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bathroom_17), (void*)value);
	}

	inline static int32_t get_offset_of_landing_18() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___landing_18)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_landing_18() const { return ___landing_18; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_landing_18() { return &___landing_18; }
	inline void set_landing_18(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___landing_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___landing_18), (void*)value);
	}

	inline static int32_t get_offset_of_bedroom_19() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___bedroom_19)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_bedroom_19() const { return ___bedroom_19; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_bedroom_19() { return &___bedroom_19; }
	inline void set_bedroom_19(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___bedroom_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bedroom_19), (void*)value);
	}

	inline static int32_t get_offset_of_roofTerrace_20() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___roofTerrace_20)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_roofTerrace_20() const { return ___roofTerrace_20; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_roofTerrace_20() { return &___roofTerrace_20; }
	inline void set_roofTerrace_20(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___roofTerrace_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roofTerrace_20), (void*)value);
	}

	inline static int32_t get_offset_of_stairs_21() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___stairs_21)); }
	inline Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * get_stairs_21() const { return ___stairs_21; }
	inline Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 ** get_address_of_stairs_21() { return &___stairs_21; }
	inline void set_stairs_21(Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * value)
	{
		___stairs_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stairs_21), (void*)value);
	}

	inline static int32_t get_offset_of_defaultParent_22() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___defaultParent_22)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_defaultParent_22() const { return ___defaultParent_22; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_defaultParent_22() { return &___defaultParent_22; }
	inline void set_defaultParent_22(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___defaultParent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultParent_22), (void*)value);
	}

	inline static int32_t get_offset_of_beingCarried_23() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___beingCarried_23)); }
	inline bool get_beingCarried_23() const { return ___beingCarried_23; }
	inline bool* get_address_of_beingCarried_23() { return &___beingCarried_23; }
	inline void set_beingCarried_23(bool value)
	{
		___beingCarried_23 = value;
	}

	inline static int32_t get_offset_of_boing_24() { return static_cast<int32_t>(offsetof(LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E, ___boing_24)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_boing_24() const { return ___boing_24; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_boing_24() { return &___boing_24; }
	inline void set_boing_24(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___boing_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boing_24), (void*)value);
	}
};


// Pathfinding
struct  Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String[] Pathfinding::kitchenRooms
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___kitchenRooms_4;
	// System.String[] Pathfinding::livingRoomRooms
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___livingRoomRooms_5;
	// System.String[] Pathfinding::diningRoomRooms
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___diningRoomRooms_6;
	// System.String[] Pathfinding::bathroomRooms
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___bathroomRooms_7;
	// System.String[] Pathfinding::landingRooms
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___landingRooms_8;
	// System.String[] Pathfinding::bedroomRooms
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___bedroomRooms_9;
	// System.String[] Pathfinding::roofTerraceRooms
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___roofTerraceRooms_10;
	// System.String Pathfinding::start
	String_t* ___start_11;
	// System.String Pathfinding::target
	String_t* ___target_12;
	// System.Collections.ArrayList Pathfinding::visited
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___visited_13;
	// Room Pathfinding::pathFound
	Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * ___pathFound_14;

public:
	inline static int32_t get_offset_of_kitchenRooms_4() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___kitchenRooms_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_kitchenRooms_4() const { return ___kitchenRooms_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_kitchenRooms_4() { return &___kitchenRooms_4; }
	inline void set_kitchenRooms_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___kitchenRooms_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kitchenRooms_4), (void*)value);
	}

	inline static int32_t get_offset_of_livingRoomRooms_5() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___livingRoomRooms_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_livingRoomRooms_5() const { return ___livingRoomRooms_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_livingRoomRooms_5() { return &___livingRoomRooms_5; }
	inline void set_livingRoomRooms_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___livingRoomRooms_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livingRoomRooms_5), (void*)value);
	}

	inline static int32_t get_offset_of_diningRoomRooms_6() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___diningRoomRooms_6)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_diningRoomRooms_6() const { return ___diningRoomRooms_6; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_diningRoomRooms_6() { return &___diningRoomRooms_6; }
	inline void set_diningRoomRooms_6(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___diningRoomRooms_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diningRoomRooms_6), (void*)value);
	}

	inline static int32_t get_offset_of_bathroomRooms_7() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___bathroomRooms_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_bathroomRooms_7() const { return ___bathroomRooms_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_bathroomRooms_7() { return &___bathroomRooms_7; }
	inline void set_bathroomRooms_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___bathroomRooms_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bathroomRooms_7), (void*)value);
	}

	inline static int32_t get_offset_of_landingRooms_8() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___landingRooms_8)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_landingRooms_8() const { return ___landingRooms_8; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_landingRooms_8() { return &___landingRooms_8; }
	inline void set_landingRooms_8(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___landingRooms_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___landingRooms_8), (void*)value);
	}

	inline static int32_t get_offset_of_bedroomRooms_9() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___bedroomRooms_9)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_bedroomRooms_9() const { return ___bedroomRooms_9; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_bedroomRooms_9() { return &___bedroomRooms_9; }
	inline void set_bedroomRooms_9(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___bedroomRooms_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bedroomRooms_9), (void*)value);
	}

	inline static int32_t get_offset_of_roofTerraceRooms_10() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___roofTerraceRooms_10)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_roofTerraceRooms_10() const { return ___roofTerraceRooms_10; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_roofTerraceRooms_10() { return &___roofTerraceRooms_10; }
	inline void set_roofTerraceRooms_10(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___roofTerraceRooms_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roofTerraceRooms_10), (void*)value);
	}

	inline static int32_t get_offset_of_start_11() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___start_11)); }
	inline String_t* get_start_11() const { return ___start_11; }
	inline String_t** get_address_of_start_11() { return &___start_11; }
	inline void set_start_11(String_t* value)
	{
		___start_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___start_11), (void*)value);
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___target_12)); }
	inline String_t* get_target_12() const { return ___target_12; }
	inline String_t** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(String_t* value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_12), (void*)value);
	}

	inline static int32_t get_offset_of_visited_13() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___visited_13)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_visited_13() const { return ___visited_13; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_visited_13() { return &___visited_13; }
	inline void set_visited_13(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___visited_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visited_13), (void*)value);
	}

	inline static int32_t get_offset_of_pathFound_14() { return static_cast<int32_t>(offsetof(Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1, ___pathFound_14)); }
	inline Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * get_pathFound_14() const { return ___pathFound_14; }
	inline Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 ** get_address_of_pathFound_14() { return &___pathFound_14; }
	inline void set_pathFound_14(Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * value)
	{
		___pathFound_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathFound_14), (void*)value);
	}
};


// PlayerCamera
struct  PlayerCamera_tF1E487BFA22293AE1490DCF28C21E288B564FF5D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// PotGrowth
struct  PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject PotGrowth::growingPlant
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___growingPlant_4;
	// UnityEngine.GameObject PotGrowth::plantToGrow
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___plantToGrow_5;
	// DudeNeeds PotGrowth::dudeNeeds
	DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * ___dudeNeeds_6;
	// UnityEngine.GameObject PotGrowth::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_7;

public:
	inline static int32_t get_offset_of_growingPlant_4() { return static_cast<int32_t>(offsetof(PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC, ___growingPlant_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_growingPlant_4() const { return ___growingPlant_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_growingPlant_4() { return &___growingPlant_4; }
	inline void set_growingPlant_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___growingPlant_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___growingPlant_4), (void*)value);
	}

	inline static int32_t get_offset_of_plantToGrow_5() { return static_cast<int32_t>(offsetof(PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC, ___plantToGrow_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_plantToGrow_5() const { return ___plantToGrow_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_plantToGrow_5() { return &___plantToGrow_5; }
	inline void set_plantToGrow_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___plantToGrow_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plantToGrow_5), (void*)value);
	}

	inline static int32_t get_offset_of_dudeNeeds_6() { return static_cast<int32_t>(offsetof(PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC, ___dudeNeeds_6)); }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * get_dudeNeeds_6() const { return ___dudeNeeds_6; }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F ** get_address_of_dudeNeeds_6() { return &___dudeNeeds_6; }
	inline void set_dudeNeeds_6(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * value)
	{
		___dudeNeeds_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dudeNeeds_6), (void*)value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC, ___player_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_7() const { return ___player_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_7), (void*)value);
	}
};


// Retry
struct  Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Retry::mourn
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mourn_4;
	// UnityEngine.GameObject Retry::mourn2
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mourn2_5;
	// UnityEngine.GameObject Retry::mourn3
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mourn3_6;
	// UnityEngine.GameObject Retry::boi
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boi_7;
	// UnityEngine.GameObject Retry::boi2
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boi2_8;
	// UnityEngine.GameObject Retry::boi3
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boi3_9;
	// UnityEngine.GameObject Retry::boi4
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boi4_10;
	// UnityEngine.GameObject Retry::boi5
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boi5_11;
	// UnityEngine.GameObject Retry::boi6
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boi6_12;
	// DudeNeeds Retry::dudeNeeds
	DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * ___dudeNeeds_13;
	// DudeNeeds Retry::dudeNeeds2
	DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * ___dudeNeeds2_14;
	// DudeNeeds Retry::dudeNeeds3
	DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * ___dudeNeeds3_15;
	// DudeNeeds Retry::dudeNeeds4
	DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * ___dudeNeeds4_16;
	// DudeNeeds Retry::dudeNeeds5
	DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * ___dudeNeeds5_17;
	// DudeNeeds Retry::dudeNeeds6
	DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * ___dudeNeeds6_18;
	// System.Boolean Retry::gameOver
	bool ___gameOver_19;
	// UnityEngine.GameObject Retry::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_20;
	// System.Nullable`1<UnityEngine.Vector2> Retry::startPos
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  ___startPos_21;
	// System.Nullable`1<UnityEngine.Vector2> Retry::target
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  ___target_22;
	// System.Single Retry::speed
	float ___speed_23;
	// System.Nullable`1<System.Single> Retry::startTime
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___startTime_24;
	// System.Boolean Retry::winScript
	bool ___winScript_25;

public:
	inline static int32_t get_offset_of_mourn_4() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___mourn_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mourn_4() const { return ___mourn_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mourn_4() { return &___mourn_4; }
	inline void set_mourn_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mourn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mourn_4), (void*)value);
	}

	inline static int32_t get_offset_of_mourn2_5() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___mourn2_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mourn2_5() const { return ___mourn2_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mourn2_5() { return &___mourn2_5; }
	inline void set_mourn2_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mourn2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mourn2_5), (void*)value);
	}

	inline static int32_t get_offset_of_mourn3_6() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___mourn3_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mourn3_6() const { return ___mourn3_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mourn3_6() { return &___mourn3_6; }
	inline void set_mourn3_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mourn3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mourn3_6), (void*)value);
	}

	inline static int32_t get_offset_of_boi_7() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___boi_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boi_7() const { return ___boi_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boi_7() { return &___boi_7; }
	inline void set_boi_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boi_7), (void*)value);
	}

	inline static int32_t get_offset_of_boi2_8() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___boi2_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boi2_8() const { return ___boi2_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boi2_8() { return &___boi2_8; }
	inline void set_boi2_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boi2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boi2_8), (void*)value);
	}

	inline static int32_t get_offset_of_boi3_9() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___boi3_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boi3_9() const { return ___boi3_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boi3_9() { return &___boi3_9; }
	inline void set_boi3_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boi3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boi3_9), (void*)value);
	}

	inline static int32_t get_offset_of_boi4_10() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___boi4_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boi4_10() const { return ___boi4_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boi4_10() { return &___boi4_10; }
	inline void set_boi4_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boi4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boi4_10), (void*)value);
	}

	inline static int32_t get_offset_of_boi5_11() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___boi5_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boi5_11() const { return ___boi5_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boi5_11() { return &___boi5_11; }
	inline void set_boi5_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boi5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boi5_11), (void*)value);
	}

	inline static int32_t get_offset_of_boi6_12() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___boi6_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boi6_12() const { return ___boi6_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boi6_12() { return &___boi6_12; }
	inline void set_boi6_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boi6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boi6_12), (void*)value);
	}

	inline static int32_t get_offset_of_dudeNeeds_13() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___dudeNeeds_13)); }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * get_dudeNeeds_13() const { return ___dudeNeeds_13; }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F ** get_address_of_dudeNeeds_13() { return &___dudeNeeds_13; }
	inline void set_dudeNeeds_13(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * value)
	{
		___dudeNeeds_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dudeNeeds_13), (void*)value);
	}

	inline static int32_t get_offset_of_dudeNeeds2_14() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___dudeNeeds2_14)); }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * get_dudeNeeds2_14() const { return ___dudeNeeds2_14; }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F ** get_address_of_dudeNeeds2_14() { return &___dudeNeeds2_14; }
	inline void set_dudeNeeds2_14(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * value)
	{
		___dudeNeeds2_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dudeNeeds2_14), (void*)value);
	}

	inline static int32_t get_offset_of_dudeNeeds3_15() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___dudeNeeds3_15)); }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * get_dudeNeeds3_15() const { return ___dudeNeeds3_15; }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F ** get_address_of_dudeNeeds3_15() { return &___dudeNeeds3_15; }
	inline void set_dudeNeeds3_15(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * value)
	{
		___dudeNeeds3_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dudeNeeds3_15), (void*)value);
	}

	inline static int32_t get_offset_of_dudeNeeds4_16() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___dudeNeeds4_16)); }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * get_dudeNeeds4_16() const { return ___dudeNeeds4_16; }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F ** get_address_of_dudeNeeds4_16() { return &___dudeNeeds4_16; }
	inline void set_dudeNeeds4_16(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * value)
	{
		___dudeNeeds4_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dudeNeeds4_16), (void*)value);
	}

	inline static int32_t get_offset_of_dudeNeeds5_17() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___dudeNeeds5_17)); }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * get_dudeNeeds5_17() const { return ___dudeNeeds5_17; }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F ** get_address_of_dudeNeeds5_17() { return &___dudeNeeds5_17; }
	inline void set_dudeNeeds5_17(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * value)
	{
		___dudeNeeds5_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dudeNeeds5_17), (void*)value);
	}

	inline static int32_t get_offset_of_dudeNeeds6_18() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___dudeNeeds6_18)); }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * get_dudeNeeds6_18() const { return ___dudeNeeds6_18; }
	inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F ** get_address_of_dudeNeeds6_18() { return &___dudeNeeds6_18; }
	inline void set_dudeNeeds6_18(DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * value)
	{
		___dudeNeeds6_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dudeNeeds6_18), (void*)value);
	}

	inline static int32_t get_offset_of_gameOver_19() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___gameOver_19)); }
	inline bool get_gameOver_19() const { return ___gameOver_19; }
	inline bool* get_address_of_gameOver_19() { return &___gameOver_19; }
	inline void set_gameOver_19(bool value)
	{
		___gameOver_19 = value;
	}

	inline static int32_t get_offset_of_player_20() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___player_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_20() const { return ___player_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_20() { return &___player_20; }
	inline void set_player_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_20), (void*)value);
	}

	inline static int32_t get_offset_of_startPos_21() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___startPos_21)); }
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  get_startPos_21() const { return ___startPos_21; }
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * get_address_of_startPos_21() { return &___startPos_21; }
	inline void set_startPos_21(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  value)
	{
		___startPos_21 = value;
	}

	inline static int32_t get_offset_of_target_22() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___target_22)); }
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  get_target_22() const { return ___target_22; }
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * get_address_of_target_22() { return &___target_22; }
	inline void set_target_22(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  value)
	{
		___target_22 = value;
	}

	inline static int32_t get_offset_of_speed_23() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___speed_23)); }
	inline float get_speed_23() const { return ___speed_23; }
	inline float* get_address_of_speed_23() { return &___speed_23; }
	inline void set_speed_23(float value)
	{
		___speed_23 = value;
	}

	inline static int32_t get_offset_of_startTime_24() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___startTime_24)); }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  get_startTime_24() const { return ___startTime_24; }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * get_address_of_startTime_24() { return &___startTime_24; }
	inline void set_startTime_24(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  value)
	{
		___startTime_24 = value;
	}

	inline static int32_t get_offset_of_winScript_25() { return static_cast<int32_t>(offsetof(Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00, ___winScript_25)); }
	inline bool get_winScript_25() const { return ___winScript_25; }
	inline bool* get_address_of_winScript_25() { return &___winScript_25; }
	inline void set_winScript_25(bool value)
	{
		___winScript_25 = value;
	}
};


// Stairs
struct  Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.PlatformEffector2D Stairs::platformEffector
	PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56 * ___platformEffector_4;
	// System.Int32 Stairs::mask
	int32_t ___mask_5;
	// System.Collections.ArrayList Stairs::stairMasks
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___stairMasks_6;
	// System.Collections.ArrayList Stairs::wallMasks
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___wallMasks_7;

public:
	inline static int32_t get_offset_of_platformEffector_4() { return static_cast<int32_t>(offsetof(Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97, ___platformEffector_4)); }
	inline PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56 * get_platformEffector_4() const { return ___platformEffector_4; }
	inline PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56 ** get_address_of_platformEffector_4() { return &___platformEffector_4; }
	inline void set_platformEffector_4(PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56 * value)
	{
		___platformEffector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformEffector_4), (void*)value);
	}

	inline static int32_t get_offset_of_mask_5() { return static_cast<int32_t>(offsetof(Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97, ___mask_5)); }
	inline int32_t get_mask_5() const { return ___mask_5; }
	inline int32_t* get_address_of_mask_5() { return &___mask_5; }
	inline void set_mask_5(int32_t value)
	{
		___mask_5 = value;
	}

	inline static int32_t get_offset_of_stairMasks_6() { return static_cast<int32_t>(offsetof(Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97, ___stairMasks_6)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_stairMasks_6() const { return ___stairMasks_6; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_stairMasks_6() { return &___stairMasks_6; }
	inline void set_stairMasks_6(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___stairMasks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stairMasks_6), (void*)value);
	}

	inline static int32_t get_offset_of_wallMasks_7() { return static_cast<int32_t>(offsetof(Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97, ___wallMasks_7)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_wallMasks_7() const { return ___wallMasks_7; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_wallMasks_7() { return &___wallMasks_7; }
	inline void set_wallMasks_7(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___wallMasks_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallMasks_7), (void*)value);
	}
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.CapsuleCollider2D
struct  CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};


// UnityEngine.PlatformEffector2D
struct  PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56  : public Effector2D_t8B3B6D12D58089662060F3B2C98ACC7EDB966672
{
public:

public:
};


// UnityEngine.PolygonCollider2D
struct  PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};


// UnityTemplateProjects.SimpleCameraController
struct  SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_TargetCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_TargetCameraState_4;
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_InterpolatingCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_InterpolatingCameraState_5;
	// System.Single UnityTemplateProjects.SimpleCameraController::boost
	float ___boost_6;
	// System.Single UnityTemplateProjects.SimpleCameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve UnityTemplateProjects.SimpleCameraController::mouseSensitivityCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___mouseSensitivityCurve_8;
	// System.Single UnityTemplateProjects.SimpleCameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean UnityTemplateProjects.SimpleCameraController::invertY
	bool ___invertY_10;

public:
	inline static int32_t get_offset_of_m_TargetCameraState_4() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_TargetCameraState_4)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_TargetCameraState_4() const { return ___m_TargetCameraState_4; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_TargetCameraState_4() { return &___m_TargetCameraState_4; }
	inline void set_m_TargetCameraState_4(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_TargetCameraState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetCameraState_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_InterpolatingCameraState_5() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_InterpolatingCameraState_5)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_InterpolatingCameraState_5() const { return ___m_InterpolatingCameraState_5; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_InterpolatingCameraState_5() { return &___m_InterpolatingCameraState_5; }
	inline void set_m_InterpolatingCameraState_5(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_InterpolatingCameraState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterpolatingCameraState_5), (void*)value);
	}

	inline static int32_t get_offset_of_boost_6() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___boost_6)); }
	inline float get_boost_6() const { return ___boost_6; }
	inline float* get_address_of_boost_6() { return &___boost_6; }
	inline void set_boost_6(float value)
	{
		___boost_6 = value;
	}

	inline static int32_t get_offset_of_positionLerpTime_7() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___positionLerpTime_7)); }
	inline float get_positionLerpTime_7() const { return ___positionLerpTime_7; }
	inline float* get_address_of_positionLerpTime_7() { return &___positionLerpTime_7; }
	inline void set_positionLerpTime_7(float value)
	{
		___positionLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivityCurve_8() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___mouseSensitivityCurve_8)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_mouseSensitivityCurve_8() const { return ___mouseSensitivityCurve_8; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_mouseSensitivityCurve_8() { return &___mouseSensitivityCurve_8; }
	inline void set_mouseSensitivityCurve_8(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___mouseSensitivityCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseSensitivityCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotationLerpTime_9() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___rotationLerpTime_9)); }
	inline float get_rotationLerpTime_9() const { return ___rotationLerpTime_9; }
	inline float* get_address_of_rotationLerpTime_9() { return &___rotationLerpTime_9; }
	inline void set_rotationLerpTime_9(float value)
	{
		___rotationLerpTime_9 = value;
	}

	inline static int32_t get_offset_of_invertY_10() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___invertY_10)); }
	inline bool get_invertY_10() const { return ___invertY_10; }
	inline bool* get_address_of_invertY_10() { return &___invertY_10; }
	inline void set_invertY_10(bool value)
	{
		___invertY_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  m_Items[1];

public:
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_gshared_inline (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared_inline (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_gshared (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_gshared (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_inline (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *, const RuntimeMethod*))Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_inline (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, float, const RuntimeMethod*))Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_gshared)(__this, ___value0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(!0)
inline void Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4 (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9 (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, const RuntimeMethod*))Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_gshared)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector2>::get_Value()
inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *, const RuntimeMethod*))Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_gshared)(__this, method);
}
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_m6B991540378DB8541CEB9472F7ED2BF5FF72B5DB (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___other0, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m94E4EDA2F909FACDA1591F7242109AFB650640AA (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider2D>()
inline CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * Component_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m51F2595169CB099FA35B5DBFD9F9E056DF0324E9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3 (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9A7BE015CC1472A59F1077CADFB22AD67F8722D9 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___methodName0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m09E1A2E24DABA5BBC613E35772AE2C1C35C6E40C (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Collider2D_get_offset_mCB3DEFB9ACB05211320B8406B01F089EF7F8788D (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.CapsuleCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CapsuleCollider2D_get_size_m2E344F2DA3881C6E8420681C40A1218DFD420A60 (CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901 (String_t* ___layerName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_UnaryNegation_m3FA0AE2F9B031765EFA566B25F5453C3B001FF4D (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  Physics2D_Raycast_mBEB66E9AA034BD0AE1B1C99DF872247B0131CBDD (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___origin0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * RaycastHit2D_get_collider_m6A7EC53B2E179C2EFF4F29018A132B2979CBE976 (RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RaycastHit2D_get_point_mC567E234B1B673C3A9819023C3DC97C781443098 (RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F (Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Collision2D_get_transform_m7008F633C99CE8A2694F88230713913244F5D262 (Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.PolygonCollider2D>()
inline PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * Component_GetComponent_TisPolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_mD54950223AD8BD8D30B89144A0774268FEBDDC80 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void DudeNeeds::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_Hide_m3A9017CC5720B85F1413C58C4061C781E8952EAB (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C (const RuntimeMethod* method);
// System.Void DudeNeeds::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_Show_m8FA91C3EFBFD16197B49C0B0DEDCE0C366A57FC9 (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_isKinematic_mA7711684E1E1E25FA7C1A1FF297B6E45DFD03BEE (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mFE4658C0AE6643026A7CE7452857CA37DB687436 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___force0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Pathfinding>()
inline Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * Component_GetComponent_TisPathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1_m2B1F22FA56BCE04B99BE1DC3B3025387AEE247B7 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void JerryMovement::SetRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_SetRoute_m34132DCEA36FC8656D6548A4A96DB54A22C025BF (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method);
// System.String JerryMovement::GetRandomTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JerryMovement_GetRandomTarget_m96E3ABFDE90DCD5B7C316173DF4EA2D639662255 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, String_t* ___currentRoom0, const RuntimeMethod* method);
// Room Pathfinding::Pathfind(System.String,System.String,System.Boolean,System.Collections.ArrayList,Room)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * Pathfinding_Pathfind_m00B888F5F7E004A5EE862337086E241AFF4FC787 (Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * __this, String_t* ___target0, String_t* ___current1, bool ___isStart2, ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___visited3, Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * ___previousRoom4, const RuntimeMethod* method);
// System.Collections.ArrayList Room::GetRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * Room_GetRoute_m5D289AEAA29BD597761B9F392647B58918E61323 (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * __this, const RuntimeMethod* method);
// System.Void JerryMovement::SetTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_SetTarget_mBB68D09B446AE35155DF451FB885C06A561BCBE9 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, String_t* ___room0, const RuntimeMethod* method);
// System.Void JerryMovement::PrintRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_PrintRoute_mF6509D48981EFCE184A316AB8507661B7881C094 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void JerryMovement::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_Movement_m2967F3A123ADDCC8D5DD1D60E5E38D5ACE8935EA (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359 (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void JerryMovement::JumpingDude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_JumpingDude_m8741AF991BF51350A87C739AAAC7E7A5C6BD3F17 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_mE3B1D6FC26F26FA4218F1BCFDD1E41BF3ACB34B1 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<DudeNeeds>()
inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * Component_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mC1E03B5C8F755D53A23982F3498E4E8BC4917D4F (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void LilDoodMovement::SetRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_SetRoute_m600CBF9538FDCB7A2ACD5F644C134C849CB68315 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method);
// System.String LilDoodMovement::GetRandomTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LilDoodMovement_GetRandomTarget_m7135F978E2B1021806619F714CCE667C3DDCA1F4 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, String_t* ___currentRoom0, const RuntimeMethod* method);
// System.Void LilDoodMovement::SetTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_SetTarget_m54CBE98C2C403E5CBD90165701C2640B99BB2318 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, String_t* ___room0, const RuntimeMethod* method);
// System.Void LilDoodMovement::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_Movement_m69CB0DA20EA3557763C147B9C3C64270ED9D10FB (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void LilDoodMovement::JumpingDude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_JumpingDude_m80B1B330B32195E38544DD1E36E2A7D3A8539DFC (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_m4593B8D87314F00947B795AA442B90F1598B1104 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6 (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * __this, const RuntimeMethod* method);
// System.String[] Pathfinding::GetConnectedRooms(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Pathfinding_GetConnectedRooms_m3D445850B4B0C398B75E818A2AB29C630B5B8657 (Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * __this, String_t* ___current0, const RuntimeMethod* method);
// System.Void Room::.ctor(System.String,Room)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_m93B6458B65D5A596A612EF75AB1F7334B049004B (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * __this, String_t* ___name0, Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * ___previousRoom1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DudeNeeds>()
inline DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m0E63ED0F050FCC35A4216220C584BE3D3F77B0E1 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Collections.ArrayList Room::GetAllPreviousRooms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * Room_GetAllPreviousRooms_mDE98F4B80D522DF86560EDCDF52A284D64655FF2 (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.PlatformEffector2D>()
inline PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56 * Component_GetComponent_TisPlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56_m264CB10838725FAF7E7CCA41E980B70387B270AF (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void Stairs::RemoveFromStairMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs_RemoveFromStairMask_m05F2042A3E80DB4659742B0277773A498BFA75BF (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, int32_t ___layer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193 (int32_t ___key0, const RuntimeMethod* method);
// System.Void Stairs::AddToStairMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs_AddToStairMask_m6947A30645F5AFFEB537DF82627C080F3B7E8B83 (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, int32_t ___layer0, const RuntimeMethod* method);
// System.Void UnityEngine.Effector2D::set_colliderMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effector2D_set_colliderMask_mB0F0CDEDFCD07A65605A9474EE2C23E749E6D588 (Effector2D_t8B3B6D12D58089662060F3B2C98ACC7EDB966672 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431 (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Input_get_mouseScrollDelta_m66F785090C429CE7DCDEF09C92CDBDD08FCDE98D (const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* ___keys0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m94E4EDA2F909FACDA1591F7242109AFB650640AA (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void CameraMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Start_mBCE1314640327140E3E4FE46836987BA8DBDBF44 (CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CameraMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Update_m9FC9432BAC7E92351E6568130FDEA7D6443A721B (CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovement_Update_m9FC9432BAC7E92351E6568130FDEA7D6443A721B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (target.HasValue)
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_0 = __this->get_address_of_target_5();
		bool L_1 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_inline((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0130;
		}
	}
	{
		// if (!startTime.HasValue || !startPos.HasValue)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_2 = __this->get_address_of_startTime_7();
		bool L_3 = Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_inline((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)L_2, /*hidden argument*/Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_4 = __this->get_address_of_startPos_4();
		bool L_5 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_inline((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_4, /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0055;
		}
	}

IL_002a:
	{
		// startTime = Time.time;
		float L_6 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var);
		__this->set_startTime_7(L_7);
		// startPos = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_9, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_startPos_4(L_11);
	}

IL_0055:
	{
		// float distCovered = (Time.time - startTime.Value) * speed;
		float L_12 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_13 = __this->get_address_of_startTime_7();
		float L_14 = Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)L_13, /*hidden argument*/Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var);
		float L_15 = __this->get_speed_6();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15));
		// float journeyLength = Vector2.Distance(startPos.Value, target.Value);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_16 = __this->get_address_of_startPos_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_16, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_18 = __this->get_address_of_target_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_18, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_20 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_17, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// if (journeyLength == 0)
		float L_21 = V_1;
		if ((!(((float)L_21) == ((float)(0.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		// target = null;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_22 = __this->get_address_of_target_5();
		il2cpp_codegen_initobj(L_22, sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		// startTime = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_23 = __this->get_address_of_startTime_7();
		il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 ));
		// startPos = null;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_24 = __this->get_address_of_startPos_4();
		il2cpp_codegen_initobj(L_24, sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		// return;
		return;
	}

IL_00b7:
	{
		// float fractionOfJourney = distCovered / journeyLength;
		float L_25 = V_0;
		float L_26 = V_1;
		V_2 = ((float)((float)L_25/(float)L_26));
		// transform.position = Vector2.Lerp(startPos.Value, target.Value, fractionOfJourney);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_28 = __this->get_address_of_startPos_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_28, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_30 = __this->get_address_of_target_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_30, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		float L_32 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_29, L_31, L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_33, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_27, L_34, /*hidden argument*/NULL);
		// if (transform.position.Equals(target.Value))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_37 = __this->get_address_of_target_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_37, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_38, /*hidden argument*/NULL);
		bool L_40 = Vector3_Equals_m6B991540378DB8541CEB9472F7ED2BF5FF72B5DB((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0130;
		}
	}
	{
		// target = null;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_41 = __this->get_address_of_target_5();
		il2cpp_codegen_initobj(L_41, sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		// startTime = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_42 = __this->get_address_of_startTime_7();
		il2cpp_codegen_initobj(L_42, sizeof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 ));
		// startPos = null;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_43 = __this->get_address_of_startPos_4();
		il2cpp_codegen_initobj(L_43, sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
	}

IL_0130:
	{
		// }
		return;
	}
}
// System.Void CameraMovement::MoveCamera(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_MoveCamera_m83704845004C16663281296729C69A42E0423327 (CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4 * __this, String_t* ___room0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovement_MoveCamera_m83704845004C16663281296729C69A42E0423327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// startPos = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_1, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_startPos_4(L_3);
		// startTime = Time.time;
		float L_4 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var);
		__this->set_startTime_7(L_5);
		// switch (room)
		String_t* L_6 = ___room0;
		uint32_t L_7 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m94E4EDA2F909FACDA1591F7242109AFB650640AA(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)758455787)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)170810391))))
		{
			goto IL_00dd;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)385580919))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)758455787))))
		{
			goto IL_008e;
		}
	}
	{
		return;
	}

IL_0056:
	{
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)995480412)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)870733615))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)995480412))))
		{
			goto IL_00bb;
		}
	}
	{
		return;
	}

IL_006f:
	{
		uint32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2112647197))))
		{
			goto IL_00aa;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1749340709))))
		{
			goto IL_009c;
		}
	}
	{
		return;
	}

IL_0080:
	{
		String_t* L_17 = ___room0;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00ee;
		}
	}
	{
		return;
	}

IL_008e:
	{
		String_t* L_19 = ___room0;
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_009c:
	{
		String_t* L_21 = ___room0;
		bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_21, _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0126;
		}
	}
	{
		return;
	}

IL_00aa:
	{
		String_t* L_23 = ___room0;
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0142;
		}
	}
	{
		return;
	}

IL_00bb:
	{
		String_t* L_25 = ___room0;
		bool L_26 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_25, _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_015e;
		}
	}
	{
		return;
	}

IL_00cc:
	{
		String_t* L_27 = ___room0;
		bool L_28 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_27, _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_017a;
		}
	}
	{
		return;
	}

IL_00dd:
	{
		String_t* L_29 = ___room0;
		bool L_30 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_29, _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0196;
		}
	}
	{
		return;
	}

IL_00ee:
	{
		// target = kitchen.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = __this->get_kitchen_8();
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_32, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_34), L_33, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_target_5(L_34);
		// break;
		return;
	}

IL_010a:
	{
		// target = livingRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = __this->get_livingRoom_9();
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_36, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_38), L_37, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_target_5(L_38);
		// break;
		return;
	}

IL_0126:
	{
		// target = diningRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = __this->get_diningRoom_10();
		NullCheck(L_39);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_40, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_42), L_41, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_target_5(L_42);
		// break;
		return;
	}

IL_0142:
	{
		// target = bathroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_43 = __this->get_bathroom_11();
		NullCheck(L_43);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_44, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_46), L_45, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_target_5(L_46);
		// break;
		return;
	}

IL_015e:
	{
		// target = landing.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_47 = __this->get_landing_12();
		NullCheck(L_47);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_48, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_50), L_49, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_target_5(L_50);
		// break;
		return;
	}

IL_017a:
	{
		// target = bedroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = __this->get_bedroom_13();
		NullCheck(L_51);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_53 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_52, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_54), L_53, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_target_5(L_54);
		// break;
		return;
	}

IL_0196:
	{
		// target = roofTerrace.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_55 = __this->get_roofTerrace_14();
		NullCheck(L_55);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_57 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_56, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_58), L_57, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_target_5(L_58);
		// }
		return;
	}
}
// System.Void CameraMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement__ctor_m2963EB036D4F916A3E0A7B22A3008A0892B8AD56 (CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4 * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 3.0f;
		__this->set_speed_6((3.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void CharacterController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController_Start_m0645EDF74E0B4D904B1C1EA002A34B4812B8C7FC (CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterController_Start_m0645EDF74E0B4D904B1C1EA002A34B4812B8C7FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		__this->set_animator_4(L_0);
		// capsuleCollider = GetComponent<CapsuleCollider2D>();
		CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * L_1 = Component_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m51F2595169CB099FA35B5DBFD9F9E056DF0324E9(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m51F2595169CB099FA35B5DBFD9F9E056DF0324E9_RuntimeMethod_var);
		__this->set_capsuleCollider_5(L_1);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_6(L_2);
		// }
		return;
	}
}
// System.Void CharacterController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController_Update_m0B4138A15A924D7AF12C5FC6865E0E9BB777561E (CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterController_Update_m0B4138A15A924D7AF12C5FC6865E0E9BB777561E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB * G_B2_0 = NULL;
	CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB * G_B3_1 = NULL;
	{
		// float animationSpeed = Input.GetAxis("Horizontal") * speedMultiplier;
		float L_0 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		float L_1 = __this->get_speedMultiplier_7();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// float speed = animationSpeed * Time.deltaTime;
		float L_2 = V_0;
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// animator.SetFloat("speed", Mathf.Abs(animationSpeed * 2));
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_4 = __this->get_animator_4();
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)il2cpp_codegen_multiply((float)L_5, (float)(2.0f))));
		NullCheck(L_4);
		Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43(L_4, _stringLiteral92B6320812D86ABE48E76FBFBBE8BDE7170BF036, L_6, /*hidden argument*/NULL);
		// transform.Translate(Vector3.right * speed);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		float L_9 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_7, L_10, /*hidden argument*/NULL);
		// direction = speed == 0.0f ? direction : Mathf.Sign(speed);
		float L_11 = V_1;
		G_B1_0 = __this;
		if ((((float)L_11) == ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_005d;
		}
	}
	{
		float L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3(L_12, /*hidden argument*/NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		goto IL_0063;
	}

IL_005d:
	{
		float L_14 = __this->get_direction_8();
		G_B3_0 = L_14;
		G_B3_1 = G_B2_0;
	}

IL_0063:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_direction_8(G_B3_0);
		// transform.localScale = new Vector3(direction, 1, 1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_16 = __this->get_direction_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_17), L_16, (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_15, L_17, /*hidden argument*/NULL);
		// if (carrying != null && Input.GetKey(KeyCode.E))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_carrying_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00fc;
		}
	}
	{
		bool L_20 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)101), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00fc;
		}
	}
	{
		// carrying.SendMessage("OnCarryEnd");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_carrying_10();
		NullCheck(L_21);
		GameObject_SendMessage_m9A7BE015CC1472A59F1077CADFB22AD67F8722D9(L_21, _stringLiteral7D4995FB75E12BE685ECB50C48687B27C44C5943, /*hidden argument*/NULL);
		// carrying.GetComponent<Rigidbody2D>().AddForce(Vector2.right * 5.0f * transform.localScale.x, ForceMode2D.Impulse);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = __this->get_carrying_10();
		NullCheck(L_22);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_23 = GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0(L_22, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_24, (5.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_25, L_28, /*hidden argument*/NULL);
		NullCheck(L_23);
		Rigidbody2D_AddForce_m09E1A2E24DABA5BBC613E35772AE2C1C35C6E40C(L_23, L_29, 1, /*hidden argument*/NULL);
		// carrying = null;
		__this->set_carrying_10((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// animator.SetBool("carrying", false);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_30 = __this->get_animator_4();
		NullCheck(L_30);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_30, _stringLiteralA24070E43D50C6088E5F97080AF0E0DA11295327, (bool)0, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void CharacterController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController_FixedUpdate_m999302058B8376C49779002AADEECB67C708B56F (CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterController_FixedUpdate_m999302058B8376C49779002AADEECB67C708B56F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// animator.SetFloat("vertical speed", rb.velocity.y);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = __this->get_animator_4();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = __this->get_rb_6();
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_1();
		NullCheck(L_0);
		Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43(L_0, _stringLiteral2E43BE5AECBD81E0C23C5D56EB737FB40D4A7DC2, L_3, /*hidden argument*/NULL);
		// if (carrying != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_carrying_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0085;
		}
	}
	{
		// carrying.transform.position = new Vector2(transform.position.x + 0.5f * transform.localScale.x, transform.position.y + 0.5f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_carrying_10();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_17), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_13)))), ((float)il2cpp_codegen_add((float)L_16, (float)(0.5f))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_17, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_7, L_18, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// if ((Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.Space)) && rb.velocity.y <= 0.0f)
		bool L_19 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)119), /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a6;
		}
	}
	{
		bool L_20 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)273), /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00a6;
		}
	}
	{
		bool L_21 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)32), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_01ac;
		}
	}

IL_00a6:
	{
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_22 = __this->get_rb_6();
		NullCheck(L_22);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_1();
		if ((!(((float)L_24) <= ((float)(0.0f)))))
		{
			goto IL_01ac;
		}
	}
	{
		// Vector2 rayStartPos = new Vector2(transform.position.x + capsuleCollider.offset.x, transform.position.y - capsuleCollider.size.y / 2 + capsuleCollider.offset.y);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_x_2();
		CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * L_28 = __this->get_capsuleCollider_5();
		NullCheck(L_28);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Collider2D_get_offset_mCB3DEFB9ACB05211320B8406B01F089EF7F8788D(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_x_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_3();
		CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * L_34 = __this->get_capsuleCollider_5();
		NullCheck(L_34);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35 = CapsuleCollider2D_get_size_m2E344F2DA3881C6E8420681C40A1218DFD420A60(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_1();
		CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * L_37 = __this->get_capsuleCollider_5();
		NullCheck(L_37);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = Collider2D_get_offset_mCB3DEFB9ACB05211320B8406B01F089EF7F8788D(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), ((float)il2cpp_codegen_add((float)L_27, (float)L_30)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_33, (float)((float)((float)L_36/(float)(2.0f))))), (float)L_39)), /*hidden argument*/NULL);
		// int playerMask = ~((1 << LayerMask.NameToLayer("Player")) | (1 << LayerMask.NameToLayer("Camera Trigger")) | (1 << LayerMask.NameToLayer("God Ray")));
		int32_t L_40 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		int32_t L_41 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteral9DE07F060C37DB643330894874675E5E43D135FE, /*hidden argument*/NULL);
		int32_t L_42 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralFD2E4A67A835FEF3BB45B318366EDFB231BCDCAF, /*hidden argument*/NULL);
		V_1 = ((~((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_40&(int32_t)((int32_t)31)))))|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_41&(int32_t)((int32_t)31)))))))|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_42&(int32_t)((int32_t)31)))))))));
		// RaycastHit2D hit = Physics2D.Raycast(rayStartPos, -Vector2.up, 0.01f, playerMask);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_44 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = Vector2_op_UnaryNegation_m3FA0AE2F9B031765EFA566B25F5453C3B001FF4D(L_44, /*hidden argument*/NULL);
		int32_t L_46 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  L_47 = Physics2D_Raycast_mBEB66E9AA034BD0AE1B1C99DF872247B0131CBDD(L_43, L_45, (0.01f), L_46, /*hidden argument*/NULL);
		V_2 = L_47;
		// if (hit.collider != null)
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_48 = RaycastHit2D_get_collider_m6A7EC53B2E179C2EFF4F29018A132B2979CBE976((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_49 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_48, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_01ac;
		}
	}
	{
		// float distance = Mathf.Abs(hit.point.y - rayStartPos.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_50 = RaycastHit2D_get_point_mC567E234B1B673C3A9819023C3DC97C781443098((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)(&V_2), /*hidden argument*/NULL);
		float L_51 = L_50.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_52 = V_0;
		float L_53 = L_52.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		fabsf(((float)il2cpp_codegen_subtract((float)L_51, (float)L_53)));
		// rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_54 = __this->get_rb_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_55 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		float L_56 = __this->get_jumpForce_9();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_57 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		Rigidbody2D_AddForce_m09E1A2E24DABA5BBC613E35772AE2C1C35C6E40C(L_54, L_57, 1, /*hidden argument*/NULL);
	}

IL_01ac:
	{
		// }
		return;
	}
}
// System.Void CharacterController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController_OnCollisionEnter2D_m2CCA673BA8348EE339B54059C460409968865B2F (CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterController_OnCollisionEnter2D_m2CCA673BA8348EE339B54059C460409968865B2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (carrying == null && (collision.gameObject.layer == LayerMask.NameToLayer("Dood") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 2") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 3") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 4") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 5") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 6")))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_carrying_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00d9;
		}
	}
	{
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_2 = ___collision0;
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_3, /*hidden argument*/NULL);
		int32_t L_5 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteral468C6C041BCEA0B892D7D8475778FD6D2FDB1A13, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_009b;
		}
	}
	{
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_6 = ___collision0;
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_7, /*hidden argument*/NULL);
		int32_t L_9 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralF7E6370E70911AF2BD12D07B6F7331FC402AD7D4, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_009b;
		}
	}
	{
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_10 = ___collision0;
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_11, /*hidden argument*/NULL);
		int32_t L_13 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteral28002E0A109ED23F4433BF160A4C51C3472CA80A, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_009b;
		}
	}
	{
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_14 = ___collision0;
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_15, /*hidden argument*/NULL);
		int32_t L_17 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteral1C3D35F1DC2DB1CC7A99556F0309FDB4C09283A7, /*hidden argument*/NULL);
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_009b;
		}
	}
	{
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_18 = ___collision0;
		NullCheck(L_18);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_19, /*hidden argument*/NULL);
		int32_t L_21 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteral2B6066CB925E0D319D0D8D21FBAB826AAF7D0195, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_009b;
		}
	}
	{
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_22 = ___collision0;
		NullCheck(L_22);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_24 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_23, /*hidden argument*/NULL);
		int32_t L_25 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralFC6FB1E4E67A28FDD0474568CAE4AF30BC2CBC67, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00d9;
		}
	}

IL_009b:
	{
		// carrying = collision.gameObject;
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_26 = ___collision0;
		NullCheck(L_26);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_26, /*hidden argument*/NULL);
		__this->set_carrying_10(L_27);
		// collision.gameObject.SendMessage("OnCarry");
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_28 = ___collision0;
		NullCheck(L_28);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameObject_SendMessage_m9A7BE015CC1472A59F1077CADFB22AD67F8722D9(L_29, _stringLiteralF4A2384C3039333EFFAB6D033FFAC216BDD8A4DC, /*hidden argument*/NULL);
		// collision.transform.parent = transform;
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_30 = ___collision0;
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Collision2D_get_transform_m7008F633C99CE8A2694F88230713913244F5D262(L_30, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_31, L_32, /*hidden argument*/NULL);
		// animator.SetBool("carrying", true);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_33 = __this->get_animator_4();
		NullCheck(L_33);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_33, _stringLiteralA24070E43D50C6088E5F97080AF0E0DA11295327, (bool)1, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void CharacterController::Planted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController_Planted_mEBD3119978D320987E70BCE589A30CD302375525 (CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterController_Planted_mEBD3119978D320987E70BCE589A30CD302375525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// carrying = null;
		__this->set_carrying_10((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// animator.SetBool("carrying", false);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = __this->get_animator_4();
		NullCheck(L_0);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_0, _stringLiteralA24070E43D50C6088E5F97080AF0E0DA11295327, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController__ctor_mA5C22E969F3A8EA9CAE0CE3A44FA79601A1E86E2 (CharacterController_t3A976AFE5F9AAF3B1AEF6B2FE971C738CBA69BAB * __this, const RuntimeMethod* method)
{
	{
		// private float speedMultiplier = 1.0f;
		__this->set_speedMultiplier_7((1.0f));
		// private float direction = 1.0f;
		__this->set_direction_8((1.0f));
		// private float jumpForce = 300.0f;
		__this->set_jumpForce_9((300.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DudeNeeds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_Start_m8F369218D7AB64699606E15149073355A6D6CD1D (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DudeNeeds_Start_m8F369218D7AB64699606E15149073355A6D6CD1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_0 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		__this->set_spriteRenderer_19(L_0);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_20(L_1);
		// polygonCollider = GetComponent<PolygonCollider2D>();
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_2 = Component_GetComponent_TisPolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_mD54950223AD8BD8D30B89144A0774268FEBDDC80(__this, /*hidden argument*/Component_GetComponent_TisPolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_mD54950223AD8BD8D30B89144A0774268FEBDDC80_RuntimeMethod_var);
		__this->set_polygonCollider_21(L_2);
		// Hide();
		DudeNeeds_Hide_m3A9017CC5720B85F1413C58C4061C781E8952EAB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DudeNeeds::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_Update_m073DD9E492812A7D241D763D85B8237B1E3DE82A (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DudeNeeds::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_FixedUpdate_mF91602486E1ADF1A1956E43A02190A931AF2FFEC (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	{
		// if (!isBorn)
		bool L_0 = __this->get_isBorn_17();
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		// timeUntilBirth -= Time.fixedDeltaTime;
		float L_1 = __this->get_timeUntilBirth_18();
		float L_2 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		__this->set_timeUntilBirth_18(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// if (timeUntilBirth <= 0)
		float L_3 = __this->get_timeUntilBirth_18();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// isBorn = true;
		__this->set_isBorn_17((bool)1);
		// Show();
		DudeNeeds_Show_m8FA91C3EFBFD16197B49C0B0DEDCE0C366A57FC9(__this, /*hidden argument*/NULL);
		// }
		goto IL_0037;
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// if (!isPhotosynthesising)
		bool L_4 = __this->get_isPhotosynthesising_16();
		if (L_4)
		{
			goto IL_0061;
		}
	}
	{
		// if (!fullyGrown)
		bool L_5 = __this->get_fullyGrown_14();
		if (L_5)
		{
			goto IL_0079;
		}
	}
	{
		// photosynthesis -= Time.fixedDeltaTime * 3.3f;
		float L_6 = __this->get_photosynthesis_6();
		float L_7 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		__this->set_photosynthesis_6(((float)il2cpp_codegen_subtract((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)(3.3f))))));
		// }
		goto IL_0079;
	}

IL_0061:
	{
		// photosynthesis += Time.fixedDeltaTime * 3.3f;
		float L_8 = __this->get_photosynthesis_6();
		float L_9 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		__this->set_photosynthesis_6(((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)(3.3f))))));
	}

IL_0079:
	{
		// if (photosynthesis < 0)
		float L_10 = __this->get_photosynthesis_6();
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		// dead = true;
		__this->set_dead_8((bool)1);
	}

IL_008d:
	{
		// if (photosynthesis < 0)
		float L_11 = __this->get_photosynthesis_6();
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_00a5;
		}
	}
	{
		// photosynthesis = 0;
		__this->set_photosynthesis_6((0.0f));
	}

IL_00a5:
	{
		// if (inTheSun && photosynthesis < 100)
		bool L_12 = __this->get_inTheSun_7();
		if (!L_12)
		{
			goto IL_00d2;
		}
	}
	{
		float L_13 = __this->get_photosynthesis_6();
		if ((!(((float)L_13) < ((float)(100.0f)))))
		{
			goto IL_00d2;
		}
	}
	{
		// photosynthesis += Time.fixedDeltaTime * 33.3f;
		float L_14 = __this->get_photosynthesis_6();
		float L_15 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		__this->set_photosynthesis_6(((float)il2cpp_codegen_add((float)L_14, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)(33.3f))))));
	}

IL_00d2:
	{
		// if (photosynthesis > 100)
		float L_16 = __this->get_photosynthesis_6();
		if ((!(((float)L_16) > ((float)(100.0f)))))
		{
			goto IL_00ea;
		}
	}
	{
		// photosynthesis = 100;
		__this->set_photosynthesis_6((100.0f));
	}

IL_00ea:
	{
		// if (!dead)
		bool L_17 = __this->get_dead_8();
		if (L_17)
		{
			goto IL_010b;
		}
	}
	{
		// growth += Time.fixedDeltaTime * growthMultiplier;
		float L_18 = __this->get_growth_9();
		float L_19 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		float L_20 = __this->get_growthMultiplier_25();
		__this->set_growth_9(((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)))));
	}

IL_010b:
	{
		// sunBar.sizeDelta = new Vector2(photosynthesis, sunBar.sizeDelta.y);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_21 = __this->get_sunBar_11();
		float L_22 = __this->get_photosynthesis_6();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_23 = __this->get_sunBar_11();
		NullCheck(L_23);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_26), L_22, L_25, /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_21, L_26, /*hidden argument*/NULL);
		// growthBar.sizeDelta = new Vector2(growth / 3.0f, growthBar.sizeDelta.y);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_27 = __this->get_growthBar_12();
		float L_28 = __this->get_growth_9();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_29 = __this->get_growthBar_12();
		NullCheck(L_29);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_32), ((float)((float)L_28/(float)(3.0f))), L_31, /*hidden argument*/NULL);
		NullCheck(L_27);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_27, L_32, /*hidden argument*/NULL);
		// if (growth >= 300)
		float L_33 = __this->get_growth_9();
		if ((!(((float)L_33) >= ((float)(300.0f)))))
		{
			goto IL_0188;
		}
	}
	{
		// growth = 300;
		__this->set_growth_9((300.0f));
		// fullyGrown = true;
		__this->set_fullyGrown_14((bool)1);
		// leaf.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_34 = __this->get_leaf_13();
		NullCheck(L_34);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_34, (bool)1, /*hidden argument*/NULL);
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Void DudeNeeds::WateringDude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_WateringDude_mC12550151518A8BA0148856AE108FF564129128E (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	{
		// beingWatered = true;
		__this->set_beingWatered_5((bool)1);
		// }
		return;
	}
}
// System.Void DudeNeeds::PlantInSun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_PlantInSun_mBEC759D3EAE88DB7DC0233270ABA9E01E3DBEADC (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	{
		// inTheSun = true;
		__this->set_inTheSun_7((bool)1);
		// }
		return;
	}
}
// System.Void DudeNeeds::Grow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_Grow_m741E7BFACFF592202FAADBCE58AC0F5368B54CEE (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DudeNeeds::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_Hide_m3A9017CC5720B85F1413C58C4061C781E8952EAB (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	{
		// leaf.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_leaf_13();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// spriteRenderer.enabled = false;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_1 = __this->get_spriteRenderer_19();
		NullCheck(L_1);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_1, (bool)0, /*hidden argument*/NULL);
		// ui.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_ui_10();
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
		// rb.isKinematic = true;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_3 = __this->get_rb_20();
		NullCheck(L_3);
		Rigidbody2D_set_isKinematic_mA7711684E1E1E25FA7C1A1FF297B6E45DFD03BEE(L_3, (bool)1, /*hidden argument*/NULL);
		// polygonCollider.enabled = false;
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_4 = __this->get_polygonCollider_21();
		NullCheck(L_4);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_4, (bool)0, /*hidden argument*/NULL);
		// eyes.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_eyes_22();
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		// mouth.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_mouth_23();
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)0, /*hidden argument*/NULL);
		// spike.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_spike_24();
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DudeNeeds::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_Show_m8FA91C3EFBFD16197B49C0B0DEDCE0C366A57FC9 (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	{
		// spriteRenderer.enabled = true;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_0 = __this->get_spriteRenderer_19();
		NullCheck(L_0);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_0, (bool)1, /*hidden argument*/NULL);
		// ui.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_ui_10();
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		// rb.isKinematic = false;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = __this->get_rb_20();
		NullCheck(L_2);
		Rigidbody2D_set_isKinematic_mA7711684E1E1E25FA7C1A1FF297B6E45DFD03BEE(L_2, (bool)0, /*hidden argument*/NULL);
		// polygonCollider.enabled = true;
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_3 = __this->get_polygonCollider_21();
		NullCheck(L_3);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_3, (bool)1, /*hidden argument*/NULL);
		// eyes.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_eyes_22();
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)1, /*hidden argument*/NULL);
		// mouth.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_mouth_23();
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		// spike.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_spike_24();
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DudeNeeds::Planted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds_Planted_m73D47ED946C063328105AA74B90E5AB3856A5D3F (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	{
		// planted = true;
		__this->set_planted_15((bool)1);
		// }
		return;
	}
}
// System.Void DudeNeeds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DudeNeeds__ctor_m509E1759318D0DD661FA13F55510916BFBC89154 (DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * __this, const RuntimeMethod* method)
{
	{
		// float thirstiness = 100.0f;
		__this->set_thirstiness_4((100.0f));
		// float photosynthesis = 100;
		__this->set_photosynthesis_6((100.0f));
		// public float timeUntilBirth = 7.0f;
		__this->set_timeUntilBirth_18((7.0f));
		// public float growthMultiplier = 1.0f;
		__this->set_growthMultiplier_25((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Jerry::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jerry_Start_m1B9461A5A10BE27DD00C5DFF4B91FA42D1E22D72 (Jerry_t30C1CEA40E869A541484B2455BC69C9FB0E80E3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jerry_Start_m1B9461A5A10BE27DD00C5DFF4B91FA42D1E22D72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// }
		return;
	}
}
// System.Void Jerry::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jerry_Update_mDBE44D9E9A089364E0214736330C81EB6FD9AF62 (Jerry_t30C1CEA40E869A541484B2455BC69C9FB0E80E3D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Jerry::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jerry_FixedUpdate_m317B9DD8DBD20CD6E600D91F87279290F3F6F37E (Jerry_t30C1CEA40E869A541484B2455BC69C9FB0E80E3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jerry_FixedUpdate_m317B9DD8DBD20CD6E600D91F87279290F3F6F37E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb.AddForce(Vector2.up * upwardsForce);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = __this->get_rb_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		float L_2 = __this->get_upwardsForce_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_AddForce_mFE4658C0AE6643026A7CE7452857CA37DB687436(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Jerry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jerry__ctor_mFB5F7B772D6A9C261AA5B23900A0105554244388 (Jerry_t30C1CEA40E869A541484B2455BC69C9FB0E80E3D * __this, const RuntimeMethod* method)
{
	{
		// private float upwardsForce = 8.0f;
		__this->set_upwardsForce_5((8.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void JerryMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_Start_mCF0D572E07C4BC2715A444702B9A11CA29CEF249 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JerryMovement_Start_mCF0D572E07C4BC2715A444702B9A11CA29CEF249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// polygonCollider = GetComponent<PolygonCollider2D>();
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_1 = Component_GetComponent_TisPolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_mD54950223AD8BD8D30B89144A0774268FEBDDC80(__this, /*hidden argument*/Component_GetComponent_TisPolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_mD54950223AD8BD8D30B89144A0774268FEBDDC80_RuntimeMethod_var);
		__this->set_polygonCollider_7(L_1);
		// pathfinding = GetComponent<Pathfinding>();
		Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * L_2 = Component_GetComponent_TisPathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1_m2B1F22FA56BCE04B99BE1DC3B3025387AEE247B7(__this, /*hidden argument*/Component_GetComponent_TisPathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1_m2B1F22FA56BCE04B99BE1DC3B3025387AEE247B7_RuntimeMethod_var);
		__this->set_pathfinding_8(L_2);
		// SetRoute();
		JerryMovement_SetRoute_m34132DCEA36FC8656D6548A4A96DB54A22C025BF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JerryMovement::SetRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_SetRoute_m34132DCEA36FC8656D6548A4A96DB54A22C025BF (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JerryMovement_SetRoute_m34132DCEA36FC8656D6548A4A96DB54A22C025BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// route = pathfinding.Pathfind(GetRandomTarget(currentRoomString), currentRoomString).GetRoute();
		Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * L_0 = __this->get_pathfinding_8();
		String_t* L_1 = __this->get_currentRoomString_10();
		String_t* L_2 = JerryMovement_GetRandomTarget_m96E3ABFDE90DCD5B7C316173DF4EA2D639662255(__this, L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_currentRoomString_10();
		NullCheck(L_0);
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_4 = Pathfinding_Pathfind_m00B888F5F7E004A5EE862337086E241AFF4FC787(L_0, L_2, L_3, (bool)1, (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)NULL, (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = Room_GetRoute_m5D289AEAA29BD597761B9F392647B58918E61323(L_4, /*hidden argument*/NULL);
		__this->set_route_12(L_5);
		// SetTarget((string)route[0]);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_6 = __this->get_route_12();
		NullCheck(L_6);
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_6, 0);
		JerryMovement_SetTarget_mBB68D09B446AE35155DF451FB885C06A561BCBE9(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// PrintRoute();
		JerryMovement_PrintRoute_mF6509D48981EFCE184A316AB8507661B7881C094(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JerryMovement::PrintRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_PrintRoute_mF6509D48981EFCE184A316AB8507661B7881C094 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JerryMovement_PrintRoute_mF6509D48981EFCE184A316AB8507661B7881C094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// string routeString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (string room in route)
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_route_12();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(32 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0014:
		{
			// foreach (string room in route)
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_2);
			V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
			// routeString += $"{room}, ";
			String_t* L_4 = V_0;
			String_t* L_5 = V_2;
			String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_4, L_5, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_002d:
		{
			// foreach (string room in route)
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0014;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x48, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_3;
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0041:
		{
			RuntimeObject* L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_0047:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0048:
	{
		// Debug.Log(routeString);
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JerryMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_Update_m03BF058E9BD4833A99EDCE09A647924D1FEEE239 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void JerryMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_FixedUpdate_mF3225FC75293886D8F8117716FD3286D10AA80F0 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method)
{
	{
		// Movement();
		JerryMovement_Movement_m2967F3A123ADDCC8D5DD1D60E5E38D5ACE8935EA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JerryMovement::JumpingDude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_JumpingDude_m8741AF991BF51350A87C739AAAC7E7A5C6BD3F17 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JerryMovement_JumpingDude_m8741AF991BF51350A87C739AAAC7E7A5C6BD3F17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * G_B2_0 = NULL;
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * G_B3_1 = NULL;
	{
		// rb.AddForce(new Vector2(1.0f * target.x < transform.position.x ? -1 : 1, 2.0f) * jumpForce, ForceMode2D.Impulse);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = __this->get_rb_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_target_11();
		float L_2 = L_1->get_x_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		G_B1_0 = L_0;
		if ((((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_2))) < ((float)L_5)))
		{
			G_B2_0 = L_0;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_6), (((float)((float)G_B3_0))), (2.0f), /*hidden argument*/NULL);
		float L_7 = __this->get_jumpForce_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(G_B3_1);
		Rigidbody2D_AddForce_m09E1A2E24DABA5BBC613E35772AE2C1C35C6E40C(G_B3_1, L_8, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JerryMovement::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_Movement_m2967F3A123ADDCC8D5DD1D60E5E38D5ACE8935EA (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JerryMovement_Movement_m2967F3A123ADDCC8D5DD1D60E5E38D5ACE8935EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector2 rayStartPos = new Vector2(transform.position.x, transform.position.y - polygonCollider.bounds.extents.y);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_6 = __this->get_polygonCollider_7();
		NullCheck(L_6);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_7 = Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_3), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)L_5, (float)L_9)), /*hidden argument*/NULL);
		// int doodMask = ~(1 << gameObject.layer);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_10, /*hidden argument*/NULL);
		V_1 = ((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)31)))))));
		// RaycastHit2D hit = Physics2D.Raycast(rayStartPos, -Vector2.up, 0.1f, doodMask);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_UnaryNegation_m3FA0AE2F9B031765EFA566B25F5453C3B001FF4D(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  L_16 = Physics2D_Raycast_mBEB66E9AA034BD0AE1B1C99DF872247B0131CBDD(L_12, L_14, (0.1f), L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// float distance = Mathf.Abs(hit.point.y - rayStartPos.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = RaycastHit2D_get_point_mC567E234B1B673C3A9819023C3DC97C781443098((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)(&V_2), /*hidden argument*/NULL);
		float L_18 = L_17.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_0;
		float L_20 = L_19.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		fabsf(((float)il2cpp_codegen_subtract((float)L_18, (float)L_20)));
		// if (hit.collider != null)
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_21 = RaycastHit2D_get_collider_m6A7EC53B2E179C2EFF4F29018A132B2979CBE976((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00c1;
		}
	}
	{
		// timeTilJump -= Time.fixedDeltaTime;
		float L_23 = __this->get_timeTilJump_5();
		float L_24 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		__this->set_timeTilJump_5(((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)));
		// if (timeTilJump <= 0)
		float L_25 = __this->get_timeTilJump_5();
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_00c1;
		}
	}
	{
		// JumpingDude();
		JerryMovement_JumpingDude_m8741AF991BF51350A87C739AAAC7E7A5C6BD3F17(__this, /*hidden argument*/NULL);
		// timeTilJump = 1.0f;
		__this->set_timeTilJump_5((1.0f));
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void JerryMovement::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_OnTriggerEnter2D_m6194C78148F0616A20CDCE7A3B10C81729708B22 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JerryMovement_OnTriggerEnter2D_m6194C78148F0616A20CDCE7A3B10C81729708B22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// string room = collision.name;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// currentRoomString = collision.name;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_2 = ___collision0;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_2, /*hidden argument*/NULL);
		__this->set_currentRoomString_10(L_3);
		// switch (room)
		String_t* L_4 = V_0;
		uint32_t L_5 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m94E4EDA2F909FACDA1591F7242109AFB650640AA(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		uint32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)758455787)))))
		{
			goto IL_0045;
		}
	}
	{
		uint32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)170810391))))
		{
			goto IL_00f5;
		}
	}
	{
		uint32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)385580919))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)758455787))))
		{
			goto IL_008c;
		}
	}
	{
		goto IL_01b3;
	}

IL_0045:
	{
		uint32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)995480412)))))
		{
			goto IL_0062;
		}
	}
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)870733615))))
		{
			goto IL_0077;
		}
	}
	{
		uint32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)995480412))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_01b3;
	}

IL_0062:
	{
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-2112647197))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1749340709))))
		{
			goto IL_00a1;
		}
	}
	{
		goto IL_01b3;
	}

IL_0077:
	{
		String_t* L_15 = V_0;
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_010a;
		}
	}
	{
		goto IL_01b3;
	}

IL_008c:
	{
		String_t* L_17 = V_0;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0125;
		}
	}
	{
		goto IL_01b3;
	}

IL_00a1:
	{
		String_t* L_19 = V_0;
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_013d;
		}
	}
	{
		goto IL_01b3;
	}

IL_00b6:
	{
		String_t* L_21 = V_0;
		bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_21, _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01b3;
	}

IL_00cb:
	{
		String_t* L_23 = V_0;
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_01b3;
	}

IL_00e0:
	{
		String_t* L_25 = V_0;
		bool L_26 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_25, _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_01b3;
	}

IL_00f5:
	{
		String_t* L_27 = V_0;
		bool L_28 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_27, _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_01b3;
	}

IL_010a:
	{
		// currentRoom = kitchen.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = __this->get_kitchen_13();
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_30, /*hidden argument*/NULL);
		__this->set_currentRoom_9(L_31);
		// break;
		goto IL_01b3;
	}

IL_0125:
	{
		// currentRoom = livingRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = __this->get_livingRoom_14();
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_33, /*hidden argument*/NULL);
		__this->set_currentRoom_9(L_34);
		// break;
		goto IL_01b3;
	}

IL_013d:
	{
		// currentRoom = diningRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = __this->get_diningRoom_15();
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_36, /*hidden argument*/NULL);
		__this->set_currentRoom_9(L_37);
		// break;
		goto IL_01b3;
	}

IL_0155:
	{
		// currentRoom = bathroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = __this->get_bathroom_16();
		NullCheck(L_38);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_40 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_39, /*hidden argument*/NULL);
		__this->set_currentRoom_9(L_40);
		// break;
		goto IL_01b3;
	}

IL_016d:
	{
		// currentRoom = landing.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = __this->get_landing_17();
		NullCheck(L_41);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_43 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_42, /*hidden argument*/NULL);
		__this->set_currentRoom_9(L_43);
		// break;
		goto IL_01b3;
	}

IL_0185:
	{
		// currentRoom = bedroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = __this->get_bedroom_18();
		NullCheck(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_46 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_45, /*hidden argument*/NULL);
		__this->set_currentRoom_9(L_46);
		// break;
		goto IL_01b3;
	}

IL_019d:
	{
		// currentRoom = roofTerrace.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_47 = __this->get_roofTerrace_19();
		NullCheck(L_47);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_48, /*hidden argument*/NULL);
		__this->set_currentRoom_9(L_49);
	}

IL_01b3:
	{
		// if (currentRoomString == (string)route[0])
		String_t* L_50 = __this->get_currentRoomString_10();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_51 = __this->get_route_12();
		NullCheck(L_51);
		RuntimeObject * L_52 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_51, 0);
		bool L_53 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_50, ((String_t*)CastclassSealed((RuntimeObject*)L_52, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0293;
		}
	}
	{
		// if (route.Count > 1)
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_54 = __this->get_route_12();
		NullCheck(L_54);
		int32_t L_55 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_54);
		if ((((int32_t)L_55) <= ((int32_t)1)))
		{
			goto IL_0212;
		}
	}
	{
		// route.Remove(route[0]);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_56 = __this->get_route_12();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_57 = __this->get_route_12();
		NullCheck(L_57);
		RuntimeObject * L_58 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_57, 0);
		NullCheck(L_56);
		VirtActionInvoker1< RuntimeObject * >::Invoke(36 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_56, L_58);
		// SetTarget((string)route[0]);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_59 = __this->get_route_12();
		NullCheck(L_59);
		RuntimeObject * L_60 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_59, 0);
		JerryMovement_SetTarget_mBB68D09B446AE35155DF451FB885C06A561BCBE9(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_60, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// }
		goto IL_0218;
	}

IL_0212:
	{
		// SetRoute();
		JerryMovement_SetRoute_m34132DCEA36FC8656D6548A4A96DB54A22C025BF(__this, /*hidden argument*/NULL);
	}

IL_0218:
	{
		// if ((string)route[0] == "landing")
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_61 = __this->get_route_12();
		NullCheck(L_61);
		RuntimeObject * L_62 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_61, 0);
		bool L_63 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_62, String_t_il2cpp_TypeInfo_var)), _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_0256;
		}
	}
	{
		// stairs.SendMessage("AddToStairMask", gameObject.layer);
		Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * L_64 = __this->get_stairs_20();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_65 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_65);
		int32_t L_66 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_65, /*hidden argument*/NULL);
		int32_t L_67 = L_66;
		RuntimeObject * L_68 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_64);
		Component_SendMessage_mE3B1D6FC26F26FA4218F1BCFDD1E41BF3ACB34B1(L_64, _stringLiteral46E04A7FD01D0F03F367D19AF59E2C6D81D8381C, L_68, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0256:
	{
		// else if ((string)route[0] == "livingRoom")
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_69 = __this->get_route_12();
		NullCheck(L_69);
		RuntimeObject * L_70 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_69, 0);
		bool L_71 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_70, String_t_il2cpp_TypeInfo_var)), _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0293;
		}
	}
	{
		// stairs.SendMessage("RemoveFromStairMask", gameObject.layer);
		Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * L_72 = __this->get_stairs_20();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_73 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_73);
		int32_t L_74 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_73, /*hidden argument*/NULL);
		int32_t L_75 = L_74;
		RuntimeObject * L_76 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_72);
		Component_SendMessage_mE3B1D6FC26F26FA4218F1BCFDD1E41BF3ACB34B1(L_72, _stringLiteral882524F938B6A7F037958ADAACD77CD4B3733A02, L_76, /*hidden argument*/NULL);
	}

IL_0293:
	{
		// }
		return;
	}
}
// System.Void JerryMovement::SetTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement_SetTarget_mBB68D09B446AE35155DF451FB885C06A561BCBE9 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, String_t* ___room0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JerryMovement_SetTarget_mBB68D09B446AE35155DF451FB885C06A561BCBE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// switch (room)
		String_t* L_0 = ___room0;
		uint32_t L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m94E4EDA2F909FACDA1591F7242109AFB650640AA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)758455787)))))
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)170810391))))
		{
			goto IL_00ac;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)385580919))))
		{
			goto IL_009b;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)758455787))))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}

IL_002b:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)995480412)))))
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)870733615))))
		{
			goto IL_0055;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)995480412))))
		{
			goto IL_008d;
		}
	}
	{
		return;
	}

IL_0044:
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2112647197))))
		{
			goto IL_007f;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1749340709))))
		{
			goto IL_0071;
		}
	}
	{
		return;
	}

IL_0055:
	{
		String_t* L_11 = ___room0;
		bool L_12 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_11, _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00bd;
		}
	}
	{
		return;
	}

IL_0063:
	{
		String_t* L_13 = ___room0;
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_13, _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00d4;
		}
	}
	{
		return;
	}

IL_0071:
	{
		String_t* L_15 = ___room0;
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00eb;
		}
	}
	{
		return;
	}

IL_007f:
	{
		String_t* L_17 = ___room0;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0102;
		}
	}
	{
		return;
	}

IL_008d:
	{
		String_t* L_19 = ___room0;
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0119;
		}
	}
	{
		return;
	}

IL_009b:
	{
		String_t* L_21 = ___room0;
		bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_21, _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0130;
		}
	}
	{
		return;
	}

IL_00ac:
	{
		String_t* L_23 = ___room0;
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0147;
		}
	}
	{
		return;
	}

IL_00bd:
	{
		// target = kitchen.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = __this->get_kitchen_13();
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_26, /*hidden argument*/NULL);
		__this->set_target_11(L_27);
		// break;
		return;
	}

IL_00d4:
	{
		// target = livingRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = __this->get_livingRoom_14();
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_29, /*hidden argument*/NULL);
		__this->set_target_11(L_30);
		// break;
		return;
	}

IL_00eb:
	{
		// target = diningRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = __this->get_diningRoom_15();
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_32, /*hidden argument*/NULL);
		__this->set_target_11(L_33);
		// break;
		return;
	}

IL_0102:
	{
		// target = bathroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = __this->get_bathroom_16();
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_35, /*hidden argument*/NULL);
		__this->set_target_11(L_36);
		// break;
		return;
	}

IL_0119:
	{
		// target = landing.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = __this->get_landing_17();
		NullCheck(L_37);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_38, /*hidden argument*/NULL);
		__this->set_target_11(L_39);
		// break;
		return;
	}

IL_0130:
	{
		// target = bedroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = __this->get_bedroom_18();
		NullCheck(L_40);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_41, /*hidden argument*/NULL);
		__this->set_target_11(L_42);
		// break;
		return;
	}

IL_0147:
	{
		// target = roofTerrace.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_43 = __this->get_roofTerrace_19();
		NullCheck(L_43);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_44, /*hidden argument*/NULL);
		__this->set_target_11(L_45);
		// }
		return;
	}
}
// System.String JerryMovement::GetRandomTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JerryMovement_GetRandomTarget_m96E3ABFDE90DCD5B7C316173DF4EA2D639662255 (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, String_t* ___currentRoom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JerryMovement_GetRandomTarget_m96E3ABFDE90DCD5B7C316173DF4EA2D639662255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int random = Random.Range(0, 7);
		int32_t L_0 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, 7, /*hidden argument*/NULL);
		V_0 = L_0;
		// switch (random)
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_0054;
			}
			case 6:
			{
				goto IL_005c;
			}
		}
	}
	{
		goto IL_0064;
	}

IL_002c:
	{
		// room = "kitchen";
		V_1 = _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F;
		// break;
		goto IL_006a;
	}

IL_0034:
	{
		// room = "livingRoom";
		V_1 = _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3;
		// break;
		goto IL_006a;
	}

IL_003c:
	{
		// room = "diningRoom";
		V_1 = _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8;
		// break;
		goto IL_006a;
	}

IL_0044:
	{
		// room = "bathroom";
		V_1 = _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6;
		// break;
		goto IL_006a;
	}

IL_004c:
	{
		// room = "landing";
		V_1 = _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306;
		// break;
		goto IL_006a;
	}

IL_0054:
	{
		// room = "bedroom";
		V_1 = _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51;
		// break;
		goto IL_006a;
	}

IL_005c:
	{
		// room = "roofTerrace";
		V_1 = _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7;
		// break;
		goto IL_006a;
	}

IL_0064:
	{
		// room = "kitchen";
		V_1 = _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F;
	}

IL_006a:
	{
		// if (currentRoom == room)
		String_t* L_2 = ___currentRoom0;
		String_t* L_3 = V_1;
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_007b;
		}
	}
	{
		// return GetRandomTarget(currentRoom);
		String_t* L_5 = ___currentRoom0;
		String_t* L_6 = JerryMovement_GetRandomTarget_m96E3ABFDE90DCD5B7C316173DF4EA2D639662255(__this, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_007b:
	{
		// return room;
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Void JerryMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JerryMovement__ctor_mD22BEACED9A777AB7A7633F89C2FB91E099BF73F (JerryMovement_t877ED47850922BB8F165C3EB121A8EA1F99EE573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JerryMovement__ctor_mD22BEACED9A777AB7A7633F89C2FB91E099BF73F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float timeTilJump = 1.0f;
		__this->set_timeTilJump_5((1.0f));
		// float jumpForce = 5.0f;
		__this->set_jumpForce_6((5.0f));
		// string currentRoomString = "livingRoom";
		__this->set_currentRoomString_10(_stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LilDoodMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_Start_mA322023564EB72040E76B8607F87C4660CE4B36C (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement_Start_mA322023564EB72040E76B8607F87C4660CE4B36C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// defaultParent = transform.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_0, /*hidden argument*/NULL);
		__this->set_defaultParent_22(L_1);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_4(L_2);
		// polygonCollider = GetComponent<PolygonCollider2D>();
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_3 = Component_GetComponent_TisPolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_mD54950223AD8BD8D30B89144A0774268FEBDDC80(__this, /*hidden argument*/Component_GetComponent_TisPolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_mD54950223AD8BD8D30B89144A0774268FEBDDC80_RuntimeMethod_var);
		__this->set_polygonCollider_7(L_3);
		// pathfinding = GetComponent<Pathfinding>();
		Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * L_4 = Component_GetComponent_TisPathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1_m2B1F22FA56BCE04B99BE1DC3B3025387AEE247B7(__this, /*hidden argument*/Component_GetComponent_TisPathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1_m2B1F22FA56BCE04B99BE1DC3B3025387AEE247B7_RuntimeMethod_var);
		__this->set_pathfinding_8(L_4);
		// dudeNeeds = GetComponent<DudeNeeds>();
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_5 = Component_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mC1E03B5C8F755D53A23982F3498E4E8BC4917D4F(__this, /*hidden argument*/Component_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mC1E03B5C8F755D53A23982F3498E4E8BC4917D4F_RuntimeMethod_var);
		__this->set_dudeNeeds_9(L_5);
		// boing = GetComponent<AudioSource>();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_6 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		__this->set_boing_24(L_6);
		// SetRoute();
		LilDoodMovement_SetRoute_m600CBF9538FDCB7A2ACD5F644C134C849CB68315(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LilDoodMovement::SetRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_SetRoute_m600CBF9538FDCB7A2ACD5F644C134C849CB68315 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement_SetRoute_m600CBF9538FDCB7A2ACD5F644C134C849CB68315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// route = pathfinding.Pathfind(GetRandomTarget(currentRoomString), currentRoomString).GetRoute();
		Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * L_0 = __this->get_pathfinding_8();
		String_t* L_1 = __this->get_currentRoomString_11();
		String_t* L_2 = LilDoodMovement_GetRandomTarget_m7135F978E2B1021806619F714CCE667C3DDCA1F4(__this, L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_currentRoomString_11();
		NullCheck(L_0);
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_4 = Pathfinding_Pathfind_m00B888F5F7E004A5EE862337086E241AFF4FC787(L_0, L_2, L_3, (bool)1, (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)NULL, (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = Room_GetRoute_m5D289AEAA29BD597761B9F392647B58918E61323(L_4, /*hidden argument*/NULL);
		__this->set_route_13(L_5);
		// SetTarget((string)route[0]);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_6 = __this->get_route_13();
		NullCheck(L_6);
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_6, 0);
		LilDoodMovement_SetTarget_m54CBE98C2C403E5CBD90165701C2640B99BB2318(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LilDoodMovement::PrintRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_PrintRoute_m91711DF2B0986AD6F6E77A9DFDBDB9C4DAA3BBCA (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement_PrintRoute_m91711DF2B0986AD6F6E77A9DFDBDB9C4DAA3BBCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// string routeString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (string room in route)
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_route_13();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(32 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0014:
		{
			// foreach (string room in route)
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_2);
			V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
			// routeString += $"{room}, ";
			String_t* L_4 = V_0;
			String_t* L_5 = V_2;
			String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_4, L_5, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_002d:
		{
			// foreach (string room in route)
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0014;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x48, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_3;
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0041:
		{
			RuntimeObject* L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_0047:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0048:
	{
		// Debug.Log(routeString);
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LilDoodMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_Update_m9B5EC7502B662B596B2D21362A3744C3734EB4C9 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LilDoodMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_FixedUpdate_m44A03B9C9F18C943AA2838CED63DCDB772DFA8D5 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	{
		// if(!dudeNeeds.dead && dudeNeeds.isBorn && !beingCarried)
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_0 = __this->get_dudeNeeds_9();
		NullCheck(L_0);
		bool L_1 = L_0->get_dead_8();
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_2 = __this->get_dudeNeeds_9();
		NullCheck(L_2);
		bool L_3 = L_2->get_isBorn_17();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		bool L_4 = __this->get_beingCarried_23();
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// Movement();
		LilDoodMovement_Movement_m69CB0DA20EA3557763C147B9C3C64270ED9D10FB(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void LilDoodMovement::JumpingDude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_JumpingDude_m80B1B330B32195E38544DD1E36E2A7D3A8539DFC (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement_JumpingDude_m80B1B330B32195E38544DD1E36E2A7D3A8539DFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * G_B2_0 = NULL;
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * G_B3_1 = NULL;
	{
		// rb.AddForce(new Vector2(1.0f * target.x < transform.position.x ? -1 : 1, 2.0f) * jumpForce, ForceMode2D.Impulse);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = __this->get_rb_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_target_12();
		float L_2 = L_1->get_x_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		G_B1_0 = L_0;
		if ((((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_2))) < ((float)L_5)))
		{
			G_B2_0 = L_0;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_6), (((float)((float)G_B3_0))), (2.0f), /*hidden argument*/NULL);
		float L_7 = __this->get_jumpForce_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(G_B3_1);
		Rigidbody2D_AddForce_m09E1A2E24DABA5BBC613E35772AE2C1C35C6E40C(G_B3_1, L_8, 1, /*hidden argument*/NULL);
		// boing.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_9 = __this->get_boing_24();
		NullCheck(L_9);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LilDoodMovement::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_Movement_m69CB0DA20EA3557763C147B9C3C64270ED9D10FB (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement_Movement_m69CB0DA20EA3557763C147B9C3C64270ED9D10FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector2 rayStartPos = new Vector2(transform.position.x, transform.position.y - polygonCollider.bounds.extents.y);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_6 = __this->get_polygonCollider_7();
		NullCheck(L_6);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_7 = Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_3), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)L_5, (float)L_9)), /*hidden argument*/NULL);
		// int doodMask = ~(1 << gameObject.layer);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_10, /*hidden argument*/NULL);
		V_1 = ((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)31)))))));
		// RaycastHit2D hit = Physics2D.Raycast(rayStartPos, -Vector2.up, 0.1f, doodMask);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_UnaryNegation_m3FA0AE2F9B031765EFA566B25F5453C3B001FF4D(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  L_16 = Physics2D_Raycast_mBEB66E9AA034BD0AE1B1C99DF872247B0131CBDD(L_12, L_14, (0.1f), L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// float distance = Mathf.Abs(hit.point.y - rayStartPos.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = RaycastHit2D_get_point_mC567E234B1B673C3A9819023C3DC97C781443098((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)(&V_2), /*hidden argument*/NULL);
		float L_18 = L_17.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_0;
		float L_20 = L_19.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		fabsf(((float)il2cpp_codegen_subtract((float)L_18, (float)L_20)));
		// if (hit.collider != null)
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_21 = RaycastHit2D_get_collider_m6A7EC53B2E179C2EFF4F29018A132B2979CBE976((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00c1;
		}
	}
	{
		// timeTilJump -= Time.fixedDeltaTime;
		float L_23 = __this->get_timeTilJump_5();
		float L_24 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		__this->set_timeTilJump_5(((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)));
		// if (timeTilJump <= 0)
		float L_25 = __this->get_timeTilJump_5();
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_00c1;
		}
	}
	{
		// JumpingDude();
		LilDoodMovement_JumpingDude_m80B1B330B32195E38544DD1E36E2A7D3A8539DFC(__this, /*hidden argument*/NULL);
		// timeTilJump = 1.0f;
		__this->set_timeTilJump_5((1.0f));
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void LilDoodMovement::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_OnTriggerEnter2D_mA7707691D27BCADFEBCA7FEBA05C99AC674C922F (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement_OnTriggerEnter2D_mA7707691D27BCADFEBCA7FEBA05C99AC674C922F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// if (collision.name == "god-ray")
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralFC6C7093BF8A910B42F442B945CA8BDCC9CE273B, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// dudeNeeds.isPhotosynthesising = true;
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_3 = __this->get_dudeNeeds_9();
		NullCheck(L_3);
		L_3->set_isPhotosynthesising_16((bool)1);
	}

IL_001e:
	{
		// switch (collision.name)
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_4 = ___collision0;
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		uint32_t L_7 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m94E4EDA2F909FACDA1591F7242109AFB650640AA(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)758455787)))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)170810391))))
		{
			goto IL_0107;
		}
	}
	{
		uint32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)385580919))))
		{
			goto IL_00f2;
		}
	}
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)758455787))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_021f;
	}

IL_0057:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)995480412)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)870733615))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)995480412))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_021f;
	}

IL_0074:
	{
		uint32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2112647197))))
		{
			goto IL_00c8;
		}
	}
	{
		uint32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1749340709))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_021f;
	}

IL_0089:
	{
		String_t* L_17 = V_0;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_021f;
	}

IL_009e:
	{
		String_t* L_19 = V_0;
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0143;
		}
	}
	{
		goto IL_021f;
	}

IL_00b3:
	{
		String_t* L_21 = V_0;
		bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_21, _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_016a;
		}
	}
	{
		goto IL_021f;
	}

IL_00c8:
	{
		String_t* L_23 = V_0;
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_021f;
	}

IL_00dd:
	{
		String_t* L_25 = V_0;
		bool L_26 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_25, _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_021f;
	}

IL_00f2:
	{
		String_t* L_27 = V_0;
		bool L_28 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_27, _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_01d9;
		}
	}
	{
		goto IL_021f;
	}

IL_0107:
	{
		String_t* L_29 = V_0;
		bool L_30 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_29, _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_01fd;
		}
	}
	{
		goto IL_021f;
	}

IL_011c:
	{
		// currentRoom = kitchen.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = __this->get_kitchen_14();
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_32, /*hidden argument*/NULL);
		__this->set_currentRoom_10(L_33);
		// currentRoomString = collision.name;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_34 = ___collision0;
		NullCheck(L_34);
		String_t* L_35 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_34, /*hidden argument*/NULL);
		__this->set_currentRoomString_11(L_35);
		// break;
		goto IL_021f;
	}

IL_0143:
	{
		// currentRoom = livingRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = __this->get_livingRoom_15();
		NullCheck(L_36);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_37, /*hidden argument*/NULL);
		__this->set_currentRoom_10(L_38);
		// currentRoomString = collision.name;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_39 = ___collision0;
		NullCheck(L_39);
		String_t* L_40 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_39, /*hidden argument*/NULL);
		__this->set_currentRoomString_11(L_40);
		// break;
		goto IL_021f;
	}

IL_016a:
	{
		// currentRoom = diningRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = __this->get_diningRoom_16();
		NullCheck(L_41);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_43 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_42, /*hidden argument*/NULL);
		__this->set_currentRoom_10(L_43);
		// currentRoomString = collision.name;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_44 = ___collision0;
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_44, /*hidden argument*/NULL);
		__this->set_currentRoomString_11(L_45);
		// break;
		goto IL_021f;
	}

IL_0191:
	{
		// currentRoom = bathroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = __this->get_bathroom_17();
		NullCheck(L_46);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_48 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_47, /*hidden argument*/NULL);
		__this->set_currentRoom_10(L_48);
		// currentRoomString = collision.name;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_49 = ___collision0;
		NullCheck(L_49);
		String_t* L_50 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_49, /*hidden argument*/NULL);
		__this->set_currentRoomString_11(L_50);
		// break;
		goto IL_021f;
	}

IL_01b5:
	{
		// currentRoom = landing.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = __this->get_landing_18();
		NullCheck(L_51);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_53 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_52, /*hidden argument*/NULL);
		__this->set_currentRoom_10(L_53);
		// currentRoomString = collision.name;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_54 = ___collision0;
		NullCheck(L_54);
		String_t* L_55 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_54, /*hidden argument*/NULL);
		__this->set_currentRoomString_11(L_55);
		// break;
		goto IL_021f;
	}

IL_01d9:
	{
		// currentRoom = bedroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_56 = __this->get_bedroom_19();
		NullCheck(L_56);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_58 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_57, /*hidden argument*/NULL);
		__this->set_currentRoom_10(L_58);
		// currentRoomString = collision.name;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_59 = ___collision0;
		NullCheck(L_59);
		String_t* L_60 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_59, /*hidden argument*/NULL);
		__this->set_currentRoomString_11(L_60);
		// break;
		goto IL_021f;
	}

IL_01fd:
	{
		// currentRoom = roofTerrace.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_61 = __this->get_roofTerrace_20();
		NullCheck(L_61);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_63 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_62, /*hidden argument*/NULL);
		__this->set_currentRoom_10(L_63);
		// currentRoomString = collision.name;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_64 = ___collision0;
		NullCheck(L_64);
		String_t* L_65 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_64, /*hidden argument*/NULL);
		__this->set_currentRoomString_11(L_65);
	}

IL_021f:
	{
		// if (currentRoomString == (string)route[0])
		String_t* L_66 = __this->get_currentRoomString_11();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_67 = __this->get_route_13();
		NullCheck(L_67);
		RuntimeObject * L_68 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_67, 0);
		bool L_69 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_66, ((String_t*)CastclassSealed((RuntimeObject*)L_68, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_02ff;
		}
	}
	{
		// if (route.Count > 1)
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_70 = __this->get_route_13();
		NullCheck(L_70);
		int32_t L_71 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_70);
		if ((((int32_t)L_71) <= ((int32_t)1)))
		{
			goto IL_027e;
		}
	}
	{
		// route.Remove(route[0]);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_72 = __this->get_route_13();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_73 = __this->get_route_13();
		NullCheck(L_73);
		RuntimeObject * L_74 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_73, 0);
		NullCheck(L_72);
		VirtActionInvoker1< RuntimeObject * >::Invoke(36 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_72, L_74);
		// SetTarget((string)route[0]);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_75 = __this->get_route_13();
		NullCheck(L_75);
		RuntimeObject * L_76 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_75, 0);
		LilDoodMovement_SetTarget_m54CBE98C2C403E5CBD90165701C2640B99BB2318(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_76, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// }
		goto IL_0284;
	}

IL_027e:
	{
		// SetRoute();
		LilDoodMovement_SetRoute_m600CBF9538FDCB7A2ACD5F644C134C849CB68315(__this, /*hidden argument*/NULL);
	}

IL_0284:
	{
		// if ((string)route[0] == "landing")
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_77 = __this->get_route_13();
		NullCheck(L_77);
		RuntimeObject * L_78 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_77, 0);
		bool L_79 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_78, String_t_il2cpp_TypeInfo_var)), _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_02c2;
		}
	}
	{
		// stairs.SendMessage("AddToStairMask", gameObject.layer);
		Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * L_80 = __this->get_stairs_21();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_81 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		int32_t L_82 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_81, /*hidden argument*/NULL);
		int32_t L_83 = L_82;
		RuntimeObject * L_84 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_80);
		Component_SendMessage_mE3B1D6FC26F26FA4218F1BCFDD1E41BF3ACB34B1(L_80, _stringLiteral46E04A7FD01D0F03F367D19AF59E2C6D81D8381C, L_84, /*hidden argument*/NULL);
		// } else if ((string)route[0] == "livingRoom")
		return;
	}

IL_02c2:
	{
		// } else if ((string)route[0] == "livingRoom")
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_85 = __this->get_route_13();
		NullCheck(L_85);
		RuntimeObject * L_86 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_85, 0);
		bool L_87 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_86, String_t_il2cpp_TypeInfo_var)), _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3, /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_02ff;
		}
	}
	{
		// stairs.SendMessage("RemoveFromStairMask", gameObject.layer);
		Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * L_88 = __this->get_stairs_21();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_89 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_89);
		int32_t L_90 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_89, /*hidden argument*/NULL);
		int32_t L_91 = L_90;
		RuntimeObject * L_92 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_91);
		NullCheck(L_88);
		Component_SendMessage_mE3B1D6FC26F26FA4218F1BCFDD1E41BF3ACB34B1(L_88, _stringLiteral882524F938B6A7F037958ADAACD77CD4B3733A02, L_92, /*hidden argument*/NULL);
	}

IL_02ff:
	{
		// }
		return;
	}
}
// System.Void LilDoodMovement::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_OnTriggerExit2D_m55B12C209850D9FC0618FE13F6BAB8CF86E133C4 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement_OnTriggerExit2D_m55B12C209850D9FC0618FE13F6BAB8CF86E133C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.name == "god-ray")
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralFC6C7093BF8A910B42F442B945CA8BDCC9CE273B, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// dudeNeeds.isPhotosynthesising = false;
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_3 = __this->get_dudeNeeds_9();
		NullCheck(L_3);
		L_3->set_isPhotosynthesising_16((bool)0);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void LilDoodMovement::SetTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_SetTarget_m54CBE98C2C403E5CBD90165701C2640B99BB2318 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, String_t* ___room0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement_SetTarget_m54CBE98C2C403E5CBD90165701C2640B99BB2318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// switch (room)
		String_t* L_0 = ___room0;
		uint32_t L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m94E4EDA2F909FACDA1591F7242109AFB650640AA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)758455787)))))
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)170810391))))
		{
			goto IL_00ac;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)385580919))))
		{
			goto IL_009b;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)758455787))))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}

IL_002b:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)995480412)))))
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)870733615))))
		{
			goto IL_0055;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)995480412))))
		{
			goto IL_008d;
		}
	}
	{
		return;
	}

IL_0044:
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2112647197))))
		{
			goto IL_007f;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1749340709))))
		{
			goto IL_0071;
		}
	}
	{
		return;
	}

IL_0055:
	{
		String_t* L_11 = ___room0;
		bool L_12 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_11, _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00bd;
		}
	}
	{
		return;
	}

IL_0063:
	{
		String_t* L_13 = ___room0;
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_13, _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00d4;
		}
	}
	{
		return;
	}

IL_0071:
	{
		String_t* L_15 = ___room0;
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00eb;
		}
	}
	{
		return;
	}

IL_007f:
	{
		String_t* L_17 = ___room0;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0102;
		}
	}
	{
		return;
	}

IL_008d:
	{
		String_t* L_19 = ___room0;
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0119;
		}
	}
	{
		return;
	}

IL_009b:
	{
		String_t* L_21 = ___room0;
		bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_21, _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0130;
		}
	}
	{
		return;
	}

IL_00ac:
	{
		String_t* L_23 = ___room0;
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0147;
		}
	}
	{
		return;
	}

IL_00bd:
	{
		// target = kitchen.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = __this->get_kitchen_14();
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_26, /*hidden argument*/NULL);
		__this->set_target_12(L_27);
		// break;
		return;
	}

IL_00d4:
	{
		// target = livingRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = __this->get_livingRoom_15();
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_29, /*hidden argument*/NULL);
		__this->set_target_12(L_30);
		// break;
		return;
	}

IL_00eb:
	{
		// target = diningRoom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = __this->get_diningRoom_16();
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_32, /*hidden argument*/NULL);
		__this->set_target_12(L_33);
		// break;
		return;
	}

IL_0102:
	{
		// target = bathroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = __this->get_bathroom_17();
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_35, /*hidden argument*/NULL);
		__this->set_target_12(L_36);
		// break;
		return;
	}

IL_0119:
	{
		// target = landing.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = __this->get_landing_18();
		NullCheck(L_37);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_38, /*hidden argument*/NULL);
		__this->set_target_12(L_39);
		// break;
		return;
	}

IL_0130:
	{
		// target = bedroom.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = __this->get_bedroom_19();
		NullCheck(L_40);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_41, /*hidden argument*/NULL);
		__this->set_target_12(L_42);
		// break;
		return;
	}

IL_0147:
	{
		// target = roofTerrace.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_43 = __this->get_roofTerrace_20();
		NullCheck(L_43);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_44, /*hidden argument*/NULL);
		__this->set_target_12(L_45);
		// }
		return;
	}
}
// System.String LilDoodMovement::GetRandomTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LilDoodMovement_GetRandomTarget_m7135F978E2B1021806619F714CCE667C3DDCA1F4 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, String_t* ___currentRoom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement_GetRandomTarget_m7135F978E2B1021806619F714CCE667C3DDCA1F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int random = Random.Range(0, 7);
		int32_t L_0 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, 7, /*hidden argument*/NULL);
		V_0 = L_0;
		// switch (random)
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_0054;
			}
			case 6:
			{
				goto IL_005c;
			}
		}
	}
	{
		goto IL_0064;
	}

IL_002c:
	{
		// room = "kitchen";
		V_1 = _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F;
		// break;
		goto IL_006a;
	}

IL_0034:
	{
		// room = "livingRoom";
		V_1 = _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3;
		// break;
		goto IL_006a;
	}

IL_003c:
	{
		// room = "diningRoom";
		V_1 = _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8;
		// break;
		goto IL_006a;
	}

IL_0044:
	{
		// room = "bathroom";
		V_1 = _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6;
		// break;
		goto IL_006a;
	}

IL_004c:
	{
		// room = "landing";
		V_1 = _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306;
		// break;
		goto IL_006a;
	}

IL_0054:
	{
		// room = "bedroom";
		V_1 = _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51;
		// break;
		goto IL_006a;
	}

IL_005c:
	{
		// room = "roofTerrace";
		V_1 = _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7;
		// break;
		goto IL_006a;
	}

IL_0064:
	{
		// room = "kitchen";
		V_1 = _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F;
	}

IL_006a:
	{
		// if (currentRoom == room)
		String_t* L_2 = ___currentRoom0;
		String_t* L_3 = V_1;
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_007b;
		}
	}
	{
		// return GetRandomTarget(currentRoom);
		String_t* L_5 = ___currentRoom0;
		String_t* L_6 = LilDoodMovement_GetRandomTarget_m7135F978E2B1021806619F714CCE667C3DDCA1F4(__this, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_007b:
	{
		// return room;
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Void LilDoodMovement::OnCarry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_OnCarry_mA5E5FFADFBB4DC9D97138F6738ACD6602E1C9CF3 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	{
		// beingCarried = true;
		__this->set_beingCarried_23((bool)1);
		// rb.gravityScale = 0;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = __this->get_rb_4();
		NullCheck(L_0);
		Rigidbody2D_set_gravityScale_m4593B8D87314F00947B795AA442B90F1598B1104(L_0, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LilDoodMovement::OnCarryEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement_OnCarryEnd_m35DCDEAD8A9D80180E368073B58C14D2F574FC89 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	{
		// transform.parent = defaultParent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_defaultParent_22();
		NullCheck(L_0);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_0, L_1, /*hidden argument*/NULL);
		// beingCarried = false;
		__this->set_beingCarried_23((bool)0);
		// rb.gravityScale = 1.0f;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = __this->get_rb_4();
		NullCheck(L_2);
		Rigidbody2D_set_gravityScale_m4593B8D87314F00947B795AA442B90F1598B1104(L_2, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LilDoodMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LilDoodMovement__ctor_mC1D4E30DFE18A5BA59A5533D4DDA1F9072AA5DD9 (LilDoodMovement_t65EB902ED1DF4999E1E5E55831C58916C7918A7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LilDoodMovement__ctor_mC1D4E30DFE18A5BA59A5533D4DDA1F9072AA5DD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float timeTilJump = 1.0f;
		__this->set_timeTilJump_5((1.0f));
		// float jumpForce = 5.0f;
		__this->set_jumpForce_6((5.0f));
		// public string currentRoomString = "kitchen";
		__this->set_currentRoomString_11(_stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Pathfinding::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding_Start_mFDBAB5C16CF0361285B494D1AE1815BC4889A20E (Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Pathfinding::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding_Update_m1CE02B6A7D65BF40DBA51F083667DFBBC7704539 (Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// Room Pathfinding::Pathfind(System.String,System.String,System.Boolean,System.Collections.ArrayList,Room)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * Pathfinding_Pathfind_m00B888F5F7E004A5EE862337086E241AFF4FC787 (Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * __this, String_t* ___target0, String_t* ___current1, bool ___isStart2, ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___visited3, Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * ___previousRoom4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pathfinding_Pathfind_m00B888F5F7E004A5EE862337086E241AFF4FC787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * V_1 = NULL;
	Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * V_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	String_t* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (isStart)
		bool L_0 = ___isStart2;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// this.target = target;
		String_t* L_1 = ___target0;
		__this->set_target_12(L_1);
		// this.start = current;
		String_t* L_2 = ___current1;
		__this->set_start_11(L_2);
	}

IL_0011:
	{
		// if (visited == null)
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_3 = ___visited3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		// visited = new ArrayList();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_4 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_4, /*hidden argument*/NULL);
		___visited3 = L_4;
	}

IL_001c:
	{
		// visited.Add(current);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = ___visited3;
		String_t* L_6 = ___current1;
		NullCheck(L_5);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_6);
		// string[] connectedRooms = GetConnectedRooms(current);
		String_t* L_7 = ___current1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = Pathfinding_GetConnectedRooms_m3D445850B4B0C398B75E818A2AB29C630B5B8657(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// if (connectedRooms == null)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = V_0;
		if (L_9)
		{
			goto IL_0032;
		}
	}
	{
		// return null;
		return (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 *)NULL;
	}

IL_0032:
	{
		// ArrayList unvisitedRooms = new ArrayList();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_10 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		// foreach (string room in connectedRooms)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = V_0;
		V_3 = L_11;
		V_4 = 0;
		goto IL_005f;
	}

IL_003f:
	{
		// foreach (string room in connectedRooms)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_3;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = L_15;
		// if (!visited.Contains(room))
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_16 = ___visited3;
		String_t* L_17 = V_5;
		NullCheck(L_16);
		bool L_18 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_16, L_17);
		if (L_18)
		{
			goto IL_0059;
		}
	}
	{
		// unvisitedRooms.Add(room);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_19 = V_1;
		String_t* L_20 = V_5;
		NullCheck(L_19);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_19, L_20);
	}

IL_0059:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_005f:
	{
		// foreach (string room in connectedRooms)
		int32_t L_22 = V_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_003f;
		}
	}
	{
		// Room currentRoom = new Room(current, previousRoom);
		String_t* L_24 = ___current1;
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_25 = ___previousRoom4;
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_26 = (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 *)il2cpp_codegen_object_new(Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823_il2cpp_TypeInfo_var);
		Room__ctor_m93B6458B65D5A596A612EF75AB1F7334B049004B(L_26, L_24, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		// if (currentRoom.name == target)
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_27 = V_2;
		NullCheck(L_27);
		String_t* L_28 = L_27->get_name_1();
		String_t* L_29 = ___target0;
		bool L_30 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_008b;
		}
	}
	{
		// pathFound = currentRoom;
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_31 = V_2;
		__this->set_pathFound_14(L_31);
		// return pathFound;
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_32 = __this->get_pathFound_14();
		return L_32;
	}

IL_008b:
	{
		// foreach (string room in unvisitedRooms)
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_33 = V_1;
		NullCheck(L_33);
		RuntimeObject* L_34 = VirtFuncInvoker0< RuntimeObject* >::Invoke(32 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_33);
		V_6 = L_34;
	}

IL_0093:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b1;
		}

IL_0095:
		{
			// foreach (string room in unvisitedRooms)
			RuntimeObject* L_35 = V_6;
			NullCheck(L_35);
			RuntimeObject * L_36 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_35);
			V_7 = ((String_t*)CastclassSealed((RuntimeObject*)L_36, String_t_il2cpp_TypeInfo_var));
			// Pathfind(target, room, false, visited, currentRoom);
			String_t* L_37 = ___target0;
			String_t* L_38 = V_7;
			ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_39 = ___visited3;
			Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_40 = V_2;
			Pathfinding_Pathfind_m00B888F5F7E004A5EE862337086E241AFF4FC787(__this, L_37, L_38, (bool)0, L_39, L_40, /*hidden argument*/NULL);
		}

IL_00b1:
		{
			// foreach (string room in unvisitedRooms)
			RuntimeObject* L_41 = V_6;
			NullCheck(L_41);
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0095;
			}
		}

IL_00ba:
		{
			IL2CPP_LEAVE(0xD1, FINALLY_00bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bc;
	}

FINALLY_00bc:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_43 = V_6;
			V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_44 = V_8;
			if (!L_44)
			{
				goto IL_00d0;
			}
		}

IL_00c9:
		{
			RuntimeObject* L_45 = V_8;
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_45);
		}

IL_00d0:
		{
			IL2CPP_END_FINALLY(188)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(188)
	{
		IL2CPP_JUMP_TBL(0xD1, IL_00d1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		// return pathFound;
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_46 = __this->get_pathFound_14();
		return L_46;
	}
}
// System.String[] Pathfinding::GetConnectedRooms(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Pathfinding_GetConnectedRooms_m3D445850B4B0C398B75E818A2AB29C630B5B8657 (Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * __this, String_t* ___current0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pathfinding_GetConnectedRooms_m3D445850B4B0C398B75E818A2AB29C630B5B8657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// switch (current)
		String_t* L_0 = ___current0;
		uint32_t L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m94E4EDA2F909FACDA1591F7242109AFB650640AA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)758455787)))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)170810391))))
		{
			goto IL_00c1;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)385580919))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)758455787))))
		{
			goto IL_0076;
		}
	}
	{
		goto IL_0101;
	}

IL_0032:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)995480412)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)870733615))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)995480412))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_0101;
	}

IL_004f:
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2112647197))))
		{
			goto IL_0094;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1749340709))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_0101;
	}

IL_0064:
	{
		String_t* L_11 = ___current0;
		bool L_12 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_11, _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_0101;
	}

IL_0076:
	{
		String_t* L_13 = ___current0;
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_13, _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_0101;
	}

IL_0085:
	{
		String_t* L_15 = ___current0;
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00de;
		}
	}
	{
		goto IL_0101;
	}

IL_0094:
	{
		String_t* L_17 = ___current0;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00e5;
		}
	}
	{
		goto IL_0101;
	}

IL_00a3:
	{
		String_t* L_19 = ___current0;
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0101;
	}

IL_00b2:
	{
		String_t* L_21 = ___current0;
		bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_21, _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00f3;
		}
	}
	{
		goto IL_0101;
	}

IL_00c1:
	{
		String_t* L_23 = ___current0;
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0101;
	}

IL_00d0:
	{
		// return kitchenRooms;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = __this->get_kitchenRooms_4();
		return L_25;
	}

IL_00d7:
	{
		// return livingRoomRooms;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = __this->get_livingRoomRooms_5();
		return L_26;
	}

IL_00de:
	{
		// return diningRoomRooms;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = __this->get_diningRoomRooms_6();
		return L_27;
	}

IL_00e5:
	{
		// return bathroomRooms;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = __this->get_bathroomRooms_7();
		return L_28;
	}

IL_00ec:
	{
		// return landingRooms;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = __this->get_landingRooms_8();
		return L_29;
	}

IL_00f3:
	{
		// return bedroomRooms;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = __this->get_bedroomRooms_9();
		return L_30;
	}

IL_00fa:
	{
		// return roofTerraceRooms;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = __this->get_roofTerraceRooms_10();
		return L_31;
	}

IL_0101:
	{
		// Debug.Log("You've fucked it");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral7CCC8CDD025089025F69628E5F445F0C9EBD4C28, /*hidden argument*/NULL);
		// return null;
		return (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL;
	}
}
// System.Void Pathfinding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding__ctor_mE048C9A0235050893ACA27BB194B8CFC8811F99B (Pathfinding_tDBD452709E2B46E15201A43713229D1ABEFF37B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pathfinding__ctor_mE048C9A0235050893ACA27BB194B8CFC8811F99B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string[] kitchenRooms = new string[] { "livingRoom" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3);
		__this->set_kitchenRooms_4(L_1);
		// private string[] livingRoomRooms = new string[] { "kitchen", "landing", "diningRoom" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2F56C0AC09EF740A2B7C6409B5EF046AE6CCD42F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4E17DE0CCBA709A73E7C8D3D4DDE3E5874A90AC8);
		__this->set_livingRoomRooms_5(L_5);
		// private string[] diningRoomRooms = new string[] { "livingRoom" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3);
		__this->set_diningRoomRooms_6(L_7);
		// private string[] bathroomRooms = new string[] { "landing" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306);
		__this->set_bathroomRooms_7(L_9);
		// private string[] landingRooms = new string[] { "bathroom", "livingRoom", "bedroom" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral72BFB05496F963647E4D2C8B9A3BA6C0265800B6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral201CDF70AFED7D59726BA120F1CCF43400DEC5A3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral009E058C883C683E1330228851ECAFE3265C8F51);
		__this->set_landingRooms_8(L_13);
		// private string[] bedroomRooms = new string[] { "landing", "roofTerrace" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB9561877A6BF4600A3EDB6430305BADC2B493306);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral0D6A3E406B45495A171DE828E6D504A55DF2AAE7);
		__this->set_bedroomRooms_9(L_16);
		// private string[] roofTerraceRooms = new string[] { "bedroom" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral009E058C883C683E1330228851ECAFE3265C8F51);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral009E058C883C683E1330228851ECAFE3265C8F51);
		__this->set_roofTerraceRooms_10(L_18);
		// private ArrayList visited = new ArrayList();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_19 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_19, /*hidden argument*/NULL);
		__this->set_visited_13(L_19);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlayerCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_Start_m3B1C5FDB4C2F9025E6508F87FFA07AE152DE5932 (PlayerCamera_tF1E487BFA22293AE1490DCF28C21E288B564FF5D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_Update_m6B4447BBD541FC93C96A380123343E0FCC4A4A6B (PlayerCamera_tF1E487BFA22293AE1490DCF28C21E288B564FF5D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerCamera::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_OnTriggerEnter2D_m0DA2C582DA633C5FBF7B1514386D725BACA71E6B (PlayerCamera_tF1E487BFA22293AE1490DCF28C21E288B564FF5D * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCamera_OnTriggerEnter2D_m0DA2C582DA633C5FBF7B1514386D725BACA71E6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Camera.main.SendMessage("MoveCamera", collision.name);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_1 = ___collision0;
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Component_SendMessage_mE3B1D6FC26F26FA4218F1BCFDD1E41BF3ACB34B1(L_0, _stringLiteralA2B4C5A1006EEF72BF9580BB027F12A5B22E513F, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera__ctor_m4828E8B8DDF95D6513371B6ED5D20952B5A48A4E (PlayerCamera_tF1E487BFA22293AE1490DCF28C21E288B564FF5D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PotGrowth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PotGrowth_Start_m1790BA0B04515CD56B5145ACD5D96492B50B182E (PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PotGrowth_Start_m1790BA0B04515CD56B5145ACD5D96492B50B182E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// growingPlant.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_growingPlant_4();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// dudeNeeds = plantToGrow.GetComponent<DudeNeeds>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_plantToGrow_5();
		NullCheck(L_1);
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_2 = GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA(L_1, /*hidden argument*/GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA_RuntimeMethod_var);
		__this->set_dudeNeeds_6(L_2);
		// }
		return;
	}
}
// System.Void PotGrowth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PotGrowth_Update_m96FF4FEBD030679D22033A372C3EC2719134490E (PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PotGrowth::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PotGrowth_OnTriggerEnter2D_m0E940D1B3EA9BA389D3CB073C2631A302E95AA3C (PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PotGrowth_OnTriggerEnter2D_m0E940D1B3EA9BA389D3CB073C2631A302E95AA3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == plantToGrow.layer && dudeNeeds.fullyGrown)
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_plantToGrow_5();
		NullCheck(L_3);
		int32_t L_4 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_006e;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_5 = __this->get_dudeNeeds_6();
		NullCheck(L_5);
		bool L_6 = L_5->get_fullyGrown_14();
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		// growingPlant.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_growingPlant_4();
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		// plantToGrow.SendMessage("Planted");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_plantToGrow_5();
		NullCheck(L_8);
		GameObject_SendMessage_m9A7BE015CC1472A59F1077CADFB22AD67F8722D9(L_8, _stringLiteral58CAEBADD832F4481DE8D18619A06BF39133897F, /*hidden argument*/NULL);
		// plantToGrow.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_plantToGrow_5();
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// dudeNeeds.ui.SetActive(false);
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_10 = __this->get_dudeNeeds_6();
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = L_10->get_ui_10();
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, (bool)0, /*hidden argument*/NULL);
		// player.SendMessage("Planted");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_player_7();
		NullCheck(L_12);
		GameObject_SendMessage_m9A7BE015CC1472A59F1077CADFB22AD67F8722D9(L_12, _stringLiteral58CAEBADD832F4481DE8D18619A06BF39133897F, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void PotGrowth::Plant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PotGrowth_Plant_mC5713CEB733D31B6457640AE44CF2ED89FFEDD58 (PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC * __this, const RuntimeMethod* method)
{
	{
		// growingPlant.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_growingPlant_4();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PotGrowth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PotGrowth__ctor_mFC0B24E6648F3121F236197969FA807D1E00432D (PotGrowth_t875FF9E5582E602928AF0F919785941B2A8973EC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m23AE6143BDABB863B629ADE701E2998AB8651D4C (Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// System.Void Readme_Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mE73C1D6AE5454B5A67AAB04CAA5144A5CA0B0D96 (Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Retry::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Retry_Start_m1A789365E328AB4F3F9243B5C494A7D93B075243 (Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Retry_Start_m1A789365E328AB4F3F9243B5C494A7D93B075243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mourn.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_mourn_4();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// mourn2.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_mourn2_5();
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// mourn3.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_mourn3_6();
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
		// dudeNeeds = boi.GetComponent<DudeNeeds>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_boi_7();
		NullCheck(L_3);
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_4 = GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA(L_3, /*hidden argument*/GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA_RuntimeMethod_var);
		__this->set_dudeNeeds_13(L_4);
		// dudeNeeds2 = boi2.GetComponent<DudeNeeds>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_boi2_8();
		NullCheck(L_5);
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_6 = GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA(L_5, /*hidden argument*/GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA_RuntimeMethod_var);
		__this->set_dudeNeeds2_14(L_6);
		// dudeNeeds3 = boi3.GetComponent<DudeNeeds>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_boi3_9();
		NullCheck(L_7);
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_8 = GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA(L_7, /*hidden argument*/GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA_RuntimeMethod_var);
		__this->set_dudeNeeds3_15(L_8);
		// dudeNeeds4 = boi4.GetComponent<DudeNeeds>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_boi4_10();
		NullCheck(L_9);
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_10 = GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA(L_9, /*hidden argument*/GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA_RuntimeMethod_var);
		__this->set_dudeNeeds4_16(L_10);
		// dudeNeeds5 = boi5.GetComponent<DudeNeeds>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_boi5_11();
		NullCheck(L_11);
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_12 = GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA(L_11, /*hidden argument*/GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA_RuntimeMethod_var);
		__this->set_dudeNeeds5_17(L_12);
		// dudeNeeds6 = boi6.GetComponent<DudeNeeds>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_boi6_12();
		NullCheck(L_13);
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_14 = GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA(L_13, /*hidden argument*/GameObject_GetComponent_TisDudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F_mE2E3CA677961BAC6CA71D0F0209BE67093D53CFA_RuntimeMethod_var);
		__this->set_dudeNeeds6_18(L_14);
		// }
		return;
	}
}
// System.Void Retry::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Retry_Update_m6370A9ECC62715D8CA4B99CD2D5830CBFF0CB5A5 (Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Retry_Update_m6370A9ECC62715D8CA4B99CD2D5830CBFF0CB5A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!gameOver)
		bool L_0 = __this->get_gameOver_19();
		if (L_0)
		{
			goto IL_014e;
		}
	}
	{
		// if (((dudeNeeds.dead || dudeNeeds2.dead || dudeNeeds3.dead || dudeNeeds4.dead || dudeNeeds5.dead || dudeNeeds6.dead) && !winScript) || ((dudeNeeds.planted && dudeNeeds2.planted && dudeNeeds3.planted && dudeNeeds4.planted && dudeNeeds5.planted && dudeNeeds6.planted) && winScript))
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_1 = __this->get_dudeNeeds_13();
		NullCheck(L_1);
		bool L_2 = L_1->get_dead_8();
		if (L_2)
		{
			goto IL_0059;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_3 = __this->get_dudeNeeds2_14();
		NullCheck(L_3);
		bool L_4 = L_3->get_dead_8();
		if (L_4)
		{
			goto IL_0059;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_5 = __this->get_dudeNeeds3_15();
		NullCheck(L_5);
		bool L_6 = L_5->get_dead_8();
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_7 = __this->get_dudeNeeds4_16();
		NullCheck(L_7);
		bool L_8 = L_7->get_dead_8();
		if (L_8)
		{
			goto IL_0059;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_9 = __this->get_dudeNeeds5_17();
		NullCheck(L_9);
		bool L_10 = L_9->get_dead_8();
		if (L_10)
		{
			goto IL_0059;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_11 = __this->get_dudeNeeds6_18();
		NullCheck(L_11);
		bool L_12 = L_11->get_dead_8();
		if (!L_12)
		{
			goto IL_0061;
		}
	}

IL_0059:
	{
		bool L_13 = __this->get_winScript_25();
		if (!L_13)
		{
			goto IL_00cc;
		}
	}

IL_0061:
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_14 = __this->get_dudeNeeds_13();
		NullCheck(L_14);
		bool L_15 = L_14->get_planted_15();
		if (!L_15)
		{
			goto IL_022d;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_16 = __this->get_dudeNeeds2_14();
		NullCheck(L_16);
		bool L_17 = L_16->get_planted_15();
		if (!L_17)
		{
			goto IL_022d;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_18 = __this->get_dudeNeeds3_15();
		NullCheck(L_18);
		bool L_19 = L_18->get_planted_15();
		if (!L_19)
		{
			goto IL_022d;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_20 = __this->get_dudeNeeds4_16();
		NullCheck(L_20);
		bool L_21 = L_20->get_planted_15();
		if (!L_21)
		{
			goto IL_022d;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_22 = __this->get_dudeNeeds5_17();
		NullCheck(L_22);
		bool L_23 = L_22->get_planted_15();
		if (!L_23)
		{
			goto IL_022d;
		}
	}
	{
		DudeNeeds_tB8F78F8E1268E9C53620B16ACD8B8FACF2EE796F * L_24 = __this->get_dudeNeeds6_18();
		NullCheck(L_24);
		bool L_25 = L_24->get_planted_15();
		if (!L_25)
		{
			goto IL_022d;
		}
	}
	{
		bool L_26 = __this->get_winScript_25();
		if (!L_26)
		{
			goto IL_022d;
		}
	}

IL_00cc:
	{
		// mourn.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_mourn_4();
		NullCheck(L_27);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_27, (bool)1, /*hidden argument*/NULL);
		// mourn2.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_mourn2_5();
		NullCheck(L_28);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_28, (bool)1, /*hidden argument*/NULL);
		// mourn3.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = __this->get_mourn3_6();
		NullCheck(L_29);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_29, (bool)1, /*hidden argument*/NULL);
		// player.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_player_20();
		NullCheck(L_30);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_30, (bool)0, /*hidden argument*/NULL);
		// startTime = Time.time;
		float L_31 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F((&L_32), L_31, /*hidden argument*/Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var);
		__this->set_startTime_24(L_32);
		// startPos = Camera.main.transform.position;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_33 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_35, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_37), L_36, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_startPos_21(L_37);
		// target = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_38, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_40 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_39, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_41), L_40, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		__this->set_target_22(L_41);
		// gameOver = true;
		__this->set_gameOver_19((bool)1);
		// }
		return;
	}

IL_014e:
	{
		// if (target.HasValue)
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_42 = __this->get_address_of_target_22();
		bool L_43 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_inline((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_42, /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		if (!L_43)
		{
			goto IL_0212;
		}
	}
	{
		// float distCovered = (Time.time - startTime.Value) * speed;
		float L_44 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_45 = __this->get_address_of_startTime_24();
		float L_46 = Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)L_45, /*hidden argument*/Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var);
		float L_47 = __this->get_speed_23();
		// float journeyLength = Vector2.Distance(startPos.Value, target.Value);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_48 = __this->get_address_of_startPos_21();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_48, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_50 = __this->get_address_of_target_22();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_51 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_50, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_52 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_49, L_51, /*hidden argument*/NULL);
		V_0 = L_52;
		// float fractionOfJourney = distCovered / journeyLength;
		float L_53 = V_0;
		V_1 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_44, (float)L_46)), (float)L_47))/(float)L_53));
		// Camera.main.transform.position = Vector2.Lerp(startPos.Value, target.Value, fractionOfJourney);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_54 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_55 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_54, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_56 = __this->get_address_of_startPos_21();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_57 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_56, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_58 = __this->get_address_of_target_22();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_59 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_58, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		float L_60 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_61 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_57, L_59, L_60, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_61, /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_55, L_62, /*hidden argument*/NULL);
		// if (Camera.main.transform.position.Equals(target.Value))
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_63 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_64 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_64, /*hidden argument*/NULL);
		V_2 = L_65;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_66 = __this->get_address_of_target_22();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_67 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)L_66, /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_67, /*hidden argument*/NULL);
		bool L_69 = Vector3_Equals_m6B991540378DB8541CEB9472F7ED2BF5FF72B5DB((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0212;
		}
	}
	{
		// target = null;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_70 = __this->get_address_of_target_22();
		il2cpp_codegen_initobj(L_70, sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		// startTime = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_71 = __this->get_address_of_startTime_24();
		il2cpp_codegen_initobj(L_71, sizeof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 ));
		// startPos = null;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * L_72 = __this->get_address_of_startPos_21();
		il2cpp_codegen_initobj(L_72, sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
	}

IL_0212:
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_73 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)114), /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_022d;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_74 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
		V_3 = L_74;
		String_t* L_75 = Scene_get_name_m0E63ED0F050FCC35A4216220C584BE3D3F77B0E1((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_3), /*hidden argument*/NULL);
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(L_75, /*hidden argument*/NULL);
	}

IL_022d:
	{
		// }
		return;
	}
}
// System.Void Retry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Retry__ctor_m3DB641DAFC3773EFF214851FF19378A9ED013851 (Retry_tF041ACACDE019F26719D9BDF7AA6DB285BAD1A00 * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 3.0f;
		__this->set_speed_23((3.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Room::.ctor(System.String,Room)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_m93B6458B65D5A596A612EF75AB1F7334B049004B (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * __this, String_t* ___name0, Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * ___previousRoom1, const RuntimeMethod* method)
{
	{
		// public Room(string name, Room previousRoom)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->set_name_1(L_0);
		// this.previousRoom = previousRoom;
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_1 = ___previousRoom1;
		__this->set_previousRoom_0(L_1);
		// }
		return;
	}
}
// System.Collections.ArrayList Room::GetAllPreviousRooms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * Room_GetAllPreviousRooms_mDE98F4B80D522DF86560EDCDF52A284D64655FF2 (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_GetAllPreviousRooms_mDE98F4B80D522DF86560EDCDF52A284D64655FF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * V_0 = NULL;
	Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * V_1 = NULL;
	{
		// ArrayList previousRooms = new ArrayList();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Room room = this;
		V_1 = __this;
		goto IL_0023;
	}

IL_000a:
	{
		// previousRooms.Add(room.previousRoom.name);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_1 = V_0;
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_2 = V_1;
		NullCheck(L_2);
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_3 = L_2->get_previousRoom_0();
		NullCheck(L_3);
		String_t* L_4 = L_3->get_name_1();
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, L_4);
		// room = room.previousRoom;
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_5 = V_1;
		NullCheck(L_5);
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_6 = L_5->get_previousRoom_0();
		V_1 = L_6;
	}

IL_0023:
	{
		// while (room.previousRoom != null)
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_7 = V_1;
		NullCheck(L_7);
		Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * L_8 = L_7->get_previousRoom_0();
		if (L_8)
		{
			goto IL_000a;
		}
	}
	{
		// return previousRooms;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.ArrayList Room::GetRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * Room_GetRoute_m5D289AEAA29BD597761B9F392647B58918E61323 (Room_t8B8E2DE275B641F37551E992EFF4B93A1780E823 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_GetRoute_m5D289AEAA29BD597761B9F392647B58918E61323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * V_0 = NULL;
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// ArrayList allPreviousRooms = GetAllPreviousRooms();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = Room_GetAllPreviousRooms_mDE98F4B80D522DF86560EDCDF52A284D64655FF2(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// ArrayList route = new ArrayList();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_1 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		// for (int i = allPreviousRooms.Count - 2; i >= 0; i--)
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)2));
		goto IL_002a;
	}

IL_0018:
	{
		// route.Add(allPreviousRooms[i]);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_4 = V_1;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, L_6);
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_7);
		// for (int i = allPreviousRooms.Count - 2; i >= 0; i--)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = allPreviousRooms.Count - 2; i >= 0; i--)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// route.Add(name);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_10 = V_1;
		String_t* L_11 = __this->get_name_1();
		NullCheck(L_10);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_10, L_11);
		// return route;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_12 = V_1;
		return L_12;
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
// System.Void Stairs::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs_Start_m6E6D08009703EE0FB80460630BE458845031E3E8 (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stairs_Start_m6E6D08009703EE0FB80460630BE458845031E3E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformEffector = GetComponent<PlatformEffector2D>();
		PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56 * L_0 = Component_GetComponent_TisPlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56_m264CB10838725FAF7E7CCA41E980B70387B270AF(__this, /*hidden argument*/Component_GetComponent_TisPlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56_m264CB10838725FAF7E7CCA41E980B70387B270AF_RuntimeMethod_var);
		__this->set_platformEffector_4(L_0);
		// stairMasks = new ArrayList();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_1 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_1, /*hidden argument*/NULL);
		__this->set_stairMasks_6(L_1);
		// stairMasks.Add(LayerMask.NameToLayer("Dood"));
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_2 = __this->get_stairMasks_6();
		int32_t L_3 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteral468C6C041BCEA0B892D7D8475778FD6D2FDB1A13, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_5);
		// stairMasks.Add(LayerMask.NameToLayer("Player"));
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_6 = __this->get_stairMasks_6();
		int32_t L_7 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_6, L_9);
		// }
		return;
	}
}
// System.Void Stairs::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs_Update_m316C1B75AC74CE876CE6513DE3FB5BD4D4E58809 (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stairs_Update_m316C1B75AC74CE876CE6513DE3FB5BD4D4E58809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
		bool L_0 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)115), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)274), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}

IL_0015:
	{
		// RemoveFromStairMask(LayerMask.NameToLayer("Player"));
		int32_t L_2 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		Stairs_RemoveFromStairMask_m05F2042A3E80DB4659742B0277773A498BFA75BF(__this, L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (Input.GetKeyUp(KeyCode.S) || Input.GetKeyUp(KeyCode.DownArrow))
		bool L_3 = Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193(((int32_t)115), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		bool L_4 = Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193(((int32_t)274), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004a;
		}
	}

IL_003a:
	{
		// AddToStairMask(LayerMask.NameToLayer("Player"));
		int32_t L_5 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		Stairs_AddToStairMask_m6947A30645F5AFFEB537DF82627C080F3B7E8B83(__this, L_5, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Stairs::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs_FixedUpdate_m8790F08FA529F0C3B262F935B4AA81FD30A8B12D (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stairs_FixedUpdate_m8790F08FA529F0C3B262F935B4AA81FD30A8B12D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// int mask = 0;
		V_0 = 0;
		// foreach (int layerMask in stairMasks)
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_stairMasks_6();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(32 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_0010:
		{
			// foreach (int layerMask in stairMasks)
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_2);
			V_2 = ((*(int32_t*)((int32_t*)UnBox(L_3, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
			// mask = (mask | (1 << layerMask));
			int32_t L_4 = V_0;
			int32_t L_5 = V_2;
			V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)31)))))));
		}

IL_0025:
		{
			// foreach (int layerMask in stairMasks)
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0010;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x40, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_9 = V_3;
			if (!L_9)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			RuntimeObject* L_10 = V_3;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
		}

IL_003f:
		{
			IL2CPP_END_FINALLY(47)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0040:
	{
		// if (mask != this.mask)
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_mask_5();
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_005c;
		}
	}
	{
		// platformEffector.colliderMask = mask;
		PlatformEffector2D_t0C9BF70FE816400FA7E94AAE3985A3CDBA16CD56 * L_13 = __this->get_platformEffector_4();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		Effector2D_set_colliderMask_mB0F0CDEDFCD07A65605A9474EE2C23E749E6D588(L_13, L_14, /*hidden argument*/NULL);
		// this.mask = mask;
		int32_t L_15 = V_0;
		__this->set_mask_5(L_15);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Stairs::AddToStairMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs_AddToStairMask_m6947A30645F5AFFEB537DF82627C080F3B7E8B83 (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stairs_AddToStairMask_m6947A30645F5AFFEB537DF82627C080F3B7E8B83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int index = stairMasks.IndexOf(layer);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_stairMasks_6();
		int32_t L_1 = ___layer0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		int32_t L_4 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(33 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_3);
		// if (index == -1)
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0026;
		}
	}
	{
		// stairMasks.Add(layer);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = __this->get_stairMasks_6();
		int32_t L_6 = ___layer0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_8);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Stairs::RemoveFromStairMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs_RemoveFromStairMask_m05F2042A3E80DB4659742B0277773A498BFA75BF (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stairs_RemoveFromStairMask_m05F2042A3E80DB4659742B0277773A498BFA75BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stairMasks.Remove(layer);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_stairMasks_6();
		int32_t L_1 = ___layer0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(36 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void Stairs::AddToWallMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs_AddToWallMask_mBC48C43FEFED1654D7E6B660E4182526B997D23B (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stairs_AddToWallMask_mBC48C43FEFED1654D7E6B660E4182526B997D23B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int index = wallMasks.IndexOf(layer);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_wallMasks_7();
		int32_t L_1 = ___layer0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		int32_t L_4 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(33 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_3);
		// if (index == -1)
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0026;
		}
	}
	{
		// wallMasks.Add(layer);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = __this->get_wallMasks_7();
		int32_t L_6 = ___layer0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_8);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Stairs::RemoveFromWallMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs_RemoveFromWallMask_m27B61FB41A309177792F57E6B521ADABF57C31AE (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stairs_RemoveFromWallMask_m27B61FB41A309177792F57E6B521ADABF57C31AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wallMasks.Remove(layer);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_wallMasks_7();
		int32_t L_1 = ___layer0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(36 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void Stairs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stairs__ctor_mB145AE97E4CB4000055D96FD7C925000F438836B (Stairs_t66D0CEDB65E4818D86A1628D8283448B3B1BEA97 * __this, const RuntimeMethod* method)
{
	{
		// private int mask = ~0;
		__this->set_mask_5((-1));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_OnEnable_mE3D6E47455F101F2DEEBC2A58D09A97CF38E80B8 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	{
		// m_TargetCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = __this->get_m_TargetCameraState_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E(L_0, L_1, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_2 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		// if (Input.GetKey(KeyCode.W))
		bool L_0 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)119), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)115), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0032:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_8 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)97), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0047:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_12 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)100), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_005c:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_16 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)113), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_0071:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_20 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)101), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0086;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
	}

IL_0086:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_0;
		return L_24;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B9_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B10_3 = NULL;
	{
		// Vector3 translation = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.Escape))
		bool L_1 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_2 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (Input.GetMouseButtonUp(1))
		bool L_3 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// if (Input.GetMouseButton(1))
		bool L_4 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00b1;
		}
	}
	{
		// var mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));
		float L_5 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		float L_6 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		bool L_7 = __this->get_invertY_10();
		G_B8_0 = L_6;
		G_B8_1 = L_5;
		G_B8_2 = (&V_3);
		if (L_7)
		{
			G_B9_0 = L_6;
			G_B9_1 = L_5;
			G_B9_2 = (&V_3);
			goto IL_005f;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_0060;
	}

IL_005f:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_0060:
	{
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)G_B10_3, G_B10_2, ((float)il2cpp_codegen_multiply((float)G_B10_1, (float)(((float)((float)G_B10_0))))), /*hidden argument*/NULL);
		// var mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = __this->get_mouseSensitivityCurve_8();
		float L_9 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_10 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// m_TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_11 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_12 = L_11;
		NullCheck(L_12);
		float L_13 = L_12->get_yaw_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = V_3;
		float L_15 = L_14.get_x_0();
		float L_16 = V_4;
		NullCheck(L_12);
		L_12->set_yaw_0(((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))));
		// m_TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_17 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->get_pitch_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_3;
		float L_21 = L_20.get_y_1();
		float L_22 = V_4;
		NullCheck(L_18);
		L_18->set_pitch_1(((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)))));
	}

IL_00b1:
	{
		// translation = GetInputTranslationDirection() * Time.deltaTime;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47(__this, /*hidden argument*/NULL);
		float L_24 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_23, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		// if (Input.GetKey(KeyCode.LeftShift))
		bool L_26 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)304), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		// translation *= 10.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_27, (10.0f), /*hidden argument*/NULL);
		V_0 = L_28;
	}

IL_00da:
	{
		// boost += Input.mouseScrollDelta.y * 0.2f;
		float L_29 = __this->get_boost_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Input_get_mouseScrollDelta_m66F785090C429CE7DCDEF09C92CDBDD08FCDE98D(/*hidden argument*/NULL);
		float L_31 = L_30.get_y_1();
		__this->set_boost_6(((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)(0.2f))))));
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = __this->get_boost_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_34 = powf((2.0f), L_33);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_32, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		// m_TargetCameraState.Translate(translation);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_36 = __this->get_m_TargetCameraState_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_0;
		NullCheck(L_36);
		CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247(L_36, L_37, /*hidden argument*/NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_38 = logf((0.00999999f));
		float L_39 = __this->get_positionLerpTime_7();
		float L_40 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_41 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_38/(float)L_39)), (float)L_40)));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_41));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_42 = logf((0.00999999f));
		float L_43 = __this->get_rotationLerpTime_9();
		float L_44 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_45 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_42/(float)L_43)), (float)L_44)));
		V_2 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_45));
		// m_InterpolatingCameraState.LerpTowards(m_TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_46 = __this->get_m_InterpolatingCameraState_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_47 = __this->get_m_TargetCameraState_4();
		float L_48 = V_1;
		float L_49 = V_2;
		NullCheck(L_46);
		CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282(L_46, L_47, L_48, L_49, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.UpdateTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_50 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623(L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraState m_TargetCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322(L_0, /*hidden argument*/NULL);
		__this->set_m_TargetCameraState_4(L_0);
		// CameraState m_InterpolatingCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322(L_1, /*hidden argument*/NULL);
		__this->set_m_InterpolatingCameraState_5(L_1);
		// public float boost = 3.5f;
		__this->set_boost_6((3.5f));
		// public float positionLerpTime = 0.2f;
		__this->set_positionLerpTime_7((0.2f));
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_2 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = L_2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_4);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_5 = L_3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_6);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_7, L_5, /*hidden argument*/NULL);
		__this->set_mouseSensitivityCurve_8(L_7);
		// public float rotationLerpTime = 0.01f;
		__this->set_rotationLerpTime_9((0.01f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_pitch_1(L_2);
		// yaw = t.eulerAngles.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___t0;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yaw_0(L_5);
		// roll = t.eulerAngles.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___t0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		__this->set_roll_2(L_8);
		// x = t.position.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___t0;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_x_3(L_11);
		// y = t.position.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = ___t0;
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_y_4(L_14);
		// z = t.position.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = ___t0;
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		__this->set_z_5(L_17);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->get_pitch_1();
		float L_1 = __this->get_yaw_0();
		float L_2 = __this->get_roll_2();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___translation0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->get_x_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_x_3(((float)il2cpp_codegen_add((float)L_6, (float)L_8)));
		// y += rotatedTranslation.y;
		float L_9 = __this->get_y_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		__this->set_y_4(((float)il2cpp_codegen_add((float)L_9, (float)L_11)));
		// z += rotatedTranslation.z;
		float L_12 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		float L_14 = L_13.get_z_4();
		__this->set_z_5(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController_CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->get_yaw_0();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = ___target0;
		NullCheck(L_1);
		float L_2 = L_1->get_yaw_0();
		float L_3 = ___rotationLerpPct2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_yaw_0(L_4);
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->get_pitch_1();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_6 = ___target0;
		NullCheck(L_6);
		float L_7 = L_6->get_pitch_1();
		float L_8 = ___rotationLerpPct2;
		float L_9 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_pitch_1(L_9);
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->get_roll_2();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_11 = ___target0;
		NullCheck(L_11);
		float L_12 = L_11->get_roll_2();
		float L_13 = ___rotationLerpPct2;
		float L_14 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_10, L_12, L_13, /*hidden argument*/NULL);
		__this->set_roll_2(L_14);
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->get_x_3();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_16 = ___target0;
		NullCheck(L_16);
		float L_17 = L_16->get_x_3();
		float L_18 = ___positionLerpPct1;
		float L_19 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_15, L_17, L_18, /*hidden argument*/NULL);
		__this->set_x_3(L_19);
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->get_y_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_21 = ___target0;
		NullCheck(L_21);
		float L_22 = L_21->get_y_4();
		float L_23 = ___positionLerpPct1;
		float L_24 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_20, L_22, L_23, /*hidden argument*/NULL);
		__this->set_y_4(L_24);
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->get_z_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_26 = ___target0;
		NullCheck(L_26);
		float L_27 = L_26->get_z_5();
		float L_28 = ___positionLerpPct1;
		float L_29 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_25, L_27, L_28, /*hidden argument*/NULL);
		__this->set_z_5(L_29);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		float L_1 = __this->get_pitch_1();
		float L_2 = __this->get_yaw_0();
		float L_3 = __this->get_roll_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_0, L_4, /*hidden argument*/NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___t0;
		float L_6 = __this->get_x_3();
		float L_7 = __this->get_y_4();
		float L_8 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_gshared_inline (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared_inline (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
