// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Uaz_Animation.Uaz_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_F45EEFEE4F1F650FBF78D1ACCB01BDDE
// (FUNC_BlueprintEvent)

void UUaz_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_F45EEFEE4F1F650FBF78D1ACCB01BDDE()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x839383db);

	UUaz_Animation_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_F45EEFEE4F1F650FBF78D1ACCB01BDDE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Uaz_Animation.Uaz_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_92CE5E20435206E5C4125B81AE2D5E5E
// (FUNC_BlueprintEvent)

void UUaz_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_92CE5E20435206E5C4125B81AE2D5E5E()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf4402d70);

	UUaz_Animation_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_92CE5E20435206E5C4125B81AE2D5E5E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Uaz_Animation.Uaz_Animation_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUaz_Animation_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5c9bcbbb);

	UUaz_Animation_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Uaz_Animation.Uaz_Animation_C.ExecuteUbergraph_Uaz_Animation
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUaz_Animation_C::ExecuteUbergraph_Uaz_Animation(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf030224e);

	UUaz_Animation_C_ExecuteUbergraph_Uaz_Animation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
