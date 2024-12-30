#include "script_component.hpp"
params ["_pos"];

if (_pos isEqualTo [0, 0, 0]) exitWith {
    [format ["Error: Invalid position for module"], "ZeusLog"] call EFUNC(common,log);
};

[_pos] call FUNC(SpawnCivZeusWrapper);