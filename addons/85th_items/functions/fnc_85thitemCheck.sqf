/*
 * Author: KoffeinFlummi
 * Edited By: 85th PMC
 * Replaces vanilla items with ACE ones.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [bob] call ace_medical_fnc_itemCheck
 *
 * Public: Yes
 */

#include "script_component.hpp"

params ["_unit"];

while {({_x == "85th_FAK"} count items _unit) > 0} do {
	_unit removeItem "85th_FAK";
	if (GVAR(level) >= 2) then {
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_salineIV_250";
	} else {
		//below code not used
		_unit addItemToBackpack "ACE_fieldDressing";
		_unit addItemToBackpack "ACE_fieldDressing";
		_unit addItemToBackpack "ACE_morphine";
	};
};

while {({_x == "85th_Medkit"} count items _unit) > 0} do {
	_unit removeItem "85th_Medkit";
	if (GVAR(level) >= 2) then {
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_elasticBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_packingBandage";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_morphine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_tourniquet";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_bodyBag";	
	} else {
		// below code not used
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_bloodIV";
		_unit addItemToBackpack "ACE_bloodIV";
	};
};



/*
* example of an extened version of the function.
* checks the units medic level before unpacking the items.
* if the unit is not >= the required medic level the Medkit will remain in the units inventory.
* before adding items it removes existing ones simulating a "full medical resuppley" without having to count anything yourself.
* unsure if this will cause the while loop to exit and immediately start again effecting performance.
* "{(_unit getVariable "Ace_medical_medicClass") >= 2}" think this should be a GVAR check similer to the medical level check on L233

while {({_x == "85th_Medkit"} count items _unit) > 0} and {(_unit getVariable "Ace_medical_medicClass") >= 2} do {
	_unit removeItem "85th_Medkit";
	if (GVAR(level) >= 2) then {
		_unit removeItems "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
		_unit addItemToBackpack "ACE_salineIV";
	} else {
		_unit removeItems "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
		_unit addItemToBackpack "ACE_epinephrine";
	};
};
*/
