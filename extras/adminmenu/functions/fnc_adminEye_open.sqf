#include "\z\lxim\addons\adminmenu\script_component.hpp"

disableSerialization;

createDialog QGVAR(adminEyeDialog);

GVAR(Triggers) = allMissionObjects "EmptyDetector";
GVAR(WaveSpawners) = allMissionObjects "lxim_ai_wavespawn";
GVAR(Garrison) = (allMissionObjects "lxim_ai_garrison" + allMissionObjects "lxim_ai_garrisonQuantity");


GVAR(adminEyeSelectedObj) = objNull;
//FUTURE - Area
