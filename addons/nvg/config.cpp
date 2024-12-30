#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_common",
            "cba_main",
            "ace_nightvision",
            "tweed_uaf_21_cfg"
        };
        author = "lxim";
        authors[] = {"YONV"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgEffects.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
