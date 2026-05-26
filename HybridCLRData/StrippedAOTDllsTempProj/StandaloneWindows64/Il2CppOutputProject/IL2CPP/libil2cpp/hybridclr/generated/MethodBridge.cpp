#include <codegen/il2cpp-codegen-metadata.h>
#if HYBRIDCLR_UNITY_2023_OR_NEW
#include <codegen/il2cpp-codegen.h>
#elif HYBRIDCLR_UNITY_2022
#include <codegen/il2cpp-codegen-il2cpp.h>
#elif HYBRIDCLR_UNITY_2020 || HYBRIDCLR_UNITY_2021
#include <codegen/il2cpp-codegen-common-big.h>
#else
#include <codegen/il2cpp-codegen-common.h>
#endif

#include "vm/ClassInlines.h"
#include "vm/Object.h"
#include "vm/Class.h"
#include "vm/ScopedThreadAttacher.h"

#include "../metadata/MetadataUtil.h"


#include "../interpreter/InterpreterModule.h"
#include "../interpreter/MethodBridge.h"
#include "../interpreter/Interpreter.h"
#include "../interpreter/MemoryUtil.h"
#include "../interpreter/InstrinctDef.h"

using namespace hybridclr::interpreter;
using namespace hybridclr::metadata;

//!!!{{CODE


// DEVELOPMENT=0


