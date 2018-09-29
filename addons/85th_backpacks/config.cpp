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

// ---Dummy Backpack---
class CfgVehicles
{
	class B_AssaultPack_Base;
	class 85th_dummyBackpack: B_Carryall_Base
	{
		scope=1;
		maximumLoad=9999;
	};


    // ---RHS AFRF Backpacks---

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

    // ----Vanilla Backpacks----
    
    //Assaultpacks
    class 85th_assaultpack_black: 85th_dummyBackpack
    {
        scope=2;
        displayName="Assault Pack (Black)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
        picture="\85th\addons\85th_backpacks\ui\backpack_assaultexpanded_black_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\weapons_f\ammoboxes\bags\data\backpack_compact_blk_co.paa"
        };
    };

    //Carryalls
    class 85th_carryall_black: 85th_dummyBackpack
    {
        scope=2;
        displayName="Carryall (Black)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        picture = "\a3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_blk.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\weapons_f\ammoboxes\bags\data\backpack_tortila_blk_co.paa"
        };
    };

    //Viper Harness
    class 85th_viperHarness_black: 85th_dummyBackpack
    {
        scope=2;
        displayName="Harness (Black)";
        model = "\A3\Supplies_F_Exp\Bags\B_ViperHarness_F.p3d";
        picture="\85th\addons\85th_backpacks\ui\backpack_harness_blk_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\85th\addons\85th_backpacks\data\backpack_harness_blk_main_co.paa"
        };
    };

    //Kitbags
    class 85th_kitbag_black: 85th_dummyBackpack
    {
        scope=2;
        displayName="Kitbag (Black)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        picture="\85th\addons\85th_backpacks\ui\backpack_kitbag_darkblack_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"
        };
    };

    //ACE Gun bag

    class 85th_gunbag_green: ace_gunbag
    {
        displayname="Gunbag (Green)";
        maximumLoad=9999;
    };

    class 85th_gunbag_tan: ace_gunbag
    {
        displayname="Gunbag (Tan)";
        maximumLoad=9999;
    };
};