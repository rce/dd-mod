#pragma once

// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include <iostream>

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------
	class UFunction;
// Class Core.Object
// 0x003C
class UObject
{
public:
	static TArray<UObject*>*                           GObjects;                                                 // 0x0000(0x0000)
	typedef void(__fastcall* ProcessEvent_t)(UObject*, void*, UFunction*, void*, void*);
	static ProcessEvent_t pProcessEvent;
	struct FPointer                                    VfTableObject;                                            // 0x0000(0x0004)
	int                                                ObjectInternalInteger;                                    // 0x0004(0x0004)
	struct FQWord                                      ObjectFlags;                                              // 0x0008(0x0008)
	struct FPointer                                    HashNext;                                                 // 0x0010(0x0004)
	struct FPointer                                    HashOuterNext;                                            // 0x0014(0x0004)
	struct FPointer                                    StateFrame;                                               // 0x0018(0x0004)
	class UObject*                                     Linker;                                                   // 0x001C(0x0004)
	struct FPointer                                    LinkerIndex;                                              // 0x0020(0x0004)
	int                                                NetIndex;                                                 // 0x0024(0x0004)
	class UObject*                                     Outer;                                                    // 0x0028(0x0004)
	struct FName                                       Name;                                                     // 0x002C(0x0008)
	class UClass*                                      Class;                                                    // 0x0034(0x0004)
	class UObject*                                     ObjectArchetype;                                          // 0x0038(0x0004)

	static inline TArray<UObject*>& GetGlobalObjects()
	{
		return *GObjects;
	}

	inline std::string GetName() const
	{
		auto name = std::string(Name.GetName());
		if (Name.Number > 0)
		{
			name += "_" + std::to_string(Name.Number);
		}
		return name;
	}

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (auto i = 0u; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}

