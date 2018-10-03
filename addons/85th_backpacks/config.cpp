class CfgPatches
{
	class 85th_backpacks
	{
		units[]=
		{
		    "85th_dummyAssaultPack",
            "85th_dummyCarryall",
            "85th_dummyKitbag",
            "85th_dummyViperHarness",
            "85th_assaultPack_black",
            "85th_carryall_black",
            "85th_viperHarness_black",
            "85th_kitbag_black",
            "85th_rpgCarrier",
            "85th_umbtsPack_green",
            "85th_gunbag_green",
            "85th_gunbag_tan"

		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "A3_Characters_F",
            "a3_weapons_f",
            "A3_Supplies_F_Exp",
			"rhs_infantry",
            "ace_gunbag"
		};
        author="85th PMC"
        authors[]=
		{
			"SnakeDoc",
			"Nowheresgone"
		};
	};
};

// --- Vanilla Dummy Backpacks---
class CfgVehicles
{
	class B_AssaultPack_blk;
	class 85th_dummyAssaultPack: B_AssaultPack_blk
	{
		scope=1;
		maximumLoad=9999;
	};

    class B_Carryall_Base;
	class 85th_dummyCarryall: B_Carryall_Base
	{
		scope=1;
		maximumLoad=9999;
	};

    class B_Kitbag_Base;
	class 85th_dummyKitbag: B_Kitbag_Base
	{
		scope=1;
		maximumLoad=9999;
	};

    class B_ViperHarness_blk_F;
	class 85th_dummyViperHarness: B_ViperHarness_blk_F
	{
		scope=1;
		maximumLoad=9999;
	};

    // ----Vanilla Backpacks----
    
    //Assaultpacks
    class 85th_assaultPack_black: 85th_dummyAssaultPack
    {
        scope=2;
        displayName="Assault Pack (Black)";
        picture="85th_backpacks\ui\backpack_assaultexpanded_black_ca.paa";
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
    class 85th_carryall_black: 85th_dummyCarryall
    {
        scope=2;
        displayName="Carryall (Black)";
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

    //Kitbags
    class 85th_kitbag_black: 85th_dummyKitbag
    {
        scope=2;
        displayName="Kitbag (Black)";
        picture="\85th_backpacks\ui\backpack_kitbag_darkblack_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"
        };
    };

    //Viper Harness
    class 85th_viperHarness_black: 85th_dummyViperHarness
    {
        scope=2;
        displayName="Harness (Black)";
        picture="\85th_backpacks\ui\backpack_harness_blk_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\85th_backpacks\data\backpack_harness_blk_main_co.paa";
        };
    };

    // ---RHS AFRF Backpacks---
    class rhs_rpg_empty;
    class 85th_rpgCarrier: rhs_rpg_empty
    {
        scope=2;
        displayname="RPG Carrier";
        maximumLoad=9999;
    };

    class rhs_assault_umbts_engineer_empty;
    class 85th_umbtsPack_green: rhs_assault_umbts_engineer_empty
    {
        scope=2;
        displayname="UMBTS Engineer (Green)";
        maximumLoad=9999;
        //EGVAR(logistics_wirecutter,hasWirecutter) = 1; // Needs more ace stuff to work
    };

    //ACE Gun bag

    class ace_gunbag;
    class 85th_gunbag_green: ace_gunbag
    {
        displayname="Gunbag (Green)";
        maximumLoad=9999;
    };

    class 85th_gunbag_tan: ace_gunbag
    {
        displayname="Gunbag (Tan)";
        maximumLoad=9999;
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\z\ace\addons\gunbag\data\gunbag_tan_co.paa"
        };
    };
};