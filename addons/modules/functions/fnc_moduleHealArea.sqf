#include "script_component.hpp"

if (hasInterface && !isServer) exitWith {};

params [
    ["_logic",objNull,[objNull]],
    ["_units",[],[[]]],
    ["_activated", true]
];



if (_activated) then {
    private _area = _logic getVariable ["objectArea",[0,0,0,false,0]];

    if ((_area param [0, 0]) == 0) exitWith {WARNING_1("Bad size? %1",_area);};

    /* format ["%1\n%2\n%3\n%4\n%5", _logic,_units,_activated,_area,(getPos _logic)] remoteExec ["hint", 0]; */
    [{
        (_this select 0) params ["_area"];
        {
            /* [_x] call ace_medical_treatment_fnc_fullHealLocal; */
            [_x] call ACM_core_fnc_resetVariables;
            [_x] call ACM_airway_fnc_resetVariables;
            [_x] call ACM_breathing_fnc_resetVariables;
            [_x] call ACM_circulation_fnc_resetVariables;
            [_x] call ACM_damage_fnc_resetVariables;
            [_x] call ACM_disability_fnc_resetVariables;
            [_x] call ace_medical_treatment_fnc_fullHealLocal;
            _x setDamage 0;
            [
                "You are being treated at the 361st Medical Zone",
                [-1, 0.8],
                "#FFA500",
                0.5,
                false
            ] call EFUNC(common,dynamicText);
        }forEach (allPlayers inAreaArray _area);
    },1, [[(getPos _logic)] + _area]] call CBA_fnc_addPerFrameHandler;
};
