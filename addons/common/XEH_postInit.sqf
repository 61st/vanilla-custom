#include "script_component.hpp"

["unit", {
    lxim_unit = (_this select 0);
}, true] call CBA_fnc_addPlayerEventHandler;

GVAR(playerStartingSide) = sideUnknown;
GVAR(playerAuth) = false;
GVAR(playerTech) = false;

if (hasInterface) then {
    ["unit", {
        if (isNull player) exitWith {};
        if (GVAR(playerStartingSide) isEqualTo sideUnknown) then {
            TRACE_1("Setting start playerside",playerSide);
            GVAR(playerStartingSide) = playerSide;
        };
        if ((getPlayerUID player) in AUTHORIZED_USERS) then {
            if (!GVAR(playerAuth)) then {
                GVAR(playerAuth) = true;
                diag_log text format ["[61st]: Player UID [%1] in admin list", getPlayerUID player];
            };
        };
        if ((getPlayerUID player) in TECH_USERS) then {
            if (!GVAR(playerTech)) then {
                GVAR(playerTech) = true;
                diag_log text format ["[61st]: Player UID [%1] in tech list", getPlayerUID player];
            };
        };
    }, true] call CBA_fnc_addPlayerEventHandler;
};

// ["lxim_adminMsg", {
//     params ["_msg", ["_from", "?"], ["_to", ""]];
//     if (hasInterface) then {
//         if ((_to == profileName) || {_to == "#ALL"} || {(GVAR(showNotifcations)) && {[] call FUNC(isAuthorized)}}) then {
//             systemChat format ["61st [%1>%2]: %3", _from, _to, _msg];
//         };
//     };
//     if (isServer) then {
//         diag_log text format ["[61st] lxim_adminMsg EH: %1", _this];
//     };
// }] call CBA_fnc_addEventHandler;

["lxim_missionhint", {
    //side is 0-dead, 1-dead+alive or actuall side like east/west
    params ["_msg", ["_side", 1, [sideEnemy, 0]], ["_rankMin", 0]];
    TRACE_3("lxim_missionhint eh",_msg,_side,_rankMin);
    if (hasInterface) then {
        if ((_side isEqualTo 1) || {(!alive player) && {_side isEqualTo 0}} || {_side isEqualTo GVAR(playerStartingSide)}) then {
            private _playerRank = if (alive player) then {rankId player} else {999};
            if (_playerRank >= _rankMin) then {
                hint _msg;
            };
        };
    };
    if (isServer) then {
        diag_log text format ["[61st] lxim_missionhint EH: %1", _this];
    };
}] call CBA_fnc_addEventHandler;