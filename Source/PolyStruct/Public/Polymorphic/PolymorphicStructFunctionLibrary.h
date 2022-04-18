// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolyStruct.h"
#include "Kismet/KismetArrayLibrary.h"
#include "PolymorphicStructFunctionLibrary.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EStructCastPin : uint8
{
	Success = true,
	Fail = false,
};

UCLASS(Meta = (DisplayName = "Polymorphic Struct Function Library"))
class POLYSTRUCT_API UPolyStructFunctionLibrary final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
protected:
	FORCEINLINE static FPolyStruct& GetPolyStruct(FFrame& Stack)
	{
		Stack.StepCompiledIn<FStructProperty>(nullptr);
		return *(FPolyStruct*)Stack.MostRecentPropertyAddress;
	}
	FORCEINLINE static FPolyStructHandle& GetPolyStructHandle(FFrame& Stack)
	{
		Stack.StepCompiledIn<FStructProperty>(nullptr);
		return *(FPolyStructHandle*)Stack.MostRecentPropertyAddress;
	}
	FORCEINLINE static EStructCastPin& GetStructCastPin(FFrame& Stack)
	{
		Stack.StepCompiledIn<FByteProperty>(nullptr);
		return *(EStructCastPin*)Stack.MostRecentPropertyAddress;
	}
	FORCEINLINE static void GetCustomStructParam(FFrame& Stack, void*& OutStruct, FStructProperty*& OutStructProp)
	{
		Stack.StepCompiledIn<FStructProperty>(nullptr);
		OutStruct = Stack.MostRecentPropertyAddress;
		OutStructProp = CastField<FStructProperty>(Stack.MostRecentProperty);
	}
	FORCEINLINE static bool ValidateCustomStructParam(FFrame& Stack, const FStructProperty* StructProp)
	{
		if(StructProp) return true;
		UE_LOG(LogTemp, Error, TEXT("Custom struct parameter is invalid. Must be a valid struct property"));
		Stack.bArrayContextFailed = true;
		return false;
	}
	
