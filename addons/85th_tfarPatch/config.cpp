class CfgPatches
{
	class 85th_tfarPatch
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsusf_c_mrzr",
			"rhsusf_mrzr",
			"rhsusf_c_melb",
			"rhsusf_melb",
			"rhsusf_c_markvsoc",
			"rhsusf_markvsoc"
		};
		author="85th PMC";
	};
};

//Land
class Car_F;
class Offroad_01_base_F;
class MRAP_01_base_F;

//Jeep Wrangler
class Offroad_02_base_F: Car_F
{
	tf_isolatedAmount = 0.0;
};

//POPFOR Land Rover
class PO_LandRover_base: Car_F
{
	tf_isolatedAmount = 0.0;
};

//RHS UAZ
class RHS_UAZ_Base: Offroad_01_base_F
{
	tf_isolatedAmount = 0.0;
};

//RHS MRZR
class rhsusf_mrzr_base: MRAP_01_base_F
{
	tf_isolatedAmount = 0.0;
};

//Air
class Helicopter_Base_H;

//RHS Little Bird
class RHS_MELB_base: Helicopter_Base_H
{
	tf_isolatedAmount = 0.0;
};

//Sea
class Ship_F;
class Boat_F;

//Transport Boats
class Boat_Transport_02_base_F: Boat_F
{
	tf_isolatedAmount = 0.0;
};

//Armed Boats
class Boat_Armed_01_base_F: Boat_F
{
	tf_isolatedAmount = 0.0;
};

//RHS MK.5 SOCV
class RHS_Ship: Ship_F
{
	tf_isolatedAmount = 0.0;
};