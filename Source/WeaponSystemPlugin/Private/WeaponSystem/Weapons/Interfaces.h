
#pragma once

#include "CoreMinimal.h"
#include "Interfaces.generated.h"

UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

class WEAPONSYSTEMPLUGIN_API IItemInterface
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Interface")
	class UTexture2D* GetThumbnail() const;
	virtual FORCEINLINE class UTexture2D* GetThumbnail_Implementation() const { return nullptr; }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Interface")
	FText GetDisplayName() const;
	virtual FORCEINLINE FText GetDisplayName_Implementation() const { return FText(); }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Interface")
	FText GetDescription() const;
	virtual FORCEINLINE FText GetDescription_Implementation() const { return FText(); }
};


UINTERFACE(MinimalAPI)
class UWeaponAttachmentWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

class WEAPONSYSTEMPLUGIN_API IWeaponAttachmentWidgetInterface
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon Attachment Widget Interface")
	void WidgetConstructed(class UWeaponAttachmentPoint* AttachmentPoint);
	virtual FORCEINLINE void WidgetConstructed_Implementation(class UWeaponAttachmentPoint* AttachmentPoint) {}
};














