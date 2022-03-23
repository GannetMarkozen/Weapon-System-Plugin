// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PoseableMeshComponent.h"
#include "UObject/Object.h"
#include "VisualizationSceneComponent.generated.h"

/**
 * 
*/
UCLASS(ClassGroup = (Custom), Meta = (BlueprintSpawnableComponent), HideCategories = ("Component Tick", "Events", "Physics", "Lod", "Asset User Data", "Collision"))
class WEAPONSYSTEMPLUGIN_API UVisualizationSceneComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UVisualizationSceneComponent()
	{
		PrimaryComponentTick.bCanEverTick = false;
	}

#if WITH_EDITORONLY_DATA
	
protected:
	virtual void BeginPlay() override;
	virtual void OnRegister() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
	
	UPROPERTY(EditAnywhere, Meta = (EditCondition = "VisualizationSkeletalMesh == nullptr && bShowVisualizationMesh"), Category = "Visualization")
	class UStaticMesh* VisualizationStaticMesh;

	UPROPERTY(EditAnywhere, Meta = (EditCondition = "VisualizationStaticMesh == nullptr && bShowVisualizationMesh"), Category = "Visualization")
	class USkeletalMesh* VisualizationSkeletalMesh;
	
	UPROPERTY(EditAnywhere, Category = "Visualization")
	bool bShowVisualizationMesh = true;

	UPROPERTY(EditAnywhere, Category = "Visualization")
	FTransform VisualizationTransform;
	
	// Don't want this pointer being garbage collected because it does weird things
	// in the properties editor where it nulls this while the mesh still exists.
	class UStaticMeshComponent* StaticMeshComp = nullptr;
	class USkeletalMeshComponent* SkeletalMeshComp = nullptr;
	
#endif// WITH_EDITORONLY_DATA

public:
	// Sets visualization mesh. Only does anything in editor only builds
	FORCEINLINE void SetDefaultStaticMesh(class UStaticMesh* Mesh)
	{
#if WITH_EDITORONLY_DATA
		if(!VisualizationSkeletalMesh)
			VisualizationStaticMesh = Mesh;
#endif// WITH_EDITORONLY_DATA
	}

	// Sets visualization mesh. Only does anything in editor only builds
	FORCEINLINE void SetDefaultSkeletalMesh(class USkeletalMesh* Mesh)
	{
#if WITH_EDITORONLY_DATA
		if(!VisualizationStaticMesh)
			VisualizationSkeletalMesh = Mesh;
#endif// WITH_EDITORONLY_DATA
	}
};
