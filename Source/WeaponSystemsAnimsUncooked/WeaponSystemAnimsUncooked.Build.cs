// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WeaponSystemAnimsUncooked : ModuleRules
{
	public WeaponSystemAnimsUncooked(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
		);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				
			}
		);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "GameplayTags", "AnimationCore", "AnimGraphRuntime", "AnimGraph", "WeaponSystemAnimsRuntime"
				// ... add other public dependencies that you statically link with here ...
			}
		);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[] { 
				"Core", 
				"CoreUObject", 
				"Engine", 
				"Slate",
				"AnimGraphRuntime",
				"BlueprintGraph",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"InputCore",
				"SlateCore",
				"EditorFramework",
				"UnrealEd",
				"GraphEditor",
				"PropertyEditor",
				"EditorStyle",
				"ContentBrowser",
				"KismetWidgets",
				"ToolMenus",
				"KismetCompiler",
				"Kismet",
				"EditorWidgets",
				"UnrealEd",
				"GraphEditor",
			}
		);
		
		PrivateIncludePathModuleNames.AddRange(
			new string[] {
				"Persona",
				"SkeletonEditor",
				"AdvancedPreviewScene",
				"AnimationBlueprintEditor",
			}
		);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
		);
	}
}