			auto fullname = object->GetFullName();
			if (fullname.rfind(std::string("DunDefViewportClient "), 0) == 0)
				std::cout << fullname << std::endl;
			if (fullname == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}
	template<typename T>
	static T* FindObjectStartingWith(const std::string& prefix)
	{
		for (auto i = 0u; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}

			auto fullname = object->GetFullName();
			if (fullname.rfind(prefix, 0) == 0)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	inline void ProcessEvent(class UFunction* function, void* params)
	{
		using Fn = void(__thiscall *)(UObject*, UFunction*, void*, void*);

		//UObject::ProcessEvent can be found with the sig
		//8B 46 08 25 00 02 00 00 83 C8 00 0F 84 ?? ?? ?? ?? 83 3D
		//pProcessEvent = (ProcessEvent_t)0x00484490;
		pProcessEvent = (ProcessEvent_t)0x0060A640;
		static Fn fn = (Fn)pProcessEvent;

		pProcessEvent(this, nullptr, function, params, nullptr);
		//fn(this, function, params, nullptr);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Object");
		return ptr;
	}


	void STATIC_ToHDI();
	void STATIC_ClampHDI();
	void STATIC_AsInt();
	void STATIC_MultiplyByInt();
	void STATIC_DivideByInt();
	void STATIC_GetHighIntThousandsSeparator();
	void STATIC_GetHighIntNumberFormatInDecimal();
	void STATIC_GetHighDigitIntNumberFormat();
	void STATIC_GetHighDigitIntNumberFormatHDI();
	void STATIC_CompareHighDigitInt();
	void STATIC_CalculateHighDigitInt();
	void STATIC_SetHighIntValue();
	void STATIC_NotEqual_HighDigitIntHighDigitInt();
	void STATIC_EqualEqual_HighDigitIntHighDigitInt();
	void STATIC_GreaterEqual_HighDigitIntHighDigitInt();
	void STATIC_LessEqual_HighDigitIntHighDigitInt();
	void STATIC_Less_HighDigitIntHighDigitInt();
	void STATIC_Greater_HighDigitIntHighDigitInt();
	void STATIC_Subtract_HighDigitIntHighDigitInt();
	void STATIC_Add_HighDigitIntHighDigitInt();
	void STATIC_MultiplyEqual_HighDigitIntInt();
	void STATIC_DivideEqual_HighDigitIntInt();
	void STATIC_Multiply_HighDigitIntInt();
	void STATIC_Divide_HighDigitIntInt();
	void STATIC_LessEqual_HighDigitIntInt();
	void STATIC_GreaterEqual_IntHighDigitInt();
	void STATIC_GreaterEqual_HighDigitIntInt();
	void STATIC_LessEqual_IntHighDigitInt();
	void STATIC_Less_HighDigitIntInt();
	void STATIC_Greater_IntHighDigitInt();
	void STATIC_Greater_HighDigitIntInt();
	void STATIC_Less_IntHighDigitInt();
	void STATIC_NotEqual_IntHighDigitInt();
	void STATIC_NotEqual_HighDigitIntInt();
	void STATIC_EqualEqual_IntHighDigitInt();
	void STATIC_EqualEqual_HighDigitIntInt();
	void STATIC_SubtractEqual_HighDigitIntHighDigitInt();
	void STATIC_SubtractEqual_HighDigitIntInt();
	void STATIC_Subtract_HighDigitIntInt();
	void STATIC_Subtract_IntHighDigitInt();
	void STATIC_AddEqual_HighDigitIntHighDigitInt();
	void STATIC_AddEqual_HighDigitIntInt();
	void STATIC_Add_HighDigitIntInt();
	void STATIC_Add_IntHighDigitInt();
	void IsTemplate();
	void STATIC_IsDefaultObject();
	void GetBaseArchetype();
	void STATIC_IsInteger();
	void STATIC_SignedIntFromByteInt();
	void STATIC_SignedIntToByteInt();
	void STATIC_SignedIntFromByte();
	void STATIC_SignedIntToByte();
	void STATIC_LinearColorExp();
	void STATIC_LinearColorMult();
	void STATIC_LinearColorAddAndNormalize();
	void STATIC_LinearColorAdd();
	void STATIC_ColorAdd();
	void STATIC_ColorMult();
	void STATIC_SignedRaiseToPower();
	void STATIC_ConvertSecondsToTimeString();
	void STATIC_GetSignedString();
	void STATIC_ChooseVectorComponents();
	void STATIC_ShortestDistanceBetweenAngles();
	void STATIC_CalculateAngleOf2DVector();
	void STATIC_FRandSigned();
	void STATIC_FLerp();
	void STATIC_FixDLLString();
	void STATIC_Trim();
	void STATIC_TrimLeft();
	void STATIC_TrimRight();
	void STATIC_VariableLinearColorToVector();
	void STATIC_LinearColorToVector();
	void STATIC_ToRotator();
	void STATIC_ToVector2D();
	void STATIC_ToVector();
	void STATIC_ColorScale();
	void ColorScaleAlpha_Simulated();
	void STATIC_ColorScaleAlpha();
	void STATIC_LinColorScaleAlpha();
	void STATIC_VectorToColorDD();
	void STATIC_LinearColorToColorDD();
	void STATIC_ColorLerp();
	void STATIC_LinearColorLerp();
	void STATIC_ToLinearColor();
	void STATIC_ClampedYawLookTowardsAngle();
	void STATIC_ClampRotator();
	void STATIC_RotDegreesBetweenPitch();
	void RotDegreesBetweenYaw();
	void STATIC_LineSegmentIntersectionWithPlane();
	void STATIC_ConvertDegreeFloatToRotAxis();
	void GetSystemTime();
	void TimeStamp();
	void TransformVectorByRotation();
	void GetPackageName();
	void IsPendingKill();
	void ByteToFloat();
	void FloatToByte();
	void STATIC_UnwindHeading();
	void STATIC_FindDeltaAngle();
	void STATIC_GetHeadingAngle();
	void STATIC_GetAngularDegreesFromRadians();
	void STATIC_GetAngularFromDotDist();
	void STATIC_GetAngularDistance();
	void STATIC_GetDotDistance();
	void STATIC_PointProjectToPlane();
	void PointDistToPlane();
	void PointDistToSegment();
	void PointDistToLine();
	void STATIC_GetPerObjectConfigSections();
	void STATIC_StaticSaveConfig();
	void SaveConfig();
	void STATIC_FindObject();
	void STATIC_DynamicLoadObject();
	void STATIC_GetEnum();
	void Disable();
	void Enable();
	void ContinuedState();
	void PausedState();
	void PoppedState();
	void PushedState();
	void EndState();
	void BeginState();
	void DumpStateStack();
	void PopState();
	void PushState();
	void GetStateName();
	void IsChildState();
	void IsInState();
	void GotoState();
	void STATIC_IsUTracing();
	void STATIC_SetUTracing();
	void STATIC_GetFuncName();
	void STATIC_DebugBreak();
	void STATIC_ScriptTrace();
	void STATIC_ParseLocalizedPropertyPath();
	void STATIC_Localize();
	void STATIC_WarnInternal();
	void STATIC_LogInternal();
	void STATIC_Subtract_LinearColorLinearColor();
	void STATIC_Multiply_LinearColorFloat();
	void STATIC_ColorToLinearColor();
	void STATIC_MakeLinearColor();
	void STATIC_LerpColor();
	void STATIC_MakeColor();
	void STATIC_Add_ColorColor();
	void STATIC_Multiply_ColorFloat();
	void STATIC_Multiply_FloatColor();
	void STATIC_Subtract_ColorColor();
	void EvalInterpCurveVector2D();
	void EvalInterpCurveVector();
	void EvalInterpCurveFloat();
	void STATIC_vect2d();
	void STATIC_GetMappedRangeValue();
	void STATIC_GetRangePctByValue();
	void STATIC_GetRangeValueByPct();
	void STATIC_Subtract_Vector2DVector2D();
	void STATIC_Add_Vector2DVector2D();
	void STATIC_Subtract_QuatQuat();
	void STATIC_Add_QuatQuat();
	void STATIC_QuatSlerp();
	void STATIC_QuatToRotator();
	void STATIC_QuatFromRotator();
	void STATIC_QuatFromAxisAndAngle();
	void STATIC_QuatFindBetween();
	void STATIC_QuatRotateVector();
	void STATIC_QuatInvert();
	void STATIC_QuatDot();
	void STATIC_QuatProduct();
	void STATIC_MatrixGetAxis();
	void STATIC_MatrixGetOrigin();
	void STATIC_MatrixGetRotator();
	void STATIC_MakeRotationMatrix();
	void STATIC_MakeRotationTranslationMatrix();
	void STATIC_InverseTransformNormal();
	void STATIC_TransformNormal();
	void STATIC_InverseTransformVector();
	void STATIC_TransformVector();
	void STATIC_Multiply_MatrixMatrix();
	void STATIC_NotEqual_NameName();
	void STATIC_EqualEqual_NameName();
	void IsA();
	void STATIC_ClassIsChildOf();
	void STATIC_NotEqual_InterfaceInterface();
	void STATIC_EqualEqual_InterfaceInterface();
	void STATIC_NotEqual_ObjectObject();
	void STATIC_EqualEqual_ObjectObject();
	void STATIC_PathName();
	void STATIC_SplitString();
	void STATIC_ParseStringIntoArray();
	void STATIC_JoinArray();
	void STATIC_GetRightMost();
	void STATIC_Split();
	void STATIC_Repl();
	void STATIC_Asc();
	void STATIC_Chr();
	void STATIC_Locs();
	void STATIC_Caps();
	void STATIC_Right();
	void STATIC_Left();
	void STATIC_Mid();
	void STATIC_InStr();
	void STATIC_Len();
	void STATIC_SubtractEqual_StrStr();
	void STATIC_AtEqual_StrStr();
	void STATIC_ConcatEqual_StrStr();
	void STATIC_ComplementEqual_StrStr();
	void STATIC_NotEqual_StrStr();
	void STATIC_EqualEqual_StrStr();
	void STATIC_GreaterEqual_StrStr();
	void STATIC_LessEqual_StrStr();
	void STATIC_Greater_StrStr();
	void STATIC_Less_StrStr();
	void STATIC_At_StrStr();
	void STATIC_Concat_StrStr();
	void STATIC_MakeRotator();
	void STATIC_SClampRotAxis();
	void STATIC_ClampRotAxisFromRange();
	void STATIC_ClampRotAxisFromBase();
	void STATIC_ClampRotAxis();
	void STATIC_RSize();
	void STATIC_RDiff();
	void STATIC_NormalizeRotAxis();
	void STATIC_RInterpTo();
	void STATIC_RTransform();
	void STATIC_RSmerp();
	void STATIC_RLerp();
	void STATIC_Normalize();
	void STATIC_OrthoRotation();
	void STATIC_RotRand();
	void STATIC_GetUnAxes();
	void STATIC_GetAxes();
	void STATIC_ClockwiseFrom_IntInt();
	void STATIC_SubtractEqual_RotatorRotator();
	void STATIC_AddEqual_RotatorRotator();
	void STATIC_Subtract_RotatorRotator();
	void STATIC_Add_RotatorRotator();
	void STATIC_DivideEqual_RotatorFloat();
	void STATIC_MultiplyEqual_RotatorFloat();
	void STATIC_Divide_RotatorFloat();
	void STATIC_Multiply_FloatRotator();
	void STATIC_Multiply_RotatorFloat();
	void STATIC_NotEqual_RotatorRotator();
	void STATIC_EqualEqual_RotatorRotator();
	void InCylinder();
	void NoZDot();
	void STATIC_ClampLength();
	void STATIC_VInterpConstantTo();
	void STATIC_VInterpTo();
	void STATIC_IsZero();
	void STATIC_ProjectOnTo();
	void STATIC_MirrorVectorByNormal();
	void STATIC_VRandCone2();
	void STATIC_VRandCone();
	void STATIC_VRand();
	void STATIC_VSmerp();
	void STATIC_VLerp();
	void STATIC_Normal();
	void STATIC_VSizeSq2D();
	void STATIC_VSizeSq();
	void STATIC_VSize2D();
	void STATIC_VSize();
	void STATIC_SubtractEqual_VectorVector();
	void STATIC_AddEqual_VectorVector();
	void STATIC_DivideEqual_VectorFloat();
	void STATIC_MultiplyEqual_VectorVector();
	void STATIC_MultiplyEqual_VectorFloat();
	void STATIC_Cross_VectorVector();
	void STATIC_Dot_VectorVector();
	void STATIC_NotEqual_VectorVector();
	void STATIC_EqualEqual_VectorVector();
	void STATIC_GreaterGreater_VectorRotator();
	void STATIC_LessLess_VectorRotator();
	void STATIC_Subtract_VectorVector();
	void STATIC_Add_VectorVector();
	void STATIC_Divide_VectorFloat();
	void STATIC_Multiply_VectorVector();
	void STATIC_Multiply_FloatVector();
	void STATIC_Multiply_VectorFloat();
	void STATIC_Subtract_PreVector();
	void STATIC_FInterpConstantTo();
	void STATIC_FInterpTo();
	void STATIC_FPctByRange();
	void STATIC_RandRange();
	void STATIC_FInterpEaseInOut();
	void STATIC_FInterpEaseOut();
	void STATIC_FInterpEaseIn();
	void STATIC_FCubicInterp();
	void STATIC_SeededRand();
	void STATIC_SeededFRand();
	void STATIC_SeedRand();
	void STATIC_FCeil();
	void STATIC_FFloor();
	void STATIC_Round();
	void STATIC_Lerp();
	void STATIC_FClamp();
	void STATIC_FMax();
	void STATIC_FMin();
	void STATIC_FRand();
	void STATIC_Square();
	void STATIC_Sqrt();
	void STATIC_Loge();
	void STATIC_Exp();
	void STATIC_Atan2();
	void STATIC_Atan();
	void STATIC_Tan();
	void STATIC_Acos();
	void STATIC_Cos();
	void STATIC_Asin();
	void STATIC_Sin();
	void STATIC_Abs();
	void STATIC_SubtractEqual_FloatFloat();
	void STATIC_AddEqual_FloatFloat();
	void STATIC_DivideEqual_FloatFloat();
	void STATIC_MultiplyEqual_FloatFloat();
	void STATIC_NotEqual_FloatFloat();
	void STATIC_ComplementEqual_FloatFloat();
	void STATIC_EqualEqual_FloatFloat();
	void STATIC_GreaterEqual_FloatFloat();
	void STATIC_LessEqual_FloatFloat();
	void STATIC_Greater_FloatFloat();
	void STATIC_Less_FloatFloat();
	void STATIC_Subtract_FloatFloat();
	void STATIC_Add_FloatFloat();
	void STATIC_Percent_FloatFloat();
	void STATIC_Divide_FloatFloat();
	void STATIC_Multiply_FloatFloat();
	void STATIC_MultiplyMultiply_FloatFloat();
	void STATIC_Subtract_PreFloat();
	void STATIC_ToHex();
	void STATIC_Clamp();
	void STATIC_Max();
	void STATIC_Min();
	void STATIC_LargeRand();
	void STATIC_Rand();
	void STATIC_SubtractSubtract_Int();
	void STATIC_AddAdd_Int();
	void STATIC_SubtractSubtract_PreInt();
	void STATIC_AddAdd_PreInt();
	void STATIC_SubtractEqual_IntInt();
	void STATIC_AddEqual_IntInt();
	void STATIC_DivideEqual_IntFloat();
	void STATIC_MultiplyEqual_IntFloat();
	void STATIC_Or_IntInt();
	void STATIC_Xor_IntInt();
	void STATIC_And_IntInt();
	void STATIC_NotEqual_IntInt();
	void STATIC_EqualEqual_IntInt();
	void STATIC_GreaterEqual_IntInt();
	void STATIC_LessEqual_IntInt();
	void STATIC_Greater_IntInt();
	void STATIC_Less_IntInt();
	void STATIC_GreaterGreaterGreater_IntInt();
	void STATIC_GreaterGreater_IntInt();
	void STATIC_LessLess_IntInt();
	void STATIC_Subtract_IntInt();
	void STATIC_Add_IntInt();
	void STATIC_Percent_IntInt();
	void STATIC_Divide_IntInt();
	void STATIC_Multiply_IntInt();
	void STATIC_Subtract_PreInt();
	void STATIC_Complement_PreInt();
	void STATIC_SubtractSubtract_Byte();
	void STATIC_AddAdd_Byte();
	void STATIC_SubtractSubtract_PreByte();
	void STATIC_AddAdd_PreByte();
	void STATIC_SubtractEqual_ByteByte();
	void STATIC_AddEqual_ByteByte();
	void STATIC_DivideEqual_ByteByte();
	void STATIC_MultiplyEqual_ByteFloat();
	void STATIC_MultiplyEqual_ByteByte();
	void STATIC_OrOr_BoolBool();
	void STATIC_XorXor_BoolBool();
	void STATIC_AndAnd_BoolBool();
	void STATIC_NotEqual_BoolBool();
	void STATIC_EqualEqual_BoolBool();
	void STATIC_Not_PreBool();
};


// Class Core.TextBuffer
// 0x0024 (0x0060 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x003C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBuffer");
		return ptr;
	}

};


