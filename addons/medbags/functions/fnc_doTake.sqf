#include "..\script_component.hpp"
/*

 * \lxim_medical\supplies\functions\fn_doUnpackFirstAid.sqf
 * by YonV
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call lxim_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_unit", "_target"];

_target removeItem "lxim_medbags_FirstAid";

[_unit, "lxim_medbags_FirstAid", 1, _order, _overflow] call EFUNC(common,addItem);
