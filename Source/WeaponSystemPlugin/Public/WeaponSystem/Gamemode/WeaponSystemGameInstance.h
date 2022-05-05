// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "WeaponSystemGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class WEAPONSYSTEMPLUGIN_API UWeaponSystemGameInstance : public UGameInstance
{
	GENERATED_BODY()
protected:
	virtual void HandleGameNetControlMessage(UNetConnection* Connection, uint8 MessageByte, const FString& MessageStr) override;

public:
	FORCEINLINE bool HasAuthority() const { return GetWorld() && GetWorld()->GetNetMode() <= NM_ListenServer; }
};

namespace NetMessage
{
	/*static constexpr uint8 Server_LocalPredictedEffect = 0;
	static constexpr uint8 Client_LocalPredictedEffect_Success = 1;
	static constexpr uint8 Client_LocalPredictedEffect_Fail = 2;*/
	enum
	{
		Server_LocalPredictedEffect = 0,
		Client_LocalPredictedEffect_Success = 1,
		Client_LocalPredictedEffect_Fail = 2,
	};
}