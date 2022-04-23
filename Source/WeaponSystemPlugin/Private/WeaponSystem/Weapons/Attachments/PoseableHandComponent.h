
#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponSystem/Globals.h"
#include "PoseableHandComponent.generated.h"



UENUM(BlueprintType)
enum class ELateralityMod : uint8
{
	Left, Right, Both
};


UCLASS(ClassGroup = (Custom), Meta = (BlueprintSpawnableComponent), HideCategories = ("Component Tick", "Events", "Physics", "Lod", "Asset User Data", "Collision"))
class WEAPONSYSTEMPLUGIN_API UPoseableHandComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPoseableHandComponent();

	// Pose snapshot shared amongst all instances of the poseable hand component
	TSharedPtr<FPoseSnapshot> CachedPoseSnapshot = nullptr;

	// Returns an empty pose if invalid
	UFUNCTION(BlueprintPure, Category = "Visualization|Animation")
	const FORCEINLINE FPoseSnapshot& GetCachedPoseSnapshot() const
	{
		if(CachedPoseSnapshot.IsValid())
			return *CachedPoseSnapshot;
		return UWeaponSystemFunctionLibrary::EmptyPose;
	}

	UFUNCTION(BlueprintPure, Category = "Visualization|Animation")
	FORCEINLINE bool HasValidCachedPoseSnapshot() const { return CachedPoseSnapshot.IsValid(); }
	
#if WITH_EDITORONLY_DATA
protected:	
	virtual void BeginPlay() override;
	virtual void OnRegister() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

	UPROPERTY(EditAnywhere, Meta = (EditCondition = "bShowVisualizationMesh"), Category = "Visualization")
	class USkeletalMesh* VisualizationSkeletalMesh;

	UPROPERTY(EditAnywhere, Category = "Visualization")
	bool bShowVisualizationMesh = true;
	
	UPROPERTY(EditAnywhere, Category = "Visualization")
	FTransform VisualizationTransform = FTransform(FRotator(10.f, -10.f, 90.f));

	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Mesh Animation Pose"), Category = "Visualization")
	class UAnimSequence* MeshPose;

	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Time to Derive Mesh-Pose From"), Category = "Visualization")
	float Time = 0.f;

	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Mesh Pose Affects Root Visualization"), Category = "Visualization")
	bool bPoseAffectsRoot = false;

	// Change bone names suffixes. Like on mannequin going from hand_l to hand_r. This is the suffix we want to detect and change
	UPROPERTY(EditAnywhere, Category = "Visualization|Animation")
	FString RightHandSuffix = "_r";

	// Change bone names suffixes. Like on mannequin going from hand_l to hand_r. This is the suffix we want to change to
	UPROPERTY(EditAnywhere, Category = "Visualization|Animation")
	FString LeftHandSuffix = "_l";

	// The laterality of the hand to derive the hand pose from
	UPROPERTY(EditAnywhere, Category = "Visualization|Animation")
	ELaterality ExtractPoseLaterality = ELaterality::Left;

	// Need to know the laterality of the visualizer to do custom calculations for it
	UPROPERTY(EditAnywhere, Category = "Visualization|Animation")
	ELaterality VisualizerLaterality = ELaterality::Right;

	// Whether or not to create a pose snapshot from this component that can be accessed later on
	UPROPERTY(EditAnywhere, Category = "Visualization|Animation")
	bool bCachePose = true;

	// The hand we want to modify
	UPROPERTY(EditAnywhere, Meta = (EditCondition = "bCachePose"), Category = "Visualization|Animation")
	ELateralityMod HandToModify = ELateralityMod::Left;

	UPROPERTY(EditAnywhere, Meta = (EditCondition = "bCachePose"), Category = "Visualization|Animation")
	class USkeleton* TargetSkeleton;

	virtual void SetMeshPose();

	// The visualization mesh
	class UPoseableMeshComponent* PoseableMeshComp = nullptr;

#endif// WITH_EDITORONLY_DATA	
};