// Class Core.Subsystem
// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                            // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subsystem");
		return ptr;
	}

};


// Class Core.System
// 0x00BC (0x00FC - 0x0040)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                           // 0x0040(0x0004)
	int                                                MaxStaleCacheSize;                                        // 0x0044(0x0004)
	int                                                MaxOverallCacheSize;                                      // 0x0048(0x0004)
	int                                                PackageSizeSoftLimit;                                     // 0x004C(0x0004)
	float                                              AsyncIOBandwidthLimit;                                    // 0x0050(0x0004)
	struct FString                                     SavePath;                                                 // 0x0054(0x000C)
	struct FString                                     CachePath;                                                // 0x0060(0x000C)
	struct FString                                     CacheExt;                                                 // 0x006C(0x000C)
	struct FString                                     ScreenShotPath;                                           // 0x0078(0x000C)
	TArray<struct FString>                             Paths;                                                    // 0x0084(0x000C)
	TArray<struct FString>                             SeekFreePCPaths;                                          // 0x0090(0x000C)
	TArray<struct FString>                             ScriptPaths;                                              // 0x009C(0x000C)
	TArray<struct FString>                             FRScriptPaths;                                            // 0x00A8(0x000C)
	TArray<struct FString>                             CutdownPaths;                                             // 0x00B4(0x000C)
	TArray<struct FName>                               Suppress;                                                 // 0x00C0(0x000C)
	TArray<struct FString>                             Extensions;                                               // 0x00CC(0x000C)
	TArray<struct FString>                             SeekFreePCExtensions;                                     // 0x00D8(0x000C)
	TArray<struct FString>                             LocalizationPaths;                                        // 0x00E4(0x000C)
	struct FString                                     TextureFileCacheExtension;                                // 0x00F0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.System");
		return ptr;
	}

};


