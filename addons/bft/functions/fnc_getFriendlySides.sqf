#include "script_component.hpp"
/*
 * Author: NemesisRE
 * Get friendly sides for given side
 *
 * Arguments:
 * 0: side <Side>
 *
 * Return Value:
 * friendly sides <ARRAY>
 *
 * Example:
 * [side] call lxim_bft_fnc_getFriendlySides
 *
 * Public: No
 */

params [["_side", playerSide]];
private ["_friendlySides", "_sides"];

_friendlySides = [];
_sides = [east,west,resistance,civilian];
if (!(_side isEqualTo civilian) && !(GVAR(showCivilians))) then {
    _sides = [east,west,resistance];
};

if (GVAR(friendlySidesDynamic)) then {
    {
        if ((_side getFriend _x) > 0.6) then {
            _friendlySides pushBack _x;
        };
    } forEach _sides;
} else {
    switch (_side) do {
        case east: {_friendlySides = GVAR(friendlySides_east)};
        case west: {_friendlySides = GVAR(friendlySides_west)};
        case resistance: {_friendlySides = GVAR(friendlySides_resistance)};
        case civilian: {_friendlySides = GVAR(friendlySides_civilian)};
        default {_friendlySides = []};
    };
};

_friendlySides
