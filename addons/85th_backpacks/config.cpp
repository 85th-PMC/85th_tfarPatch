class CfgPatches
{
	class 85th_backpacks
	{
		units[]=
		{
		    "85th_dummyBackpack",
            "85th_rpg_carrier",
            "85th_kitbag_black"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"rhs_infantry"
		};
        author="85th PMC"
        authors[]=
		{
			"SnakeDoc",
			"Nowheresgone"
		};
	};
};

// Dummy Backpack
class CfgVehicles
{
	class B_AssaultPack_Kerry;
	class 85th_dummyBackpack: B_AssaultPack_Kerry
	{
		scope=1;
		maximumLoad=9999;
	};


// RHS AFRF Backpacks

    class 85th_rpgCarrier: 85th_dummyBackpack
    {
        scope=2;
        displayname="RPG Carrier";
        model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg"; // Not sure if x\modname is needed
        picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "rhsafrf\addons\rhs_infantry\data\gearpack2_rpg_co.paa"
        };
    };

    class 85th_umbtsPack: 85th_dummyBackpack
    {
        scope=2;
        displayname="UMBTS Engineer";
        model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer"; // Not sure if x\modname is needed
        picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_umtbs_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"
        };
        //EGVAR(logistics_wirecutter,hasWirecutter) = 1; // Needs more ace stuff to work
    };

    // Vanilla Backpacks

    class 85th_kitbag_black: 85th_dummyBackpack
    {
        scope=2;
        displayName="Kitbag (Black)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        picture="\x\85th\addons\85th_backpacks\ui\backpack_kitbag_darkblack_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"
        };
    };
};