// Class Core.PackageMap
// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x003C(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PackageMap");
		return ptr;
	}

};


// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectSerializer");
		return ptr;
	}

};


// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectRedirector");
		return ptr;
	}

};


// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MetaData");
		return ptr;
	}

};


// Class Core.Linker
// 0x0110 (0x014C - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x003C(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Linker");
		return ptr;
	}

};


// Class Core.LinkerSave
// 0x00A0 (0x01EC - 0x014C)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x014C(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerSave");
		return ptr;
	}

};


// Class Core.LinkerLoad
// 0x05B8 (0x0704 - 0x014C)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x5B8];                                     // 0x014C(0x05B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerLoad");
		return ptr;
	}

};


// Class Core.Interface
// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Interface");
		return ptr;
	}

};


// Class Core.Field
// 0x0008 (0x0044 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Field");
		return ptr;
	}

};


// Class Core.Struct
// 0x004C (0x0090 - 0x0044)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[0x08];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned long                                      PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData01[0x48];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Struct");
		return ptr;
	}

};


// Class Core.ScriptStruct
// 0x001C (0x00AC - 0x0090)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0090(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ScriptStruct");
		return ptr;
	}

};


// Class Core.Function
// 0x0020 (0x00B0 - 0x0090)
class UFunction : public UStruct
{
public:
	uint32_t                                           FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           iNative;                                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            OperPrecedence;                                           // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              FriendlyName;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Function");
		return ptr;
	}

};


