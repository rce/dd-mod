#pragma once

// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_TWO_BILLION                                        2000000000
#define CONST_ONE_BILLION                                        1000000000
#define CONST_LONG_DEFAULT_STRING                                "                                                              "
#define CONST_AspectRatio5x4                                     1.25
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_DegToUnrRot                                        182.044444444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Core.Object.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Core.Object.EDebugBreakType
enum class EDebugBreakType : uint8_t
{
	DEBUGGER_NativeOnly            = 0,
	DEBUGGER_ScriptOnly            = 1,
	DEBUGGER_Both                  = 2,
	DEBUGGER_MAX                   = 3
};


// Enum Core.Object.EAutomatedRunResult
enum class EAutomatedRunResult : uint8_t
{
	ARR_Unknown                    = 0,
	ARR_OOM                        = 1,
	ARR_Passed                     = 2,
	ARR_MAX                        = 3
};


// Enum Core.Object.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6
};


// Enum Core.Object.EInterpMethodType
enum class EInterpMethodType : uint8_t
{
	IMT_UseFixedTangentEvalAndNewAutoTangents = 0,
	IMT_UseFixedTangentEval        = 1,
	IMT_UseBrokenTangentEval       = 2,
	IMT_MAX                        = 3
};


// Enum Core.Object.EAxis
enum class EAxis : uint8_t
{
	AXIS_NONE                      = 0,
	AXIS_X                         = 1,
	AXIS_Y                         = 2,
	AXIS_BLANK                     = 3,
	AXIS_Z                         = 4,
	AXIS_MAX                       = 5
};


// Enum Core.Object.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PreAsyncWork                = 0,
	TG_DuringAsyncWork             = 1,
	TG_PostAsyncWork               = 2,
	TG_PostUpdateWork              = 3,
	TG_MAX                         = 4
};


// Enum Core.Object.AlphaBlendType
enum class EAlphaBlendType : uint8_t
{
	ABT_Linear                     = 0,
	ABT_Cubic                      = 1,
	ABT_Sinusoidal                 = 2,
	ABT_EaseInOutExponent2         = 3,
	ABT_EaseInOutExponent3         = 4,
	ABT_EaseInOutExponent4         = 5,
	ABT_EaseInOutExponent5         = 6,
	ABT_MAX                        = 7
};


// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Core.Object.HighDigitInt
// 0x0010
struct FHighDigitInt
{
	int                                                HighIntData[0x4];                                         // 0x0000(0x0004)
};

// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                        // 0x0000(0x0004)
	float                                              G;                                                        // 0x0004(0x0004)
	float                                              B;                                                        // 0x0008(0x0004)
	float                                              A;                                                        // 0x000C(0x0004)
};

// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                        // 0x0000(0x0004)
	float                                              Y;                                                        // 0x0004(0x0004)
	float                                              Z;                                                        // 0x0008(0x0004)
};

// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                        // 0x0000(0x0001)
	unsigned char                                      G;                                                        // 0x0001(0x0001)
	unsigned char                                      R;                                                        // 0x0002(0x0001)
	unsigned char                                      A;                                                        // 0x0003(0x0001)

	inline FColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                                    // 0x0000(0x0004)
	int                                                Yaw;                                                      // 0x0004(0x0004)
	int                                                Roll;                                                     // 0x0008(0x0004)
};

// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                        // 0x0000(0x0004)
	float                                              Y;                                                        // 0x0004(0x0004)
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x001D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                    // 0x0000(0x0004)
	struct FVector2D                                   OutVal;                                                   // 0x0004(0x0008)
	struct FVector2D                                   ArriveTangent;                                            // 0x000C(0x0008)
	struct FVector2D                                   LeaveTangent;                                             // 0x0014(0x0008)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x001C(0x0001)
};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x000D
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                   // 0x0000(0x000C)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0029
struct FInterpCurvePointVector
{
	float                                              InVal;                                                    // 0x0000(0x0004)
	struct FVector                                     OutVal;                                                   // 0x0004(0x000C)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0028(0x0001)
};

// ScriptStruct Core.Object.InterpCurveVector
// 0x000D
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                   // 0x0000(0x000C)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0011
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                    // 0x0000(0x0004)
	float                                              OutVal;                                                   // 0x0004(0x0004)
	float                                              ArriveTangent;                                            // 0x0008(0x0004)
	float                                              LeaveTangent;                                             // 0x000C(0x0004)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0010(0x0001)
};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x000D
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                   // 0x0000(0x000C)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                        // 0x0000(0x0004)
	float                                              Y;                                                        // 0x0004(0x0004)
	float                                              Z;                                                        // 0x0008(0x0004)
	float                                              W;                                                        // 0x000C(0x0004)
};

// ScriptStruct Core.Object.Plane
// 0x0004 (0x0010 - 0x000C)
struct FPlane : public FVector
{
	float                                              W;                                                        // 0x000C(0x0004)
};

// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                   // 0x0000(0x0010)
	struct FPlane                                      YPlane;                                                   // 0x0010(0x0010)
	struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010)
	struct FPlane                                      WPlane;                                                   // 0x0030(0x0010)
};

// ScriptStruct Core.Object.Pointer
// 0x0004
struct FPointer
{
	int                                                Dummy;                                                    // 0x0000(0x0004)
};

// ScriptStruct Core.Object.QWord
// 0x0008
struct FQWord
{
	int                                                A;                                                        // 0x0000(0x0004)
	int                                                B;                                                        // 0x0004(0x0004)
};

// ScriptStruct Core.Object.BoneAtom
// 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010)
	struct FVector                                     Translation;                                              // 0x0010(0x000C)
	float                                              Scale;                                                    // 0x001C(0x0004)
};

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                        // 0x0000(0x0004)
	int                                                B;                                                        // 0x0004(0x0004)
	int                                                C;                                                        // 0x0008(0x0004)
	int                                                D;                                                        // 0x000C(0x0004)
};

// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                        // 0x0000(0x0004)
	float                                              Y;                                                        // 0x0004(0x0004)
	float                                              Z;                                                        // 0x0008(0x0004)
	float                                              W;                                                        // 0x000C(0x0004)
};

// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                                   // 0x0000(0x0004)
	float                                              Height;                                                   // 0x0004(0x0004)
};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C)
	struct FVector                                     BoxExtent;                                                // 0x000C(0x000C)
	float                                              SphereRadius;                                             // 0x0018(0x0004)
};

// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                       // 0x0000(0x000C)
	struct FVector                                     v2;                                                       // 0x000C(0x000C)
};

// ScriptStruct Core.Object.TAlphaBlend
// 0x0015
struct FTAlphaBlend
{
	float                                              AlphaIn;                                                  // 0x0000(0x0004)
	float                                              AlphaOut;                                                 // 0x0004(0x0004)
	float                                              AlphaTarget;                                              // 0x0008(0x0004)
	float                                              BlendTime;                                                // 0x000C(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0010(0x0004)
	TEnumAsByte<EAlphaBlendType>                       BlendType;                                                // 0x0014(0x0001)
};

// ScriptStruct Core.Object.OctreeElementId
// 0x0008
struct FOctreeElementId
{
	struct FPointer                                    Node;                                                     // 0x0000(0x0004)
	int                                                ElementIndex;                                             // 0x0004(0x0004)
};

// ScriptStruct Core.Object.RenderCommandFence
// 0x0004
struct FRenderCommandFence
{
	int                                                NumPendingFences;                                         // 0x0000(0x0004)
};

// ScriptStruct Core.Object.RawDistribution
// 0x0018
struct FRawDistribution
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001)
	unsigned char                                      Op;                                                       // 0x0001(0x0001)
	unsigned char                                      LookupTableNumElements;                                   // 0x0002(0x0001)
	unsigned char                                      LookupTableChunkSize;                                     // 0x0003(0x0001)
	TArray<float>                                      LookupTable;                                              // 0x0004(0x000C)
	float                                              LookupTableTimeScale;                                     // 0x0010(0x0004)
	float                                              LookupTableStartTime;                                     // 0x0014(0x0004)
};

// ScriptStruct Core.Object.InterpCurvePointLinearColor
// 0x0035
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                                    // 0x0000(0x0004)
	struct FLinearColor                                OutVal;                                                   // 0x0004(0x0010)
	struct FLinearColor                                ArriveTangent;                                            // 0x0014(0x0010)
	struct FLinearColor                                LeaveTangent;                                             // 0x0024(0x0010)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0034(0x0001)
};

// ScriptStruct Core.Object.InterpCurveLinearColor
// 0x000D
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                                   // 0x0000(0x000C)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0041
struct FInterpCurvePointQuat
{
	float                                              InVal;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                                   // 0x0010(0x0010)
	struct FQuat                                       ArriveTangent;                                            // 0x0020(0x0010)
	struct FQuat                                       LeaveTangent;                                             // 0x0030(0x0010)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0040(0x0001)
};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x000D
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                                   // 0x0000(0x000C)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x004D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                    // 0x0000(0x0004)
	struct FTwoVectors                                 OutVal;                                                   // 0x0004(0x0018)
	struct FTwoVectors                                 ArriveTangent;                                            // 0x001C(0x0018)
	struct FTwoVectors                                 LeaveTangent;                                             // 0x0034(0x0018)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x004C(0x0001)
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x000D
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                   // 0x0000(0x000C)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C)
	struct FVector                                     Max;                                                      // 0x000C(0x000C)
	unsigned char                                      IsValid;                                                  // 0x0018(0x0001)
};

// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	float                                              FOV;                                                      // 0x0018(0x0004)
};

