// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class NIX_SP_Lesson_2EditorTarget : TargetRules
{
	public NIX_SP_Lesson_2EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("NIX_SP_Lesson_2");
	}
}
