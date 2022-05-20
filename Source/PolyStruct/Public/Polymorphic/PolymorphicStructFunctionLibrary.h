// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PolymorphicStruct.h"
#include "PolymorphicStructFunctionLibrary.generated.h"

#define CONCATE_(X, Y) X##Y
#define CONCATE(X, Y) CONCATE_(X, Y)

// Pre-requisite to calling ACCESS_PRIVATE_MEMBER to be able to access a private member. CLASS, MEMBER, TYPES
#define ALLOW_PRIVATE_ACCESS(CLASS, MEMBER, ...) \
template<typename Only, __VA_ARGS__ CLASS::*Member> \
struct CONCATE(MEMBER, __LINE__) { friend __VA_ARGS__ CLASS::*Access(Only*) { return Member; } }; \
template<typename> struct Only_##MEMBER; \
template<> struct Only_##MEMBER<CLASS> { friend __VA_ARGS__ CLASS::*Access(Only_##MEMBER<CLASS>*); }; \
template struct CONCATE(MEMBER, __LINE__)<Only_##MEMBER<CLASS>, &CLASS::MEMBER>

// Access private member from an object. Must call ALLOW_PRIVATE_ACCESS in global-scope first
#define ACCESS_PRIVATE_MEMBER(OBJECT, MEMBER) \
((OBJECT).*Access((Only_##MEMBER<std::remove_reference<decltype(OBJECT)>::type>*)nullptr))


typedef TScriptArray<FHeapAllocator> FMyScriptArr;
ALLOW_PRIVATE_ACCESS(FMyScriptArr, ArrayNum, int32);
ALLOW_PRIVATE_ACCESS(FMyScriptArr, ArrayMax, int32);

typedef TSizedHeapAllocator<32>::ForAnyElementType FMyThing;
ALLOW_PRIVATE_ACCESS(FMyThing, Data, FScriptContainerElement*);


/**
 * 
 */
UENUM(BlueprintType)
enum class EStructCastPin : uint8
{
	Success = true,
	Fail = false,
};

UCLASS(Meta = (DisplayName = "Polymorphic Struct Function Library", Keywords = "poly,struct,handle,get,equals,valid"))
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
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "OutStruct", BlueprintInternalUseOnly = "true",
		BlueprintThreadSafe, ExpandEnumAsExecs = "OutPin", CompactNodeTitle = "EXTRACT"), Category = "Weapon System Function Library|Polymorphic Struct")
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

	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "OutStruct", BlueprintInternalUseOnly = "true",
		BlueprintThreadSafe, CompactNodeTitle = "EXTRACT"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void ExtractStructUnchecked(const FPolyStruct& PolyStruct, UPARAM(ref) int32& OutStruct) {}
	static void execExtractStructUnchecked(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		const FPolyStruct& PolyStruct = GetPolyStruct(Stack);
		void* OutStruct; FStructProperty* OutStructProp;
		GetCustomStructParam(Stack, OutStruct, OutStructProp);
		P_FINISH
		if(!ValidateCustomStructParam(Stack, OutStructProp)) return;
		P_NATIVE_BEGIN
		PolyStruct.ExtractStruct(OutStruct, OutStructProp->Struct);
		P_NATIVE_END
	}

	UFUNCTION(BlueprintPure, CustomThunk, Meta = (CustomStructureParam = "OutStruct"))
	static void MakeDefaultCustomStruct(int32& OutStruct);
	DECLARE_FUNCTION(execMakeDefaultCustomStruct) { Stack.StepCompiledIn<FStructProperty>(nullptr); P_FINISH }
	

	// Ensures the OutStruct parameter will be a valid cast and then extracts the data into the output.
	// Not a true cast as the memory is being copied but this syntactically may make more sense than "Extract"
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (BlueprintInternalUseOnly = "true", BlueprintThreadSafe, CustomStructureParam = "OutStruct",
		ExpandEnumAsExecs = "OutPin", DisplayName = "Get (copy)", CompactNodeTitle = "GET"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void GetCopy(const FPolyStruct& PolyStruct, int32& OutStruct, EStructCastPin& OutPin);
	static FORCEINLINE void execGetCopy(UObject* Context, FFrame& Stack, void* const RESULT_PARAM) { execExtractStruct(Context, Stack, RESULT_PARAM); }
	
	// Empties the Polymorphic Struct then copies the Struct parameter's values into the Polymorphic Struct
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Struct", BlueprintInternalUseOnly = "true",
		BlueprintThreadSafe, CompactNodeTitle = "SET"), Category = "Weapon System Function Library|Polymorphic Struct")
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
	static FORCEINLINE FName Conv_PolyStructToName(const FPolyStruct& PolyStruct) { return PolyStruct.GetFName(); }

	// Implicit Polymorphic Struct to type string conversion
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE FString Conv_PolyStructToString(const FPolyStruct& PolyStruct) { return PolyStruct.ToString(); }

	// Implicit Polymorphic Struct "Is Valid" conversion
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool Conv_PolyStructToBool(const FPolyStruct& PolyStruct) { return PolyStruct.IsValid(); }

	// Empties the data and invalidates the struct
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "EMPTY", DisplayName = "Empty (poly struct)"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void EmptyPolyStruct(UPARAM(ref) FPolyStruct& PolyStruct) { PolyStruct.Empty(); }

	// Whether or not the Polymorphic Struct contains any data
	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool IsValid(const FPolyStruct& PolyStruct) { return PolyStruct.IsValid(); }

	// Whether or not the Polymorphic Struct contains any data
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "IS VALID", ExpandEnumAsExecs = "OutPin", DisplayName = "Is Valid (execs)"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void IsValidWithExecs(const FPolyStruct& PolyStruct, EStructCastPin& OutPin) { OutPin = PolyStruct.IsValid() ? EStructCastPin::Success : EStructCastPin::Fail; }

	// Whether the Polymorphic Struct's data is this type
	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool IsA(const FPolyStruct& PolyStruct, const UScriptStruct* StructType) { return PolyStruct.IsA(StructType); }

	// Whether the Polymorphic Struct's data is this type
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "IS A", ExpandEnumAsExecs = "OutPin", DisplayName = "Is A (execs)"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void IsAWithExecs(const FPolyStruct& PolyStruct, const UScriptStruct* StructType, EStructCastPin& OutPin) { OutPin = PolyStruct.IsA(StructType) ? EStructCastPin::Success : EStructCastPin::Fail; }
	
	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE UScriptStruct* GetType(const FPolyStruct& PolyStruct) { return PolyStruct.GetScriptStruct(); }

	// Gets the total size of the struct the Polymorphic Struct contains. 0 if uninitialized
	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE int32 GetSize(const FPolyStruct& PolyStruct) { return PolyStruct.GetSize(); }

	// Returns whether the types are the same
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "=="), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool Equals(const FPolyStruct& A, const FPolyStruct& B) { return A == B; }

	// Returns whether the types are not the same
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "!=", DisplayName = "Equals NOT"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool EqualsNOT(const FPolyStruct& A, const FPolyStruct& B) { return A != B; }

	// Implicit conversion to a Poly Struct Handle that adds this poly struct to the array
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE FPolyStructHandle Conv_PolyStructToPolyStructHandle(const FPolyStruct& PolyStruct) { return FPolyStructHandle(PolyStruct); }

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Polymorphic Struct")
	static void ToJsonString(const FPolyStruct& PolyStruct, FString& OutString) { OutString = PolyStruct.ToJsonString(); }
	
	/*
	 *
	 *
	 *
	 *
	 *
	 */

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Poly Struct Handle To String"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FString Conv_PolyStructHandleToString(const FPolyStructHandle& PolyStructHandle) { return PolyStructHandle.ToString(); }
	
	// Makes a Poly Struct Container and initializes it with an array of Poly Structs
	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Make PolyStructHandle"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void MakePolyStructHandleFromArray(UPARAM(DisplayName=">>") const TArray<FPolyStruct>& PolyStructs, FPolyStructHandle& PolyStructHandle) { PolyStructHandle = PolyStructs; }

	// Converts the Struct parameter to a Poly Struct and adds it to the Poly Struct Handle array
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Struct", BlueprintInternalUseOnly = "true", BlueprintThreadSafe,
		CompactNodeTitle = "ADD", DisplayName = "Add (struct)"), Category = "Weapon System Function Library|Polymorphic Struct")
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

	// Inserts the struct at the given index
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Struct", DisplayName = "Insert (struct)", CompactNodeTitle = "INSERT", ExpandEnumAsExecs = "OutPin"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void InsertStructAt(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const int32& Struct, const int32 Index, EStructCastPin& OutPin);
	DECLARE_FUNCTION(execInsertStructAt)
	{
		FPolyStructHandle& Handle = GetPolyStructHandle(Stack);
		void* Struct; FStructProperty* StructProp;
		GetCustomStructParam(Stack, Struct, StructProp);
		int32 Index = 0;
		Stack.StepCompiledIn<FIntProperty>(&Index);
		EStructCastPin& OutPin = GetStructCastPin(Stack);
		P_FINISH
		if(!ValidateCustomStructParam(Stack, StructProp))
		{
			OutPin = EStructCastPin::Fail;
			return;
		}
		P_NATIVE_BEGIN
		if(Handle.IsValidIndex(Index))
		{
			Handle.PolyStructs.Insert(MakeShared<FPolyStruct>(Struct, StructProp->Struct), Index);
			OutPin = EStructCastPin::Success;
		}
		else OutPin = EStructCastPin::Fail;
		P_NATIVE_END
	}

	// Sets the the PolyStruct at the given index. Success if valid index
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Struct", DisplayName = "Set Array Element (struct)", CompactNodeTitle = "SET ELEM", ExpandEnumAsExecs = "OutPin"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void SetArrayElementStruct(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const int32& Struct, const int32 Index, EStructCastPin& OutPin);
	DECLARE_FUNCTION(execSetArrayElementStruct)
	{
		FPolyStructHandle& Handle = GetPolyStructHandle(Stack);
		void* Struct; FStructProperty* StructProp;
		GetCustomStructParam(Stack, Struct, StructProp);
		int32 Index = 0;
		Stack.StepCompiledIn<FIntProperty>(&Index);
		EStructCastPin& OutPin = GetStructCastPin(Stack);
		P_FINISH
		if(!ValidateCustomStructParam(Stack, StructProp))
		{
			OutPin = EStructCastPin::Fail;
			return;
		}
		P_NATIVE_BEGIN
		if(Handle.IsValidIndex(Index))
		{
			if(!Handle.PolyStructs[Index].IsValid())
				Handle.PolyStructs[Index] = MakeShared<FPolyStruct>();

			Handle[Index].SetStruct(Struct, StructProp->Struct);
			OutPin = EStructCastPin::Success;
		}
		else OutPin = EStructCastPin::Fail;
		P_NATIVE_END
	}

	// Adds a Poly Struct to the array
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "ADD"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE int32 Add(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const FPolyStruct& PolyStruct) { return PolyStructHandle.Add(PolyStruct); }

	// Appends Poly Structs to the array
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "APPEND", DisplayName = "Append (from poly array)"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void AppendFromPolyArray(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const TArray<FPolyStruct>& PolyStructs) { PolyStructHandle.Append(PolyStructs); }

	// Appends the elements of the In Poly Struct Handle to the Out Poly Struct Handle
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "APPEND", DisplayName = "Append (from poly handle)"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void AppendFromPolyHandle(UPARAM(ref) FPolyStructHandle& OutPolyStructHandle, UPARAM(ref) const FPolyStructHandle& InPolyStructHandle) { OutPolyStructHandle += InPolyStructHandle; }

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
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "OutStruct", ExpandEnumAsExecs = "OutPin", CompactNodeTitle = "GET AT"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void GetAt(const FPolyStructHandle& PolyStructHandle, int32& OutStruct, const int32 Index, EStructCastPin& OutPin);
	static FORCEINLINE void execGetAt(UObject* Context, FFrame& Stack, void* const RESULT_PARAM) { execExtractAt(Context, Stack, RESULT_PARAM); }

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
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (ArrayParm = "OutArray", ExpandEnumAsExecs = "OutPin", CompactNodeTitle = "GET ARRAY"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void GetArray(const FPolyStructHandle& PolyStructHandle, TArray<int32>& OutArray, EStructCastPin& OutPin);
	static FORCEINLINE void execGetArray(UObject* Context, FFrame& Stack, void* const RESULT_PARAM) { execExtractArray(Context, Stack, RESULT_PARAM); }

	// Searches the poly struct handle for any struct of the specified type and returns the first valid type along with it's index, (-1 otherwise)
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "OutStruct", ExpandEnumAsExecs = "OutPin", CompactNodeTitle = "GET ANY"), Category = "Weapon System Function Library|Polymorphic Struct")
	static void GetAny(const FPolyStructHandle& PolyStructHandle, int32& OutStruct, int32& OutIndex, EStructCastPin& OutPin);
	DECLARE_FUNCTION(execGetAny)
	{
		const FPolyStructHandle& Handle = GetPolyStructHandle(Stack);
		void* Struct; FStructProperty* StructProp;
		GetCustomStructParam(Stack, Struct, StructProp);
		Stack.StepCompiledIn<FIntProperty>(nullptr);
		int32& OutIndex = *(int32*)Stack.MostRecentPropertyAddress;
		EStructCastPin& OutPin = GetStructCastPin(Stack);
		P_FINISH
		if(!ValidateCustomStructParam(Stack, StructProp)) return;
		P_NATIVE_BEGIN
		
		OutIndex = Handle.ExtractAny(Struct, StructProp->Struct);
		OutPin = OutIndex != INDEX_NONE ? EStructCastPin::Success : EStructCastPin::Fail;
		
		P_NATIVE_END
	}

	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "REMOVE"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void RemoveItem(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const int32 Index) { if(PolyStructHandle.IsValidIndex(Index)) PolyStructHandle.PolyStructs.RemoveAt(Index); }

	// Gets a copy of the Poly Struct at the given index (if it is a valid index)
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "GET"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void GetAtIndex(const FPolyStructHandle& PolyStructHandle, const int32 Index, FPolyStruct& OutPolyStruct) { if(const FPolyStruct* PolyStruct = PolyStructHandle.GetAt(Index)) OutPolyStruct = *PolyStruct; }

	// Empties the array of Poly Structs from the Poly Struct Handle
	UFUNCTION(BlueprintCallable, Meta = (CompactNodeTitle = "EMPTY", DisplayName = "Empty (poly struct handle)"), Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE void EmptyPolyStructHandle(UPARAM(ref) FPolyStructHandle& PolyStructHandle) { PolyStructHandle.PolyStructs.Empty(); }

	// Whether there are any Poly Structs in the Poly Struct Handle
	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool IsEmpty(const FPolyStructHandle& PolyStructHandle) { return PolyStructHandle.IsEmpty(); }

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Polymorphic Struct")
	static FORCEINLINE bool HasData(const FPolyStructHandle& PolyStructHandle) { return !PolyStructHandle.IsEmpty(); }

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
	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Polymorphic Struct")
	static void ToArray(const FPolyStructHandle& PolyStructHandle, TArray<FPolyStruct>& OutPolyStructs)
	{
		for(const TSharedPtr<FPolyStruct>& Ptr : PolyStructHandle.PolyStructs) if(Ptr.IsValid()) OutPolyStructs.Add(*Ptr.Get());
	}


	UFUNCTION(BlueprintCallable, Meta = (BlueprintInternalUseOnly = "true"))
	static FORCEINLINE void MakeDefaultPolyStructHandle(FPolyStructHandle& OutPolyStructHandle) {}


	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Struct", BlueprintInternalUseOnly = "true"))
	static void Internal_AddStruct(UPARAM(ref) FPolyStructHandle& PolyStructHandle, const int32& Struct);
	DECLARE_FUNCTION(execInternal_AddStruct) { execAddStruct(Context, Stack, RESULT_PARAM); }
};