// Class Core.Property
// 0x0040 (0x0084 - 0x0044)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0044(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Property");
		return ptr;
	}

};


// Class Core.StructProperty
// 0x0004 (0x0088 - 0x0084)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StructProperty");
		return ptr;
	}

};


// Class Core.StrProperty
// 0x0000 (0x0084 - 0x0084)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StrProperty");
		return ptr;
	}

};


// Class Core.ObjectProperty
// 0x0004 (0x0088 - 0x0084)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProperty");
		return ptr;
	}

};


// Class Core.ComponentProperty
// 0x0000 (0x0088 - 0x0088)
class UComponentProperty : public UObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ComponentProperty");
		return ptr;
	}

};


// Class Core.ClassProperty
// 0x0004 (0x008C - 0x0088)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassProperty");
		return ptr;
	}

};


// Class Core.NameProperty
// 0x0000 (0x0084 - 0x0084)
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.NameProperty");
		return ptr;
	}

};


// Class Core.MapProperty
// 0x0008 (0x008C - 0x0084)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0084(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MapProperty");
		return ptr;
	}

};


// Class Core.IntProperty
// 0x0004 (0x0088 - 0x0084)
class UIntProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IntProperty");
		return ptr;
	}

};


// Class Core.InterfaceProperty
// 0x0004 (0x0088 - 0x0084)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.InterfaceProperty");
		return ptr;
	}

};