// System.ByReference`1<System.Byte>
struct __struct_223__ {
	intptr_t __0; // _value
};
// System.Span`1<System.Byte>
struct __struct_0__ {
	__struct_223__ __0; // _pointer
	int32_t __1; // _length
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct __struct_3__ {
	uintptr_t __0; // key
	uintptr_t __1; // value
};
// System.ValueTuple`2<System.Object,System.Object>
struct __struct_4__ {
	uintptr_t __0; // Item1
	uintptr_t __1; // Item2
};
// UnityEngine.TerrainUtils.TerrainTileCoord
struct __struct_5__ {
	int32_t __0; // tileX
	int32_t __1; // tileZ
};
// System.Resources.ResourceLocator
struct __struct_6__ {
	uintptr_t __0; // _value
	int32_t __1; // _dataPos
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct __struct_7__ {
	int32_t __0; // key
	uintptr_t __1; // value
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>
struct __struct_9__ {
	uintptr_t __0; // key
	__struct_6__ __1; // value
};
// System.Collections.Generic.KeyValuePair`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct __struct_10__ {
	__struct_4__ __0; // key
	uintptr_t __1; // value
};
// System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct __struct_11__ {
	__struct_5__ __0; // key
	uintptr_t __1; // value
};
// System.Nullable`1<System.Object>
struct __struct_12__ {
	uint8_t __0; // hasValue
	uintptr_t __1; // value
};
// UnityEngine.UnitySynchronizationContext/WorkRequest
struct __struct_14__ {
	uintptr_t __0; // m_DelagateCallback
	uintptr_t __1; // m_DelagateState
	uintptr_t __2; // m_WaitHandle
};
// System.Reflection.CustomAttributeNamedArgument
struct __struct_15__ {
	__struct_3__ __0; // <TypedValue>k__BackingField
	uint8_t __1; // <IsField>k__BackingField
	uintptr_t __2; // <MemberName>k__BackingField
	uintptr_t __3; // _attributeType
	uintptr_t __4; // _lazyMemberInfo
};
// System.ConsoleKeyInfo
struct __struct_17__ {
	uint16_t __0; // _keyChar
	int32_t __1; // _key
	int32_t __2; // _mods
};
// System.Decimal
struct __struct_18__ {
	union {
	#pragma pack(push, 1)
	struct { int32_t __0;}; // flags
	#pragma pack(pop)
	struct { int32_t __0_forAlignmentOnly;}; // flags
	#pragma pack(push, 1)
	struct { char __1_offsetPadding[4]; int32_t __1;}; // hi
	#pragma pack(pop)
	struct { char __1_offsetPadding_forAlignmentOnly[4]; int32_t __1_forAlignmentOnly;}; // hi
	#pragma pack(push, 1)
	struct { char __2_offsetPadding[8]; int32_t __2;}; // lo
	#pragma pack(pop)
	struct { char __2_offsetPadding_forAlignmentOnly[8]; int32_t __2_forAlignmentOnly;}; // lo
	#pragma pack(push, 1)
	struct { char __3_offsetPadding[12]; int32_t __3;}; // mid
	#pragma pack(pop)
	struct { char __3_offsetPadding_forAlignmentOnly[12]; int32_t __3_forAlignmentOnly;}; // mid
	#pragma pack(push, 1)
	struct { char __4_offsetPadding[8]; uint64_t __4;}; // ulomidLE
	#pragma pack(pop)
	struct { char __4_offsetPadding_forAlignmentOnly[8]; uint64_t __4_forAlignmentOnly;}; // ulomidLE
	};
};
// System.DateTime
struct __struct_19__ {
	uint64_t __0; // _dateData
};
// System.Guid
struct __struct_20__ {
	int32_t __0; // _a
	int16_t __1; // _b
	int16_t __2; // _c
	uint8_t __3; // _d
	uint8_t __4; // _e
	uint8_t __5; // _f
	uint8_t __6; // _g
	uint8_t __7; // _h
	uint8_t __8; // _i
	uint8_t __9; // _j
	uint8_t __10; // _k
};
// System.Index
struct __struct_21__ {
	int32_t __0; // _value
};
// System.Numerics.Register
struct __struct_225__ {
	union {
	#pragma pack(push, 1)
	struct { uint8_t __0;}; // byte_0
	#pragma pack(pop)
	struct { uint8_t __0_forAlignmentOnly;}; // byte_0
	#pragma pack(push, 1)
	struct { char __1_offsetPadding[1]; uint8_t __1;}; // byte_1
	#pragma pack(pop)
	struct { char __1_offsetPadding_forAlignmentOnly[1]; uint8_t __1_forAlignmentOnly;}; // byte_1
	#pragma pack(push, 1)
	struct { char __2_offsetPadding[2]; uint8_t __2;}; // byte_2
	#pragma pack(pop)
	struct { char __2_offsetPadding_forAlignmentOnly[2]; uint8_t __2_forAlignmentOnly;}; // byte_2
	#pragma pack(push, 1)
	struct { char __3_offsetPadding[3]; uint8_t __3;}; // byte_3
	#pragma pack(pop)
	struct { char __3_offsetPadding_forAlignmentOnly[3]; uint8_t __3_forAlignmentOnly;}; // byte_3
	#pragma pack(push, 1)
	struct { char __4_offsetPadding[4]; uint8_t __4;}; // byte_4
	#pragma pack(pop)
	struct { char __4_offsetPadding_forAlignmentOnly[4]; uint8_t __4_forAlignmentOnly;}; // byte_4
	#pragma pack(push, 1)
	struct { char __5_offsetPadding[5]; uint8_t __5;}; // byte_5
	#pragma pack(pop)
	struct { char __5_offsetPadding_forAlignmentOnly[5]; uint8_t __5_forAlignmentOnly;}; // byte_5
	#pragma pack(push, 1)
	struct { char __6_offsetPadding[6]; uint8_t __6;}; // byte_6
	#pragma pack(pop)
	struct { char __6_offsetPadding_forAlignmentOnly[6]; uint8_t __6_forAlignmentOnly;}; // byte_6
	#pragma pack(push, 1)
	struct { char __7_offsetPadding[7]; uint8_t __7;}; // byte_7
	#pragma pack(pop)
	struct { char __7_offsetPadding_forAlignmentOnly[7]; uint8_t __7_forAlignmentOnly;}; // byte_7
	#pragma pack(push, 1)
	struct { char __8_offsetPadding[8]; uint8_t __8;}; // byte_8
	#pragma pack(pop)
	struct { char __8_offsetPadding_forAlignmentOnly[8]; uint8_t __8_forAlignmentOnly;}; // byte_8
	#pragma pack(push, 1)
	struct { char __9_offsetPadding[9]; uint8_t __9;}; // byte_9
	#pragma pack(pop)
	struct { char __9_offsetPadding_forAlignmentOnly[9]; uint8_t __9_forAlignmentOnly;}; // byte_9
	#pragma pack(push, 1)
	struct { char __10_offsetPadding[10]; uint8_t __10;}; // byte_10
	#pragma pack(pop)
	struct { char __10_offsetPadding_forAlignmentOnly[10]; uint8_t __10_forAlignmentOnly;}; // byte_10
	#pragma pack(push, 1)
	struct { char __11_offsetPadding[11]; uint8_t __11;}; // byte_11
	#pragma pack(pop)
	struct { char __11_offsetPadding_forAlignmentOnly[11]; uint8_t __11_forAlignmentOnly;}; // byte_11
	#pragma pack(push, 1)
	struct { char __12_offsetPadding[12]; uint8_t __12;}; // byte_12
	#pragma pack(pop)
	struct { char __12_offsetPadding_forAlignmentOnly[12]; uint8_t __12_forAlignmentOnly;}; // byte_12
	#pragma pack(push, 1)
	struct { char __13_offsetPadding[13]; uint8_t __13;}; // byte_13
	#pragma pack(pop)
	struct { char __13_offsetPadding_forAlignmentOnly[13]; uint8_t __13_forAlignmentOnly;}; // byte_13
	#pragma pack(push, 1)
	struct { char __14_offsetPadding[14]; uint8_t __14;}; // byte_14
	#pragma pack(pop)
	struct { char __14_offsetPadding_forAlignmentOnly[14]; uint8_t __14_forAlignmentOnly;}; // byte_14
	#pragma pack(push, 1)
	struct { char __15_offsetPadding[15]; uint8_t __15;}; // byte_15
	#pragma pack(pop)
	struct { char __15_offsetPadding_forAlignmentOnly[15]; uint8_t __15_forAlignmentOnly;}; // byte_15
	#pragma pack(push, 1)
	struct { int8_t __16;}; // sbyte_0
	#pragma pack(pop)
	struct { int8_t __16_forAlignmentOnly;}; // sbyte_0
	#pragma pack(push, 1)
	struct { char __17_offsetPadding[1]; int8_t __17;}; // sbyte_1
	#pragma pack(pop)
	struct { char __17_offsetPadding_forAlignmentOnly[1]; int8_t __17_forAlignmentOnly;}; // sbyte_1
	#pragma pack(push, 1)
	struct { char __18_offsetPadding[2]; int8_t __18;}; // sbyte_2
	#pragma pack(pop)
	struct { char __18_offsetPadding_forAlignmentOnly[2]; int8_t __18_forAlignmentOnly;}; // sbyte_2
	#pragma pack(push, 1)
	struct { char __19_offsetPadding[3]; int8_t __19;}; // sbyte_3
	#pragma pack(pop)
	struct { char __19_offsetPadding_forAlignmentOnly[3]; int8_t __19_forAlignmentOnly;}; // sbyte_3
	#pragma pack(push, 1)
	struct { char __20_offsetPadding[4]; int8_t __20;}; // sbyte_4
	#pragma pack(pop)
	struct { char __20_offsetPadding_forAlignmentOnly[4]; int8_t __20_forAlignmentOnly;}; // sbyte_4
	#pragma pack(push, 1)
	struct { char __21_offsetPadding[5]; int8_t __21;}; // sbyte_5
	#pragma pack(pop)
	struct { char __21_offsetPadding_forAlignmentOnly[5]; int8_t __21_forAlignmentOnly;}; // sbyte_5
	#pragma pack(push, 1)
	struct { char __22_offsetPadding[6]; int8_t __22;}; // sbyte_6
	#pragma pack(pop)
	struct { char __22_offsetPadding_forAlignmentOnly[6]; int8_t __22_forAlignmentOnly;}; // sbyte_6
	#pragma pack(push, 1)
	struct { char __23_offsetPadding[7]; int8_t __23;}; // sbyte_7
	#pragma pack(pop)
	struct { char __23_offsetPadding_forAlignmentOnly[7]; int8_t __23_forAlignmentOnly;}; // sbyte_7
	#pragma pack(push, 1)
	struct { char __24_offsetPadding[8]; int8_t __24;}; // sbyte_8
	#pragma pack(pop)
	struct { char __24_offsetPadding_forAlignmentOnly[8]; int8_t __24_forAlignmentOnly;}; // sbyte_8
	#pragma pack(push, 1)
	struct { char __25_offsetPadding[9]; int8_t __25;}; // sbyte_9
	#pragma pack(pop)
	struct { char __25_offsetPadding_forAlignmentOnly[9]; int8_t __25_forAlignmentOnly;}; // sbyte_9
	#pragma pack(push, 1)
	struct { char __26_offsetPadding[10]; int8_t __26;}; // sbyte_10
	#pragma pack(pop)
	struct { char __26_offsetPadding_forAlignmentOnly[10]; int8_t __26_forAlignmentOnly;}; // sbyte_10
	#pragma pack(push, 1)
	struct { char __27_offsetPadding[11]; int8_t __27;}; // sbyte_11
	#pragma pack(pop)
	struct { char __27_offsetPadding_forAlignmentOnly[11]; int8_t __27_forAlignmentOnly;}; // sbyte_11
	#pragma pack(push, 1)
	struct { char __28_offsetPadding[12]; int8_t __28;}; // sbyte_12
	#pragma pack(pop)
	struct { char __28_offsetPadding_forAlignmentOnly[12]; int8_t __28_forAlignmentOnly;}; // sbyte_12
	#pragma pack(push, 1)
	struct { char __29_offsetPadding[13]; int8_t __29;}; // sbyte_13
	#pragma pack(pop)
	struct { char __29_offsetPadding_forAlignmentOnly[13]; int8_t __29_forAlignmentOnly;}; // sbyte_13
	#pragma pack(push, 1)
	struct { char __30_offsetPadding[14]; int8_t __30;}; // sbyte_14
	#pragma pack(pop)
	struct { char __30_offsetPadding_forAlignmentOnly[14]; int8_t __30_forAlignmentOnly;}; // sbyte_14
	#pragma pack(push, 1)
	struct { char __31_offsetPadding[15]; int8_t __31;}; // sbyte_15
	#pragma pack(pop)
	struct { char __31_offsetPadding_forAlignmentOnly[15]; int8_t __31_forAlignmentOnly;}; // sbyte_15
	#pragma pack(push, 1)
	struct { uint16_t __32;}; // uint16_0
	#pragma pack(pop)
	struct { uint16_t __32_forAlignmentOnly;}; // uint16_0
	#pragma pack(push, 1)
	struct { char __33_offsetPadding[2]; uint16_t __33;}; // uint16_1
	#pragma pack(pop)
	struct { char __33_offsetPadding_forAlignmentOnly[2]; uint16_t __33_forAlignmentOnly;}; // uint16_1
	#pragma pack(push, 1)
	struct { char __34_offsetPadding[4]; uint16_t __34;}; // uint16_2
	#pragma pack(pop)
	struct { char __34_offsetPadding_forAlignmentOnly[4]; uint16_t __34_forAlignmentOnly;}; // uint16_2
	#pragma pack(push, 1)
	struct { char __35_offsetPadding[6]; uint16_t __35;}; // uint16_3
	#pragma pack(pop)
	struct { char __35_offsetPadding_forAlignmentOnly[6]; uint16_t __35_forAlignmentOnly;}; // uint16_3
	#pragma pack(push, 1)
	struct { char __36_offsetPadding[8]; uint16_t __36;}; // uint16_4
	#pragma pack(pop)
	struct { char __36_offsetPadding_forAlignmentOnly[8]; uint16_t __36_forAlignmentOnly;}; // uint16_4
	#pragma pack(push, 1)
	struct { char __37_offsetPadding[10]; uint16_t __37;}; // uint16_5
	#pragma pack(pop)
	struct { char __37_offsetPadding_forAlignmentOnly[10]; uint16_t __37_forAlignmentOnly;}; // uint16_5
	#pragma pack(push, 1)
	struct { char __38_offsetPadding[12]; uint16_t __38;}; // uint16_6
	#pragma pack(pop)
	struct { char __38_offsetPadding_forAlignmentOnly[12]; uint16_t __38_forAlignmentOnly;}; // uint16_6
	#pragma pack(push, 1)
	struct { char __39_offsetPadding[14]; uint16_t __39;}; // uint16_7
	#pragma pack(pop)
	struct { char __39_offsetPadding_forAlignmentOnly[14]; uint16_t __39_forAlignmentOnly;}; // uint16_7
	#pragma pack(push, 1)
	struct { int16_t __40;}; // int16_0
	#pragma pack(pop)
	struct { int16_t __40_forAlignmentOnly;}; // int16_0
	#pragma pack(push, 1)
	struct { char __41_offsetPadding[2]; int16_t __41;}; // int16_1
	#pragma pack(pop)
	struct { char __41_offsetPadding_forAlignmentOnly[2]; int16_t __41_forAlignmentOnly;}; // int16_1
	#pragma pack(push, 1)
	struct { char __42_offsetPadding[4]; int16_t __42;}; // int16_2
	#pragma pack(pop)
	struct { char __42_offsetPadding_forAlignmentOnly[4]; int16_t __42_forAlignmentOnly;}; // int16_2
	#pragma pack(push, 1)
	struct { char __43_offsetPadding[6]; int16_t __43;}; // int16_3
	#pragma pack(pop)
	struct { char __43_offsetPadding_forAlignmentOnly[6]; int16_t __43_forAlignmentOnly;}; // int16_3
	#pragma pack(push, 1)
	struct { char __44_offsetPadding[8]; int16_t __44;}; // int16_4
	#pragma pack(pop)
	struct { char __44_offsetPadding_forAlignmentOnly[8]; int16_t __44_forAlignmentOnly;}; // int16_4
	#pragma pack(push, 1)
	struct { char __45_offsetPadding[10]; int16_t __45;}; // int16_5
	#pragma pack(pop)
	struct { char __45_offsetPadding_forAlignmentOnly[10]; int16_t __45_forAlignmentOnly;}; // int16_5
	#pragma pack(push, 1)
	struct { char __46_offsetPadding[12]; int16_t __46;}; // int16_6
	#pragma pack(pop)
	struct { char __46_offsetPadding_forAlignmentOnly[12]; int16_t __46_forAlignmentOnly;}; // int16_6
	#pragma pack(push, 1)
	struct { char __47_offsetPadding[14]; int16_t __47;}; // int16_7
	#pragma pack(pop)
	struct { char __47_offsetPadding_forAlignmentOnly[14]; int16_t __47_forAlignmentOnly;}; // int16_7
	#pragma pack(push, 1)
	struct { uint32_t __48;}; // uint32_0
	#pragma pack(pop)
	struct { uint32_t __48_forAlignmentOnly;}; // uint32_0
	#pragma pack(push, 1)
	struct { char __49_offsetPadding[4]; uint32_t __49;}; // uint32_1
	#pragma pack(pop)
	struct { char __49_offsetPadding_forAlignmentOnly[4]; uint32_t __49_forAlignmentOnly;}; // uint32_1
	#pragma pack(push, 1)
	struct { char __50_offsetPadding[8]; uint32_t __50;}; // uint32_2
	#pragma pack(pop)
	struct { char __50_offsetPadding_forAlignmentOnly[8]; uint32_t __50_forAlignmentOnly;}; // uint32_2
	#pragma pack(push, 1)
	struct { char __51_offsetPadding[12]; uint32_t __51;}; // uint32_3
	#pragma pack(pop)
	struct { char __51_offsetPadding_forAlignmentOnly[12]; uint32_t __51_forAlignmentOnly;}; // uint32_3
	#pragma pack(push, 1)
	struct { int32_t __52;}; // int32_0
	#pragma pack(pop)
	struct { int32_t __52_forAlignmentOnly;}; // int32_0
	#pragma pack(push, 1)
	struct { char __53_offsetPadding[4]; int32_t __53;}; // int32_1
	#pragma pack(pop)
	struct { char __53_offsetPadding_forAlignmentOnly[4]; int32_t __53_forAlignmentOnly;}; // int32_1
	#pragma pack(push, 1)
	struct { char __54_offsetPadding[8]; int32_t __54;}; // int32_2
	#pragma pack(pop)
	struct { char __54_offsetPadding_forAlignmentOnly[8]; int32_t __54_forAlignmentOnly;}; // int32_2
	#pragma pack(push, 1)
	struct { char __55_offsetPadding[12]; int32_t __55;}; // int32_3
	#pragma pack(pop)
	struct { char __55_offsetPadding_forAlignmentOnly[12]; int32_t __55_forAlignmentOnly;}; // int32_3
	#pragma pack(push, 1)
	struct { uint64_t __56;}; // uint64_0
	#pragma pack(pop)
	struct { uint64_t __56_forAlignmentOnly;}; // uint64_0
	#pragma pack(push, 1)
	struct { char __57_offsetPadding[8]; uint64_t __57;}; // uint64_1
	#pragma pack(pop)
	struct { char __57_offsetPadding_forAlignmentOnly[8]; uint64_t __57_forAlignmentOnly;}; // uint64_1
	#pragma pack(push, 1)
	struct { int64_t __58;}; // int64_0
	#pragma pack(pop)
	struct { int64_t __58_forAlignmentOnly;}; // int64_0
	#pragma pack(push, 1)
	struct { char __59_offsetPadding[8]; int64_t __59;}; // int64_1
	#pragma pack(pop)
	struct { char __59_offsetPadding_forAlignmentOnly[8]; int64_t __59_forAlignmentOnly;}; // int64_1
	#pragma pack(push, 1)
	struct { float __60;}; // single_0
	#pragma pack(pop)
	struct { float __60_forAlignmentOnly;}; // single_0
	#pragma pack(push, 1)
	struct { char __61_offsetPadding[4]; float __61;}; // single_1
	#pragma pack(pop)
	struct { char __61_offsetPadding_forAlignmentOnly[4]; float __61_forAlignmentOnly;}; // single_1
	#pragma pack(push, 1)
	struct { char __62_offsetPadding[8]; float __62;}; // single_2
	#pragma pack(pop)
	struct { char __62_offsetPadding_forAlignmentOnly[8]; float __62_forAlignmentOnly;}; // single_2
	#pragma pack(push, 1)
	struct { char __63_offsetPadding[12]; float __63;}; // single_3
	#pragma pack(pop)
	struct { char __63_offsetPadding_forAlignmentOnly[12]; float __63_forAlignmentOnly;}; // single_3
	#pragma pack(push, 1)
	struct { double __64;}; // double_0
	#pragma pack(pop)
	struct { double __64_forAlignmentOnly;}; // double_0
	#pragma pack(push, 1)
	struct { char __65_offsetPadding[8]; double __65;}; // double_1
	#pragma pack(pop)
	struct { char __65_offsetPadding_forAlignmentOnly[8]; double __65_forAlignmentOnly;}; // double_1
	};
};
// System.Numerics.Vector`1<System.Object>
struct __struct_22__ {
	__struct_225__ __0; // register
};
// System.Range
struct __struct_23__ {
	__struct_21__ __0; // <Start>k__BackingField
	__struct_21__ __1; // <End>k__BackingField
};
// System.TimeSpan
struct __struct_25__ {
	int64_t __0; // _ticks
};
// System.TimeZoneInfo/TransitionTime
struct __struct_26__ {
	__struct_19__ __0; // _timeOfDay
	uint8_t __1; // _month
	uint8_t __2; // _week
	uint8_t __3; // _day
	int32_t __4; // _dayOfWeek
	uint8_t __5; // _isFixedDateRule
};
// System.ValueTuple`3<System.Object,System.Object,System.Object>
struct __struct_27__ {
	uintptr_t __0; // Item1
	uintptr_t __1; // Item2
	uintptr_t __2; // Item3
};
// System.ValueTuple
union __struct_28__ {
	struct { char __fieldSize_offsetPadding[1];};
	struct {
	};
};
// Unity.Collections.NativeArray`1<System.Object>
struct __struct_29__ {
	uintptr_t __0; // m_Buffer
	int32_t __1; // m_Length
	int32_t __2; // m_AllocatorLabel
};
// Unity.Jobs.JobHandle
struct __struct_30__ {
	uint64_t __0; // jobGroup
	int32_t __1; // version
};
// UnityEngine.Playables.PlayableHandle
struct __struct_53__ {
	intptr_t __0; // m_Handle
	uint32_t __1; // m_Version
};
// UnityEngine.Animations.AnimationClipPlayable
struct __struct_31__ {
	__struct_53__ __0; // m_Handle
};
// UnityEngine.Vector3Int
struct __struct_71__ {
	int32_t __0; // m_X
	int32_t __1; // m_Y
	int32_t __2; // m_Z
};
// UnityEngine.BoundsInt
struct __struct_42__ {
	__struct_71__ __0; // m_Position
	__struct_71__ __1; // m_Size
};
// UnityEngine.Vector3
struct __struct_72__ {
	float __0; // x
	float __1; // y
	float __2; // z
};
// UnityEngine.Bounds
struct __struct_43__ {
	__struct_72__ __0; // m_Center
	__struct_72__ __1; // m_Extents
};
// UnityEngine.Color
struct __struct_44__ {
	float __0; // r
	float __1; // g
	float __2; // b
	float __3; // a
};
// UnityEngine.Hash128
struct __struct_49__ {
	uint64_t __0; // u64_0
	uint64_t __1; // u64_1
};
// UnityEngine.Matrix4x4
struct __struct_50__ {
	float __0; // m00
	float __1; // m10
	float __2; // m20
	float __3; // m30
	float __4; // m01
	float __5; // m11
	float __6; // m21
	float __7; // m31
	float __8; // m02
	float __9; // m12
	float __10; // m22
	float __11; // m32
	float __12; // m03
	float __13; // m13
	float __14; // m23
	float __15; // m33
};
// UnityEngine.RectInt
struct __struct_58__ {
	int32_t __0; // m_XMin
	int32_t __1; // m_YMin
	int32_t __2; // m_Width
	int32_t __3; // m_Height
};
// UnityEngine.RefreshRate
struct __struct_60__ {
	uint32_t __0; // numerator
	uint32_t __1; // denominator
};
// UnityEngine.Rendering.BatchID
struct __struct_61__ {
	uint32_t __0; // value
};
// UnityEngine.Rendering.BatchPackedCullingViewID
struct __struct_64__ {
	uint64_t __0; // handle
};
// UnityEngine.Rendering.LODParameters
struct __struct_65__ {
	int32_t __0; // m_IsOrthographic
	__struct_72__ __1; // m_CameraPosition
	float __2; // m_FieldOfView
	float __3; // m_OrthoSize
	int32_t __4; // m_CameraPixelHeight
};
// UnityEngine.Rendering.RenderTargetIdentifier
struct __struct_66__ {
	int32_t __0; // m_Type
	int32_t __1; // m_NameID
	int32_t __2; // m_InstanceID
	intptr_t __3; // m_BufferPointer
	int32_t __4; // m_MipLevel
	int32_t __5; // m_CubeFace
	int32_t __6; // m_DepthSlice
};
// UnityEngine.Vector2
struct __struct_70__ {
	float __0; // x
	float __1; // y
};
// UnityEngine.XR.Bone
struct __struct_74__ {
	uint64_t __0; // m_DeviceId
	uint32_t __1; // m_FeatureIndex
};
// UnityEngine.XR.InputDevice
struct __struct_77__ {
	uint64_t __0; // m_DeviceId
	uint8_t __1; // m_Initialized
};
// UnityEngine.XR.InputFeatureUsage
struct __struct_78__ {
	uintptr_t __0; // m_Name
	uint32_t __1; // m_InternalType
};
// UnityEngine.XR.MeshGenerationResult
struct __struct_79__ {
	__struct_49__ __0; // <MeshId>k__BackingField
	uintptr_t __1; // <Mesh>k__BackingField
	uintptr_t __2; // <MeshCollider>k__BackingField
	int32_t __3; // <Status>k__BackingField
	int32_t __4; // <Attributes>k__BackingField
	uint64_t __5; // <Timestamp>k__BackingField
	__struct_72__ __6; // <Position>k__BackingField
	__struct_44__ __7; // <Rotation>k__BackingField
	__struct_72__ __8; // <Scale>k__BackingField
};
// System.Threading.CancellationToken
struct __struct_91__ {
	uintptr_t __0; // _source
};
// System.ValueTuple`2<System.Int32,System.Int32>
struct __struct_93__ {
	int32_t __0; // Item1
	int32_t __1; // Item2
};
// System.ValueTuple`3<System.Object,System.Int32,System.Int32>
struct __struct_94__ {
	uintptr_t __0; // Item1
	int32_t __1; // Item2
	int32_t __2; // Item3
};
// UnityEngine.AssemblyVersion
struct __struct_103__ {
	uint16_t __0; // major
	uint16_t __1; // minor
	uint16_t __2; // build
	uint16_t __3; // revision
};
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct __struct_107__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _version
	int32_t __2; // _index
	__struct_7__ __3; // _current
	int32_t __4; // _getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct __struct_108__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _version
	int32_t __2; // _index
	__struct_6__ __3; // _current
	int32_t __4; // _getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct __struct_109__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _version
	int32_t __2; // _index
	__struct_3__ __3; // _current
	int32_t __4; // _getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Resources.ResourceLocator>
struct __struct_110__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _version
	int32_t __2; // _index
	__struct_9__ __3; // _current
	int32_t __4; // _getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/Enumerator<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct __struct_111__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _version
	int32_t __2; // _index
	__struct_10__ __3; // _current
	int32_t __4; // _getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct __struct_112__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _version
	int32_t __2; // _index
	__struct_11__ __3; // _current
	int32_t __4; // _getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
struct __struct_113__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _index
	int32_t __2; // _version
	int32_t __3; // _currentKey
};
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
struct __struct_114__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _index
	int32_t __2; // _version
	uintptr_t __3; // _currentKey
};
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct __struct_117__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _index
	int32_t __2; // _version
	__struct_4__ __3; // _currentKey
};
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct __struct_118__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _index
	int32_t __2; // _version
	__struct_5__ __3; // _currentKey
};
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Resources.ResourceLocator>
struct __struct_122__ {
	uintptr_t __0; // _dictionary
	int32_t __1; // _index
	int32_t __2; // _version
	__struct_6__ __3; // _currentValue
};
// System.Collections.Generic.List`1/Enumerator<UnityEngine.BeforeRenderHelper/OrderBlock>
struct __struct_127__ {
	uintptr_t __0; // _list
	int32_t __1; // _index
	int32_t __2; // _version
	__struct_7__ __3; // _current
};
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct __struct_128__ {
	uintptr_t __0; // _list
	int32_t __1; // _index
	int32_t __2; // _version
	__struct_14__ __3; // _current
};
// System.IO.DisableMediaInsertionPrompt
struct __struct_129__ {
	uint8_t __0; // _disableSuccess
	uint32_t __1; // _oldMode
};
// UnityEngine.ContactFilter2D
struct __struct_131__ {
	uint8_t __0; // useTriggers
	uint8_t __1; // useLayerMask
	uint8_t __2; // useDepth
	uint8_t __3; // useOutsideDepth
	uint8_t __4; // useNormalAngle
	uint8_t __5; // useOutsideNormalAngle
	__struct_21__ __6; // layerMask
	float __7; // minDepth
	float __8; // maxDepth
	float __9; // minNormalAngle
	float __10; // maxNormalAngle
};
// System.Nullable`1<System.Int32>
struct __struct_132__ {
	uint8_t __0; // hasValue
	int32_t __1; // value
};
// System.Nullable`1<System.Byte>
struct __struct_133__ {
	uint8_t __0; // hasValue
	uint8_t __1; // value
};
// System.Nullable`1<System.DateTime>
struct __struct_134__ {
	uint8_t __0; // hasValue
	__struct_19__ __1; // value
};
// System.Nullable`1<System.Decimal>
struct __struct_135__ {
	uint8_t __0; // hasValue
	__struct_18__ __1; // value
};
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte>
struct __struct_143__ {
	__struct_3__ __0; // m_coreState
	uintptr_t __1; // m_task
};
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Byte>
struct __struct_145__ {
	uintptr_t __0; // m_task
	uint8_t __1; // m_continueOnCapturedContext
};
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Byte>
struct __struct_149__ {
	__struct_145__ __0; // m_configuredTaskAwaiter
};
// UnityEngine.TransformDispatchData
struct __struct_161__ {
	__struct_29__ __0; // transformedID
	__struct_29__ __1; // parentID
	__struct_29__ __2; // localToWorldMatrices
	__struct_29__ __3; // positions
	__struct_29__ __4; // rotations
	__struct_29__ __5; // scales
};
// UnityEngine.TypeDispatchData
struct __struct_162__ {
	uintptr_t __0; // changed
	__struct_29__ __1; // changedID
	__struct_29__ __2; // destroyedID
};
// UnityEngine.XR.XRNodeState
struct __struct_164__ {
	int32_t __0; // m_Type
	int32_t __1; // m_AvailableFields
	__struct_72__ __2; // m_Position
	__struct_44__ __3; // m_Rotation
	__struct_72__ __4; // m_Velocity
	__struct_72__ __5; // m_AngularVelocity
	__struct_72__ __6; // m_Acceleration
	__struct_72__ __7; // m_AngularAcceleration
	int32_t __8; // m_Tracked
	uint64_t __9; // m_UniqueID
};
// Unity.Profiling.DebugScreenCapture
struct __struct_166__ {
	__struct_29__ __0; // <RawImageDataReference>k__BackingField
	int32_t __1; // <ImageFormat>k__BackingField
	int32_t __2; // <Width>k__BackingField
	int32_t __3; // <Height>k__BackingField
};
// UnityEngine.ContactPairHeader
struct __struct_167__ {
	int32_t __0; // m_BodyID
	int32_t __1; // m_OtherBodyID
	intptr_t __2; // m_StartPtr
	uint32_t __3; // m_NbPairs
	uint16_t __4; // m_Flags
	__struct_72__ __5; // m_RelativeVelocity
};
// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct __struct_168__ {
	int32_t __0; // instanceID
	int32_t __1; // cookieID
	float __2; // cookieScale
	__struct_44__ __3; // color
	__struct_44__ __4; // indirectColor
	__struct_44__ __5; // orientation
	__struct_72__ __6; // position
	float __7; // range
	float __8; // coneAngle
	float __9; // innerConeAngle
	float __10; // shape0
	float __11; // shape1
	uint8_t __12; // type
	uint8_t __13; // mode
	uint8_t __14; // shadow
	uint8_t __15; // falloff
};
// UnityEngine.Tilemaps.TileData
struct __struct_169__ {
	int32_t __0; // m_Sprite
	__struct_44__ __1; // m_Color
	__struct_50__ __2; // m_Transform
	int32_t __3; // m_GameObject
	int32_t __4; // m_Flags
	int32_t __5; // m_ColliderType
};
// UnityEngine.CullingGroupEvent
struct __struct_172__ {
	int32_t __0; // m_Index
	uint8_t __1; // m_PrevState
	uint8_t __2; // m_ThisState
};
// UnityEngine.Color32
struct __struct_174__ {
	union {
	#pragma pack(push, 1)
	struct { int32_t __0;}; // rgba
	#pragma pack(pop)
	struct { int32_t __0_forAlignmentOnly;}; // rgba
	#pragma pack(push, 1)
	struct { uint8_t __1;}; // r
	#pragma pack(pop)
	struct { uint8_t __1_forAlignmentOnly;}; // r
	#pragma pack(push, 1)
	struct { char __2_offsetPadding[1]; uint8_t __2;}; // g
	#pragma pack(pop)
	struct { char __2_offsetPadding_forAlignmentOnly[1]; uint8_t __2_forAlignmentOnly;}; // g
	#pragma pack(push, 1)
	struct { char __3_offsetPadding[2]; uint8_t __3;}; // b
	#pragma pack(pop)
	struct { char __3_offsetPadding_forAlignmentOnly[2]; uint8_t __3_forAlignmentOnly;}; // b
	#pragma pack(push, 1)
	struct { char __4_offsetPadding[3]; uint8_t __4;}; // a
	#pragma pack(pop)
	struct { char __4_offsetPadding_forAlignmentOnly[3]; uint8_t __4_forAlignmentOnly;}; // a
	};
};
// UnityEngine.ParticleSystem/Particle
struct __struct_176__ {
	__struct_72__ __0; // m_Position
	__struct_72__ __1; // m_Velocity
	__struct_72__ __2; // m_AnimatedVelocity
	__struct_72__ __3; // m_InitialVelocity
	__struct_72__ __4; // m_AxisOfRotation
	__struct_72__ __5; // m_Rotation
	__struct_72__ __6; // m_AngularVelocity
	__struct_72__ __7; // m_StartSize
	__struct_174__ __8; // m_StartColor
	uint32_t __9; // m_RandomSeed
	uint32_t __10; // m_ParentRandomSeed
	float __11; // m_Lifetime
	float __12; // m_StartLifetime
	int32_t __13; // m_MeshIndex
	float __14; // m_EmitAccumulator0
	float __15; // m_EmitAccumulator1
	uint32_t __16; // m_Flags
};
// UnityEngine.ParticleSystem/EmitParams
struct __struct_175__ {
	__struct_176__ __0; // m_Particle
	uint8_t __1; // m_PositionSet
	uint8_t __2; // m_VelocitySet
	uint8_t __3; // m_AxisOfRotationSet
	uint8_t __4; // m_RotationSet
	uint8_t __5; // m_AngularVelocitySet
	uint8_t __6; // m_StartSizeSet
	uint8_t __7; // m_StartColorSet
	uint8_t __8; // m_RandomSeedSet
	uint8_t __9; // m_StartLifetimeSet
	uint8_t __10; // m_MeshIndexSet
	uint8_t __11; // m_ApplyShapeToPosition
};
// Unity.Collections.NativeArray`1/ReadOnly<UnityEngine.ContactPairHeader>
struct __struct_177__ {
	uintptr_t __0; // m_Buffer
	int32_t __1; // m_Length
};
// UnityEngine.Playables.FrameData
struct __struct_178__ {
	uint64_t __0; // m_FrameID
	double __1; // m_DeltaTime
	float __2; // m_Weight
	float __3; // m_EffectiveWeight
	double __4; // m_EffectiveParentDelay
	float __5; // m_EffectiveParentSpeed
	float __6; // m_EffectiveSpeed
	int32_t __7; // m_Flags
	__struct_31__ __8; // m_Output
};
// UnityEngine.RenderTextureDescriptor
struct __struct_179__ {
	int32_t __0; // <width>k__BackingField
	int32_t __1; // <height>k__BackingField
	int32_t __2; // <msaaSamples>k__BackingField
	int32_t __3; // <volumeDepth>k__BackingField
	int32_t __4; // <mipCount>k__BackingField
	int32_t __5; // _graphicsFormat
	int32_t __6; // <stencilFormat>k__BackingField
	int32_t __7; // <depthStencilFormat>k__BackingField
	int32_t __8; // <dimension>k__BackingField
	int32_t __9; // <shadowSamplingMode>k__BackingField
	int32_t __10; // <vrUsage>k__BackingField
	int32_t __11; // _flags
	int32_t __12; // <memoryless>k__BackingField
};
// UnityEngine.AnimatorStateInfo
struct __struct_180__ {
	int32_t __0; // m_Name
	int32_t __1; // m_Path
	int32_t __2; // m_FullPath
	float __3; // m_NormalizedTime
	float __4; // m_Length
	float __5; // m_Speed
	float __6; // m_SpeedMultiplier
	int32_t __7; // m_Tag
	int32_t __8; // m_Loop
};
// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct __struct_181__ {
	int32_t __0; // confidence
	uintptr_t __1; // semanticMeanings
	uintptr_t __2; // text
	__struct_19__ __3; // phraseStartTime
	__struct_25__ __4; // phraseDuration
};
// UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult
struct __struct_182__ {
	int32_t __0; // resultType
	int64_t __1; // hResult
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2>
struct __struct_184__ {
	int32_t __0; // key
	__struct_70__ __1; // value
};
// Unity.Collections.LowLevel.Unsafe.BurstLike/SharedStatic`1<System.IntPtr>
struct __struct_185__ {
	uintptr_t __0; // _buffer
};
// Unity.Collections.NativeArray`1/Enumerator<System.Int32>
struct __struct_187__ {
	__struct_29__ __0; // m_Array
	int32_t __1; // m_Index
	int32_t __2; // value
};
// Unity.Collections.NativeArray`1/Enumerator<System.Object>
struct __struct_188__ {
	__struct_29__ __0; // m_Array
	int32_t __1; // m_Index
	uintptr_t __2; // value
};
// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.ContactPairHeader>
struct __struct_189__ {
	__struct_29__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_167__ __2; // value
};
// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct __struct_190__ {
	__struct_29__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_168__ __2; // value
};
// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Matrix4x4>
struct __struct_191__ {
	__struct_29__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_50__ __2; // value
};
// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Quaternion>
struct __struct_192__ {
	__struct_29__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_44__ __2; // value
};
// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Tilemaps.TileData>
struct __struct_193__ {
	__struct_29__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_169__ __2; // value
};
// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Vector3Int>
struct __struct_194__ {
	__struct_29__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_71__ __2; // value
};
// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Vector3>
struct __struct_195__ {
	__struct_29__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_72__ __2; // value
};
// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<System.Int32>
struct __struct_196__ {
	__struct_177__ __0; // m_Array
	int32_t __1; // m_Index
	int32_t __2; // value
};
// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<System.Object>
struct __struct_197__ {
	__struct_177__ __0; // m_Array
	int32_t __1; // m_Index
	uintptr_t __2; // value
};
// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.ContactPairHeader>
struct __struct_198__ {
	__struct_177__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_167__ __2; // value
};
// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct __struct_199__ {
	__struct_177__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_168__ __2; // value
};
// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Matrix4x4>
struct __struct_200__ {
	__struct_177__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_50__ __2; // value
};
// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Quaternion>
struct __struct_201__ {
	__struct_177__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_44__ __2; // value
};
// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Tilemaps.TileData>
struct __struct_202__ {
	__struct_177__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_169__ __2; // value
};
// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Vector3Int>
struct __struct_203__ {
	__struct_177__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_71__ __2; // value
};
// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Vector3>
struct __struct_204__ {
	__struct_177__ __0; // m_Array
	int32_t __1; // m_Index
	__struct_72__ __2; // value
};
// UnityEngine.Rendering.BatchCullingContext
struct __struct_216__ {
	__struct_29__ __0; // cullingPlanes
	__struct_29__ __1; // cullingSplits
	__struct_65__ __2; // lodParameters
	__struct_50__ __3; // localToWorldMatrix
	int32_t __4; // viewType
	int32_t __5; // projectionType
	int32_t __6; // cullingFlags
	__struct_64__ __7; // viewID
	uint32_t __8; // cullingLayerMask
	uint64_t __9; // sceneCullingMask
	uint8_t __10; // isOrthographic
	int32_t __11; // receiverPlaneOffset
	int32_t __12; // receiverPlaneCount
};
// UnityEngine.Rendering.BatchCullingOutput
struct __struct_217__ {
	__struct_29__ __0; // drawCommands
};
// UnityEngine.LightBakingOutput
struct __struct_219__ {
	int32_t __0; // probeOcclusionLightIndex
	int32_t __1; // occlusionMaskChannel
	int32_t __2; // lightmapBakeType
	int32_t __3; // mixedLightingMode
	uint8_t __4; // isBaked
};
// UnityEngine.RaycastHit2D
struct __struct_221__ {
	__struct_70__ __0; // m_Centroid
	__struct_70__ __1; // m_Point
	__struct_70__ __2; // m_Normal
	float __3; // m_Distance
	float __4; // m_Fraction
	int32_t __5; // m_Collider
};
const FullName2Signature hybridclr::interpreter::g_fullName2SignatureStub[] = {
	{"System.Span`1<u1>", "s0"},
	{"System.ReadOnlySpan`1<u2>", "s0"},
	{"System.Span`1<u2>", "s0"},
	{"System.Collections.Generic.KeyValuePair`2<u,u>", "s3"},
	{"System.ValueTuple`2<u,u>", "s4"},
	{"UnityEngine.TerrainUtils.TerrainTileCoord", "s5"},
	{"System.Resources.ResourceLocator", "s6"},
	{"System.Collections.Generic.KeyValuePair`2<i4,u>", "s7"},
	{"System.Collections.Generic.KeyValuePair`2<u,i4>", "s6"},
	{"System.Collections.Generic.KeyValuePair`2<u,System.Resources.ResourceLocator>", "s9"},
	{"System.Collections.Generic.KeyValuePair`2<System.ValueTuple`2<u,u>,u>", "s10"},
	{"System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,u>", "s11"},
	{"System.Nullable`1<u>", "s12"},
	{"UnityEngine.BeforeRenderHelper/OrderBlock", "s7"},
	{"UnityEngine.UnitySynchronizationContext/WorkRequest", "s14"},
	{"System.Reflection.CustomAttributeNamedArgument", "s15"},
	{"System.Reflection.CustomAttributeTypedArgument", "s3"},
	{"System.ConsoleKeyInfo", "s17"},
	{"System.Decimal", "s18"},
	{"System.DateTime", "s19"},
	{"System.Guid", "s20"},
	{"System.Index", "s21"},
	{"System.Numerics.Vector`1<u>", "s22"},
	{"System.Range", "s23"},
	{"System.Threading.CancellationTokenRegistration", "s9"},
	{"System.TimeSpan", "s25"},
	{"System.TimeZoneInfo/TransitionTime", "s26"},
	{"System.ValueTuple`3<u,u,u>", "s27"},
	{"System.ValueTuple", "s28"},
	{"Unity.Collections.NativeArray`1<u>", "s29"},
	{"Unity.Jobs.JobHandle", "s30"},
	{"UnityEngine.Animations.AnimationClipPlayable", "s31"},
	{"UnityEngine.Animations.AnimationLayerMixerPlayable", "s31"},
	{"UnityEngine.Animations.AnimationMixerPlayable", "s31"},
	{"UnityEngine.Animations.AnimationMotionXToDeltaPlayable", "s31"},
	{"UnityEngine.Animations.AnimationOffsetPlayable", "s31"},
	{"UnityEngine.Animations.AnimationPosePlayable", "s31"},
	{"UnityEngine.Animations.AnimationRemoveScalePlayable", "s31"},
	{"UnityEngine.Animations.AnimationScriptPlayable", "s31"},
	{"UnityEngine.Animations.AnimatorControllerPlayable", "s31"},
	{"UnityEngine.Audio.AudioClipPlayable", "s31"},
	{"UnityEngine.Audio.AudioMixerPlayable", "s31"},
	{"UnityEngine.BoundsInt", "s42"},
	{"UnityEngine.Bounds", "s43"},
	{"UnityEngine.Color", "s44"},
	{"UnityEngine.Experimental.Playables.CameraPlayable", "s31"},
	{"UnityEngine.Experimental.Playables.MaterialEffectPlayable", "s31"},
	{"UnityEngine.Experimental.Playables.TextureMixerPlayable", "s31"},
	{"UnityEngine.Experimental.Video.VideoClipPlayable", "s31"},
	{"UnityEngine.Hash128", "s49"},
	{"UnityEngine.Matrix4x4", "s50"},
	{"UnityEngine.PhysicsScene2D", "s21"},
	{"UnityEngine.PhysicsScene", "s21"},
	{"UnityEngine.Playables.PlayableHandle", "s53"},
	{"UnityEngine.Playables.PlayableOutputHandle", "s53"},
	{"UnityEngine.Playables.PlayableOutput", "s31"},
	{"UnityEngine.Playables.Playable", "s31"},
	{"UnityEngine.Quaternion", "s44"},
	{"UnityEngine.RectInt", "s58"},
	{"UnityEngine.Rect", "s44"},
	{"UnityEngine.RefreshRate", "s60"},
	{"UnityEngine.Rendering.BatchID", "s61"},
	{"UnityEngine.Rendering.BatchMaterialID", "s61"},
	{"UnityEngine.Rendering.BatchMeshID", "s61"},
	{"UnityEngine.Rendering.BatchPackedCullingViewID", "s64"},
	{"UnityEngine.Rendering.LODParameters", "s65"},
	{"UnityEngine.Rendering.RenderTargetIdentifier", "s66"},
	{"UnityEngine.Rendering.ScriptableRenderContext", "s223"},
	{"UnityEngine.Rendering.ShaderTagId", "s21"},
	{"UnityEngine.Vector2Int", "s5"},
	{"UnityEngine.Vector2", "s70"},
	{"UnityEngine.Vector3Int", "s71"},
	{"UnityEngine.Vector3", "s72"},
	{"UnityEngine.Vector4", "s44"},
	{"UnityEngine.XR.Bone", "s74"},
	{"UnityEngine.XR.Eyes", "s74"},
	{"UnityEngine.XR.Hand", "s74"},
	{"UnityEngine.XR.InputDevice", "s77"},
	{"UnityEngine.XR.InputFeatureUsage", "s78"},
	{"UnityEngine.XR.MeshGenerationResult", "s79"},
	{"UnityEngine.XR.MeshId", "s49"},
	{"System.ReadOnlySpan`1<u>", "s0"},
	{"System.ModuleHandle", "s223"},
	{"System.Numerics.Vector`1<u2>", "s22"},
	{"System.Numerics.Vector`1<u8>", "s22"},
	{"System.Span`1<i4>", "s0"},
	{"System.Span`1<u>", "s0"},
	{"System.Span`1<u4>", "s0"},
	{"System.Span`1<UnityEngine.jvalue>", "s0"},
	{"System.Runtime.InteropServices.GCHandle", "s223"},
	{"System.RuntimeFieldHandle", "s223"},
	{"System.Threading.CancellationToken", "s91"},
	{"System.Threading.Tasks.VoidTaskResult", "s28"},
	{"System.ValueTuple`2<i4,i4>", "s93"},
	{"System.ValueTuple`3<u,i4,i4>", "s94"},
	{"Unity.Collections.NativeArray`1<i4>", "s29"},
	{"Unity.Collections.NativeArray`1<UnityEngine.ContactPairHeader>", "s29"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>", "s29"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Matrix4x4>", "s29"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Quaternion>", "s29"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Tilemaps.TileData>", "s29"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>", "s29"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Vector3>", "s29"},
	{"UnityEngine.AssemblyVersion", "s103"},
	{"UnityEngine.Ray", "s43"},
	{"UnityEngine.SendMouseEvents/HitInfo", "s3"},
	{"System.Collections.DictionaryEntry", "s3"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<i4,u>", "s107"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<u,i4>", "s108"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<u,u>", "s109"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<u,System.Resources.ResourceLocator>", "s110"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<System.ValueTuple`2<u,u>,u>", "s111"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,u>", "s112"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<i4,u>", "s113"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<u,i4>", "s114"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<u,u>", "s114"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<u,System.Resources.ResourceLocator>", "s114"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.ValueTuple`2<u,u>,u>", "s117"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,u>", "s118"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<i4,u>", "s114"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<u,i4>", "s113"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<u,u>", "s114"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<u,System.Resources.ResourceLocator>", "s122"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.ValueTuple`2<u,u>,u>", "s114"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,u>", "s114"},
	{"System.Collections.Generic.List`1/Enumerator<i4>", "s113"},
	{"System.Collections.Generic.List`1/Enumerator<u>", "s114"},
	{"System.Collections.Generic.List`1/Enumerator<UnityEngine.BeforeRenderHelper/OrderBlock>", "s127"},
	{"System.Collections.Generic.List`1/Enumerator<UnityEngine.UnitySynchronizationContext/WorkRequest>", "s128"},
	{"System.IO.DisableMediaInsertionPrompt", "s129"},
	{"System.ReadOnlySpan`1<u1>", "s0"},
	{"UnityEngine.ContactFilter2D", "s131"},
	{"System.Nullable`1<i4>", "s132"},
	{"System.Nullable`1<u1>", "s133"},
	{"System.Nullable`1<System.DateTime>", "s134"},
	{"System.Nullable`1<System.Decimal>", "s135"},
	{"System.Runtime.Serialization.StreamingContext", "s6"},
	{"System.ParameterizedStrings/FormatParam", "s7"},
	{"System.ReadOnlySpan`1<u4>", "s0"},
	{"System.ReadOnlySpan`1<i4>", "s0"},
	{"System.ReadOnlySpan`1<UnityEngine.jvalue>", "s0"},
	{"System.RuntimeTypeHandle", "s223"},
	{"System.RuntimeMethodHandle", "s223"},
	{"System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<u1>", "s143"},
	{"System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<u>", "s143"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<u1>", "s145"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<i4>", "s145"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<u>", "s145"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.VoidTaskResult>", "s145"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<u1>", "s149"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<i4>", "s149"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<u>", "s149"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>", "s149"},
	{"System.Runtime.CompilerServices.TaskAwaiter`1<u1>", "s91"},
	{"System.Runtime.CompilerServices.TaskAwaiter`1<i4>", "s91"},
	{"System.Runtime.CompilerServices.TaskAwaiter`1<u>", "s91"},
	{"System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>", "s91"},
	{"System.Runtime.Remoting.Messaging.LogicalCallContext/Reader", "s91"},
	{"System.Runtime.Serialization.SerializationEntry", "s14"},
	{"System.Threading.LockHolder", "s91"},
	{"System.Threading.SparselyPopulatedArrayAddInfo`1<u>", "s6"},
	{"UnityEngine.TransformDispatchData", "s161"},
	{"UnityEngine.TypeDispatchData", "s162"},
	{"UnityEngine.VFX.VFXOutputEventArgs", "s7"},
	{"UnityEngine.XR.XRNodeState", "s164"},
	{"Unity.Collections.NativeArray`1<UnityEngine.ModifiableContactPair>", "s29"},
	{"Unity.Profiling.DebugScreenCapture", "s166"},
	{"UnityEngine.ContactPairHeader", "s167"},
	{"UnityEngine.Experimental.GlobalIllumination.LightDataGI", "s168"},
	{"UnityEngine.Tilemaps.TileData", "s169"},
	{"Unity.Collections.NativeArray`1<u1>", "s29"},
	{"UnityEngine.LayerMask", "s21"},
	{"UnityEngine.CullingGroupEvent", "s172"},
	{"UnityEngine.SceneManagement.Scene", "s21"},
	{"UnityEngine.Color32", "s174"},
	{"UnityEngine.ParticleSystem/EmitParams", "s175"},
	{"UnityEngine.ParticleSystem/Particle", "s176"},
	{"Unity.Collections.NativeArray`1/ReadOnly<UnityEngine.ContactPairHeader>", "s177"},
	{"UnityEngine.Playables.FrameData", "s178"},
	{"UnityEngine.RenderTextureDescriptor", "s179"},
	{"UnityEngine.AnimatorStateInfo", "s180"},
	{"UnityEngine.Windows.Speech.PhraseRecognizedEventArgs", "s181"},
	{"UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult", "s182"},
	{"UnityEngine.Windows.WebCam.VideoCapture/VideoCaptureResult", "s182"},
	{"System.Collections.Generic.KeyValuePair`2<i4,UnityEngine.Vector2>", "s184"},
	{"Unity.Collections.LowLevel.Unsafe.BurstLike/SharedStatic`1<i>", "s185"},
	{"Unity.Collections.LowLevel.Unsafe.BurstLike/SharedStatic`1<u>", "s185"},
	{"Unity.Collections.NativeArray`1/Enumerator<i4>", "s187"},
	{"Unity.Collections.NativeArray`1/Enumerator<u>", "s188"},
	{"Unity.Collections.NativeArray`1/Enumerator<UnityEngine.ContactPairHeader>", "s189"},
	{"Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Experimental.GlobalIllumination.LightDataGI>", "s190"},
	{"Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Matrix4x4>", "s191"},
	{"Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Quaternion>", "s192"},
	{"Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Tilemaps.TileData>", "s193"},
	{"Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Vector3Int>", "s194"},
	{"Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Vector3>", "s195"},
	{"Unity.Collections.NativeArray`1/ReadOnly/Enumerator<i4>", "s196"},
	{"Unity.Collections.NativeArray`1/ReadOnly/Enumerator<u>", "s197"},
	{"Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.ContactPairHeader>", "s198"},
	{"Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Experimental.GlobalIllumination.LightDataGI>", "s199"},
	{"Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Matrix4x4>", "s200"},
	{"Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Quaternion>", "s201"},
	{"Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Tilemaps.TileData>", "s202"},
	{"Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Vector3Int>", "s203"},
	{"Unity.Collections.NativeArray`1/ReadOnly/Enumerator<UnityEngine.Vector3>", "s204"},
	{"Unity.Collections.NativeArray`1/ReadOnly<i4>", "s177"},
	{"Unity.Collections.NativeArray`1/ReadOnly<u>", "s177"},
	{"Unity.Collections.NativeArray`1/ReadOnly<UnityEngine.Experimental.GlobalIllumination.LightDataGI>", "s177"},
	{"Unity.Collections.NativeArray`1/ReadOnly<UnityEngine.Matrix4x4>", "s177"},
	{"Unity.Collections.NativeArray`1/ReadOnly<UnityEngine.Quaternion>", "s177"},
	{"Unity.Collections.NativeArray`1/ReadOnly<UnityEngine.Tilemaps.TileData>", "s177"},
	{"Unity.Collections.NativeArray`1/ReadOnly<UnityEngine.Vector3Int>", "s177"},
	{"Unity.Collections.NativeArray`1/ReadOnly<UnityEngine.Vector3>", "s177"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Plane>", "s29"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchCullingOutputDrawCommands>", "s29"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Rendering.CullingSplit>", "s29"},
	{"UnityEngine.Rendering.BatchCullingContext", "s216"},
	{"UnityEngine.Rendering.BatchCullingOutput", "s217"},
	{"UnityEngine.Experimental.GlobalIllumination.LinearColor", "s44"},
	{"UnityEngine.LightBakingOutput", "s219"},
	{"UnityEngine.Playables.PlayableGraph", "s53"},
	{"UnityEngine.RaycastHit2D", "s221"},
	{"UnityEngine.Yoga.YogaSize", "s70"},
	{ nullptr, nullptr},
};

static void __M2N_i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i1i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1iis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i1iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i1uiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i2i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2iis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i2iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i2uiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i2uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i2uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_i4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4iis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4s0i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_0__ __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4s0s0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_0__ __arg0, __struct_0__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_0__ __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4s0u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_0__ __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4s0u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_0__ __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4s19s19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_19__ __arg0, __struct_19__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4s43u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_43__ __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4s43ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_43__ __arg0, uintptr_t __arg1, float __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4s43ur4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_43__ __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4s43ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_43__ __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4s70s70s131u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_70__ __arg0, __struct_70__ __arg1, __struct_131__ __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_131__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4s70s70s131ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_70__ __arg0, __struct_70__ __arg1, __struct_131__ __arg2, uintptr_t __arg3, float __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_131__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4s72s72u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4s72s72ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, uintptr_t __arg2, float __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4s72s72ur4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, uintptr_t __arg2, float __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4s72s72ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, uintptr_t __arg2, float __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4u2u2u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, uint16_t __arg2, uint16_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4ui1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4ui2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4ui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4ui4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4i4s14u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, __struct_14__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4i4s7u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, __struct_7__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4ui4i4u8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uint64_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4ui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4ui4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4ui4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4ui4ui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, float __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4ur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us103uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_103__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_103__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4us12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_12__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_12__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us12s12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_12__ __arg1, __struct_12__ __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_12__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_12__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4us14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us14i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_14__ __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4us14s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_14__ __arg1, __struct_14__ __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4us15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us25u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_25__ __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4us27(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_27__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_27__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_28__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_28__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us43r4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_43__ __arg1, float __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4us49(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_49__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_49__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us5(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us60(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_60__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_60__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us70s70r4s131u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_70__ __arg1, __struct_70__ __arg2, float __arg3, __struct_131__ __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_131__>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4us72s72ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_72__ __arg1, __struct_72__ __arg2, uintptr_t __arg3, float __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i4us7i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4us7s7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4us93(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_93__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_93__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us94(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_94__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_94__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uu2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uui4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uui4i4s14u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, __struct_14__ __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uui4i4s7u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, __struct_7__ __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uui4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uui4i4u8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uint64_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uui4i4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uui4i4ui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_i4uui4i4ui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i4uui4i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uui4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uui4ui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uus12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_12__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_12__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus14i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_14__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_4__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus5i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_5__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus6i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus7i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_7__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uuu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uuu1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uuu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uuui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i8i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8iis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8s0i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(__struct_0__ __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8ui8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8ui8i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8ui8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8uiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ii4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ii4ii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(int32_t __arg0, intptr_t __arg1, intptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ii8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_iii4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iiii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, intptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iiis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iiiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iiuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iiuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_is223(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(__struct_223__ __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_iu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_iu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_iu1u1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_iui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iui4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, intptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iui4i4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_iuii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, intptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iuu2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_iuui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_r4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4iis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(__struct_72__ __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4uiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4ur4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4uur4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, float __arg3, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_r4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_r8i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8iis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8uiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8ur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8ur8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s0s0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_0__ (*NativeMethod)(__struct_0__ __arg0, const MethodInfo* method);
    *(__struct_0__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_0__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_0__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s0ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_0__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_0__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s0ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_0__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(__struct_0__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s0us23(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_0__ (*NativeMethod)(uintptr_t __arg0, __struct_23__ __arg1, const MethodInfo* method);
    *(__struct_0__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_23__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s107u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_107__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_107__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s108u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_108__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_108__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s109u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_109__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_109__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s10u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_10__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_10__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s110u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_110__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_110__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s111u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_111__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_111__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s112u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_112__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_112__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s113u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_113__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_113__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s114u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_114__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_114__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s117u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_117__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_117__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s118u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_118__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_118__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s11u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_11__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_11__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s122u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_122__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_122__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s127u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_127__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_127__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s128u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_128__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_128__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s129(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_129__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_129__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s12u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_12__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_12__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s132u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_132__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_132__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s133u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_133__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_133__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s134u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_134__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_134__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s135u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_135__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_135__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s143(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_143__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_143__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s145u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_145__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_145__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s149uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_149__ (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(__struct_149__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s14u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s15ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s167u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_167__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_167__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s167ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_167__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_167__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s168u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_168__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_168__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s168ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_168__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_168__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s169u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_169__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_169__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s169ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_169__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_169__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s17(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_17__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_17__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s177u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_177__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_177__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s179u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_179__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_179__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s17u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_17__ (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(__struct_17__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s17uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_17__ (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(__struct_17__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s184u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_184__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_184__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s185u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_185__ (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(__struct_185__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s187u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_187__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_187__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s188u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_188__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_188__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s189u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_189__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_189__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18s18i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(__struct_18__ __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s18u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s18uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s190u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_190__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_190__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s191u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_191__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_191__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s192u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_192__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_192__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s193u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_193__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_193__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s194u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_194__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_194__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s195u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_195__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_195__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s196u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_196__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_196__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s197u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_197__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_197__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s198u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_198__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_198__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s199u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_199__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_199__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s19i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s19s19i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(__struct_19__ __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s19s19s25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(__struct_19__ __arg0, __struct_25__ __arg1, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s19u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s19ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s19ui4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_s19ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s19ur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s19uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_20__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_20__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s200u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_200__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_200__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s201u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_201__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_201__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s202u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_202__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_202__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s203u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_203__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_203__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s204u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_204__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_204__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s20s0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_20__ (*NativeMethod)(__struct_0__ __arg0, const MethodInfo* method);
    *(__struct_20__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s20u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_20__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_20__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s21(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_21__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_21__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s219u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_219__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_219__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s21i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_21__ (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(__struct_21__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s21u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_21__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_21__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s22(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_22__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_22__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s221s70s70(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_221__ (*NativeMethod)(__struct_70__ __arg0, __struct_70__ __arg1, const MethodInfo* method);
    *(__struct_221__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s221s70s70r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_221__ (*NativeMethod)(__struct_70__ __arg0, __struct_70__ __arg1, float __arg2, const MethodInfo* method);
    *(__struct_221__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s221s70s70r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_221__ (*NativeMethod)(__struct_70__ __arg0, __struct_70__ __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(__struct_221__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_s221s70s70r4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_221__ (*NativeMethod)(__struct_70__ __arg0, __struct_70__ __arg1, float __arg2, int32_t __arg3, float __arg4, const MethodInfo* method);
    *(__struct_221__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_s221s70s70r4i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_221__ (*NativeMethod)(__struct_70__ __arg0, __struct_70__ __arg1, float __arg2, int32_t __arg3, float __arg4, float __arg5, const MethodInfo* method);
    *(__struct_221__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_s221us70s70r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_221__ (*NativeMethod)(uintptr_t __arg0, __struct_70__ __arg1, __struct_70__ __arg2, float __arg3, int32_t __arg4, const MethodInfo* method);
    *(__struct_221__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_s221us70s70r4s131(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_221__ (*NativeMethod)(uintptr_t __arg0, __struct_70__ __arg1, __struct_70__ __arg2, float __arg3, __struct_131__ __arg4, const MethodInfo* method);
    *(__struct_221__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_131__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_s223i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_223__ (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(__struct_223__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s223u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_223__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_223__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s223ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_223__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_223__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s22s22(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_22__ (*NativeMethod)(__struct_22__ __arg0, const MethodInfo* method);
    *(__struct_22__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_22__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s22s22s22(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_22__ (*NativeMethod)(__struct_22__ __arg0, __struct_22__ __arg1, const MethodInfo* method);
    *(__struct_22__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_22__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_22__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s22u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_22__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_22__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s25i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s25r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s25s19s19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(__struct_19__ __arg0, __struct_19__ __arg1, const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s25s25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(__struct_25__ __arg0, const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s25s25s25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(__struct_25__ __arg0, __struct_25__ __arg1, const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s25u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s25us19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s25us25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s25uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_25__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_25__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s26s19i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_26__ (*NativeMethod)(__struct_19__ __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(__struct_26__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s26s19i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_26__ (*NativeMethod)(__struct_19__ __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(__struct_26__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_s26u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_26__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_26__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s28u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_28__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_28__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s28uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_28__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_28__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s29ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_29__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(__struct_29__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s30uus216s217i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_30__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_216__ __arg2, __struct_217__ __arg3, intptr_t __arg4, const MethodInfo* method);
    *(__struct_30__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_216__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_217__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_s31(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_31__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_31__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s31us53u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_31__ (*NativeMethod)(uintptr_t __arg0, __struct_53__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(__struct_31__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s3u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_3__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_3__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s3ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_3__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_3__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s42u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_42__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_42__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s43u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_43__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_43__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s43us72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_43__ (*NativeMethod)(uintptr_t __arg0, __struct_72__ __arg1, const MethodInfo* method);
    *(__struct_43__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s43us72i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_43__ (*NativeMethod)(uintptr_t __arg0, __struct_72__ __arg1, int32_t __arg2, const MethodInfo* method);
    *(__struct_43__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s44(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_44__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_44__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s44r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_44__ (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(__struct_44__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s44s44(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_44__ (*NativeMethod)(__struct_44__ __arg0, const MethodInfo* method);
    *(__struct_44__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s44s44r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_44__ (*NativeMethod)(__struct_44__ __arg0, float __arg1, const MethodInfo* method);
    *(__struct_44__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s44u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_44__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_44__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s44ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_44__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_44__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s49u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_49__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_49__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_4__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_4__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s50(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_50__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_50__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s50s72s44s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_50__ (*NativeMethod)(__struct_72__ __arg0, __struct_44__ __arg1, __struct_72__ __arg2, const MethodInfo* method);
    *(__struct_50__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s50u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_50__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_50__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s50ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_50__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_50__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s53(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_53__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_53__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s53u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_53__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_53__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s58u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_58__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_58__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s5u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_5__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_5__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s6u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_6__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_6__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s6uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_6__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_6__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s70(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_70__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_70__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s70s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_70__ (*NativeMethod)(__struct_72__ __arg0, const MethodInfo* method);
    *(__struct_70__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s70u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_70__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_70__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s70ur4i4r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_70__ (*NativeMethod)(uintptr_t __arg0, float __arg1, int32_t __arg2, float __arg3, int32_t __arg4, const MethodInfo* method);
    *(__struct_70__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_s70uur4i4r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_70__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, float __arg4, int32_t __arg5, const MethodInfo* method);
    *(__struct_70__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_s71u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_71__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_71__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s71ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_71__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_71__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_72__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_72__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s72s70(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_72__ (*NativeMethod)(__struct_70__ __arg0, const MethodInfo* method);
    *(__struct_72__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s72s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_72__ (*NativeMethod)(__struct_72__ __arg0, const MethodInfo* method);
    *(__struct_72__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s72s72r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_72__ (*NativeMethod)(__struct_72__ __arg0, float __arg1, const MethodInfo* method);
    *(__struct_72__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s72s72s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_72__ (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, const MethodInfo* method);
    *(__struct_72__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s72u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_72__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_72__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s72ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_72__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_72__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s7i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_7__ (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(__struct_7__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s7u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_7__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_7__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s7ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_7__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_7__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_91__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_91__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s91u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_91__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_91__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s93ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_93__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_93__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s9u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_9__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_9__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s9uuuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_9__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(__struct_9__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_typedbyrefuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef Il2CppTypedRef (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(Il2CppTypedRef*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u1i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i4s0us0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i8s0us0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1ii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1iis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1iu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1r4s0us0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1r8s0us0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1s0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_0__ __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1s0i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_0__ __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s0i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_0__ __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1s0s0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_0__ __arg0, __struct_0__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s0s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_0__ __arg0, __struct_0__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_0__ __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s0u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_0__ __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s103s103(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_103__ __arg0, __struct_103__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_103__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_103__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s15s15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_15__ __arg0, __struct_15__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1s18s0us0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_18__ __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1s18s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_18__ __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s19s19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_19__ __arg0, __struct_19__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s20s20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_20__ __arg0, __struct_20__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s223s223(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_223__ __arg0, __struct_223__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s22s22(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_22__ __arg0, __struct_22__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_22__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_22__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s25s25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_25__ __arg0, __struct_25__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s26s26(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_26__ __arg0, __struct_26__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_26__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_26__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_3__ __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1s3s3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_3__ __arg0, __struct_3__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s43(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_43__ __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1s43r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_43__ __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s43r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_43__ __arg0, float __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s43r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_43__ __arg0, float __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1s43u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_43__ __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s43ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_43__ __arg0, uintptr_t __arg1, float __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s43ur4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_43__ __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1s43ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_43__ __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1s49s49(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_49__ __arg0, __struct_49__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_49__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_49__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s53s53(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_53__ __arg0, __struct_53__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s70s70(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_70__ __arg0, __struct_70__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s71s71(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_71__ __arg0, __struct_71__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_71__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_71__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s72s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s72s72r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, float __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s72s72r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1s72s72r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1s72s72u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s72s72ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, uintptr_t __arg2, float __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1s72s72ur4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, uintptr_t __arg2, float __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1s72s72ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, uintptr_t __arg2, float __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_u1s91s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_91__ __arg0, __struct_91__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u4s0us0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u8s0us0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ui1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ui2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ui4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, intptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_91__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1ui4uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us0i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1us0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us0us0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1us0us0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1us10(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us11(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_11__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_11__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us12s12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_12__ __arg1, __struct_12__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_12__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_12__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us14s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_14__ __arg1, __struct_14__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us17(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_17__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_17__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us20i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us20u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us20ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1us21(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_21__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_21__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us22(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_22__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_22__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us223(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_223__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us23(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_23__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_23__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us25s25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_25__ __arg1, __struct_25__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us26(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_26__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_26__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us27(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_27__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_27__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_28__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_28__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us29(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_29__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_29__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us30(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_30__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_30__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us31(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_31__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_31__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us42(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_42__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_42__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us43(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_43__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us44(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_44__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us49(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_49__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_49__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us4s4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_4__ __arg1, __struct_4__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_4__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us4uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_4__ __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1us5(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us50(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_50__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us53(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_53__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us58(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_58__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_58__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us5s5(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, __struct_5__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us5u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us5uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1us6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us60(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_60__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_60__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us61(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_61__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_61__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_64__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_64__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us65(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_65__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_65__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_66__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us6s6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_6__ __arg1, __struct_6__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us70(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_70__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us71(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_71__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_71__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us71uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_71__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_71__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1us72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_72__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us72s72r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_72__ __arg1, __struct_72__ __arg2, float __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_u1us72s72ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_72__ __arg1, __struct_72__ __arg2, uintptr_t __arg3, float __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_u1us74(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_74__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_74__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us77(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_77__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_77__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us78(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_78__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_78__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us79(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_79__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_79__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us7s7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us9(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_9__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_9__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_91__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us93(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_93__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_93__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us94(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_94__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_94__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uu2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uu2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uu4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1uu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uui4uu1u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uint8_t __arg4, uint8_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_u1uus6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uus6u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uuu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uuui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_u1uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uuuu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u2i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2iis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u2iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u2uiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u2uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2uu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u8ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_ui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_ui4s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ui4s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, __struct_91__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_ui4s94u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, __struct_94__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_94__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ui8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_ui8i8u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_ui8s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int64_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uiis0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uiiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ur4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(float __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ur8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(double __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_us0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_0__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_12__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_12__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us132(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_132__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_132__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us133(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_133__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_133__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us134(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_134__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_134__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us135(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_135__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_135__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us18s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_18__ __arg0, __struct_0__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_us223(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_223__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us223s223(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_223__ __arg0, __struct_223__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_us43(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_43__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us43r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_43__ __arg0, float __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_us43r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_43__ __arg0, float __arg1, int32_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_us43r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_43__ __arg0, float __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_43__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_us70s70uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_70__ __arg0, __struct_70__ __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_us72s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_us72s72r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, float __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_us72s72r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_us72s72r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_us91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_91__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us91s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_91__ __arg0, __struct_91__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_uu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_uu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_uu4s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint32_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_uu8s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint64_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uui1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uui2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uui4s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_91__ __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui4ui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uui4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uui4uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uui4uuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_uui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uui8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uus0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uus20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uus23(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_23__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_23__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uus25uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_25__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uus4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uus5(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uus6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uuu1i4i4i4ui4i4i4i4u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, uint8_t __arg10, uintptr_t __arg11, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[8]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[9]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[10]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[11]), method);
}


static void __M2N_uuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uuu2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuu2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uuu4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, uint32_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuui4i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuui4ui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_uuui4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuui4uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_uuui4uuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, uintptr_t __arg8, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_uuus6u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuus25u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_25__ __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuus6u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_6__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuus91i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_91__ __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_v(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_vi(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vi4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vi4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi4i4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi4uui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi4uuu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vii4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(intptr_t __arg0, int32_t __arg1, intptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_viui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vs223(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_223__ __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vs223u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_223__ __arg0, uintptr_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vs25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_25__ __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vs29i4s29i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_29__ __arg0, int32_t __arg1, __struct_29__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_29__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_29__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vs29s29i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_29__ __arg0, __struct_29__ __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_29__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_29__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vs44uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_44__ __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vs50(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_50__ __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vs72s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vs72s72s44(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, __struct_44__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vs72s72s44r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, __struct_44__ __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vs72s72s44r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_72__ __arg0, __struct_72__ __arg1, __struct_44__ __arg2, float __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vtypedbyrefu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(Il2CppTypedRef __arg0, uintptr_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<Il2CppTypedRef>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vu1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vu1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vui2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vui4i2i2u1u1u1u1u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int16_t __arg2, int16_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, uint8_t __arg7, uint8_t __arg8, uint8_t __arg9, uint8_t __arg10, uint8_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[8]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[9]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[10]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[11]), method);
}


static void __M2N_vui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vui4i4i4i4i4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, intptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vui4i4i4i4i4iu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, intptr_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vui4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vui4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vui4i4i4i4u1i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, intptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vui4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vui4i4i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4i4u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4i4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vui4i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4r4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, float __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4r4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, float __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4s0i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_0__ __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_14__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_15__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s167(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_167__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_167__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s168(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_168__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_168__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s169(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_169__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_169__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s25u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_25__ __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4s3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_3__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s44(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_44__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s50(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_50__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_7__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s70(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_70__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s71(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_71__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_71__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_72__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4uuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vui8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui8ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, uintptr_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui8ui8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, uintptr_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuiiiiiii4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, intptr_t __arg2, intptr_t __arg3, intptr_t __arg4, intptr_t __arg5, intptr_t __arg6, int32_t __arg7, uintptr_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vuiiui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, intptr_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuiu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vur4i4r4i4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, int32_t __arg2, float __arg3, int32_t __arg4, intptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vur4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vur4r4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, intptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vur4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vur4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, float __arg3, float __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vur4r4r4r4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, float __arg3, float __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus0i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus0s94(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, __struct_94__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_94__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus10(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus11(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_11__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_11__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus161(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_161__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_161__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus162(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_162__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_162__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus164(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_164__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_164__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus17(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_17__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_17__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus172(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_172__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_172__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus174(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_174__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_174__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus175i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_175__ __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_175__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus176(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_176__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_176__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus179(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_179__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_179__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus181(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_181__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_181__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus182(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_182__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_182__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus182u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_182__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_182__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus19s19s25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_19__ __arg1, __struct_19__ __arg2, __struct_25__ __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus20u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus20ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus21(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_21__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_21__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus21i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_21__ __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_21__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus21s177(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_21__ __arg1, __struct_177__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_21__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_177__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus21s21(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_21__ __arg1, __struct_21__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_21__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_21__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus21s29(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_21__ __arg1, __struct_29__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_21__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_29__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus223(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_223__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus223u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_223__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus223uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_223__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_223__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_28__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_28__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus29(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_29__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_29__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus31(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_31__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_31__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus31s178(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_31__ __arg1, __struct_178__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_31__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_178__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus31s178u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_31__ __arg1, __struct_178__ __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_31__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_178__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus31uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_31__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_31__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus44(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_44__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus44s44s44s44(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_44__ __arg1, __struct_44__ __arg2, __struct_44__ __arg3, __struct_44__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vus44uu1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_44__ __arg1, uintptr_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_44__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vus4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_4__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_4__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus5(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus50(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_50__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus53(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_53__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus5u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus70s70(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_70__ __arg1, __struct_70__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_70__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus71(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_71__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_71__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus71u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_71__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_71__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus71uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_71__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_71__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_72__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus72s72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_72__ __arg1, __struct_72__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus72s72r4r4s174(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_72__ __arg1, __struct_72__ __arg2, float __arg3, float __arg4, __struct_174__ __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_72__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<__struct_174__>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vus77(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_77__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_77__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus79(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_79__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_79__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus9(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_9__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_9__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus91i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_91__ __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vutypedbyrefu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, Il2CppTypedRef __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<Il2CppTypedRef>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu1i4i4s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, __struct_91__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuu1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu1s28i4s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, __struct_28__ __arg2, int32_t __arg3, __struct_91__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_28__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu1u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuu1u1i4s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, __struct_91__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuu1u1u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, uint32_t __arg3, uint32_t __arg4, uint32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuu1u1uuuui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, int32_t __arg7, int32_t __arg8, uintptr_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[8]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[9]), method);
}


static void __M2N_vuu1ui4s91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, int32_t __arg3, __struct_91__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1uu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuu2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu2i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vuu2i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuu4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, uint32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuu8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuui4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuui4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuui4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuui4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuui4s31(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, __struct_31__ __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_31__>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuui8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuui8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuui8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuui8ui8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, uintptr_t __arg3, int64_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuiii4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, intptr_t __arg3, int32_t __arg4, int32_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuiiui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, intptr_t __arg3, uintptr_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuur4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, double __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuus180i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_180__ __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_180__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuus180i4s31(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_180__ __arg2, int32_t __arg3, __struct_31__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_180__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_31__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuus19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_19__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuus29(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_29__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_29__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuus3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_3__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuus58u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_58__ __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_58__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuus6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuus91(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_91__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuu1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuu1s166(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, __struct_166__ __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_166__>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuus25s25(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_25__ __arg3, __struct_25__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_25__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuus58u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_58__ __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_58__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuus6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_6__ __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuus91i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_91__ __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuuu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuu1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuuu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuuus91i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, __struct_91__ __arg4, int32_t __arg5, int32_t __arg6, uintptr_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_91__>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuuui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, int32_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuuuuu1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uint8_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vuuuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuuuuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, uintptr_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[8]), method);
}


const Managed2NativeMethodInfo hybridclr::interpreter::g_managed2nativeStub[] = 
{

	{"i", __M2N_i},
	{"i1", __M2N_i1},
	{"i1i", __M2N_i1i},
	{"i1i2", __M2N_i1i2},
	{"i1i4", __M2N_i1i4},
	{"i1i8", __M2N_i1i8},
	{"i1iis0", __M2N_i1iis0},
	{"i1iiu", __M2N_i1iiu},
	{"i1r4", __M2N_i1r4},
	{"i1r8", __M2N_i1r8},
	{"i1s18", __M2N_i1s18},
	{"i1u", __M2N_i1u},
	{"i1u1", __M2N_i1u1},
	{"i1u2", __M2N_i1u2},
	{"i1u4", __M2N_i1u4},
	{"i1u8", __M2N_i1u8},
	{"i1ui4u", __M2N_i1ui4u},
	{"i1uiu", __M2N_i1uiu},
	{"i1uu", __M2N_i1uu},
	{"i1uuu", __M2N_i1uuu},
	{"i2", __M2N_i2},
	{"i2i", __M2N_i2i},
	{"i2i1", __M2N_i2i1},
	{"i2i4", __M2N_i2i4},
	{"i2i8", __M2N_i2i8},
	{"i2iis0", __M2N_i2iis0},
	{"i2iiu", __M2N_i2iiu},
	{"i2r4", __M2N_i2r4},
	{"i2r8", __M2N_i2r8},
	{"i2s18", __M2N_i2s18},
	{"i2u", __M2N_i2u},
	{"i2u1", __M2N_i2u1},
	{"i2u2", __M2N_i2u2},
	{"i2u4", __M2N_i2u4},
	{"i2u8", __M2N_i2u8},
	{"i2ui4u", __M2N_i2ui4u},
	{"i2uiu", __M2N_i2uiu},
	{"i2uu", __M2N_i2uu},
	{"i2uuu", __M2N_i2uuu},
	{"i4", __M2N_i4},
	{"i4i", __M2N_i4i},
	{"i4i2", __M2N_i4i2},
	{"i4i4", __M2N_i4i4},
	{"i4i4i4", __M2N_i4i4i4},
	{"i4i4i4i4", __M2N_i4i4i4i4},
	{"i4i4i4i4i4", __M2N_i4i4i4i4i4},
	{"i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4},
	{"i4i4i4u", __M2N_i4i4i4u},
	{"i4i4u1", __M2N_i4i4u1},
	{"i4i8", __M2N_i4i8},
	{"i4iis0", __M2N_i4iis0},
	{"i4iiu", __M2N_i4iiu},
	{"i4r4", __M2N_i4r4},
	{"i4r8", __M2N_i4r8},
	{"i4s0i4i4u", __M2N_i4s0i4i4u},
	{"i4s0s0", __M2N_i4s0s0},
	{"i4s0u", __M2N_i4s0u},
	{"i4s0u2", __M2N_i4s0u2},
	{"i4s0u8", __M2N_i4s0u8},
	{"i4s18", __M2N_i4s18},
	{"i4s19s19", __M2N_i4s19s19},
	{"i4s43u", __M2N_i4s43u},
	{"i4s43ur4", __M2N_i4s43ur4},
	{"i4s43ur4i4", __M2N_i4s43ur4i4},
	{"i4s43ur4i4i4", __M2N_i4s43ur4i4i4},
	{"i4s70s70s131u", __M2N_i4s70s70s131u},
	{"i4s70s70s131ur4", __M2N_i4s70s70s131ur4},
	{"i4s72s72u", __M2N_i4s72s72u},
	{"i4s72s72ur4", __M2N_i4s72s72ur4},
	{"i4s72s72ur4i4", __M2N_i4s72s72ur4i4},
	{"i4s72s72ur4i4i4", __M2N_i4s72s72ur4i4i4},
	{"i4u", __M2N_i4u},
	{"i4u1", __M2N_i4u1},
	{"i4u2", __M2N_i4u2},
	{"i4u2i4", __M2N_i4u2i4},
	{"i4u2u2", __M2N_i4u2u2},
	{"i4u2u2u2u2", __M2N_i4u2u2u2u2},
	{"i4u4", __M2N_i4u4},
	{"i4u4i4", __M2N_i4u4i4},
	{"i4u8", __M2N_i4u8},
	{"i4ui1", __M2N_i4ui1},
	{"i4ui2", __M2N_i4ui2},
	{"i4ui4", __M2N_i4ui4},
	{"i4ui4i4", __M2N_i4ui4i4},
	{"i4ui4i4i4", __M2N_i4ui4i4i4},
	{"i4ui4i4i4u", __M2N_i4ui4i4i4u},
	{"i4ui4i4s14u", __M2N_i4ui4i4s14u},
	{"i4ui4i4s7u", __M2N_i4ui4i4s7u},
	{"i4ui4i4u", __M2N_i4ui4i4u},
	{"i4ui4i4u8u", __M2N_i4ui4i4u8u},
	{"i4ui4i4uu", __M2N_i4ui4i4uu},
	{"i4ui4u", __M2N_i4ui4u},
	{"i4ui4u1", __M2N_i4ui4u1},
	{"i4ui4u8", __M2N_i4ui4u8},
	{"i4ui4ui4", __M2N_i4ui4ui4},
	{"i4ui4ui4i4i4", __M2N_i4ui4ui4i4i4},
	{"i4ui8", __M2N_i4ui8},
	{"i4uiu", __M2N_i4uiu},
	{"i4ur4", __M2N_i4ur4},
	{"i4ur8", __M2N_i4ur8},
	{"i4us0", __M2N_i4us0},
	{"i4us103uu", __M2N_i4us103uu},
	{"i4us12", __M2N_i4us12},
	{"i4us12s12", __M2N_i4us12s12},
	{"i4us14", __M2N_i4us14},
	{"i4us14i4i4", __M2N_i4us14i4i4},
	{"i4us14s14", __M2N_i4us14s14},
	{"i4us15", __M2N_i4us15},
	{"i4us18", __M2N_i4us18},
	{"i4us19", __M2N_i4us19},
	{"i4us20", __M2N_i4us20},
	{"i4us25", __M2N_i4us25},
	{"i4us25u1", __M2N_i4us25u1},
	{"i4us27", __M2N_i4us27},
	{"i4us28", __M2N_i4us28},
	{"i4us3", __M2N_i4us3},
	{"i4us4", __M2N_i4us4},
	{"i4us43r4ui4", __M2N_i4us43r4ui4},
	{"i4us49", __M2N_i4us49},
	{"i4us5", __M2N_i4us5},
	{"i4us6", __M2N_i4us6},
	{"i4us60", __M2N_i4us60},
	{"i4us7", __M2N_i4us7},
	{"i4us70s70r4s131u", __M2N_i4us70s70r4s131u},
	{"i4us72s72ur4i4i4", __M2N_i4us72s72ur4i4i4},
	{"i4us7i4i4", __M2N_i4us7i4i4},
	{"i4us7s7", __M2N_i4us7s7},
	{"i4us93", __M2N_i4us93},
	{"i4us94", __M2N_i4us94},
	{"i4uu", __M2N_i4uu},
	{"i4uu1", __M2N_i4uu1},
	{"i4uu1i4", __M2N_i4uu1i4},
	{"i4uu2", __M2N_i4uu2},
	{"i4uu2i4", __M2N_i4uu2i4},
	{"i4uu2i4i4", __M2N_i4uu2i4i4},
	{"i4uu4", __M2N_i4uu4},
	{"i4uu8", __M2N_i4uu8},
	{"i4uu8u8", __M2N_i4uu8u8},
	{"i4uui4", __M2N_i4uui4},
	{"i4uui4i4", __M2N_i4uui4i4},
	{"i4uui4i4i4", __M2N_i4uui4i4i4},
	{"i4uui4i4i4u", __M2N_i4uui4i4i4u},
	{"i4uui4i4s14u", __M2N_i4uui4i4s14u},
	{"i4uui4i4s7u", __M2N_i4uui4i4s7u},
	{"i4uui4i4u", __M2N_i4uui4i4u},
	{"i4uui4i4u1", __M2N_i4uui4i4u1},
	{"i4uui4i4u8u", __M2N_i4uui4i4u8u},
	{"i4uui4i4ui4", __M2N_i4uui4i4ui4},
	{"i4uui4i4ui4i4i4", __M2N_i4uui4i4ui4i4i4},
	{"i4uui4i4ui4u1", __M2N_i4uui4i4ui4u1},
	{"i4uui4i4uu", __M2N_i4uui4i4uu},
	{"i4uui4u1", __M2N_i4uui4u1},
	{"i4uui4ui4", __M2N_i4uui4ui4},
	{"i4uui4ui4u1", __M2N_i4uui4ui4u1},
	{"i4uus12i4i4", __M2N_i4uus12i4i4},
	{"i4uus14i4i4", __M2N_i4uus14i4i4},
	{"i4uus4i4i4", __M2N_i4uus4i4i4},
	{"i4uus5i4i4", __M2N_i4uus5i4i4},
	{"i4uus6i4i4", __M2N_i4uus6i4i4},
	{"i4uus7i4i4", __M2N_i4uus7i4i4},
	{"i4uuu", __M2N_i4uuu},
	{"i4uuu1i4", __M2N_i4uuu1i4},
	{"i4uuu1i4i4", __M2N_i4uuu1i4i4},
	{"i4uuu1u", __M2N_i4uuu1u},
	{"i4uuui4", __M2N_i4uuui4},
	{"i4uuui4i4", __M2N_i4uuui4i4},
	{"i4uuui4i4i4", __M2N_i4uuui4i4i4},
	{"i4uuuu", __M2N_i4uuuu},
	{"i8", __M2N_i8},
	{"i8i", __M2N_i8i},
	{"i8i1", __M2N_i8i1},
	{"i8i2", __M2N_i8i2},
	{"i8i4", __M2N_i8i4},
	{"i8i8i8", __M2N_i8i8i8},
	{"i8iis0", __M2N_i8iis0},
	{"i8iiu", __M2N_i8iiu},
	{"i8r4", __M2N_i8r4},
	{"i8r8", __M2N_i8r8},
	{"i8s0i4i4u", __M2N_i8s0i4i4u},
	{"i8s18", __M2N_i8s18},
	{"i8u", __M2N_i8u},
	{"i8u1", __M2N_i8u1},
	{"i8u2", __M2N_i8u2},
	{"i8u4", __M2N_i8u4},
	{"i8u8", __M2N_i8u8},
	{"i8ui4", __M2N_i8ui4},
	{"i8ui4u", __M2N_i8ui4u},
	{"i8ui8", __M2N_i8ui8},
	{"i8ui8i4", __M2N_i8ui8i4},
	{"i8ui8i4u", __M2N_i8ui8i4u},
	{"i8ui8i8", __M2N_i8ui8i8},
	{"i8uiu", __M2N_i8uiu},
	{"i8uu", __M2N_i8uu},
	{"i8uuu", __M2N_i8uuu},
	{"ii", __M2N_ii},
	{"ii4", __M2N_ii4},
	{"ii4ii", __M2N_ii4ii},
	{"ii8", __M2N_ii8},
	{"iii4", __M2N_iii4},
	{"iiii", __M2N_iiii},
	{"iiis0", __M2N_iiis0},
	{"iiiu", __M2N_iiiu},
	{"iiu", __M2N_iiu},
	{"iiuu", __M2N_iiuu},
	{"iiuuu1", __M2N_iiuuu1},
	{"is223", __M2N_is223},
	{"iu", __M2N_iu},
	{"iu1", __M2N_iu1},
	{"iu1u1uu", __M2N_iu1u1uu},
	{"iui", __M2N_iui},
	{"iui4", __M2N_iui4},
	{"iui4i", __M2N_iui4i},
	{"iui4i4i4i4u", __M2N_iui4i4i4i4u},
	{"iuii", __M2N_iuii},
	{"iuu", __M2N_iuu},
	{"iuu2u2i4", __M2N_iuu2u2i4},
	{"iuui", __M2N_iuui},
	{"iuuuu", __M2N_iuuuu},
	{"r4", __M2N_r4},
	{"r4i", __M2N_r4i},
	{"r4i1", __M2N_r4i1},
	{"r4i2", __M2N_r4i2},
	{"r4i4", __M2N_r4i4},
	{"r4i8", __M2N_r4i8},
	{"r4iis0", __M2N_r4iis0},
	{"r4iiu", __M2N_r4iiu},
	{"r4r4", __M2N_r4r4},
	{"r4r4r4", __M2N_r4r4r4},
	{"r4r4r4r4", __M2N_r4r4r4r4},
	{"r4r8", __M2N_r4r8},
	{"r4s18", __M2N_r4s18},
	{"r4s72", __M2N_r4s72},
	{"r4u", __M2N_r4u},
	{"r4u1", __M2N_r4u1},
	{"r4u2", __M2N_r4u2},
	{"r4u4", __M2N_r4u4},
	{"r4u8", __M2N_r4u8},
	{"r4ui4u", __M2N_r4ui4u},
	{"r4uiu", __M2N_r4uiu},
	{"r4ur4", __M2N_r4ur4},
	{"r4ur4r4", __M2N_r4ur4r4},
	{"r4uu", __M2N_r4uu},
	{"r4uur4r4", __M2N_r4uur4r4},
	{"r4uuu", __M2N_r4uuu},
	{"r8", __M2N_r8},
	{"r8i", __M2N_r8i},
	{"r8i1", __M2N_r8i1},
	{"r8i2", __M2N_r8i2},
	{"r8i4", __M2N_r8i4},
	{"r8i8", __M2N_r8i8},
	{"r8iis0", __M2N_r8iis0},
	{"r8iiu", __M2N_r8iiu},
	{"r8r4", __M2N_r8r4},
	{"r8r8", __M2N_r8r8},
	{"r8r8r8", __M2N_r8r8r8},
	{"r8s18", __M2N_r8s18},
	{"r8u", __M2N_r8u},
	{"r8u1", __M2N_r8u1},
	{"r8u2", __M2N_r8u2},
	{"r8u4", __M2N_r8u4},
	{"r8u8", __M2N_r8u8},
	{"r8ui4u", __M2N_r8ui4u},
	{"r8uiu", __M2N_r8uiu},
	{"r8ur8", __M2N_r8ur8},
	{"r8ur8r8", __M2N_r8ur8r8},
	{"r8uu", __M2N_r8uu},
	{"r8uuu", __M2N_r8uuu},
	{"s0s0", __M2N_s0s0},
	{"s0u", __M2N_s0u},
	{"s0ui4", __M2N_s0ui4},
	{"s0ui4i4", __M2N_s0ui4i4},
	{"s0us23", __M2N_s0us23},
	{"s107u", __M2N_s107u},
	{"s108u", __M2N_s108u},
	{"s109u", __M2N_s109u},
	{"s10u", __M2N_s10u},
	{"s110u", __M2N_s110u},
	{"s111u", __M2N_s111u},
	{"s112u", __M2N_s112u},
	{"s113u", __M2N_s113u},
	{"s114u", __M2N_s114u},
	{"s117u", __M2N_s117u},
	{"s118u", __M2N_s118u},
	{"s11u", __M2N_s11u},
	{"s122u", __M2N_s122u},
	{"s127u", __M2N_s127u},
	{"s128u", __M2N_s128u},
	{"s129", __M2N_s129},
	{"s12u", __M2N_s12u},
	{"s132u", __M2N_s132u},
	{"s133u", __M2N_s133u},
	{"s134u", __M2N_s134u},
	{"s135u", __M2N_s135u},
	{"s143", __M2N_s143},
	{"s145u", __M2N_s145u},
	{"s149uu1", __M2N_s149uu1},
	{"s14u", __M2N_s14u},
	{"s14ui4", __M2N_s14ui4},
	{"s15ui4", __M2N_s15ui4},
	{"s167u", __M2N_s167u},
	{"s167ui4", __M2N_s167ui4},
	{"s168u", __M2N_s168u},
	{"s168ui4", __M2N_s168ui4},
	{"s169u", __M2N_s169u},
	{"s169ui4", __M2N_s169ui4},
	{"s17", __M2N_s17},
	{"s177u", __M2N_s177u},
	{"s179u", __M2N_s179u},
	{"s17u1", __M2N_s17u1},
	{"s17uu1", __M2N_s17uu1},
	{"s184u", __M2N_s184u},
	{"s185u4", __M2N_s185u4},
	{"s187u", __M2N_s187u},
	{"s188u", __M2N_s188u},
	{"s189u", __M2N_s189u},
	{"s18i1", __M2N_s18i1},
	{"s18i2", __M2N_s18i2},
	{"s18i4", __M2N_s18i4},
	{"s18i8", __M2N_s18i8},
	{"s18r4", __M2N_s18r4},
	{"s18r8", __M2N_s18r8},
	{"s18s18i4", __M2N_s18s18i4},
	{"s18u", __M2N_s18u},
	{"s18u1", __M2N_s18u1},
	{"s18u2", __M2N_s18u2},
	{"s18u4", __M2N_s18u4},
	{"s18u8", __M2N_s18u8},
	{"s18ui4u", __M2N_s18ui4u},
	{"s18uu", __M2N_s18uu},
	{"s19", __M2N_s19},
	{"s190u", __M2N_s190u},
	{"s191u", __M2N_s191u},
	{"s192u", __M2N_s192u},
	{"s193u", __M2N_s193u},
	{"s194u", __M2N_s194u},
	{"s195u", __M2N_s195u},
	{"s196u", __M2N_s196u},
	{"s197u", __M2N_s197u},
	{"s198u", __M2N_s198u},
	{"s199u", __M2N_s199u},
	{"s19i8", __M2N_s19i8},
	{"s19s19i4", __M2N_s19s19i4},
	{"s19s19s25", __M2N_s19s19s25},
	{"s19u", __M2N_s19u},
	{"s19ui4", __M2N_s19ui4},
	{"s19ui4i4i4i4i4i4i4i4", __M2N_s19ui4i4i4i4i4i4i4i4},
	{"s19ui8", __M2N_s19ui8},
	{"s19ur8", __M2N_s19ur8},
	{"s19uu", __M2N_s19uu},
	{"s20", __M2N_s20},
	{"s200u", __M2N_s200u},
	{"s201u", __M2N_s201u},
	{"s202u", __M2N_s202u},
	{"s203u", __M2N_s203u},
	{"s204u", __M2N_s204u},
	{"s20s0", __M2N_s20s0},
	{"s20u", __M2N_s20u},
	{"s21", __M2N_s21},
	{"s219u", __M2N_s219u},
	{"s21i4", __M2N_s21i4},
	{"s21u", __M2N_s21u},
	{"s22", __M2N_s22},
	{"s221s70s70", __M2N_s221s70s70},
	{"s221s70s70r4", __M2N_s221s70s70r4},
	{"s221s70s70r4i4", __M2N_s221s70s70r4i4},
	{"s221s70s70r4i4r4", __M2N_s221s70s70r4i4r4},
	{"s221s70s70r4i4r4r4", __M2N_s221s70s70r4i4r4r4},
	{"s221us70s70r4i4", __M2N_s221us70s70r4i4},
	{"s221us70s70r4s131", __M2N_s221us70s70r4s131},
	{"s223i", __M2N_s223i},
	{"s223u", __M2N_s223u},
	{"s223ui4", __M2N_s223ui4},
	{"s22s22", __M2N_s22s22},
	{"s22s22s22", __M2N_s22s22s22},
	{"s22u", __M2N_s22u},
	{"s25", __M2N_s25},
	{"s25i8", __M2N_s25i8},
	{"s25r8", __M2N_s25r8},
	{"s25s19s19", __M2N_s25s19s19},
	{"s25s25", __M2N_s25s25},
	{"s25s25s25", __M2N_s25s25s25},
	{"s25u", __M2N_s25u},
	{"s25us19", __M2N_s25us19},
	{"s25us25", __M2N_s25us25},
	{"s25uu", __M2N_s25uu},
	{"s26s19i4i4", __M2N_s26s19i4i4},
	{"s26s19i4i4i4", __M2N_s26s19i4i4i4},
	{"s26u", __M2N_s26u},
	{"s28u", __M2N_s28u},
	{"s28uu", __M2N_s28uu},
	{"s29ui4i4", __M2N_s29ui4i4},
	{"s30uus216s217i", __M2N_s30uus216s217i},
	{"s31", __M2N_s31},
	{"s31us53u", __M2N_s31us53u},
	{"s3u", __M2N_s3u},
	{"s3ui4", __M2N_s3ui4},
	{"s42u", __M2N_s42u},
	{"s43u", __M2N_s43u},
	{"s43us72", __M2N_s43us72},
	{"s43us72i4", __M2N_s43us72i4},
	{"s44", __M2N_s44},
	{"s44r4", __M2N_s44r4},
	{"s44s44", __M2N_s44s44},
	{"s44s44r4", __M2N_s44s44r4},
	{"s44u", __M2N_s44u},
	{"s44ui4", __M2N_s44ui4},
	{"s49u", __M2N_s49u},
	{"s4u", __M2N_s4u},
	{"s50", __M2N_s50},
	{"s50s72s44s72", __M2N_s50s72s44s72},
	{"s50u", __M2N_s50u},
	{"s50ui4", __M2N_s50ui4},
	{"s53", __M2N_s53},
	{"s53u", __M2N_s53u},
	{"s58u", __M2N_s58u},
	{"s5u", __M2N_s5u},
	{"s6u", __M2N_s6u},
	{"s6uu", __M2N_s6uu},
	{"s70", __M2N_s70},
	{"s70s72", __M2N_s70s72},
	{"s70u", __M2N_s70u},
	{"s70ur4i4r4i4", __M2N_s70ur4i4r4i4},
	{"s70uur4i4r4i4", __M2N_s70uur4i4r4i4},
	{"s71u", __M2N_s71u},
	{"s71ui4", __M2N_s71ui4},
	{"s72", __M2N_s72},
	{"s72s70", __M2N_s72s70},
	{"s72s72", __M2N_s72s72},
	{"s72s72r4", __M2N_s72s72r4},
	{"s72s72s72", __M2N_s72s72s72},
	{"s72u", __M2N_s72u},
	{"s72ui4", __M2N_s72ui4},
	{"s7i4", __M2N_s7i4},
	{"s7u", __M2N_s7u},
	{"s7ui4", __M2N_s7ui4},
	{"s91", __M2N_s91},
	{"s91u", __M2N_s91u},
	{"s93ui4", __M2N_s93ui4},
	{"s9u", __M2N_s9u},
	{"s9uuuu1u1", __M2N_s9uuuu1u1},
	{"typedbyrefuu", __M2N_typedbyrefuu},
	{"u", __M2N_u},
	{"u1", __M2N_u1},
	{"u1i", __M2N_u1i},
	{"u1i1", __M2N_u1i1},
	{"u1i2", __M2N_u1i2},
	{"u1i4", __M2N_u1i4},
	{"u1i4i4", __M2N_u1i4i4},
	{"u1i4s0us0u", __M2N_u1i4s0us0u},
	{"u1i4u", __M2N_u1i4u},
	{"u1i4u1", __M2N_u1i4u1},
	{"u1i8", __M2N_u1i8},
	{"u1i8s0us0u", __M2N_u1i8s0us0u},
	{"u1ii", __M2N_u1ii},
	{"u1iis0", __M2N_u1iis0},
	{"u1iiu", __M2N_u1iiu},
	{"u1iu", __M2N_u1iu},
	{"u1r4", __M2N_u1r4},
	{"u1r4r4", __M2N_u1r4r4},
	{"u1r4s0us0u", __M2N_u1r4s0us0u},
	{"u1r8", __M2N_u1r8},
	{"u1r8s0us0u", __M2N_u1r8s0us0u},
	{"u1s0", __M2N_u1s0},
	{"u1s0i4u", __M2N_u1s0i4u},
	{"u1s0i4uu", __M2N_u1s0i4uu},
	{"u1s0s0", __M2N_u1s0s0},
	{"u1s0s0u", __M2N_u1s0s0u},
	{"u1s0u", __M2N_u1s0u},
	{"u1s0u4", __M2N_u1s0u4},
	{"u1s103s103", __M2N_u1s103s103},
	{"u1s15s15", __M2N_u1s15s15},
	{"u1s18", __M2N_u1s18},
	{"u1s18s0us0u", __M2N_u1s18s0us0u},
	{"u1s18s18", __M2N_u1s18s18},
	{"u1s19s19", __M2N_u1s19s19},
	{"u1s20s20", __M2N_u1s20s20},
	{"u1s223s223", __M2N_u1s223s223},
	{"u1s22s22", __M2N_u1s22s22},
	{"u1s25s25", __M2N_u1s25s25},
	{"u1s26s26", __M2N_u1s26s26},
	{"u1s3", __M2N_u1s3},
	{"u1s3s3", __M2N_u1s3s3},
	{"u1s43", __M2N_u1s43},
	{"u1s43r4", __M2N_u1s43r4},
	{"u1s43r4i4", __M2N_u1s43r4i4},
	{"u1s43r4i4i4", __M2N_u1s43r4i4i4},
	{"u1s43u", __M2N_u1s43u},
	{"u1s43ur4", __M2N_u1s43ur4},
	{"u1s43ur4i4", __M2N_u1s43ur4i4},
	{"u1s43ur4i4i4", __M2N_u1s43ur4i4i4},
	{"u1s49s49", __M2N_u1s49s49},
	{"u1s53s53", __M2N_u1s53s53},
	{"u1s70s70", __M2N_u1s70s70},
	{"u1s71s71", __M2N_u1s71s71},
	{"u1s72s72", __M2N_u1s72s72},
	{"u1s72s72r4", __M2N_u1s72s72r4},
	{"u1s72s72r4i4", __M2N_u1s72s72r4i4},
	{"u1s72s72r4i4i4", __M2N_u1s72s72r4i4i4},
	{"u1s72s72u", __M2N_u1s72s72u},
	{"u1s72s72ur4", __M2N_u1s72s72ur4},
	{"u1s72s72ur4i4", __M2N_u1s72s72ur4i4},
	{"u1s72s72ur4i4i4", __M2N_u1s72s72ur4i4i4},
	{"u1s91s91", __M2N_u1s91s91},
	{"u1u", __M2N_u1u},
	{"u1u1", __M2N_u1u1},
	{"u1u2", __M2N_u1u2},
	{"u1u2u2", __M2N_u1u2u2},
	{"u1u4", __M2N_u1u4},
	{"u1u4s0us0u", __M2N_u1u4s0us0u},
	{"u1u8", __M2N_u1u8},
	{"u1u8s0us0u", __M2N_u1u8s0us0u},
	{"u1u8u8", __M2N_u1u8u8},
	{"u1ui", __M2N_u1ui},
	{"u1ui1", __M2N_u1ui1},
	{"u1ui2", __M2N_u1ui2},
	{"u1ui4", __M2N_u1ui4},
	{"u1ui4i", __M2N_u1ui4i},
	{"u1ui4i4", __M2N_u1ui4i4},
	{"u1ui4i8", __M2N_u1ui4i8},
	{"u1ui4s91", __M2N_u1ui4s91},
	{"u1ui4u", __M2N_u1ui4u},
	{"u1ui4u1", __M2N_u1ui4u1},
	{"u1ui4uu", __M2N_u1ui4uu},
	{"u1ui4uu1", __M2N_u1ui4uu1},
	{"u1ui8", __M2N_u1ui8},
	{"u1uiu", __M2N_u1uiu},
	{"u1ur4", __M2N_u1ur4},
	{"u1ur8", __M2N_u1ur8},
	{"u1us0", __M2N_u1us0},
	{"u1us0i4u", __M2N_u1us0i4u},
	{"u1us0u", __M2N_u1us0u},
	{"u1us0us0", __M2N_u1us0us0},
	{"u1us0us0u", __M2N_u1us0us0u},
	{"u1us10", __M2N_u1us10},
	{"u1us11", __M2N_u1us11},
	{"u1us12s12", __M2N_u1us12s12},
	{"u1us14", __M2N_u1us14},
	{"u1us14s14", __M2N_u1us14s14},
	{"u1us15", __M2N_u1us15},
	{"u1us17", __M2N_u1us17},
	{"u1us18", __M2N_u1us18},
	{"u1us19", __M2N_u1us19},
	{"u1us20", __M2N_u1us20},
	{"u1us20i4", __M2N_u1us20i4},
	{"u1us20u", __M2N_u1us20u},
	{"u1us20ui4", __M2N_u1us20ui4},
	{"u1us21", __M2N_u1us21},
	{"u1us22", __M2N_u1us22},
	{"u1us223", __M2N_u1us223},
	{"u1us23", __M2N_u1us23},
	{"u1us25", __M2N_u1us25},
	{"u1us25s25", __M2N_u1us25s25},
	{"u1us26", __M2N_u1us26},
	{"u1us27", __M2N_u1us27},
	{"u1us28", __M2N_u1us28},
	{"u1us29", __M2N_u1us29},
	{"u1us3", __M2N_u1us3},
	{"u1us30", __M2N_u1us30},
	{"u1us31", __M2N_u1us31},
	{"u1us4", __M2N_u1us4},
	{"u1us42", __M2N_u1us42},
	{"u1us43", __M2N_u1us43},
	{"u1us44", __M2N_u1us44},
	{"u1us49", __M2N_u1us49},
	{"u1us4s4", __M2N_u1us4s4},
	{"u1us4u", __M2N_u1us4u},
	{"u1us4uu1", __M2N_u1us4uu1},
	{"u1us5", __M2N_u1us5},
	{"u1us50", __M2N_u1us50},
	{"u1us53", __M2N_u1us53},
	{"u1us58", __M2N_u1us58},
	{"u1us5s5", __M2N_u1us5s5},
	{"u1us5u", __M2N_u1us5u},
	{"u1us5uu1", __M2N_u1us5uu1},
	{"u1us6", __M2N_u1us6},
	{"u1us60", __M2N_u1us60},
	{"u1us61", __M2N_u1us61},
	{"u1us64", __M2N_u1us64},
	{"u1us65", __M2N_u1us65},
	{"u1us66", __M2N_u1us66},
	{"u1us6s6", __M2N_u1us6s6},
	{"u1us7", __M2N_u1us7},
	{"u1us70", __M2N_u1us70},
	{"u1us71", __M2N_u1us71},
	{"u1us71uu", __M2N_u1us71uu},
	{"u1us72", __M2N_u1us72},
	{"u1us72s72r4i4i4", __M2N_u1us72s72r4i4i4},
	{"u1us72s72ur4i4i4", __M2N_u1us72s72ur4i4i4},
	{"u1us74", __M2N_u1us74},
	{"u1us77", __M2N_u1us77},
	{"u1us78", __M2N_u1us78},
	{"u1us79", __M2N_u1us79},
	{"u1us7s7", __M2N_u1us7s7},
	{"u1us9", __M2N_u1us9},
	{"u1us91", __M2N_u1us91},
	{"u1us93", __M2N_u1us93},
	{"u1us94", __M2N_u1us94},
	{"u1uu", __M2N_u1uu},
	{"u1uu1", __M2N_u1uu1},
	{"u1uu1u1", __M2N_u1uu1u1},
	{"u1uu2", __M2N_u1uu2},
	{"u1uu2i4", __M2N_u1uu2i4},
	{"u1uu2u2i4", __M2N_u1uu2u2i4},
	{"u1uu4", __M2N_u1uu4},
	{"u1uu4i4i4u", __M2N_u1uu4i4i4u},
	{"u1uu8", __M2N_u1uu8},
	{"u1uui4", __M2N_u1uui4},
	{"u1uui4u", __M2N_u1uui4u},
	{"u1uui4u1", __M2N_u1uui4u1},
	{"u1uui4uu1u1u", __M2N_u1uui4uu1u1u},
	{"u1uus6", __M2N_u1uus6},
	{"u1uus6u1", __M2N_u1uus6u1},
	{"u1uuu", __M2N_u1uuu},
	{"u1uuu1", __M2N_u1uuu1},
	{"u1uuu8", __M2N_u1uuu8},
	{"u1uuui4", __M2N_u1uuui4},
	{"u1uuui4i4i4", __M2N_u1uuui4i4i4},
	{"u1uuuu", __M2N_u1uuuu},
	{"u1uuuu1", __M2N_u1uuuu1},
	{"u1uuuu1u", __M2N_u1uuuu1u},
	{"u2", __M2N_u2},
	{"u2i", __M2N_u2i},
	{"u2i1", __M2N_u2i1},
	{"u2i2", __M2N_u2i2},
	{"u2i4", __M2N_u2i4},
	{"u2i8", __M2N_u2i8},
	{"u2iis0", __M2N_u2iis0},
	{"u2iiu", __M2N_u2iiu},
	{"u2r4", __M2N_u2r4},
	{"u2r8", __M2N_u2r8},
	{"u2s18", __M2N_u2s18},
	{"u2u", __M2N_u2u},
	{"u2u1", __M2N_u2u1},
	{"u2u2", __M2N_u2u2},
	{"u2u4", __M2N_u2u4},
	{"u2u8", __M2N_u2u8},
	{"u2ui4", __M2N_u2ui4},
	{"u2ui4u", __M2N_u2ui4u},
	{"u2uiu", __M2N_u2uiu},
	{"u2uu", __M2N_u2uu},
	{"u2uu2", __M2N_u2uu2},
	{"u2uuu", __M2N_u2uuu},
	{"u4", __M2N_u4},
	{"u4i1", __M2N_u4i1},
	{"u4i2", __M2N_u4i2},
	{"u4i4", __M2N_u4i4},
	{"u4i8", __M2N_u4i8},
	{"u4r4", __M2N_u4r4},
	{"u4r8", __M2N_u4r8},
	{"u4s18", __M2N_u4s18},
	{"u4u", __M2N_u4u},
	{"u4u1", __M2N_u4u1},
	{"u4u2", __M2N_u4u2},
	{"u4u4", __M2N_u4u4},
	{"u4u8", __M2N_u4u8},
	{"u4ui4u", __M2N_u4ui4u},
	{"u4uu", __M2N_u4uu},
	{"u8", __M2N_u8},
	{"u8i1", __M2N_u8i1},
	{"u8i2", __M2N_u8i2},
	{"u8i4", __M2N_u8i4},
	{"u8i8", __M2N_u8i8},
	{"u8r4", __M2N_u8r4},
	{"u8r8", __M2N_u8r8},
	{"u8s18", __M2N_u8s18},
	{"u8u", __M2N_u8u},
	{"u8u1", __M2N_u8u1},
	{"u8u2", __M2N_u8u2},
	{"u8u4", __M2N_u8u4},
	{"u8ui4", __M2N_u8ui4},
	{"u8ui4u", __M2N_u8ui4u},
	{"u8uu", __M2N_u8uu},
	{"ui", __M2N_ui},
	{"ui4", __M2N_ui4},
	{"ui4i4", __M2N_ui4i4},
	{"ui4s0u", __M2N_ui4s0u},
	{"ui4s91", __M2N_ui4s91},
	{"ui4s94u", __M2N_ui4s94u},
	{"ui4uu", __M2N_ui4uu},
	{"ui8i4i4i4", __M2N_ui8i4i4i4},
	{"ui8i8u4u4", __M2N_ui8i8u4u4},
	{"ui8s0u", __M2N_ui8s0u},
	{"uiis0", __M2N_uiis0},
	{"uiiu", __M2N_uiiu},
	{"ur4", __M2N_ur4},
	{"ur4uu", __M2N_ur4uu},
	{"ur8uu", __M2N_ur8uu},
	{"us0", __M2N_us0},
	{"us12", __M2N_us12},
	{"us132", __M2N_us132},
	{"us133", __M2N_us133},
	{"us134", __M2N_us134},
	{"us135", __M2N_us135},
	{"us18s0u", __M2N_us18s0u},
	{"us223", __M2N_us223},
	{"us223s223", __M2N_us223s223},
	{"us43", __M2N_us43},
	{"us43r4", __M2N_us43r4},
	{"us43r4i4", __M2N_us43r4i4},
	{"us43r4i4i4", __M2N_us43r4i4i4},
	{"us70s70uu1", __M2N_us70s70uu1},
	{"us72s72", __M2N_us72s72},
	{"us72s72r4", __M2N_us72s72r4},
	{"us72s72r4i4", __M2N_us72s72r4i4},
	{"us72s72r4i4i4", __M2N_us72s72r4i4i4},
	{"us91", __M2N_us91},
	{"us91s91", __M2N_us91s91},
	{"uu", __M2N_uu},
	{"uu1", __M2N_uu1},
	{"uu2", __M2N_uu2},
	{"uu4", __M2N_uu4},
	{"uu4s0u", __M2N_uu4s0u},
	{"uu8", __M2N_uu8},
	{"uu8s0u", __M2N_uu8s0u},
	{"uui", __M2N_uui},
	{"uui1", __M2N_uui1},
	{"uui2", __M2N_uui2},
	{"uui4", __M2N_uui4},
	{"uui4i4", __M2N_uui4i4},
	{"uui4i4i4", __M2N_uui4i4i4},
	{"uui4s91", __M2N_uui4s91},
	{"uui4u", __M2N_uui4u},
	{"uui4u1", __M2N_uui4u1},
	{"uui4u2", __M2N_uui4u2},
	{"uui4ui4uu", __M2N_uui4ui4uu},
	{"uui4uu", __M2N_uui4uu},
	{"uui4uuu", __M2N_uui4uuu},
	{"uui4uuuu", __M2N_uui4uuuu},
	{"uui4uuuuuu", __M2N_uui4uuuuuu},
	{"uui8", __M2N_uui8},
	{"uui8i8", __M2N_uui8i8},
	{"uui8i8i8", __M2N_uui8i8i8},
	{"uuiu", __M2N_uuiu},
	{"uus0", __M2N_uus0},
	{"uus20", __M2N_uus20},
	{"uus23", __M2N_uus23},
	{"uus25uu", __M2N_uus25uu},
	{"uus3", __M2N_uus3},
	{"uus4", __M2N_uus4},
	{"uus5", __M2N_uus5},
	{"uus6", __M2N_uus6},
	{"uuu", __M2N_uuu},
	{"uuu1", __M2N_uuu1},
	{"uuu1i4i4i4ui4i4i4i4u1u", __M2N_uuu1i4i4i4ui4i4i4i4u1u},
	{"uuu1u1", __M2N_uuu1u1},
	{"uuu2", __M2N_uuu2},
	{"uuu2i4", __M2N_uuu2i4},
	{"uuu2u2", __M2N_uuu2u2},
	{"uuu4", __M2N_uuu4},
	{"uuu4u4", __M2N_uuu4u4},
	{"uuu8", __M2N_uuu8},
	{"uuui4", __M2N_uuui4},
	{"uuui4i4", __M2N_uuui4i4},
	{"uuui4i4i4", __M2N_uuui4i4i4},
	{"uuui4i4uu", __M2N_uuui4i4uu},
	{"uuui4ui4uu", __M2N_uuui4ui4uu},
	{"uuui4uuu", __M2N_uuui4uuu},
	{"uuui4uuuu", __M2N_uuui4uuuu},
	{"uuui4uuuuuu", __M2N_uuui4uuuuuu},
	{"uuus6u", __M2N_uuus6u},
	{"uuuu", __M2N_uuuu},
	{"uuuu1", __M2N_uuuu1},
	{"uuuu1u1", __M2N_uuuu1u1},
	{"uuuui4", __M2N_uuuui4},
	{"uuuus25u1", __M2N_uuuus25u1},
	{"uuuus6u", __M2N_uuuus6u},
	{"uuuus91i4u", __M2N_uuuus91i4u},
	{"uuuuu", __M2N_uuuuu},
	{"uuuuu1", __M2N_uuuuu1},
	{"uuuuu1u1", __M2N_uuuuu1u1},
	{"uuuuuu", __M2N_uuuuuu},
	{"v", __M2N_v},
	{"vi", __M2N_vi},
	{"vi4", __M2N_vi4},
	{"vi4i4", __M2N_vi4i4},
	{"vi4i4i4", __M2N_vi4i4i4},
	{"vi4i4i4i4i4", __M2N_vi4i4i4i4i4},
	{"vi4i4u", __M2N_vi4i4u},
	{"vi4i4uuu", __M2N_vi4i4uuu},
	{"vi4ui4", __M2N_vi4ui4},
	{"vi4uui4i4", __M2N_vi4uui4i4},
	{"vi4uuu8", __M2N_vi4uuu8},
	{"vi8", __M2N_vi8},
	{"vii4i", __M2N_vii4i},
	{"viui4i4", __M2N_viui4i4},
	{"vs223", __M2N_vs223},
	{"vs223u", __M2N_vs223u},
	{"vs25", __M2N_vs25},
	{"vs29i4s29i4i4", __M2N_vs29i4s29i4i4},
	{"vs29s29i4", __M2N_vs29s29i4},
	{"vs44uu", __M2N_vs44uu},
	{"vs50", __M2N_vs50},
	{"vs72s72", __M2N_vs72s72},
	{"vs72s72s44", __M2N_vs72s72s44},
	{"vs72s72s44r4", __M2N_vs72s72s44r4},
	{"vs72s72s44r4u1", __M2N_vs72s72s44r4u1},
	{"vtypedbyrefu", __M2N_vtypedbyrefu},
	{"vu", __M2N_vu},
	{"vu1", __M2N_vu1},
	{"vu1u", __M2N_vu1u},
	{"vu1uu", __M2N_vu1uu},
	{"vu1uuu", __M2N_vu1uuu},
	{"vui", __M2N_vui},
	{"vui2", __M2N_vui2},
	{"vui4", __M2N_vui4},
	{"vui4i2i2u1u1u1u1u1u1u1u1", __M2N_vui4i2i2u1u1u1u1u1u1u1u1},
	{"vui4i4", __M2N_vui4i4},
	{"vui4i4i4", __M2N_vui4i4i4},
	{"vui4i4i4i4", __M2N_vui4i4i4i4},
	{"vui4i4i4i4i4", __M2N_vui4i4i4i4i4},
	{"vui4i4i4i4i4i", __M2N_vui4i4i4i4i4i},
	{"vui4i4i4i4i4i4", __M2N_vui4i4i4i4i4i4},
	{"vui4i4i4i4i4i4i4", __M2N_vui4i4i4i4i4i4i4},
	{"vui4i4i4i4i4iu1", __M2N_vui4i4i4i4i4iu1},
	{"vui4i4i4i4i4u1", __M2N_vui4i4i4i4i4u1},
	{"vui4i4i4i4i4u1u1", __M2N_vui4i4i4i4i4u1u1},
	{"vui4i4i4i4u1", __M2N_vui4i4i4i4u1},
	{"vui4i4i4i4u1i", __M2N_vui4i4i4i4u1i},
	{"vui4i4i4i4u1u1", __M2N_vui4i4i4i4u1u1},
	{"vui4i4i4i4u1u1u1", __M2N_vui4i4i4i4u1u1u1},
	{"vui4i4i4u", __M2N_vui4i4i4u},
	{"vui4i4i4u1", __M2N_vui4i4i4u1},
	{"vui4i4i4u1u1", __M2N_vui4i4i4u1u1},
	{"vui4i4i4u1u1u1", __M2N_vui4i4i4u1u1u1},
	{"vui4i4u", __M2N_vui4i4u},
	{"vui4i4u1", __M2N_vui4i4u1},
	{"vui4i4u1u", __M2N_vui4i4u1u},
	{"vui4i4u1u1", __M2N_vui4i4u1u1},
	{"vui4i4uuu", __M2N_vui4i4uuu},
	{"vui4i8i8u1", __M2N_vui4i8i8u1},
	{"vui4r4", __M2N_vui4r4},
	{"vui4r4u", __M2N_vui4r4u},
	{"vui4r4uu", __M2N_vui4r4uu},
	{"vui4s0i4", __M2N_vui4s0i4},
	{"vui4s14", __M2N_vui4s14},
	{"vui4s15", __M2N_vui4s15},
	{"vui4s167", __M2N_vui4s167},
	{"vui4s168", __M2N_vui4s168},
	{"vui4s169", __M2N_vui4s169},
	{"vui4s25u", __M2N_vui4s25u},
	{"vui4s3", __M2N_vui4s3},
	{"vui4s44", __M2N_vui4s44},
	{"vui4s50", __M2N_vui4s50},
	{"vui4s7", __M2N_vui4s7},
	{"vui4s70", __M2N_vui4s70},
	{"vui4s71", __M2N_vui4s71},
	{"vui4s72", __M2N_vui4s72},
	{"vui4u", __M2N_vui4u},
	{"vui4u1", __M2N_vui4u1},
	{"vui4u2", __M2N_vui4u2},
	{"vui4ui4i4", __M2N_vui4ui4i4},
	{"vui4uu", __M2N_vui4uu},
	{"vui4uuu", __M2N_vui4uuu},
	{"vui4uuuuu", __M2N_vui4uuuuu},
	{"vui8", __M2N_vui8},
	{"vui8i4", __M2N_vui8i4},
	{"vui8ui8", __M2N_vui8ui8},
	{"vui8ui8i8", __M2N_vui8ui8i8},
	{"vui8uu", __M2N_vui8uu},
	{"vuiiiiiii4u", __M2N_vuiiiiiii4u},
	{"vuiiui4", __M2N_vuiiui4},
	{"vuiu1", __M2N_vuiu1},
	{"vur4", __M2N_vur4},
	{"vur4i4r4i4i", __M2N_vur4i4r4i4i},
	{"vur4r4", __M2N_vur4r4},
	{"vur4r4i", __M2N_vur4r4i},
	{"vur4r4r4", __M2N_vur4r4r4},
	{"vur4r4r4r4", __M2N_vur4r4r4r4},
	{"vur4r4r4r4u", __M2N_vur4r4r4r4u},
	{"vur8", __M2N_vur8},
	{"vus0", __M2N_vus0},
	{"vus0i8", __M2N_vus0i8},
	{"vus0s94", __M2N_vus0s94},
	{"vus0u", __M2N_vus0u},
	{"vus10", __M2N_vus10},
	{"vus11", __M2N_vus11},
	{"vus14", __M2N_vus14},
	{"vus15", __M2N_vus15},
	{"vus161", __M2N_vus161},
	{"vus162", __M2N_vus162},
	{"vus164", __M2N_vus164},
	{"vus17", __M2N_vus17},
	{"vus172", __M2N_vus172},
	{"vus174", __M2N_vus174},
	{"vus175i4", __M2N_vus175i4},
	{"vus176", __M2N_vus176},
	{"vus179", __M2N_vus179},
	{"vus18", __M2N_vus18},
	{"vus181", __M2N_vus181},
	{"vus182", __M2N_vus182},
	{"vus182u", __M2N_vus182u},
	{"vus19", __M2N_vus19},
	{"vus19s19s25", __M2N_vus19s19s25},
	{"vus20", __M2N_vus20},
	{"vus20u", __M2N_vus20u},
	{"vus20ui4", __M2N_vus20ui4},
	{"vus21", __M2N_vus21},
	{"vus21i4", __M2N_vus21i4},
	{"vus21s177", __M2N_vus21s177},
	{"vus21s21", __M2N_vus21s21},
	{"vus21s29", __M2N_vus21s29},
	{"vus223", __M2N_vus223},
	{"vus223u", __M2N_vus223u},
	{"vus223uu", __M2N_vus223uu},
	{"vus25", __M2N_vus25},
	{"vus28", __M2N_vus28},
	{"vus29", __M2N_vus29},
	{"vus3", __M2N_vus3},
	{"vus31", __M2N_vus31},
	{"vus31s178", __M2N_vus31s178},
	{"vus31s178u", __M2N_vus31s178u},
	{"vus31uu", __M2N_vus31uu},
	{"vus4", __M2N_vus4},
	{"vus44", __M2N_vus44},
	{"vus44s44s44s44", __M2N_vus44s44s44s44},
	{"vus44uu1u1u1u1", __M2N_vus44uu1u1u1u1},
	{"vus4u", __M2N_vus4u},
	{"vus5", __M2N_vus5},
	{"vus50", __M2N_vus50},
	{"vus53", __M2N_vus53},
	{"vus5u", __M2N_vus5u},
	{"vus6", __M2N_vus6},
	{"vus7", __M2N_vus7},
	{"vus70s70", __M2N_vus70s70},
	{"vus71", __M2N_vus71},
	{"vus71u", __M2N_vus71u},
	{"vus71uu", __M2N_vus71uu},
	{"vus72", __M2N_vus72},
	{"vus72s72", __M2N_vus72s72},
	{"vus72s72r4r4s174", __M2N_vus72s72r4r4s174},
	{"vus77", __M2N_vus77},
	{"vus79", __M2N_vus79},
	{"vus9", __M2N_vus9},
	{"vus91i4i4u", __M2N_vus91i4i4u},
	{"vutypedbyrefu", __M2N_vutypedbyrefu},
	{"vuu", __M2N_vuu},
	{"vuu1", __M2N_vuu1},
	{"vuu1i4", __M2N_vuu1i4},
	{"vuu1i4i4s91", __M2N_vuu1i4i4s91},
	{"vuu1i4u", __M2N_vuu1i4u},
	{"vuu1i8", __M2N_vuu1i8},
	{"vuu1s28i4s91", __M2N_vuu1s28i4s91},
	{"vuu1u", __M2N_vuu1u},
	{"vuu1u1", __M2N_vuu1u1},
	{"vuu1u1i4", __M2N_vuu1u1i4},
	{"vuu1u1i4s91", __M2N_vuu1u1i4s91},
	{"vuu1u1i4u1", __M2N_vuu1u1i4u1},
	{"vuu1u1u1", __M2N_vuu1u1u1},
	{"vuu1u1u4u4u4", __M2N_vuu1u1u4u4u4},
	{"vuu1u1uuuui4i4u", __M2N_vuu1u1uuuui4i4u},
	{"vuu1ui4s91", __M2N_vuu1ui4s91},
	{"vuu1uu1u1", __M2N_vuu1uu1u1},
	{"vuu1uuu", __M2N_vuu1uuu},
	{"vuu2", __M2N_vuu2},
	{"vuu2i4", __M2N_vuu2i4},
	{"vuu2i4i4i4i4i4i4i4", __M2N_vuu2i4i4i4i4i4i4i4},
	{"vuu2i4u1u1u1", __M2N_vuu2i4u1u1u1},
	{"vuu4", __M2N_vuu4},
	{"vuu4i4i4i4", __M2N_vuu4i4i4i4},
	{"vuu4u4u4", __M2N_vuu4u4u4},
	{"vuu8", __M2N_vuu8},
	{"vuu8u8", __M2N_vuu8u8},
	{"vuui", __M2N_vuui},
	{"vuui4", __M2N_vuui4},
	{"vuui4i4", __M2N_vuui4i4},
	{"vuui4i4i4", __M2N_vuui4i4i4},
	{"vuui4i4i4i4", __M2N_vuui4i4i4i4},
	{"vuui4i4i4i4i4", __M2N_vuui4i4i4i4i4},
	{"vuui4i4i4u", __M2N_vuui4i4i4u},
	{"vuui4i4u", __M2N_vuui4i4u},
	{"vuui4i4u1", __M2N_vuui4i4u1},
	{"vuui4s31", __M2N_vuui4s31},
	{"vuui4u1", __M2N_vuui4u1},
	{"vuui8", __M2N_vuui8},
	{"vuui8i8", __M2N_vuui8i8},
	{"vuui8i8i4", __M2N_vuui8i8i4},
	{"vuui8i8i8", __M2N_vuui8i8i8},
	{"vuui8ui8uu", __M2N_vuui8ui8uu},
	{"vuuiii4i4u", __M2N_vuuiii4i4u},
	{"vuuiiui4", __M2N_vuuiiui4},
	{"vuuiu", __M2N_vuuiu},
	{"vuur4", __M2N_vuur4},
	{"vuur4r4", __M2N_vuur4r4},
	{"vuur8", __M2N_vuur8},
	{"vuus180i4", __M2N_vuus180i4},
	{"vuus180i4s31", __M2N_vuus180i4s31},
	{"vuus19", __M2N_vuus19},
	{"vuus29", __M2N_vuus29},
	{"vuus3", __M2N_vuus3},
	{"vuus58u1", __M2N_vuus58u1},
	{"vuus6", __M2N_vuus6},
	{"vuus91", __M2N_vuus91},
	{"vuuu", __M2N_vuuu},
	{"vuuu1", __M2N_vuuu1},
	{"vuuu1i4", __M2N_vuuu1i4},
	{"vuuu1i4u1", __M2N_vuuu1i4u1},
	{"vuuu1s166", __M2N_vuuu1s166},
	{"vuuu1u1", __M2N_vuuu1u1},
	{"vuuu4", __M2N_vuuu4},
	{"vuuu8", __M2N_vuuu8},
	{"vuuui4", __M2N_vuuui4},
	{"vuuui4i4", __M2N_vuuui4i4},
	{"vuuui4i4u", __M2N_vuuui4i4u},
	{"vuuui4u", __M2N_vuuui4u},
	{"vuuui4u1", __M2N_vuuui4u1},
	{"vuuui4uu", __M2N_vuuui4uu},
	{"vuuur4", __M2N_vuuur4},
	{"vuuus25s25", __M2N_vuuus25s25},
	{"vuuus58u1", __M2N_vuuus58u1},
	{"vuuus6", __M2N_vuuus6},
	{"vuuus91i4", __M2N_vuuus91i4},
	{"vuuuu", __M2N_vuuuu},
	{"vuuuu1", __M2N_vuuuu1},
	{"vuuuu1i4", __M2N_vuuuu1i4},
	{"vuuuu1i4u1", __M2N_vuuuu1i4u1},
	{"vuuuu1u", __M2N_vuuuu1u},
	{"vuuuui4", __M2N_vuuuui4},
	{"vuuuui4i4", __M2N_vuuuui4i4},
	{"vuuuus91i4i4u", __M2N_vuuuus91i4i4u},
	{"vuuuuu", __M2N_vuuuuu},
	{"vuuuuu1", __M2N_vuuuuu1},
	{"vuuuuui4u", __M2N_vuuuuui4u},
	{"vuuuuuu", __M2N_vuuuuuu},
	{"vuuuuuu1i4i4", __M2N_vuuuuuu1i4i4},
	{"vuuuuuuu", __M2N_vuuuuuuu},
	{"vuuuuuuuuu", __M2N_vuuuuuuuuu},
	{nullptr, nullptr},
};

static int8_t __N2M_i1u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int8_t __N2M_i1uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int16_t __N2M_i2u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int16_t __N2M_i2uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4s14s14(__struct_14__ __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_14__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4s7s7(__struct_7__ __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_7__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4u8u8(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uint64_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui1(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui4i4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us0(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us12(uintptr_t __arg0, __struct_12__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_12__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us12s12(uintptr_t __arg0, __struct_12__ __arg1, __struct_12__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_12__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_12__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us14(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us14s14(uintptr_t __arg0, __struct_14__ __arg1, __struct_14__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_14__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us19(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_19__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us20(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us25(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_25__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us27(uintptr_t __arg0, __struct_27__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_27__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us28(uintptr_t __arg0, __struct_28__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_28__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us4(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us49(uintptr_t __arg0, __struct_49__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_49__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us5(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us6(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_6__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us60(uintptr_t __arg0, __struct_60__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_60__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us7s7(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us93(uintptr_t __arg0, __struct_93__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_93__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us94(uintptr_t __arg0, __struct_94__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_94__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu8u8(uintptr_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uint64_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4u1(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	args[__ARG_OFFSET_4__].u64 = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4ui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4ui4i4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(int32_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(int32_t*)(args + __ARG_OFFSET_7__) = __arg7;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4ui4u1(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;
	args[__ARG_OFFSET_6__].u64 = __arg6;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4u1(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4ui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4ui4u1(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	args[__ARG_OFFSET_5__].u64 = __arg5;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus12i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_12__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_12__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus14i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_14__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_14__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus4i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_4__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_4__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus5i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_5__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_5__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus6i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_6__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus7i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_7__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuu1i4(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuu1i4i4(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuui4i4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuui4i4i4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_i8u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_i8ui8i4(uintptr_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_i8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_i8uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static intptr_t __N2M_iuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    intptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static intptr_t __N2M_iuui(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    intptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_r4u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_r4ur4r4(uintptr_t __arg0, float __arg1, float __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_r4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_r4uur4r4(uintptr_t __arg0, uintptr_t __arg1, float __arg2, float __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;
	*(float*)(args + __ARG_OFFSET_3__) = __arg3;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static double __N2M_r8u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    double ret; Interpreter::Execute(method, args, &ret); return ret;
}


static double __N2M_r8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    double ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_0__ __N2M_s0u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_0__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_10__ __N2M_s10u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_10__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_11__ __N2M_s11u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_11__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_132__ __N2M_s132u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_132__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_14__ __N2M_s14u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_14__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_14__ __N2M_s14ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_14__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_15__ __N2M_s15ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_15__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_167__ __N2M_s167u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_167__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_168__ __N2M_s168u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_168__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_169__ __N2M_s169u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_169__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_17__ __N2M_s17uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    __struct_17__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_184__ __N2M_s184(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    __struct_184__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_184__ __N2M_s184u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_184__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_18__ __N2M_s18u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_18__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_18__ __N2M_s18uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_18__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_19__ __N2M_s19u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_19__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_19__ __N2M_s19ui4i4i4i4i4i4i4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __ARG_OFFSET_8__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;
	constexpr int __ARG_SIZE_8__ = (sizeof(__arg8) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_8__ + __ARG_SIZE_8__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(int32_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(int32_t*)(args + __ARG_OFFSET_7__) = __arg7;
	*(int32_t*)(args + __ARG_OFFSET_8__) = __arg8;

    __struct_19__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_19__ __N2M_s19uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_19__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_20__ __N2M_s20u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_20__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_223__ __N2M_s223u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_223__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_25__ __N2M_s25u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_25__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_25__ __N2M_s25us25(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_25__*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_25__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_25__ __N2M_s25uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_25__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_28__ __N2M_s28(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    __struct_28__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_28__ __N2M_s28u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_28__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_28__ __N2M_s28uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_28__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_30__ __N2M_s30us216s217i(uintptr_t __arg0, __struct_216__ __arg1, __struct_217__ __arg2, intptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_216__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_217__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(intptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    __struct_30__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_30__ __N2M_s30uus216s217i(uintptr_t __arg0, uintptr_t __arg1, __struct_216__ __arg2, __struct_217__ __arg3, intptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_216__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_217__*)(args + __ARG_OFFSET_3__) = __arg3;
	*(intptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    __struct_30__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_31__ __N2M_s31s53u(__struct_53__ __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_53__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_31__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_31__ __N2M_s31us53u(uintptr_t __arg0, __struct_53__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_53__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    __struct_31__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_3__ __N2M_s3u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_3__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_3__ __N2M_s3ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_3__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_42__ __N2M_s42u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_42__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_43__ __N2M_s43u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_43__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_44__ __N2M_s44u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_44__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_4__ __N2M_s4u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_4__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_50__ __N2M_s50u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_50__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_53__ __N2M_s53u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_53__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_58__ __N2M_s58u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_58__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_5__ __N2M_s5u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_5__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_6__ __N2M_s6u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_6__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_6__ __N2M_s6uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_6__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_70__ __N2M_s70u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_70__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_70__ __N2M_s70ur4i4r4i4(uintptr_t __arg0, float __arg1, int32_t __arg2, float __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(float*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    __struct_70__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_70__ __N2M_s70uur4i4r4i4(uintptr_t __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, float __arg4, int32_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(float*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;

    __struct_70__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_71__ __N2M_s71u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_71__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_72__ __N2M_s72u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_72__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_7__ __N2M_s7u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_7__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_7__ __N2M_s7ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_7__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_9__ __N2M_s9u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_9__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_u(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1i4(int32_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1i4i(int32_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1s14(__struct_14__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_14__*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1s7(__struct_7__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_7__*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui1(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4i(uintptr_t __arg0, int32_t __arg1, intptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4u(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4u1(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us0us0u(uintptr_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_0__*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us10(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us11(uintptr_t __arg0, __struct_11__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_11__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us12s12(uintptr_t __arg0, __struct_12__ __arg1, __struct_12__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_12__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_12__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us14(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us14s14(uintptr_t __arg0, __struct_14__ __arg1, __struct_14__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_14__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us19(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_19__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us20(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us20u(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us20ui4(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us21(uintptr_t __arg0, __struct_21__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_21__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us22(uintptr_t __arg0, __struct_22__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_22__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us223(uintptr_t __arg0, __struct_223__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_223__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us23(uintptr_t __arg0, __struct_23__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_23__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us25(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_25__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us26(uintptr_t __arg0, __struct_26__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_26__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us27(uintptr_t __arg0, __struct_27__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_27__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us28(uintptr_t __arg0, __struct_28__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_28__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us29(uintptr_t __arg0, __struct_29__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_29__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us30(uintptr_t __arg0, __struct_30__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_30__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us31(uintptr_t __arg0, __struct_31__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us4(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us42(uintptr_t __arg0, __struct_42__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_42__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us43(uintptr_t __arg0, __struct_43__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_43__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us44(uintptr_t __arg0, __struct_44__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_44__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us49(uintptr_t __arg0, __struct_49__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_49__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us4s4(uintptr_t __arg0, __struct_4__ __arg1, __struct_4__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_4__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us4u(uintptr_t __arg0, __struct_4__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us5(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us50(uintptr_t __arg0, __struct_50__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_50__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us53(uintptr_t __arg0, __struct_53__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_53__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us58(uintptr_t __arg0, __struct_58__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_58__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us5s5(uintptr_t __arg0, __struct_5__ __arg1, __struct_5__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_5__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us5u(uintptr_t __arg0, __struct_5__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us6(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_6__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us60(uintptr_t __arg0, __struct_60__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_60__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us61(uintptr_t __arg0, __struct_61__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_61__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us64(uintptr_t __arg0, __struct_64__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_64__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us65(uintptr_t __arg0, __struct_65__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_65__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us66(uintptr_t __arg0, __struct_66__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_66__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us6s6(uintptr_t __arg0, __struct_6__ __arg1, __struct_6__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_6__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_6__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us70(uintptr_t __arg0, __struct_70__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_70__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us71(uintptr_t __arg0, __struct_71__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_71__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us71uu(uintptr_t __arg0, __struct_71__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_71__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us72(uintptr_t __arg0, __struct_72__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_72__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us74(uintptr_t __arg0, __struct_74__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_74__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us77(uintptr_t __arg0, __struct_77__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_77__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us78(uintptr_t __arg0, __struct_78__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_78__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us79(uintptr_t __arg0, __struct_79__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_79__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us7s7(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us9(uintptr_t __arg0, __struct_9__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_9__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us93(uintptr_t __arg0, __struct_93__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_93__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us94(uintptr_t __arg0, __struct_94__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_94__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu1u1(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu2i4(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu2u2i4(uintptr_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_u2u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_u2uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_u2uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint32_t __N2M_u4u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint32_t __N2M_u4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint64_t __N2M_u8u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint64_t __N2M_u8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_us3(__struct_3__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_3__*)(args + __ARG_OFFSET_0__) = __arg0;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uu(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4ui4uu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4uu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4uuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4uuuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4uuuuuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(uintptr_t*)(args + __ARG_OFFSET_7__) = __arg7;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus4(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus5(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus6(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_6__*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4i4uu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4ui4uu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4uuu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4uuuu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4uuuuuu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, uintptr_t __arg8, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __ARG_OFFSET_8__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;
	constexpr int __ARG_SIZE_8__ = (sizeof(__arg8) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_8__ + __ARG_SIZE_8__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(uintptr_t*)(args + __ARG_OFFSET_7__) = __arg7;
	*(uintptr_t*)(args + __ARG_OFFSET_8__) = __arg8;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuus6u(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_6__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuu1u1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuus6u(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_6__ __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_6__*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuu1(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static void __N2M_v(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vi(intptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(intptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vi4(int32_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vi4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vi4i8i8u1(int32_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int64_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vi4u(int32_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_viiiiiii4u(intptr_t __arg0, intptr_t __arg1, intptr_t __arg2, intptr_t __arg3, intptr_t __arg4, intptr_t __arg5, int32_t __arg6, uintptr_t __arg7, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(intptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(intptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(intptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(intptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(int32_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(uintptr_t*)(args + __ARG_OFFSET_7__) = __arg7;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vr4(float __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(float*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs0s94(__struct_0__ __arg0, __struct_94__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_0__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_94__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs0u(__struct_0__ __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_0__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs161(__struct_161__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_161__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs162(__struct_162__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_162__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs164(__struct_164__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_164__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs172(__struct_172__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_172__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs181(__struct_181__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_181__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs182(__struct_182__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_182__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs182u(__struct_182__ __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_182__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs21(__struct_21__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_21__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs21i4(__struct_21__ __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_21__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs21s177(__struct_21__ __arg0, __struct_177__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_21__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_177__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs21s21(__struct_21__ __arg0, __struct_21__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_21__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_21__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs21s29(__struct_21__ __arg0, __struct_29__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_21__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_29__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs6(__struct_6__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_6__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs7(__struct_7__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_7__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs77(__struct_77__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_77__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs79(__struct_79__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_79__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vu(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vu1(uint8_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	args[__ARG_OFFSET_0__].u64 = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vu1u1i4(uint8_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	args[__ARG_OFFSET_0__].u64 = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4i4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4i4i4i4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4i8i8u1(uintptr_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int64_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int64_t*)(args + __ARG_OFFSET_3__) = __arg3;
	args[__ARG_OFFSET_4__].u64 = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4s14(uintptr_t __arg0, int32_t __arg1, __struct_14__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_14__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4s15(uintptr_t __arg0, int32_t __arg1, __struct_15__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_15__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4s3(uintptr_t __arg0, int32_t __arg1, __struct_3__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_3__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4s7(uintptr_t __arg0, int32_t __arg1, __struct_7__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4u(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4uu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4uuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui8ui8(uintptr_t __arg0, int64_t __arg1, uintptr_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int64_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuiii4i4u(uintptr_t __arg0, intptr_t __arg1, intptr_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuiiiiiii4u(uintptr_t __arg0, intptr_t __arg1, intptr_t __arg2, intptr_t __arg3, intptr_t __arg4, intptr_t __arg5, intptr_t __arg6, int32_t __arg7, uintptr_t __arg8, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __ARG_OFFSET_8__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;
	constexpr int __ARG_SIZE_8__ = (sizeof(__arg8) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_8__ + __ARG_SIZE_8__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(intptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(intptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(intptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(intptr_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(int32_t*)(args + __ARG_OFFSET_7__) = __arg7;
	*(uintptr_t*)(args + __ARG_OFFSET_8__) = __arg8;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuiiui4(uintptr_t __arg0, intptr_t __arg1, intptr_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vur4r4(uintptr_t __arg0, float __arg1, float __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus0(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus0s94(uintptr_t __arg0, __struct_0__ __arg1, __struct_94__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_94__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus0u(uintptr_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus10(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus11(uintptr_t __arg0, __struct_11__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_11__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus14(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus161(uintptr_t __arg0, __struct_161__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_161__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus162(uintptr_t __arg0, __struct_162__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_162__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus164(uintptr_t __arg0, __struct_164__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_164__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus172(uintptr_t __arg0, __struct_172__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_172__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus181(uintptr_t __arg0, __struct_181__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_181__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus182(uintptr_t __arg0, __struct_182__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_182__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus182u(uintptr_t __arg0, __struct_182__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_182__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus20(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus20u(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus20ui4(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus21(uintptr_t __arg0, __struct_21__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_21__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus21i4(uintptr_t __arg0, __struct_21__ __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_21__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus21s177(uintptr_t __arg0, __struct_21__ __arg1, __struct_177__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_21__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_177__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus21s21(uintptr_t __arg0, __struct_21__ __arg1, __struct_21__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_21__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_21__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus21s29(uintptr_t __arg0, __struct_21__ __arg1, __struct_29__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_21__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_29__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus223u(uintptr_t __arg0, __struct_223__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_223__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus223uu(uintptr_t __arg0, __struct_223__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_223__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus29(uintptr_t __arg0, __struct_29__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_29__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus31(uintptr_t __arg0, __struct_31__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus31s178(uintptr_t __arg0, __struct_31__ __arg1, __struct_178__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_178__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus31s178u(uintptr_t __arg0, __struct_31__ __arg1, __struct_178__ __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_178__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus31uu(uintptr_t __arg0, __struct_31__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus4(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus4u(uintptr_t __arg0, __struct_4__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus5(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus58u1(uintptr_t __arg0, __struct_58__ __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_58__*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus5u(uintptr_t __arg0, __struct_5__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus6(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_6__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus71u(uintptr_t __arg0, __struct_71__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_71__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus71uu(uintptr_t __arg0, __struct_71__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_71__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus77(uintptr_t __arg0, __struct_77__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_77__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus79(uintptr_t __arg0, __struct_79__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_79__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus9(uintptr_t __arg0, __struct_9__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_9__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vutypedbyrefu(uintptr_t __arg0, Il2CppTypedRef __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(Il2CppTypedRef*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu1s166(uintptr_t __arg0, uint8_t __arg1, __struct_166__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	*(__struct_166__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu1u1i4(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuui4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuui4s31(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, __struct_31__ __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_31__*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuui8(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int64_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuiii4i4u(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, intptr_t __arg3, int32_t __arg4, int32_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(intptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuiiui4(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, intptr_t __arg3, uintptr_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(intptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuur8(uintptr_t __arg0, uintptr_t __arg1, double __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(double*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus180i4(uintptr_t __arg0, uintptr_t __arg1, __struct_180__ __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_180__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus180i4s31(uintptr_t __arg0, uintptr_t __arg1, __struct_180__ __arg2, int32_t __arg3, __struct_31__ __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_180__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(__struct_31__*)(args + __ARG_OFFSET_4__) = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus29(uintptr_t __arg0, uintptr_t __arg1, __struct_29__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_29__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus58u1(uintptr_t __arg0, uintptr_t __arg1, __struct_58__ __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_58__*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus6(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_6__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu1s166(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, __struct_166__ __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(__struct_166__*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu1u1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu4(uintptr_t __arg0, uintptr_t __arg1, uint32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uint32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuui4uu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuus58u1(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_58__ __arg3, uint8_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_58__*)(args + __ARG_OFFSET_3__) = __arg3;
	args[__ARG_OFFSET_4__].u64 = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuus6(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_6__ __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_6__*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuu1(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(uintptr_t*)(args + __ARG_OFFSET_7__) = __arg7;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuuuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, uintptr_t __arg8, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __ARG_OFFSET_8__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;
	constexpr int __ARG_SIZE_8__ = (sizeof(__arg8) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_8__ + __ARG_SIZE_8__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(uintptr_t*)(args + __ARG_OFFSET_7__) = __arg7;
	*(uintptr_t*)(args + __ARG_OFFSET_8__) = __arg8;

    Interpreter::Execute(method, args, nullptr);
}


const Native2ManagedMethodInfo hybridclr::interpreter::g_native2managedStub[] = 
{

	{"i1u", (Il2CppMethodPointer)__N2M_i1u},
	{"i1uu", (Il2CppMethodPointer)__N2M_i1uu},
	{"i2u", (Il2CppMethodPointer)__N2M_i2u},
	{"i2uu", (Il2CppMethodPointer)__N2M_i2uu},
	{"i4", (Il2CppMethodPointer)__N2M_i4},
	{"i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4},
	{"i4s14s14", (Il2CppMethodPointer)__N2M_i4s14s14},
	{"i4s7s7", (Il2CppMethodPointer)__N2M_i4s7s7},
	{"i4u", (Il2CppMethodPointer)__N2M_i4u},
	{"i4u8u8", (Il2CppMethodPointer)__N2M_i4u8u8},
	{"i4ui1", (Il2CppMethodPointer)__N2M_i4ui1},
	{"i4ui2", (Il2CppMethodPointer)__N2M_i4ui2},
	{"i4ui4", (Il2CppMethodPointer)__N2M_i4ui4},
	{"i4ui4i4", (Il2CppMethodPointer)__N2M_i4ui4i4},
	{"i4ui4i4i4", (Il2CppMethodPointer)__N2M_i4ui4i4i4},
	{"i4ui8", (Il2CppMethodPointer)__N2M_i4ui8},
	{"i4ur4", (Il2CppMethodPointer)__N2M_i4ur4},
	{"i4ur8", (Il2CppMethodPointer)__N2M_i4ur8},
	{"i4us0", (Il2CppMethodPointer)__N2M_i4us0},
	{"i4us12", (Il2CppMethodPointer)__N2M_i4us12},
	{"i4us12s12", (Il2CppMethodPointer)__N2M_i4us12s12},
	{"i4us14", (Il2CppMethodPointer)__N2M_i4us14},
	{"i4us14s14", (Il2CppMethodPointer)__N2M_i4us14s14},
	{"i4us15", (Il2CppMethodPointer)__N2M_i4us15},
	{"i4us18", (Il2CppMethodPointer)__N2M_i4us18},
	{"i4us19", (Il2CppMethodPointer)__N2M_i4us19},
	{"i4us20", (Il2CppMethodPointer)__N2M_i4us20},
	{"i4us25", (Il2CppMethodPointer)__N2M_i4us25},
	{"i4us27", (Il2CppMethodPointer)__N2M_i4us27},
	{"i4us28", (Il2CppMethodPointer)__N2M_i4us28},
	{"i4us3", (Il2CppMethodPointer)__N2M_i4us3},
	{"i4us4", (Il2CppMethodPointer)__N2M_i4us4},
	{"i4us49", (Il2CppMethodPointer)__N2M_i4us49},
	{"i4us5", (Il2CppMethodPointer)__N2M_i4us5},
	{"i4us6", (Il2CppMethodPointer)__N2M_i4us6},
	{"i4us60", (Il2CppMethodPointer)__N2M_i4us60},
	{"i4us7", (Il2CppMethodPointer)__N2M_i4us7},
	{"i4us7s7", (Il2CppMethodPointer)__N2M_i4us7s7},
	{"i4us93", (Il2CppMethodPointer)__N2M_i4us93},
	{"i4us94", (Il2CppMethodPointer)__N2M_i4us94},
	{"i4uu", (Il2CppMethodPointer)__N2M_i4uu},
	{"i4uu1", (Il2CppMethodPointer)__N2M_i4uu1},
	{"i4uu2", (Il2CppMethodPointer)__N2M_i4uu2},
	{"i4uu4", (Il2CppMethodPointer)__N2M_i4uu4},
	{"i4uu8", (Il2CppMethodPointer)__N2M_i4uu8},
	{"i4uu8u8", (Il2CppMethodPointer)__N2M_i4uu8u8},
	{"i4uui4", (Il2CppMethodPointer)__N2M_i4uui4},
	{"i4uui4i4", (Il2CppMethodPointer)__N2M_i4uui4i4},
	{"i4uui4i4i4", (Il2CppMethodPointer)__N2M_i4uui4i4i4},
	{"i4uui4i4u1", (Il2CppMethodPointer)__N2M_i4uui4i4u1},
	{"i4uui4i4ui4", (Il2CppMethodPointer)__N2M_i4uui4i4ui4},
	{"i4uui4i4ui4i4i4", (Il2CppMethodPointer)__N2M_i4uui4i4ui4i4i4},
	{"i4uui4i4ui4u1", (Il2CppMethodPointer)__N2M_i4uui4i4ui4u1},
	{"i4uui4u1", (Il2CppMethodPointer)__N2M_i4uui4u1},
	{"i4uui4ui4", (Il2CppMethodPointer)__N2M_i4uui4ui4},
	{"i4uui4ui4u1", (Il2CppMethodPointer)__N2M_i4uui4ui4u1},
	{"i4uus12i4i4", (Il2CppMethodPointer)__N2M_i4uus12i4i4},
	{"i4uus14i4i4", (Il2CppMethodPointer)__N2M_i4uus14i4i4},
	{"i4uus4i4i4", (Il2CppMethodPointer)__N2M_i4uus4i4i4},
	{"i4uus5i4i4", (Il2CppMethodPointer)__N2M_i4uus5i4i4},
	{"i4uus6i4i4", (Il2CppMethodPointer)__N2M_i4uus6i4i4},
	{"i4uus7i4i4", (Il2CppMethodPointer)__N2M_i4uus7i4i4},
	{"i4uuu", (Il2CppMethodPointer)__N2M_i4uuu},
	{"i4uuu1i4", (Il2CppMethodPointer)__N2M_i4uuu1i4},
	{"i4uuu1i4i4", (Il2CppMethodPointer)__N2M_i4uuu1i4i4},
	{"i4uuui4", (Il2CppMethodPointer)__N2M_i4uuui4},
	{"i4uuui4i4", (Il2CppMethodPointer)__N2M_i4uuui4i4},
	{"i4uuui4i4i4", (Il2CppMethodPointer)__N2M_i4uuui4i4i4},
	{"i8u", (Il2CppMethodPointer)__N2M_i8u},
	{"i8ui8i4", (Il2CppMethodPointer)__N2M_i8ui8i4},
	{"i8uu", (Il2CppMethodPointer)__N2M_i8uu},
	{"i8uuu", (Il2CppMethodPointer)__N2M_i8uuu},
	{"iuu", (Il2CppMethodPointer)__N2M_iuu},
	{"iuui", (Il2CppMethodPointer)__N2M_iuui},
	{"r4u", (Il2CppMethodPointer)__N2M_r4u},
	{"r4ur4r4", (Il2CppMethodPointer)__N2M_r4ur4r4},
	{"r4uu", (Il2CppMethodPointer)__N2M_r4uu},
	{"r4uur4r4", (Il2CppMethodPointer)__N2M_r4uur4r4},
	{"r8u", (Il2CppMethodPointer)__N2M_r8u},
	{"r8uu", (Il2CppMethodPointer)__N2M_r8uu},
	{"s0u", (Il2CppMethodPointer)__N2M_s0u},
	{"s10u", (Il2CppMethodPointer)__N2M_s10u},
	{"s11u", (Il2CppMethodPointer)__N2M_s11u},
	{"s132u", (Il2CppMethodPointer)__N2M_s132u},
	{"s14u", (Il2CppMethodPointer)__N2M_s14u},
	{"s14ui4", (Il2CppMethodPointer)__N2M_s14ui4},
	{"s15ui4", (Il2CppMethodPointer)__N2M_s15ui4},
	{"s167u", (Il2CppMethodPointer)__N2M_s167u},
	{"s168u", (Il2CppMethodPointer)__N2M_s168u},
	{"s169u", (Il2CppMethodPointer)__N2M_s169u},
	{"s17uu1", (Il2CppMethodPointer)__N2M_s17uu1},
	{"s184", (Il2CppMethodPointer)__N2M_s184},
	{"s184u", (Il2CppMethodPointer)__N2M_s184u},
	{"s18u", (Il2CppMethodPointer)__N2M_s18u},
	{"s18uu", (Il2CppMethodPointer)__N2M_s18uu},
	{"s19u", (Il2CppMethodPointer)__N2M_s19u},
	{"s19ui4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_s19ui4i4i4i4i4i4i4i4},
	{"s19uu", (Il2CppMethodPointer)__N2M_s19uu},
	{"s20u", (Il2CppMethodPointer)__N2M_s20u},
	{"s223u", (Il2CppMethodPointer)__N2M_s223u},
	{"s25u", (Il2CppMethodPointer)__N2M_s25u},
	{"s25us25", (Il2CppMethodPointer)__N2M_s25us25},
	{"s25uu", (Il2CppMethodPointer)__N2M_s25uu},
	{"s28", (Il2CppMethodPointer)__N2M_s28},
	{"s28u", (Il2CppMethodPointer)__N2M_s28u},
	{"s28uu", (Il2CppMethodPointer)__N2M_s28uu},
	{"s30us216s217i", (Il2CppMethodPointer)__N2M_s30us216s217i},
	{"s30uus216s217i", (Il2CppMethodPointer)__N2M_s30uus216s217i},
	{"s31s53u", (Il2CppMethodPointer)__N2M_s31s53u},
	{"s31us53u", (Il2CppMethodPointer)__N2M_s31us53u},
	{"s3u", (Il2CppMethodPointer)__N2M_s3u},
	{"s3ui4", (Il2CppMethodPointer)__N2M_s3ui4},
	{"s42u", (Il2CppMethodPointer)__N2M_s42u},
	{"s43u", (Il2CppMethodPointer)__N2M_s43u},
	{"s44u", (Il2CppMethodPointer)__N2M_s44u},
	{"s4u", (Il2CppMethodPointer)__N2M_s4u},
	{"s50u", (Il2CppMethodPointer)__N2M_s50u},
	{"s53u", (Il2CppMethodPointer)__N2M_s53u},
	{"s58u", (Il2CppMethodPointer)__N2M_s58u},
	{"s5u", (Il2CppMethodPointer)__N2M_s5u},
	{"s6u", (Il2CppMethodPointer)__N2M_s6u},
	{"s6uu", (Il2CppMethodPointer)__N2M_s6uu},
	{"s70u", (Il2CppMethodPointer)__N2M_s70u},
	{"s70ur4i4r4i4", (Il2CppMethodPointer)__N2M_s70ur4i4r4i4},
	{"s70uur4i4r4i4", (Il2CppMethodPointer)__N2M_s70uur4i4r4i4},
	{"s71u", (Il2CppMethodPointer)__N2M_s71u},
	{"s72u", (Il2CppMethodPointer)__N2M_s72u},
	{"s7u", (Il2CppMethodPointer)__N2M_s7u},
	{"s7ui4", (Il2CppMethodPointer)__N2M_s7ui4},
	{"s9u", (Il2CppMethodPointer)__N2M_s9u},
	{"u", (Il2CppMethodPointer)__N2M_u},
	{"u1", (Il2CppMethodPointer)__N2M_u1},
	{"u1i4", (Il2CppMethodPointer)__N2M_u1i4},
	{"u1i4i", (Il2CppMethodPointer)__N2M_u1i4i},
	{"u1s14", (Il2CppMethodPointer)__N2M_u1s14},
	{"u1s7", (Il2CppMethodPointer)__N2M_u1s7},
	{"u1u", (Il2CppMethodPointer)__N2M_u1u},
	{"u1ui", (Il2CppMethodPointer)__N2M_u1ui},
	{"u1ui1", (Il2CppMethodPointer)__N2M_u1ui1},
	{"u1ui2", (Il2CppMethodPointer)__N2M_u1ui2},
	{"u1ui4", (Il2CppMethodPointer)__N2M_u1ui4},
	{"u1ui4i", (Il2CppMethodPointer)__N2M_u1ui4i},
	{"u1ui4i4", (Il2CppMethodPointer)__N2M_u1ui4i4},
	{"u1ui4u", (Il2CppMethodPointer)__N2M_u1ui4u},
	{"u1ui4u1", (Il2CppMethodPointer)__N2M_u1ui4u1},
	{"u1ui8", (Il2CppMethodPointer)__N2M_u1ui8},
	{"u1ur4", (Il2CppMethodPointer)__N2M_u1ur4},
	{"u1ur8", (Il2CppMethodPointer)__N2M_u1ur8},
	{"u1us0us0u", (Il2CppMethodPointer)__N2M_u1us0us0u},
	{"u1us10", (Il2CppMethodPointer)__N2M_u1us10},
	{"u1us11", (Il2CppMethodPointer)__N2M_u1us11},
	{"u1us12s12", (Il2CppMethodPointer)__N2M_u1us12s12},
	{"u1us14", (Il2CppMethodPointer)__N2M_u1us14},
	{"u1us14s14", (Il2CppMethodPointer)__N2M_u1us14s14},
	{"u1us15", (Il2CppMethodPointer)__N2M_u1us15},
	{"u1us18", (Il2CppMethodPointer)__N2M_u1us18},
	{"u1us19", (Il2CppMethodPointer)__N2M_u1us19},
	{"u1us20", (Il2CppMethodPointer)__N2M_u1us20},
	{"u1us20u", (Il2CppMethodPointer)__N2M_u1us20u},
	{"u1us20ui4", (Il2CppMethodPointer)__N2M_u1us20ui4},
	{"u1us21", (Il2CppMethodPointer)__N2M_u1us21},
	{"u1us22", (Il2CppMethodPointer)__N2M_u1us22},
	{"u1us223", (Il2CppMethodPointer)__N2M_u1us223},
	{"u1us23", (Il2CppMethodPointer)__N2M_u1us23},
	{"u1us25", (Il2CppMethodPointer)__N2M_u1us25},
	{"u1us26", (Il2CppMethodPointer)__N2M_u1us26},
	{"u1us27", (Il2CppMethodPointer)__N2M_u1us27},
	{"u1us28", (Il2CppMethodPointer)__N2M_u1us28},
	{"u1us29", (Il2CppMethodPointer)__N2M_u1us29},
	{"u1us3", (Il2CppMethodPointer)__N2M_u1us3},
	{"u1us30", (Il2CppMethodPointer)__N2M_u1us30},
	{"u1us31", (Il2CppMethodPointer)__N2M_u1us31},
	{"u1us4", (Il2CppMethodPointer)__N2M_u1us4},
	{"u1us42", (Il2CppMethodPointer)__N2M_u1us42},
	{"u1us43", (Il2CppMethodPointer)__N2M_u1us43},
	{"u1us44", (Il2CppMethodPointer)__N2M_u1us44},
	{"u1us49", (Il2CppMethodPointer)__N2M_u1us49},
	{"u1us4s4", (Il2CppMethodPointer)__N2M_u1us4s4},
	{"u1us4u", (Il2CppMethodPointer)__N2M_u1us4u},
	{"u1us5", (Il2CppMethodPointer)__N2M_u1us5},
	{"u1us50", (Il2CppMethodPointer)__N2M_u1us50},
	{"u1us53", (Il2CppMethodPointer)__N2M_u1us53},
	{"u1us58", (Il2CppMethodPointer)__N2M_u1us58},
	{"u1us5s5", (Il2CppMethodPointer)__N2M_u1us5s5},
	{"u1us5u", (Il2CppMethodPointer)__N2M_u1us5u},
	{"u1us6", (Il2CppMethodPointer)__N2M_u1us6},
	{"u1us60", (Il2CppMethodPointer)__N2M_u1us60},
	{"u1us61", (Il2CppMethodPointer)__N2M_u1us61},
	{"u1us64", (Il2CppMethodPointer)__N2M_u1us64},
	{"u1us65", (Il2CppMethodPointer)__N2M_u1us65},
	{"u1us66", (Il2CppMethodPointer)__N2M_u1us66},
	{"u1us6s6", (Il2CppMethodPointer)__N2M_u1us6s6},
	{"u1us7", (Il2CppMethodPointer)__N2M_u1us7},
	{"u1us70", (Il2CppMethodPointer)__N2M_u1us70},
	{"u1us71", (Il2CppMethodPointer)__N2M_u1us71},
	{"u1us71uu", (Il2CppMethodPointer)__N2M_u1us71uu},
	{"u1us72", (Il2CppMethodPointer)__N2M_u1us72},
	{"u1us74", (Il2CppMethodPointer)__N2M_u1us74},
	{"u1us77", (Il2CppMethodPointer)__N2M_u1us77},
	{"u1us78", (Il2CppMethodPointer)__N2M_u1us78},
	{"u1us79", (Il2CppMethodPointer)__N2M_u1us79},
	{"u1us7s7", (Il2CppMethodPointer)__N2M_u1us7s7},
	{"u1us9", (Il2CppMethodPointer)__N2M_u1us9},
	{"u1us93", (Il2CppMethodPointer)__N2M_u1us93},
	{"u1us94", (Il2CppMethodPointer)__N2M_u1us94},
	{"u1uu", (Il2CppMethodPointer)__N2M_u1uu},
	{"u1uu1", (Il2CppMethodPointer)__N2M_u1uu1},
	{"u1uu1u1", (Il2CppMethodPointer)__N2M_u1uu1u1},
	{"u1uu2", (Il2CppMethodPointer)__N2M_u1uu2},
	{"u1uu2i4", (Il2CppMethodPointer)__N2M_u1uu2i4},
	{"u1uu2u2i4", (Il2CppMethodPointer)__N2M_u1uu2u2i4},
	{"u1uu4", (Il2CppMethodPointer)__N2M_u1uu4},
	{"u1uu8", (Il2CppMethodPointer)__N2M_u1uu8},
	{"u1uui4", (Il2CppMethodPointer)__N2M_u1uui4},
	{"u1uuu", (Il2CppMethodPointer)__N2M_u1uuu},
	{"u1uuu1", (Il2CppMethodPointer)__N2M_u1uuu1},
	{"u1uuui4", (Il2CppMethodPointer)__N2M_u1uuui4},
	{"u1uuuu", (Il2CppMethodPointer)__N2M_u1uuuu},
	{"u2u", (Il2CppMethodPointer)__N2M_u2u},
	{"u2uu", (Il2CppMethodPointer)__N2M_u2uu},
	{"u2uu2", (Il2CppMethodPointer)__N2M_u2uu2},
	{"u4u", (Il2CppMethodPointer)__N2M_u4u},
	{"u4uu", (Il2CppMethodPointer)__N2M_u4uu},
	{"u8u", (Il2CppMethodPointer)__N2M_u8u},
	{"u8uu", (Il2CppMethodPointer)__N2M_u8uu},
	{"us3", (Il2CppMethodPointer)__N2M_us3},
	{"uu", (Il2CppMethodPointer)__N2M_uu},
	{"uui", (Il2CppMethodPointer)__N2M_uui},
	{"uui4", (Il2CppMethodPointer)__N2M_uui4},
	{"uui4ui4uu", (Il2CppMethodPointer)__N2M_uui4ui4uu},
	{"uui4uu", (Il2CppMethodPointer)__N2M_uui4uu},
	{"uui4uuu", (Il2CppMethodPointer)__N2M_uui4uuu},
	{"uui4uuuu", (Il2CppMethodPointer)__N2M_uui4uuuu},
	{"uui4uuuuuu", (Il2CppMethodPointer)__N2M_uui4uuuuuu},
	{"uui8", (Il2CppMethodPointer)__N2M_uui8},
	{"uus3", (Il2CppMethodPointer)__N2M_uus3},
	{"uus4", (Il2CppMethodPointer)__N2M_uus4},
	{"uus5", (Il2CppMethodPointer)__N2M_uus5},
	{"uus6", (Il2CppMethodPointer)__N2M_uus6},
	{"uuu", (Il2CppMethodPointer)__N2M_uuu},
	{"uuu1", (Il2CppMethodPointer)__N2M_uuu1},
	{"uuui4", (Il2CppMethodPointer)__N2M_uuui4},
	{"uuui4i4", (Il2CppMethodPointer)__N2M_uuui4i4},
	{"uuui4i4uu", (Il2CppMethodPointer)__N2M_uuui4i4uu},
	{"uuui4ui4uu", (Il2CppMethodPointer)__N2M_uuui4ui4uu},
	{"uuui4uuu", (Il2CppMethodPointer)__N2M_uuui4uuu},
	{"uuui4uuuu", (Il2CppMethodPointer)__N2M_uuui4uuuu},
	{"uuui4uuuuuu", (Il2CppMethodPointer)__N2M_uuui4uuuuuu},
	{"uuus6u", (Il2CppMethodPointer)__N2M_uuus6u},
	{"uuuu", (Il2CppMethodPointer)__N2M_uuuu},
	{"uuuu1", (Il2CppMethodPointer)__N2M_uuuu1},
	{"uuuu1u1", (Il2CppMethodPointer)__N2M_uuuu1u1},
	{"uuuui4", (Il2CppMethodPointer)__N2M_uuuui4},
	{"uuuus6u", (Il2CppMethodPointer)__N2M_uuuus6u},
	{"uuuuu", (Il2CppMethodPointer)__N2M_uuuuu},
	{"uuuuu1", (Il2CppMethodPointer)__N2M_uuuuu1},
	{"uuuuuu", (Il2CppMethodPointer)__N2M_uuuuuu},
	{"v", (Il2CppMethodPointer)__N2M_v},
	{"vi", (Il2CppMethodPointer)__N2M_vi},
	{"vi4", (Il2CppMethodPointer)__N2M_vi4},
	{"vi4i4", (Il2CppMethodPointer)__N2M_vi4i4},
	{"vi4i8i8u1", (Il2CppMethodPointer)__N2M_vi4i8i8u1},
	{"vi4u", (Il2CppMethodPointer)__N2M_vi4u},
	{"viiiiiii4u", (Il2CppMethodPointer)__N2M_viiiiiii4u},
	{"vr4", (Il2CppMethodPointer)__N2M_vr4},
	{"vs0s94", (Il2CppMethodPointer)__N2M_vs0s94},
	{"vs0u", (Il2CppMethodPointer)__N2M_vs0u},
	{"vs161", (Il2CppMethodPointer)__N2M_vs161},
	{"vs162", (Il2CppMethodPointer)__N2M_vs162},
	{"vs164", (Il2CppMethodPointer)__N2M_vs164},
	{"vs172", (Il2CppMethodPointer)__N2M_vs172},
	{"vs181", (Il2CppMethodPointer)__N2M_vs181},
	{"vs182", (Il2CppMethodPointer)__N2M_vs182},
	{"vs182u", (Il2CppMethodPointer)__N2M_vs182u},
	{"vs21", (Il2CppMethodPointer)__N2M_vs21},
	{"vs21i4", (Il2CppMethodPointer)__N2M_vs21i4},
	{"vs21s177", (Il2CppMethodPointer)__N2M_vs21s177},
	{"vs21s21", (Il2CppMethodPointer)__N2M_vs21s21},
	{"vs21s29", (Il2CppMethodPointer)__N2M_vs21s29},
	{"vs6", (Il2CppMethodPointer)__N2M_vs6},
	{"vs7", (Il2CppMethodPointer)__N2M_vs7},
	{"vs77", (Il2CppMethodPointer)__N2M_vs77},
	{"vs79", (Il2CppMethodPointer)__N2M_vs79},
	{"vu", (Il2CppMethodPointer)__N2M_vu},
	{"vu1", (Il2CppMethodPointer)__N2M_vu1},
	{"vu1u1i4", (Il2CppMethodPointer)__N2M_vu1u1i4},
	{"vui", (Il2CppMethodPointer)__N2M_vui},
	{"vui2", (Il2CppMethodPointer)__N2M_vui2},
	{"vui4", (Il2CppMethodPointer)__N2M_vui4},
	{"vui4i4", (Il2CppMethodPointer)__N2M_vui4i4},
	{"vui4i4i4", (Il2CppMethodPointer)__N2M_vui4i4i4},
	{"vui4i4i4i4i4", (Il2CppMethodPointer)__N2M_vui4i4i4i4i4},
	{"vui4i8i8u1", (Il2CppMethodPointer)__N2M_vui4i8i8u1},
	{"vui4s14", (Il2CppMethodPointer)__N2M_vui4s14},
	{"vui4s15", (Il2CppMethodPointer)__N2M_vui4s15},
	{"vui4s3", (Il2CppMethodPointer)__N2M_vui4s3},
	{"vui4s7", (Il2CppMethodPointer)__N2M_vui4s7},
	{"vui4u", (Il2CppMethodPointer)__N2M_vui4u},
	{"vui4uu", (Il2CppMethodPointer)__N2M_vui4uu},
	{"vui4uuu", (Il2CppMethodPointer)__N2M_vui4uuu},
	{"vui8", (Il2CppMethodPointer)__N2M_vui8},
	{"vui8ui8", (Il2CppMethodPointer)__N2M_vui8ui8},
	{"vuiii4i4u", (Il2CppMethodPointer)__N2M_vuiii4i4u},
	{"vuiiiiiii4u", (Il2CppMethodPointer)__N2M_vuiiiiiii4u},
	{"vuiiui4", (Il2CppMethodPointer)__N2M_vuiiui4},
	{"vur4", (Il2CppMethodPointer)__N2M_vur4},
	{"vur4r4", (Il2CppMethodPointer)__N2M_vur4r4},
	{"vur8", (Il2CppMethodPointer)__N2M_vur8},
	{"vus0", (Il2CppMethodPointer)__N2M_vus0},
	{"vus0s94", (Il2CppMethodPointer)__N2M_vus0s94},
	{"vus0u", (Il2CppMethodPointer)__N2M_vus0u},
	{"vus10", (Il2CppMethodPointer)__N2M_vus10},
	{"vus11", (Il2CppMethodPointer)__N2M_vus11},
	{"vus14", (Il2CppMethodPointer)__N2M_vus14},
	{"vus15", (Il2CppMethodPointer)__N2M_vus15},
	{"vus161", (Il2CppMethodPointer)__N2M_vus161},
	{"vus162", (Il2CppMethodPointer)__N2M_vus162},
	{"vus164", (Il2CppMethodPointer)__N2M_vus164},
	{"vus172", (Il2CppMethodPointer)__N2M_vus172},
	{"vus181", (Il2CppMethodPointer)__N2M_vus181},
	{"vus182", (Il2CppMethodPointer)__N2M_vus182},
	{"vus182u", (Il2CppMethodPointer)__N2M_vus182u},
	{"vus20", (Il2CppMethodPointer)__N2M_vus20},
	{"vus20u", (Il2CppMethodPointer)__N2M_vus20u},
	{"vus20ui4", (Il2CppMethodPointer)__N2M_vus20ui4},
	{"vus21", (Il2CppMethodPointer)__N2M_vus21},
	{"vus21i4", (Il2CppMethodPointer)__N2M_vus21i4},
	{"vus21s177", (Il2CppMethodPointer)__N2M_vus21s177},
	{"vus21s21", (Il2CppMethodPointer)__N2M_vus21s21},
	{"vus21s29", (Il2CppMethodPointer)__N2M_vus21s29},
	{"vus223u", (Il2CppMethodPointer)__N2M_vus223u},
	{"vus223uu", (Il2CppMethodPointer)__N2M_vus223uu},
	{"vus29", (Il2CppMethodPointer)__N2M_vus29},
	{"vus3", (Il2CppMethodPointer)__N2M_vus3},
	{"vus31", (Il2CppMethodPointer)__N2M_vus31},
	{"vus31s178", (Il2CppMethodPointer)__N2M_vus31s178},
	{"vus31s178u", (Il2CppMethodPointer)__N2M_vus31s178u},
	{"vus31uu", (Il2CppMethodPointer)__N2M_vus31uu},
	{"vus4", (Il2CppMethodPointer)__N2M_vus4},
	{"vus4u", (Il2CppMethodPointer)__N2M_vus4u},
	{"vus5", (Il2CppMethodPointer)__N2M_vus5},
	{"vus58u1", (Il2CppMethodPointer)__N2M_vus58u1},
	{"vus5u", (Il2CppMethodPointer)__N2M_vus5u},
	{"vus6", (Il2CppMethodPointer)__N2M_vus6},
	{"vus7", (Il2CppMethodPointer)__N2M_vus7},
	{"vus71u", (Il2CppMethodPointer)__N2M_vus71u},
	{"vus71uu", (Il2CppMethodPointer)__N2M_vus71uu},
	{"vus77", (Il2CppMethodPointer)__N2M_vus77},
	{"vus79", (Il2CppMethodPointer)__N2M_vus79},
	{"vus9", (Il2CppMethodPointer)__N2M_vus9},
	{"vutypedbyrefu", (Il2CppMethodPointer)__N2M_vutypedbyrefu},
	{"vuu", (Il2CppMethodPointer)__N2M_vuu},
	{"vuu1", (Il2CppMethodPointer)__N2M_vuu1},
	{"vuu1s166", (Il2CppMethodPointer)__N2M_vuu1s166},
	{"vuu1u1i4", (Il2CppMethodPointer)__N2M_vuu1u1i4},
	{"vuu2", (Il2CppMethodPointer)__N2M_vuu2},
	{"vuu4", (Il2CppMethodPointer)__N2M_vuu4},
	{"vuu8", (Il2CppMethodPointer)__N2M_vuu8},
	{"vuui4", (Il2CppMethodPointer)__N2M_vuui4},
	{"vuui4i4", (Il2CppMethodPointer)__N2M_vuui4i4},
	{"vuui4s31", (Il2CppMethodPointer)__N2M_vuui4s31},
	{"vuui8", (Il2CppMethodPointer)__N2M_vuui8},
	{"vuuiii4i4u", (Il2CppMethodPointer)__N2M_vuuiii4i4u},
	{"vuuiiui4", (Il2CppMethodPointer)__N2M_vuuiiui4},
	{"vuur8", (Il2CppMethodPointer)__N2M_vuur8},
	{"vuus180i4", (Il2CppMethodPointer)__N2M_vuus180i4},
	{"vuus180i4s31", (Il2CppMethodPointer)__N2M_vuus180i4s31},
	{"vuus29", (Il2CppMethodPointer)__N2M_vuus29},
	{"vuus58u1", (Il2CppMethodPointer)__N2M_vuus58u1},
	{"vuus6", (Il2CppMethodPointer)__N2M_vuus6},
	{"vuuu", (Il2CppMethodPointer)__N2M_vuuu},
	{"vuuu1", (Il2CppMethodPointer)__N2M_vuuu1},
	{"vuuu1s166", (Il2CppMethodPointer)__N2M_vuuu1s166},
	{"vuuu1u1", (Il2CppMethodPointer)__N2M_vuuu1u1},
	{"vuuu4", (Il2CppMethodPointer)__N2M_vuuu4},
	{"vuuui4", (Il2CppMethodPointer)__N2M_vuuui4},
	{"vuuui4uu", (Il2CppMethodPointer)__N2M_vuuui4uu},
	{"vuuus58u1", (Il2CppMethodPointer)__N2M_vuuus58u1},
	{"vuuus6", (Il2CppMethodPointer)__N2M_vuuus6},
	{"vuuuu", (Il2CppMethodPointer)__N2M_vuuuu},
	{"vuuuu1", (Il2CppMethodPointer)__N2M_vuuuu1},
	{"vuuuuu", (Il2CppMethodPointer)__N2M_vuuuuu},
	{"vuuuuuu", (Il2CppMethodPointer)__N2M_vuuuuuu},
	{"vuuuuuuu", (Il2CppMethodPointer)__N2M_vuuuuuuu},
	{"vuuuuuuuu", (Il2CppMethodPointer)__N2M_vuuuuuuuu},
	{"vuuuuuuuuu", (Il2CppMethodPointer)__N2M_vuuuuuuuuu},
	{nullptr, nullptr},
};

static int8_t __N2M_AdjustorThunk_i1uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int16_t __N2M_AdjustorThunk_i2uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui1(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us14s14(uintptr_t __arg0, __struct_14__ __arg1, __struct_14__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_14__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us19(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_19__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us20(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us25(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_25__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us27(uintptr_t __arg0, __struct_27__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_27__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us28(uintptr_t __arg0, __struct_28__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_28__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us4(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us49(uintptr_t __arg0, __struct_49__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_49__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us5(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us60(uintptr_t __arg0, __struct_60__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_60__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us7s7(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu8u8(uintptr_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uint64_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uui4i4ui4i4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(int32_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(int32_t*)(args + __ARG_OFFSET_7__) = __arg7;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uuui4i4i4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_AdjustorThunk_i8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static intptr_t __N2M_AdjustorThunk_iuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    intptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_AdjustorThunk_r4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static double __N2M_AdjustorThunk_r8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    double ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_14__ __N2M_AdjustorThunk_s14u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_14__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_15__ __N2M_AdjustorThunk_s15ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_15__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_17__ __N2M_AdjustorThunk_s17uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    __struct_17__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_18__ __N2M_AdjustorThunk_s18uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_18__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_19__ __N2M_AdjustorThunk_s19uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_19__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_25__ __N2M_AdjustorThunk_s25u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_25__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_25__ __N2M_AdjustorThunk_s25us25(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_25__*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_25__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_25__ __N2M_AdjustorThunk_s25uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_25__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_3__ __N2M_AdjustorThunk_s3u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_3__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_3__ __N2M_AdjustorThunk_s3ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_3__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_7__ __N2M_AdjustorThunk_s7u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_7__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui1(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us0us0u(uintptr_t __arg0, __struct_0__ __arg1, uintptr_t __arg2, __struct_0__ __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_0__*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us14(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us19(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_19__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us20(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us20ui4(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us21(uintptr_t __arg0, __struct_21__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_21__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us22(uintptr_t __arg0, __struct_22__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_22__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us223(uintptr_t __arg0, __struct_223__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_223__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us23(uintptr_t __arg0, __struct_23__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_23__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us25(uintptr_t __arg0, __struct_25__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_25__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us26(uintptr_t __arg0, __struct_26__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_26__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us27(uintptr_t __arg0, __struct_27__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_27__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us28(uintptr_t __arg0, __struct_28__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_28__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us29(uintptr_t __arg0, __struct_29__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_29__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us30(uintptr_t __arg0, __struct_30__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_30__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us31(uintptr_t __arg0, __struct_31__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us4(uintptr_t __arg0, __struct_4__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us42(uintptr_t __arg0, __struct_42__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_42__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us43(uintptr_t __arg0, __struct_43__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_43__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us44(uintptr_t __arg0, __struct_44__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_44__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us49(uintptr_t __arg0, __struct_49__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_49__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us4s4(uintptr_t __arg0, __struct_4__ __arg1, __struct_4__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_4__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_4__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us5(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us50(uintptr_t __arg0, __struct_50__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_50__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us53(uintptr_t __arg0, __struct_53__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_53__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us58(uintptr_t __arg0, __struct_58__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_58__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us5s5(uintptr_t __arg0, __struct_5__ __arg1, __struct_5__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_5__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us60(uintptr_t __arg0, __struct_60__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_60__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us61(uintptr_t __arg0, __struct_61__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_61__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us64(uintptr_t __arg0, __struct_64__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_64__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us65(uintptr_t __arg0, __struct_65__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_65__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us66(uintptr_t __arg0, __struct_66__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_66__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us70(uintptr_t __arg0, __struct_70__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_70__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us71(uintptr_t __arg0, __struct_71__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_71__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us72(uintptr_t __arg0, __struct_72__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_72__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us74(uintptr_t __arg0, __struct_74__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_74__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us77(uintptr_t __arg0, __struct_77__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_77__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us78(uintptr_t __arg0, __struct_78__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_78__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us79(uintptr_t __arg0, __struct_79__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_79__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us9(uintptr_t __arg0, __struct_9__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_9__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_AdjustorThunk_u2u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_AdjustorThunk_u2uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint32_t __N2M_AdjustorThunk_u4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint64_t __N2M_AdjustorThunk_u8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uu(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uus6(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_6__*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuus6u(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_6__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuus6u(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_6__ __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_6__*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static void __N2M_AdjustorThunk_vu(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4s15(uintptr_t __arg0, int32_t __arg1, __struct_15__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_15__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4s3(uintptr_t __arg0, int32_t __arg1, __struct_3__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_3__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4u(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4uu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4uuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus14(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus20(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus20ui4(uintptr_t __arg0, __struct_20__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus31(uintptr_t __arg0, __struct_31__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus31s178(uintptr_t __arg0, __struct_31__ __arg1, __struct_178__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_178__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus31s178u(uintptr_t __arg0, __struct_31__ __arg1, __struct_178__ __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_178__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus31uu(uintptr_t __arg0, __struct_31__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_31__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuus6(uintptr_t __arg0, uintptr_t __arg1, __struct_6__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_6__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuuu1u1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuuus6(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_6__ __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_6__*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuuuu1(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


const NativeAdjustThunkMethodInfo hybridclr::interpreter::g_adjustThunkStub[] = 
{

	{"i1uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i1uu},
	{"i2uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i2uu},
	{"i4u", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4u},
	{"i4ui1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui1},
	{"i4ui2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui2},
	{"i4ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui4},
	{"i4ui4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui4i4},
	{"i4ui8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui8},
	{"i4ur4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ur4},
	{"i4ur8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ur8},
	{"i4us14s14", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us14s14},
	{"i4us15", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us15},
	{"i4us18", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us18},
	{"i4us19", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us19},
	{"i4us20", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us20},
	{"i4us25", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us25},
	{"i4us27", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us27},
	{"i4us28", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us28},
	{"i4us3", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us3},
	{"i4us4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us4},
	{"i4us49", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us49},
	{"i4us5", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us5},
	{"i4us60", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us60},
	{"i4us7s7", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us7s7},
	{"i4uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu},
	{"i4uu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu1},
	{"i4uu2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu2},
	{"i4uu4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu4},
	{"i4uu8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu8},
	{"i4uu8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu8u8},
	{"i4uui4i4ui4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uui4i4ui4i4i4},
	{"i4uuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uuu},
	{"i4uuui4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uuui4i4i4},
	{"i8uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8uu},
	{"iuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_iuu},
	{"r4uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_r4uu},
	{"r8uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_r8uu},
	{"s14u", (Il2CppMethodPointer)__N2M_AdjustorThunk_s14u},
	{"s15ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_s15ui4},
	{"s17uu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_s17uu1},
	{"s18uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_s18uu},
	{"s19uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_s19uu},
	{"s25u", (Il2CppMethodPointer)__N2M_AdjustorThunk_s25u},
	{"s25us25", (Il2CppMethodPointer)__N2M_AdjustorThunk_s25us25},
	{"s25uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_s25uu},
	{"s3u", (Il2CppMethodPointer)__N2M_AdjustorThunk_s3u},
	{"s3ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_s3ui4},
	{"s7u", (Il2CppMethodPointer)__N2M_AdjustorThunk_s7u},
	{"u1u", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1u},
	{"u1ui", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui},
	{"u1ui1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui1},
	{"u1ui2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui2},
	{"u1ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui4},
	{"u1ui4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui4i4},
	{"u1ui8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui8},
	{"u1ur4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ur4},
	{"u1ur8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ur8},
	{"u1us0us0u", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us0us0u},
	{"u1us14", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us14},
	{"u1us15", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us15},
	{"u1us18", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us18},
	{"u1us19", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us19},
	{"u1us20", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us20},
	{"u1us20ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us20ui4},
	{"u1us21", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us21},
	{"u1us22", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us22},
	{"u1us223", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us223},
	{"u1us23", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us23},
	{"u1us25", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us25},
	{"u1us26", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us26},
	{"u1us27", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us27},
	{"u1us28", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us28},
	{"u1us29", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us29},
	{"u1us3", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us3},
	{"u1us30", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us30},
	{"u1us31", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us31},
	{"u1us4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us4},
	{"u1us42", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us42},
	{"u1us43", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us43},
	{"u1us44", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us44},
	{"u1us49", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us49},
	{"u1us4s4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us4s4},
	{"u1us5", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us5},
	{"u1us50", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us50},
	{"u1us53", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us53},
	{"u1us58", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us58},
	{"u1us5s5", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us5s5},
	{"u1us60", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us60},
	{"u1us61", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us61},
	{"u1us64", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us64},
	{"u1us65", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us65},
	{"u1us66", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us66},
	{"u1us7", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us7},
	{"u1us70", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us70},
	{"u1us71", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us71},
	{"u1us72", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us72},
	{"u1us74", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us74},
	{"u1us77", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us77},
	{"u1us78", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us78},
	{"u1us79", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us79},
	{"u1us9", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us9},
	{"u1uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu},
	{"u1uu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu1},
	{"u1uu2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu2},
	{"u1uu4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu4},
	{"u1uu8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu8},
	{"u1uuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uuu},
	{"u1uuu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uuu1},
	{"u1uuui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uuui4},
	{"u2u", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2u},
	{"u2uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2uu},
	{"u4uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u4uu},
	{"u8uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u8uu},
	{"uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_uu},
	{"uui", (Il2CppMethodPointer)__N2M_AdjustorThunk_uui},
	{"uui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_uui4},
	{"uus6", (Il2CppMethodPointer)__N2M_AdjustorThunk_uus6},
	{"uuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuu},
	{"uuui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuui4},
	{"uuus6u", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuus6u},
	{"uuuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuu},
	{"uuuu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuu1},
	{"uuuus6u", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuus6u},
	{"uuuuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuuu},
	{"vu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vu},
	{"vui", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui},
	{"vui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4},
	{"vui4s15", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4s15},
	{"vui4s3", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4s3},
	{"vui4u", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4u},
	{"vui4uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4uu},
	{"vui4uuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4uuu},
	{"vus14", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus14},
	{"vus15", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus15},
	{"vus20", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus20},
	{"vus20ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus20ui4},
	{"vus3", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus3},
	{"vus31", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus31},
	{"vus31s178", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus31s178},
	{"vus31s178u", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus31s178u},
	{"vus31uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus31uu},
	{"vus7", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus7},
	{"vuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuu},
	{"vuu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuu1},
	{"vuui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuui4},
	{"vuus6", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuus6},
	{"vuuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuuu},
	{"vuuu1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuuu1u1},
	{"vuuus6", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuuus6},
	{"vuuuu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuuuu1},
	{nullptr, nullptr},
};

const ReversePInvokeMethodData hybridclr::interpreter::g_reversePInvokeMethodStub[]
{


    {nullptr, nullptr},
};


const Managed2NativeFunctionPointerCallData hybridclr::interpreter::g_managed2NativeFunctionPointerCallStub[]
{


    {nullptr, nullptr},
};


//!!!}}CODE
