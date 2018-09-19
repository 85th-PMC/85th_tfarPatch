class CfgPatches
{
	class 85th_vests
	{
		units[]={};
		weapons[]=								          //all new varients need to be included in this list
		{
			"85th_vest1_BAF",
			"85th_vest2_BAF",
			"85th_vest3_BAF
		};
		requiredVersion=0.1
		requiredAddons[]=						        //mods that are being referenced
		{
			"ace_medical",
			"ace_interaction",
			"ace_apl"
		};
		author="85th PMC";
	};
};

//85th baf vest (inventory vesion)
class CfgWeapons
{
	class vest1_BAF;							        // class your referencing
	class 85th_vest1_BAF: vest1_BAF				//your new class based of the original
	{
		scope=3;
		displayName="(85th) Vest 1";
		hiddenSelections[]=
		{
			"eg_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\85th_vests\data\yourTexture_CO.paa"
		};
	};
};
