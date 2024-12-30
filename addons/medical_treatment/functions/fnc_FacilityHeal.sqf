#include "script_component.hpp"
/*
Function: LR_fnc_FacilityHeal

Description:
    Helper function to heal players within medical facilities.
    Needs to be run locally on clients.

Arguments:
    _player - The player unit to heal

Return Values:
    Nothing.

Examples:
    Nothing to see here

Author:
    Mokka
*/

params ["_player"];

if !(local _player) exitWith {
    systemChat "lxim_medical_treatment_fnc_FacilityHeal: player unit needs to be local";
};

if (_player getVariable ["ACE_isUnconscious", false]) then {
    [format ["%1<br />is being revived at the 361st Medical Facility.", profileName], [1,-0.2], "#ed1b2e", 0.4] call EFUNC(common,dynamicText);
};

[
    "You are being treated at the 361st Medical Facility",
    [-1, 0.8],
    "#FFA500",
    0.5,
    false
] call EFUNC(common,dynamicText);

[
    {
        [player] call ACM_core_fnc_resetVariables;
        [player] call ACM_airway_fnc_resetVariables;
        [player] call ACM_breathing_fnc_resetVariables;
        [player] call ACM_circulation_fnc_resetVariables;
        [player] call ACM_damage_fnc_resetVariables;
        [player] call ACM_disability_fnc_resetVariables;
        [player] call ACE_medical_treatment_fnc_fullHealLocal;
        [
            "Treatment Complete",
            [-1, 0.8],
            "#228B22",
            0.5,
            false
        ] call EFUNC(common,dynamicText);
    }, [], 10
] call CBA_fnc_waitAndExecute;
