#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = QUOTE(ADDON);
        requiredAddons[] = {
            "lxim_main"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
        authors[] = {"Fusselwurm"};
    };
};

#include "CfgEventHandlers.hpp"

class CfgVehicles {
    class Boat_Transport_02_base_F;
    class Rubber_duck_base_F: Boat_Transport_02_base_F {
        rudderForceCoef = 0.3;
    };
};