// Class Core.FloatProperty
// 0x0000 (0x0084 - 0x0084)
class UFloatProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FloatProperty");
		return ptr;
	}

};


// Class Core.DelegateProperty
// 0x0008 (0x008C - 0x0084)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0084(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DelegateProperty");
		return ptr;
	}

};


// Class Core.ByteProperty
// 0x0004 (0x0088 - 0x0084)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ByteProperty");
		return ptr;
	}

};


// Class Core.BoolProperty
// 0x0004 (0x0088 - 0x0084)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.BoolProperty");
		return ptr;
	}

};


// Class Core.ArrayProperty
// 0x0004 (0x0088 - 0x0084)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ArrayProperty");
		return ptr;
	}

};


// Class Core.Enum
// 0x000C (0x0050 - 0x0044)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Enum");
		return ptr;
	}

};


// Class Core.Const
// 0x000C (0x0050 - 0x0044)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Const");
		return ptr;
	}

};


// Class Core.Factory
// 0x0034 (0x0070 - 0x003C)
class UFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x003C(0x0008) MISSED OFFSET
	struct FString                                     Description;                                              // 0x0044(0x000C)
	TArray<struct FString>                             Formats;                                                  // 0x0050(0x000C)
	unsigned char                                      UnknownData01[0x14];                                      // 0x005C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Factory");
		return ptr;
	}

};


