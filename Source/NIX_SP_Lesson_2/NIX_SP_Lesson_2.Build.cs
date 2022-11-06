// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NIX_SP_Lesson_2 : ModuleRules
{
	public NIX_SP_Lesson_2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
