#pragma once


// Going to have to expand this macro in the header
// for the UE build tool to actually see the UPROPERTY
// specifieres. This macro should be wrapped around
// #if WITH_EDITORONLY_DATA
#define DECLARE_STATIC_MESH_VISUALIZER(Name)\
	class UStaticMeshComponent* Name##Comp = nullptr;\
	UPROPERTY(EditDefaultsOnly, Category = "Configurations|Visualizer")\
	bool bShow##Name = false;\
	UPROPERTY(EditDefaultsOnly, Meta = (EditCondition = bShow##Name), Category = "Configurations|Visualizer")\
	class UStaticMesh* Name##Mesh;

// Helper macro to declare the construction of the static mesh visualizer component.
// Extra parameters to define more construction logic. This should be declared in
// the OnRegister function. This macro should be wrapped around
// #if WITH_EDITORONLY_DATA.
#define STATIC_MESH_VISUALIZER_COMPONENT_IMPLEMENTATION(Name, ...)\
if(!Name##Comp)\
	{\
		if(bShow##Name)\
		{\
			if(AActor* __OwningActor = GetOwner())\
			{\
				Name##Comp = NewObject<UStaticMeshComponent>(__OwningActor, NAME_None, RF_Transactional | RF_TextExportTransient);\
				if(Name##Comp)\
				{\
					UStaticMesh* const __CustomMesh(Name##Mesh ? Name##Mesh : LoadObject<UStaticMesh>(nullptr, TEXT("/Niagara/DefaultAssets/S_Gnomon.S_Gnomon")));\
					Name##Comp->SetupAttachment(this);\
					Name##Comp->SetStaticMesh(__CustomMesh);\
					Name##Comp->SetUsingAbsoluteScale(true);\
					Name##Comp->SetIsVisualizationComponent(true);\
					Name##Comp->SetCastShadow(false);\
					Name##Comp->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);\
					Name##Comp->CreationMethod = EComponentCreationMethod::Instance;\
					Name##Comp->SetComponentTickEnabled(false);\
					Name##Comp->SetHiddenInGame(true);\
					__VA_ARGS__\
					Name##Comp->RegisterComponentWithWorld(__OwningActor->GetWorld());\
				}\
			}\
		}\
	}\
	else if(!bShow##Name)\
	{\
		Name##Comp->DestroyComponent();\
		Name##Comp = nullptr;\
	}

#define STATIC_MESH_VISUALIZER_ACTOR_ATTACH_POINT_IMPLEMENTATION(Name, AttachPoint, ...)\
	if(!Name##Comp)\
	{\
		if(bShow##Name)\
		{\
			Name##Comp = NewObject<UStaticMeshComponent>(this, NAME_None, RF_Transactional | RF_TextExportTransient);\
			if(Name##Comp)\
			{\
				UStaticMesh* const __CustomMesh(Name##Mesh ? Name##Mesh : LoadObject<UStaticMesh>(nullptr, TEXT("/Niagara/DefaultAssets/S_Gnomon.S_Gnomon")));\
				Name##Comp->SetupAttachment(AttachPoint);\
				Name##Comp->SetStaticMesh(__CustomMesh);\
				Name##Comp->SetUsingAbsoluteScale(true);\
				Name##Comp->SetIsVisualizationComponent(true);\
				Name##Comp->SetCastShadow(false);\
				Name##Comp->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);\
				Name##Comp->CreationMethod = EComponentCreationMethod::Instance;\
				Name##Comp->SetComponentTickEnabled(false);\
				Name##Comp->SetHiddenInGame(true);\
				__VA_ARGS__\
				Name##Comp->RegisterComponentWithWorld(GetWorld());\
			}\
		}\
	}\
	else if(!bShow##Name)\
	{\
		Name##Comp->DestroyComponent();\
		Name##Comp = nullptr;\
	}

// Creates the specified visualizer component and attaches it to this actor's root component. 2nd argument are custom construction parameters
#define STATIC_MESH_VISUALIZER_ACTOR_IMPLEMENTATION(Name, ...) STATIC_MESH_VISUALIZER_ACTOR_ATTACH_POINT_IMPLEMENTATION(Name, RootComponent, __VA_ARGS__)