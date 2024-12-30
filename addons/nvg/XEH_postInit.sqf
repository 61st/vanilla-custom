#include "script_component.hpp"


["visionMode", {
  params ["_unit", "_visionMode"];
  [] spawn lxim_nvg_fnc_setNvgEffect;
}, true] call CBA_fnc_addPlayerEventHandler;
