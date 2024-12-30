#include "script_component.hpp"
/*
 * Name: lxim_common_fnc_checkModVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if lxim Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _lximersion = getMissionConfigValue ["lxim_version",[0,0,0]];

([_lximersion,_input] call EFUNC(common,checkVersionArray));

