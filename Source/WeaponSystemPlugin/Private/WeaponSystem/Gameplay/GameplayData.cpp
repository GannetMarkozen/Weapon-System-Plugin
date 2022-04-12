
#include "WeaponSystem/Gameplay/GameplayData.h"

/*
bool FDataContainer::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	uint8 NumData;
	if(Ar.IsSaving())
	{
		UE_CLOG(Data.Num() > MAX_uint8, LogTemp, Warning, TEXT("Too much data to net serialize. Number of data members == %d, clamping range to %d"), Data.Num(), MAX_uint8);
		NumData = FMath::Min<int32>(Data.Num(), MAX_uint8);
	}

	Ar << NumData;

	for(const FDataStruct& DataStruct : Data)
	{
		
	}
}

void FDataContainer::AddData(const void* Data, UScriptStruct* Struct)
{
	
}
*/