/*
#undef CONCATE_
#undef CONCATE
#undef ALLOW_PRIVATE_ACCESS
#undef ACCESS_PRIVATE_MEMBER
*/



UCLASS()
class POLYSTRUCT_API UPolyStructHack final : public UBlueprintFunctionLibrary
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
	UFUNCTION(BlueprintPure, CustomThunk, Meta = (CustomStructureParam = "OutStruct", CompactNodeTitle = "CAST", BlueprintInternalUseOnly = "true"))
	static void CastPolyStruct(UPARAM(ref) FPolyStruct& PolyStruct, int32& OutStruct);
	DECLARE_FUNCTION(execCastPolyStruct)
	{
		
	}
	
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (ArrayParm = "OutArray"))
	static void MakeTempArr(TArray<int32>& OutArray);
	DECLARE_FUNCTION(execMakeTempArr) { Stack.StepCompiledIn<FArrayProperty>(nullptr); P_FINISH }

	UFUNCTION(BlueprintPure)
	static FORCEINLINE int32 GetZeroIndex() { return 0; }
	
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (ArrayParm = "OutArray", BlueprintInternalUseOnly = "true"))
	static void ArrayPointToPolyStructHack(UPARAM(ref) FPolyStruct& PolyStruct, UPARAM(ref) TArray<int32>& OutArray);
	DECLARE_FUNCTION(execArrayPointToPolyStructHack)
	{
		FPolyStruct& PolyStruct = GetPolyStruct(Stack);
		Stack.StepCompiledIn<FArrayProperty>(nullptr);
		void* const OutArrPtr = Stack.MostRecentPropertyAddress;
		const FArrayProperty* ArrProp = CastField<FArrayProperty>(Stack.MostRecentProperty);
		Stack.StepCompiledIn<FBoolProperty>(nullptr);
		P_FINISH
		if(!OutArrPtr || !ArrProp)
		{
			Stack.bArrayContextFailed = true;
			return;
		}
		P_NATIVE_BEGIN
		FMyScriptArr& OutScriptArr = *(FMyScriptArr*)OutArrPtr;
		ACCESS_PRIVATE_MEMBER(OutScriptArr, ArrayNum) = 1;
		
		FMyThing& OutMyThingArr = *(FMyThing*)OutArrPtr;
		ACCESS_PRIVATE_MEMBER(OutMyThingArr, Data) = (FScriptContainerElement*)PolyStruct.GetMemory();
		P_NATIVE_END
	}

	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (ArrayParm = "OutArray", BlueprintInternalUseOnly = "true"))
	static void ArrayPointToPolyStructHackUndo(UPARAM(ref) TArray<int32>& OutArray);
	DECLARE_FUNCTION(execArrayPointToPolyStructHackUndo)
	{
		Stack.StepCompiledIn<FArrayProperty>(nullptr);
		void* const OutArrPtr = Stack.MostRecentPropertyAddress;
		const FArrayProperty* ArrProp = CastField<FArrayProperty>(Stack.MostRecentProperty);
		P_FINISH
		if(!OutArrPtr || !ArrProp)
		{
			Stack.bArrayContextFailed = true;
			return;
		}
		P_NATIVE_BEGIN
		UE_LOG(LogTemp, Warning, TEXT("Arr.Num() == %i"))
		FMyScriptArr& OutScriptArr = *(FMyScriptArr*)OutArrPtr;
		ACCESS_PRIVATE_MEMBER(OutScriptArr, ArrayNum) = 0;

		FMyThing& OutMyThingArr = *(FMyThing*)OutArrPtr;
		ACCESS_PRIVATE_MEMBER(OutMyThingArr, Data) = nullptr;
		P_NATIVE_END
	}




	UFUNCTION(BlueprintPure, CustomThunk, Meta = (CustomStructureParam = "Struct", BlueprintInternalUseOnly = "true"))
	static bool IsAFromRef(UPARAM(ref) const FPolyStruct& PolyStruct, UPARAM(ref) const int32& Struct);
	DECLARE_FUNCTION(execIsAFromRef)
	{
		const FPolyStruct& PolyStruct = GetPolyStruct(Stack);
		void* Struct; FStructProperty* StructProp;
		GetCustomStructParam(Stack, Struct, StructProp);
		P_FINISH
		if(!ValidateCustomStructParam(Stack, StructProp)) return;
		P_NATIVE_BEGIN
		*(bool*)RESULT_PARAM = PolyStruct.IsA(StructProp->Struct);
		P_NATIVE_END
	}
};


























