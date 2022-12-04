// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTrackEntry;
struct FSpineEvent;
#ifdef SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h
#error "SpineSkeletonAnimationComponent.generated.h already included, missing '#pragma once' in SpineSkeletonAnimationComponent.h"
#endif
#define SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h

#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpineEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SPINEPLUGIN_API UScriptStruct* StaticStruct<struct FSpineEvent>();

#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_75_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationDisposeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationDisposeDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationDisposeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_74_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEndDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationEndDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_73_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationCompleteDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_72_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationInterruptDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationInterruptDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationInterruptDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_71_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms \
{ \
	UTrackEntry* entry; \
	FSpineEvent evt; \
}; \
static inline void FSpineAnimationEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEventDelegate, UTrackEntry* entry, FSpineEvent evt) \
{ \
	_Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms Parms; \
	Parms.entry=entry; \
	Parms.evt=evt; \
	SpineAnimationEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_70_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationStartDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationStartDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationStartDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA
#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisValidAnimation); \
	DECLARE_FUNCTION(execgetAnimationDuration); \
	DECLARE_FUNCTION(execgetAnimationName); \
	DECLARE_FUNCTION(execSetMixDuration); \
	DECLARE_FUNCTION(execGetMixDuration); \
	DECLARE_FUNCTION(execSetMixTime); \
	DECLARE_FUNCTION(execGetMixTime); \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execGetAlpha); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTrackEnd); \
	DECLARE_FUNCTION(execGetTrackEnd); \
	DECLARE_FUNCTION(execSetTrackTime); \
	DECLARE_FUNCTION(execGetTrackTime); \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execGetDelay); \
	DECLARE_FUNCTION(execSetAnimationLast); \
	DECLARE_FUNCTION(execGetAnimationLast); \
	DECLARE_FUNCTION(execSetAnimationEnd); \
	DECLARE_FUNCTION(execGetAnimationEnd); \
	DECLARE_FUNCTION(execSetAnimationStart); \
	DECLARE_FUNCTION(execGetAnimationStart); \
	DECLARE_FUNCTION(execSetDrawOrderThreshold); \
	DECLARE_FUNCTION(execGetDrawOrderThreshold); \
	DECLARE_FUNCTION(execSetAttachmentThreshold); \
	DECLARE_FUNCTION(execGetAttachmentThreshold); \
	DECLARE_FUNCTION(execSetEventThreshold); \
	DECLARE_FUNCTION(execGetEventThreshold); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execGetTrackIndex);


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisValidAnimation); \
	DECLARE_FUNCTION(execgetAnimationDuration); \
	DECLARE_FUNCTION(execgetAnimationName); \
	DECLARE_FUNCTION(execSetMixDuration); \
	DECLARE_FUNCTION(execGetMixDuration); \
	DECLARE_FUNCTION(execSetMixTime); \
	DECLARE_FUNCTION(execGetMixTime); \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execGetAlpha); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTrackEnd); \
	DECLARE_FUNCTION(execGetTrackEnd); \
	DECLARE_FUNCTION(execSetTrackTime); \
	DECLARE_FUNCTION(execGetTrackTime); \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execGetDelay); \
	DECLARE_FUNCTION(execSetAnimationLast); \
	DECLARE_FUNCTION(execGetAnimationLast); \
	DECLARE_FUNCTION(execSetAnimationEnd); \
	DECLARE_FUNCTION(execGetAnimationEnd); \
	DECLARE_FUNCTION(execSetAnimationStart); \
	DECLARE_FUNCTION(execGetAnimationStart); \
	DECLARE_FUNCTION(execSetDrawOrderThreshold); \
	DECLARE_FUNCTION(execGetDrawOrderThreshold); \
	DECLARE_FUNCTION(execSetAttachmentThreshold); \
	DECLARE_FUNCTION(execGetAttachmentThreshold); \
	DECLARE_FUNCTION(execSetEventThreshold); \
	DECLARE_FUNCTION(execGetEventThreshold); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execGetTrackIndex);


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrackEntry(); \
	friend struct Z_Construct_UClass_UTrackEntry_Statics; \
public: \
	DECLARE_CLASS(UTrackEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UTrackEntry)


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUTrackEntry(); \
	friend struct Z_Construct_UClass_UTrackEntry_Statics; \
public: \
	DECLARE_CLASS(UTrackEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UTrackEntry)


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackEntry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackEntry(UTrackEntry&&); \
	NO_API UTrackEntry(const UTrackEntry&); \
public:


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackEntry(UTrackEntry&&); \
	NO_API UTrackEntry(const UTrackEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTrackEntry)


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_PRIVATE_PROPERTY_OFFSET
#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_PROLOG
#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_PRIVATE_PROPERTY_OFFSET \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_PRIVATE_PROPERTY_OFFSET \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS_NO_PURE_DECLS \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class UTrackEntry>();

#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_SPARSE_DATA
#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearTrack); \
	DECLARE_FUNCTION(execClearTracks); \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execAddEmptyAnimation); \
	DECLARE_FUNCTION(execSetEmptyAnimation); \
	DECLARE_FUNCTION(execAddAnimation); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execSetAutoPlay);


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearTrack); \
	DECLARE_FUNCTION(execClearTracks); \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execAddEmptyAnimation); \
	DECLARE_FUNCTION(execSetEmptyAnimation); \
	DECLARE_FUNCTION(execAddAnimation); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execSetAutoPlay);


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineSkeletonAnimationComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonAnimationComponent, USpineSkeletonComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonAnimationComponent)


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS \
private: \
	static void StaticRegisterNativesUSpineSkeletonAnimationComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonAnimationComponent, USpineSkeletonComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonAnimationComponent)


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineSkeletonAnimationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineSkeletonAnimationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonAnimationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonAnimationComponent(USpineSkeletonAnimationComponent&&); \
	NO_API USpineSkeletonAnimationComponent(const USpineSkeletonAnimationComponent&); \
public:


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonAnimationComponent(USpineSkeletonAnimationComponent&&); \
	NO_API USpineSkeletonAnimationComponent(const USpineSkeletonAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineSkeletonAnimationComponent)


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__trackEntries() { return STRUCT_OFFSET(USpineSkeletonAnimationComponent, trackEntries); } \
	FORCEINLINE static uint32 __PPO__bAutoPlaying() { return STRUCT_OFFSET(USpineSkeletonAnimationComponent, bAutoPlaying); }


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_220_PROLOG
#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_PRIVATE_PROPERTY_OFFSET \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_SPARSE_DATA \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_PRIVATE_PROPERTY_OFFSET \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_SPARSE_DATA \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS_NO_PURE_DECLS \
	spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineSkeletonAnimationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID spine_ue4_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
