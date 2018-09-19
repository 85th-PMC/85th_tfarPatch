fnc_85thitemCheck = compile preprocessFileLineNumbers "85th_Items/functions/fnc_85thitemCHeck.sqf";

["loadout", {
    params ["_unit"];
    _unit call ace_medical_fnc_itemCheck;
}, true] call CBA_fnc_addPlayerEventHandler;
