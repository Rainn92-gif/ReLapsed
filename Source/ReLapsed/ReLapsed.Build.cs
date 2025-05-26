// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ReLapsed : ModuleRules
{
	public ReLapsed(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
