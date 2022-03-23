
#include "WeaponSystem/Weapons/WeaponScript.h"
#include "WeaponSystem/Weapons/WeaponScriptBase.h"


void UWeaponScript::BeginPlay()
{
	Super::BeginPlay();
	OwningWeapon = Cast<AWeapon>(OwningWeaponBase);
	checkf(OwningWeapon != nullptr, TEXT("UWeaponScript::BeginPlay OwningWeapon == NULL. The owning weapon either does not derive from AWeapon or there is no weapon outer"));
}
