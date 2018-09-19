class CfgPatches
{
    class 85th_items
    {
        units[]={};
        weapons[]=
        {
            "85th_FAK",
            "85th_Medkit"
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "ace_medical",
	    "ace_interaction",
	    "ace_apl"
        };
        author="85th PMC";
    };
};

class Extended_PostInit_EventHandlers {
    class 85th_items {
        init = "call compile preprocessFileLineNumbers '85th_items\XEH_postInit.sqf'";
    };
};

class cfgWeapons
{
	class ItemCore;
	class FirstAidKit: ItemCore
    {
        class ItemInfo;
    };
    class Medikit: ItemCore
    {
        class ItemInfo;
    };
	class 85th_FAK: FirstAidKit
	{
		displayName="(85th) FAK"
	};

	class 85th_Medkit: Medikit
	{
		displayName="(85th) Medkit"
	};
};
