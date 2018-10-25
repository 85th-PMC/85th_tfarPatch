class CfgPatches
{
	class 85th_vests
	{
		units[]=
		{
		    "85th_dummyPlateCarrierH",
			"85th_plateCarrierH_black",
            "85th_osprey_medic_a"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"uk3cb_baf_equipment"
		};
        author="85th PMC"
        authors[]=
		{
			"SnakeDoc",
			"Nowheresgone"
		};
	};
};

// ---Dummy Vests---
class CfgWeapons
{
	class V_PlateCarrier2_rgr;
	class 85th_dummyPlateCarrierH: V_PlateCarrier2_rgr
	{
		scope=1;
	};

	// ---Vanilla Vests---
	class 85th_plateCarrierH_black: 85th_dummyPlateCarrierH
	{
		scope=2;
		displayname="Plate Carrier Heavy (Black)";
        hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPA\BLUFOR\Data\vests_snake_co.paa" //Just an example paa, not edited
		};
	};

    // ---BAF Vests---
    class UK3CB_BAF_V_Osprey_Medic_A;
    class 85th_osprey_medic_a: UK3CB_BAF_V_Osprey_Medic_A
    {
        scope=2;
        displayname="Osprey Mk.4 Medic (A)";
        hiddenSelections[]=
		{
			"camo","camo2"
		};
        hiddenSelectionsTextures[]=
		{
			"85th_vests\data\osprey_mk4_co.paa","uk3cb_baf_equipment\data\gear_co.paa"
		};
    };
};
