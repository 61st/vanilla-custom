#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "a3_props_f_orange",
            "ACM_core"
        };
        units[] = {
            QGVAR(Item_FirstAid),
            QGVAR(Item_MedicKit),
            QGVAR(Item_DrugKit),
            QGVAR(Item_Trauma),
            QGVAR(Item_mopp)
        };
        weapons[] = {
            QGVAR(FirstAid),
            QGVAR(MedicKit),
            QGVAR(DrugKit),
            QGVAR(Trauma),
            QGVAR(mopp)
        };
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