public:
	// Constructs and initializes Polymorphic Struct with the Struct parameter
	UFUNCTION(BlueprintPure, CustomThunk, Meta = (CustomStructureParam = "Struct", DisplayName = "Make PolyStruct"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void MakePolyStruct(UPARAM(DisplayName=">>") const int32& Struct, FPolyStruct& PolyStruct);
	static void execMakePolyStruct(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		void* Struct; FStructProperty* StructProp;
		GetCustomStructParam(Stack, Struct, StructProp);
		FPolyStruct& OutPolyStruct = GetPolyStruct(Stack);
		P_FINISH;
		if(!ValidateCustomStructParam(Stack, StructProp)) return;
		P_NATIVE_BEGIN
		OutPolyStruct.SetStruct(Struct, StructProp->Struct);
		P_NATIVE_END
	}

	// Extracts the data into a struct variable. Avoids copying
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "OutStruct", ExpandEnumAsExecs = "OutPin", CompactNodeTitle = "EXTRACT"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void ExtractStruct(const FPolyStruct& PolyStruct, UPARAM(ref) int32& OutStruct, EStructCastPin& OutPin) {}
	static void execExtractStruct(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		const FPolyStruct& PolyStruct = GetPolyStruct(Stack);
		void* OutStruct; FStructProperty* OutStructProp;
		GetCustomStructParam(Stack, OutStruct, OutStructProp);
		EStructCastPin& OutPin = GetStructCastPin(Stack);
		P_FINISH
		if(!ValidateCustomStructParam(Stack, OutStructProp))
		{
			OutPin = EStructCastPin::Fail;
			return;
		}
		P_NATIVE_BEGIN
		OutPin = PolyStruct.ExtractStruct(OutStruct, OutStructProp->Struct) ? EStructCastPin::Success : EStructCastPin::Fail;
		P_NATIVE_END
	}

	// Ensures the OutStruct parameter will be a valid cast and then extracts the data into the output.
	// Not a true cast as the memory is being copied but this syntactically may make more sense than "Extract"
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "OutStruct", ExpandEnumAsExecs = "OutPin", DisplayName = "Cast (copy)", CompactNodeTitle = "CAST"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void CastCopy(const FPolyStruct& PolyStruct, int32& OutStruct, EStructCastPin& OutPin);
	static FORCEINLINE void execCastCopy(UObject* Context, FFrame& Stack, void* const RESULT_PARAM) { execExtractStruct(Context, Stack, RESULT_PARAM); }
	
	// Empties the Polymorphic Struct then copies the Struct parameter's values into the Polymorphic Struct
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Struct", CompactNodeTitle = "SET"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void SetPolyStruct(UPARAM(ref) FPolyStruct& PolyStruct, const int32& Struct);
	static void execSetPolyStruct(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		FPolyStruct& PolyStruct = GetPolyStruct(Stack);
		void* Struct; FStructProperty* StructProp;
		GetCustomStructParam(Stack, Struct, StructProp);
		P_FINISH
		if(!ValidateCustomStructParam(Stack, StructProp)) return;
		P_NATIVE_BEGIN
		PolyStruct.SetStruct(Struct, StructProp->Struct);
		P_NATIVE_END
	}

	// Empties and re-initializes as the passed in Struct Type
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "SET AS"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void SetAs(UPARAM(ref) FPolyStruct& PolyStruct, const UScriptStruct* StructType) { PolyStruct.SetStruct(StructType); }

	// Makes a Polymorphic Struct and initializes it as the Struct Type
	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Make PolyStruct As"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void MakePolyStructAndInitializeAs(const UScriptStruct* StructType, FPolyStruct& PolyStruct) { PolyStruct.SetStruct(StructType); }

	
	// Implicit Polymorphic Struct to Struct Type conversion
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE UScriptStruct* Conv_PolyStructToScriptStruct(const FPolyStruct& PolyStruct) { return PolyStruct.GetScriptStruct(); }

	// Implicit Polymorphic Struct to type name conversion
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE FName Conv_PolyStructToName(const FPolyStruct& PolyStruct) { return PolyStruct.IsValid() ? PolyStruct.GetScriptStruct()->GetFName() : NAME_None; }

	// Implicit Polymorphic Struct to type string conversion
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE FString Conv_PolyStructToString(const FPolyStruct& PolyStruct) { return PolyStruct.IsValid() ? PolyStruct.GetScriptStruct()->GetName() : FString(); }

	// Implicit Polymorphic Struct "Is Valid" conversion
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool Conv_PolyStructToBool(const FPolyStruct& PolyStruct) { return PolyStruct.IsValid(); }
	

	// Empties the data and invalidates the struct
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "INVALIDATE"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void Invalidate(UPARAM(ref) FPolyStruct& PolyStruct) { PolyStruct.Empty(); }

	// Whether or not the Polymorphic Struct contains any data
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "IS VALID"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool IsValid(const FPolyStruct& PolyStruct) { return PolyStruct.IsValid(); }

	// Whether or not the Polymorphic Struct contains any data
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "IS VALID", ExpandEnumAsExecs = "OutPin", DisplayName = "Is Valid (execs)"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void IsValidWithExecs(const FPolyStruct& PolyStruct, EStructCastPin& OutPin) { OutPin = PolyStruct.IsValid() ? EStructCastPin::Success : EStructCastPin::Fail; }

	// Whether the Polymorphic Struct's data is this type
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "IS A"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool IsA(const FPolyStruct& PolyStruct, const UScriptStruct* StructType) { return PolyStruct.IsA(StructType); }

	// Whether the Polymorphic Struct's data is this type
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "IS A", ExpandEnumAsExecs = "OutPin", DisplayName = "Is A (execs)"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void IsAWithExecs(const FPolyStruct& PolyStruct, const UScriptStruct* StructType, EStructCastPin& OutPin) { OutPin = PolyStruct.IsA(StructType) ? EStructCastPin::Success : EStructCastPin::Fail; }
	
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "TYPE"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE UScriptStruct* GetType(const FPolyStruct& PolyStruct) { return PolyStruct.GetScriptStruct(); }

	// Gets the total size of the struct the Polymorphic Struct contains. 0 if uninitialized
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "SIZE"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE int32 GetStructSize(const FPolyStruct& PolyStruct) { return PolyStruct.GetSize(); }

	// Returns whether the types are the same
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "=="), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool Equals(const FPolyStruct& A, const FPolyStruct& B) { return A == B; }

	// Returns whether the types are not the same
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "!=", DisplayName = "Equals NOT"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool EqualsNOT(const FPolyStruct& A, const FPolyStruct& B) { return A != B; }

	// Implicit conversion to a Poly Struct Handle that adds this poly struct to the array
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE FPolyStructHandle Conv_PolyStructToPolyStructHandle(const FPolyStruct& PolyStruct) { return FPolyStructHandle(PolyStruct); }
	

	// Makes a Poly Struct Container and initializes it with an array of Poly Structs
	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Make PolyStructHandle"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void MakePolyStructContainer(UPARAM(DisplayName=">>") const TArray<FPolyStruct>& PolyStructs, FPolyStructHandle& PolyStructHandle) { PolyStructHandle = PolyStructs; }

	// Converts the Struct parameter to a Poly Struct and adds it to the Poly Struct Handle array
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Struct", CompactNodeTitle = "ADD", DisplayName = "Add (struct)"), Category = "Weapon System Function Library|Polymorphic Struct")
	static int32 AddStruct(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const int32& Struct);
	static void execAddStruct(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		FPolyStructHandle& Handle = GetPolyStructHandle(Stack);
		void* Struct; FStructProperty* StructProp;
		GetCustomStructParam(Stack, Struct, StructProp);
		P_FINISH
		if(!ValidateCustomStructParam(Stack, StructProp))
		{
			*(int32*)RESULT_PARAM = INDEX_NONE;
			return;
		}
		P_NATIVE_BEGIN
		*(int32*)RESULT_PARAM = Handle.Add(Struct, StructProp->Struct);
		P_NATIVE_END
	}

	// Adds a Poly Struct to the array
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "ADD"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE int32 Add(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const FPolyStruct& PolyStruct) { return PolyStructHandle.Add(PolyStruct); }

	// Appends Poly Structs to the array
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "APPEND"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void Append(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const TArray<FPolyStruct>& PolyStructs) { PolyStructHandle.Append(PolyStructs); }

	// Gets the Poly Struct at the given index and attempts to extract the data into the Out Struct parameter
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "OutStruct", ExpandEnumAsExecs = "OutPin", CompactNodeTitle = "EXTRACT AT"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void ExtractAt(const FPolyStructHandle& PolyStructHandle, UPARAM(ref) int32& OutStruct, const int32 Index, EStructCastPin& OutPin);
	static void execExtractAt(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		const FPolyStructHandle& Handle = GetPolyStructHandle(Stack);
		void* Struct; FStructProperty* StructProp;
		GetCustomStructParam(Stack, Struct, StructProp);
		int32 Index;
		Stack.StepCompiledIn<FIntProperty>(&Index);
		EStructCastPin& OutPin = GetStructCastPin(Stack);
		P_FINISH
		if(!ValidateCustomStructParam(Stack, StructProp))
		{
			OutPin = EStructCastPin::Fail;
			return;
		}
		P_NATIVE_BEGIN
		OutPin = Handle.ExtractStructAt(Struct, StructProp->Struct, Index) ? EStructCastPin::Success : EStructCastPin::Fail;
		P_NATIVE_END
	}

	// Gets the Poly Struct at the given index and attempts to cast it into the desired type
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "OutStruct", ExpandEnumAsExecs = "OutPin", CompactNodeTitle = "CAST AT"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void CastAt(const FPolyStructHandle& PolyStructHandle, int32& OutStruct, const int32 Index, EStructCastPin& OutPin);
	static FORCEINLINE void execCastAt(UObject* Context, FFrame& Stack, void* const RESULT_PARAM) { execExtractAt(Context, Stack, RESULT_PARAM); }

	// Attempts to extract each Poly Struct and add to the passed in array. Success if extracted any. Use sparingly to avoid casting and copying
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (ArrayParm = "OutArray", ExpandEnumAsExecs = "OutPin", CompactNodeTitle = "EXTRACT ARRAY"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void ExtractArray(const FPolyStructHandle& PolyStructHandle, UPARAM(ref) TArray<int32>& OutArray, EStructCastPin& OutPin);
	static void execExtractArray(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		const FPolyStructHandle& Handle = GetPolyStructHandle(Stack);
		Stack.StepCompiledIn<FArrayProperty>(nullptr);
		const void* OutArrayPtr = Stack.MostRecentPropertyAddress;
		const auto* ArrProp = CastField<FArrayProperty>(Stack.MostRecentProperty);
		EStructCastPin& OutPin = GetStructCastPin(Stack);
		P_FINISH
		if(!ArrProp || !ArrProp->Inner->IsA<FStructProperty>())
		{
			UE_LOG(LogTemp, Error, TEXT("Out Array parameter is invalid. Out Array must be a valid array property containing a valid struct property"));
			Stack.bArrayContextFailed = true;
			OutPin = EStructCastPin::Fail;
			return;
		}
		P_NATIVE_BEGIN
		OutPin = EStructCastPin::Fail;
		FScriptArrayHelper OutArray(ArrProp, OutArrayPtr);
		const UScriptStruct* ScriptStruct = reinterpret_cast<FStructProperty*>(ArrProp->Inner)->Struct;
		for(const TSharedPtr<FPolyStruct>& PolyStructPtr : Handle.PolyStructs)
		{
			if(!PolyStructPtr || !PolyStructPtr->IsA(ScriptStruct)) continue;
			OutArray.AddUninitializedValue();
			PolyStructPtr->ExtractStruct(OutArray.GetRawPtr(OutArray.Num() - 1), ScriptStruct);
			OutPin = EStructCastPin::Success;
		}
		P_NATIVE_END
	}

	// Casts each Poly Struct and returns all valid casts as an array of Structs. Success if array is not empty. Use sparingly to avoid excessive casting and copying
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (ArrayParm = "OutArray", ExpandEnumAsExecs = "OutPin", CompactNodeTitle = "CAST ARRAY"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void CastArray(const FPolyStructHandle& PolyStructHandle, TArray<int32>& OutArray, EStructCastPin& OutPin);
	static FORCEINLINE void execCastArray(UObject* Context, FFrame& Stack, void* const RESULT_PARAM) { execExtractArray(Context, Stack, RESULT_PARAM); }

	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "REMOVE INDEX"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void RemoveIndex(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const int32 Index) { PolyStructHandle.PolyStructs.RemoveAt(Index); }

	// Gets a copy of the Poly Struct at the given index (if it is a valid index)
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "GET"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void Get(const FPolyStructHandle& PolyStructHandle, const int32 Index, FPolyStruct& OutPolyStruct) { if(const FPolyStruct* PolyStruct = PolyStructHandle.GetAt(Index)) OutPolyStruct = *PolyStruct; }

	// Empties the array of Poly Structs from the Poly Struct Handle
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "EMPTY"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void Empty(UPARAM(ref) FPolyStructHandle& PolyStructHandle) { PolyStructHandle.PolyStructs.Empty(); }

	// Whether there are any Poly Structs in the Poly Struct Handle
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "IS EMPTY"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool IsEmpty(const FPolyStructHandle& PolyStructHandle) { return PolyStructHandle.IsEmpty(); }

	// The number of Poly Structs in the Poly Struct Container
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "LENGTH"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE int32 Length(const FPolyStructHandle& PolyStructHandle) { return PolyStructHandle.Num(); }

	// Implicit conversion to get the 0th index of the Poly Struct Handle
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE FPolyStruct Conv_PolyStructHandleToPolyStruct(const FPolyStructHandle& PolyStructHandle)
	{
		if(const FPolyStruct* PolyStruct = PolyStructHandle.GetAt(0)) return *PolyStruct;
		return FPolyStruct();
	}

	// Converts Poly Struct Handle to array of Poly Structs. Use sparingly to avoid copying
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "ARRAY"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void ToArray(const FPolyStructHandle& PolyStructHandle, TArray<FPolyStruct>& OutPolyStructs)
	{
		for(const TSharedPtr<FPolyStruct>& Ptr : PolyStructHandle.PolyStructs) if(Ptr.IsValid()) OutPolyStructs.Add(*Ptr.Get());
	}












	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (BlueprintInternalUseOnly = "true", CustomStructureParam = "OutStruct", ExpandEnumAsExecs = "OutPin", DisplayName = "Get (ref)", CompactNodeTitle = "GET", BlueprintThreadSafe), Category = "Weapon System Function Library|Polymorphic Struct")
	static void CastRef(UPARAM(ref) FPolyStruct& PolyStruct, int32& OutStruct, EStructCastPin& OutPin);
	DECLARE_FUNCTION(execCastRef)
	{
		execExtractStruct(Context, Stack, RESULT_PARAM);
	}
};















