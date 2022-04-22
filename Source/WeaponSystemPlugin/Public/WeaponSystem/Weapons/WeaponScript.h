
#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "WeaponSystem/Weapons/WeaponScriptBase.h"
#include "WeaponScript.generated.h"

UENUM(BlueprintType)
enum class EInputBinding : uint8
{
	PrimaryFire				UMETA(DisplayName = "Primary-Fire"),
	SecondaryFire			UMETA(DisplayName = "Secondary-Fire"),
	Reload,
	Interact,
	Inspect,
	Jump,
	CycleSights				UMETA(DisplayName = "Cycle-Sights"),
};


// Initializes the OwningWeapon as our weapon class (AWeapon).
UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API UWeaponScript : public UWeaponScriptBase
{
	GENERATED_BODY()
public:
	UWeaponScript() = default;

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadOnly, Category = "Script")
	class AWeapon* OwningWeapon;

	// Returns the OwningWeapon's OwningCharacter if it is valid (may be invalid if owner of inventory possessing us is not a character)
	UFUNCTION(BlueprintPure, Category = "Script")
	FORCEINLINE class AShooterCharacterBase* GetOwningCharacter() const { return OwningWeapon->GetOwningCharacter(); }
};