#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"lxim_common"};
        author = "lxim";
        authors[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/lxim";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Interrupt_adminComs.hpp"