// ScriptStruct Core.Object.SHVector
// 0x0030
struct FSHVector
{
	float                                              V[0x9];                                                   // 0x0000(0x0004)
	float                                              Padding[0x3];                                             // 0x0024(0x0004)
};

// ScriptStruct Core.Object.SHVectorRGB
// 0x0090
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                                        // 0x0000(0x0030)
	struct FSHVector                                   G;                                                        // 0x0030(0x0030)
	struct FSHVector                                   B;                                                        // 0x0060(0x0030)
};

// ScriptStruct Core.Object.ConvexVolume_Mirror
// 0x0120
struct FConvexVolume_Mirror
{
	struct FPlane                                      DummyPlane;                                               // 0x0000(0x0010)
	float                                              Padding[0x44];                                            // 0x0010(0x0004)
};

// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                        // 0x0000(0x0004)
	int                                                Y;                                                        // 0x0004(0x0004)
};

// ScriptStruct Core.Object.Array_Mirror
// 0x000C
struct FArray_Mirror
{
	struct FPointer                                    Data;                                                     // 0x0000(0x0004)
	int                                                ArrayNum;                                                 // 0x0004(0x0004)
	int                                                ArrayMax;                                                 // 0x0008(0x0004)
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x000C
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                                     // 0x0000(0x0004)
	int                                                ArrayNum;                                                 // 0x0004(0x0004)
	int                                                ArrayMax;                                                 // 0x0008(0x0004)
};

// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// 0x0014
struct FFColorVertexBuffer_Mirror
{
	struct FPointer                                    VfTable;                                                  // 0x0000(0x0004)
	struct FPointer                                    VertexData;                                               // 0x0004(0x0004)
	int                                                Data;                                                     // 0x0008(0x0004)
	int                                                Stride;                                                   // 0x000C(0x0004)
	int                                                NumVertices;                                              // 0x0010(0x0004)
};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x0004
struct FRenderCommandFence_Mirror
{
	int                                                NumPendingFences;                                         // 0x0000(0x0004)
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0034
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                                  // 0x0000(0x0004)
	int                                                BulkDataFlags;                                            // 0x0004(0x0004)
	int                                                ElementCount;                                             // 0x0008(0x0004)
	int                                                BulkDataOffsetInFile;                                     // 0x000C(0x0004)
	int                                                BulkDataSizeOnDisk;                                       // 0x0010(0x0004)
	int                                                SavedBulkDataFlags;                                       // 0x0014(0x0004)
	int                                                SavedElementCount;                                        // 0x0018(0x0004)
	int                                                SavedBulkDataOffsetInFile;                                // 0x001C(0x0004)
	int                                                SavedBulkDataSizeOnDisk;                                  // 0x0020(0x0004)
	struct FPointer                                    BulkData;                                                 // 0x0024(0x0004)
	int                                                LockStatus;                                               // 0x0028(0x0004)
	struct FPointer                                    AttachedAr;                                               // 0x002C(0x0004)
	int                                                bShouldFreeOnEmpty;                                       // 0x0030(0x0004)
};

// ScriptStruct Core.Object.BitArray_Mirror
// 0x001C
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                             // 0x0000(0x0004)
	int                                                InlineData[0x4];                                          // 0x0004(0x0004)
	int                                                NumBits;                                                  // 0x0014(0x0004)
	int                                                MaxBits;                                                  // 0x0018(0x0004)
};

// ScriptStruct Core.Object.SparseArray_Mirror
// 0x0030
struct FSparseArray_Mirror
{
	TArray<int>                                        Elements;                                                 // 0x0000(0x000C)
	struct FBitArray_Mirror                            AllocationFlags;                                          // 0x000C(0x001C)
	int                                                FirstFreeIndex;                                           // 0x0028(0x0004)
	int                                                NumFreeIndices;                                           // 0x002C(0x0004)
};

// ScriptStruct Core.Object.Set_Mirror
// 0x003C
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                                 // 0x0000(0x0030)
	struct FPointer                                    Hash;                                                     // 0x0030(0x0004)
	int                                                InlineHash;                                               // 0x0034(0x0004)
	int                                                HashSize;                                                 // 0x0038(0x0004)
};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x003C
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                                    // 0x0000(0x003C)
};

// ScriptStruct Core.Object.Map_Mirror
// 0x003C
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                                    // 0x0000(0x003C)
};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int                                                Value;                                                    // 0x0000(0x0004)
};

// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int                                                A;                                                        // 0x0000(0x0004)
	int                                                B;                                                        // 0x0004(0x0004)
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0004 (0x001C - 0x0018)
struct FRawDistributionFloat : public FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                             // 0x0018(0x0004)
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0004 (0x001C - 0x0018)
struct FRawDistributionVector : public FRawDistribution
{
	class UDistributionVector*                         Distribution;                                             // 0x0018(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
