using UnrealBuildTool;

public class DedicatedServers : ModuleRules
{
	public DedicatedServers(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"GameplayTags", 
			"GameLiftServerSDK", 
			"HTTP" 
		}
		);

		PrivateDependencyModuleNames.AddRange(new string[] 
		{ 
			"Slate", 
			"SlateCore", 
			"UMG",
			"Json", "JsonUtilities"
		}
		);
    }
}