// Class Core.TextBufferFactory
// 0x0000 (0x0070 - 0x0070)
class UTextBufferFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBufferFactory");
		return ptr;
	}

};


// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FString>                             FormatExtension;                                          // 0x0040(0x000C)
	TArray<struct FString>                             FormatDescription;                                        // 0x004C(0x000C)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Exporter");
		return ptr;
	}

};


// Class Core.Component
// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                                       // 0x003C(0x0004)
	struct FName                                       TemplateName;                                             // 0x0040(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Component");
		return ptr;
	}

};


// Class Core.DistributionVector
// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0048(0x0004)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x004C(0x0004)
	unsigned long                                      bIsDirty : 1;                                             // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionVector");
		return ptr;
	}


	void GetVectorValue();
};


// Class Core.DistributionFloat
// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0048(0x0004)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x004C(0x0004)
	unsigned long                                      bIsDirty : 1;                                             // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionFloat");
		return ptr;
	}


	void GetFloatValue();
};


// Class Core.Commandlet
// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                          // 0x003C(0x000C)
	struct FString                                     HelpUsage;                                                // 0x0048(0x000C)
	struct FString                                     HelpWebLink;                                              // 0x0054(0x000C)
	TArray<struct FString>                             HelpParamNames;                                           // 0x0060(0x000C)
	TArray<struct FString>                             HelpParamDescriptions;                                    // 0x006C(0x000C)
	unsigned long                                      IsServer : 1;                                             // 0x0078(0x0004)
	unsigned long                                      IsClient : 1;                                             // 0x0078(0x0004)
	unsigned long                                      IsEditor : 1;                                             // 0x0078(0x0004)
	unsigned long                                      LogToConsole : 1;                                         // 0x0078(0x0004)
	unsigned long                                      ShowErrorCount : 1;                                       // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Commandlet");
		return ptr;
	}


	void Main();
};


// Class Core.HelpCommandlet
// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.HelpCommandlet");
		return ptr;
	}


	void Main();
};


// Class Core.Package
// 0x00AC (0x00E8 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xAC];                                      // 0x003C(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Package");
		return ptr;
	}

};


// Class Core.State
// 0x0054 (0x00E4 - 0x0090)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0090(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.State");
		return ptr;
	}

};


// Class Core.Class
// 0x00F0 (0x01D4 - 0x00E4)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     ClassDefaultObject;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData01[0x70];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		using Fn = UObject*(__thiscall *)(UClass*, unsigned int);

		//UClass::GetDefaultObject can be found with the sig
		//85 C0 75 21 39 05 ?? ?? ?? ?? 74 19 F7 86 ?? 00 00 00 00 00 00 10 75 0D F6 05 ?? ?? ?? ?? 02 0F 84
		static Fn fn = nullptr;
		
		return fn(this, 0);

		//or use the default object (WARNING: may be null)
		//return ClassDefaultObject;
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Class");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
