// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class project : ModuleRules
{
    public project(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Json", "JsonUtilities", "HTTP", "UMG", "Slate" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Projects", "DeveloperSettings", "AutomationController", "EditorSubsystem", "UnrealEd", "SlateCore", "AutomationUtils"});
    }
}
