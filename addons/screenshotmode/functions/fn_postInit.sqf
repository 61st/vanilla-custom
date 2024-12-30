#include "script_component.hpp"

GVAR(active) = false;

[
    '61st ScreenShot',
    'GRAD_screenshotmode_toggle',
    'Toggle Screenshot Mode',
    {
        GVAR(active) = !GVAR(active);
        [!GVAR(active)] call FUNC(toggleAll);
    },
    ''
] call CBA_fnc_addKeybind;
