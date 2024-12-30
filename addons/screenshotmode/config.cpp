#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        requiredVersion = 1.0;
        requiredAddons[] = {"lxim_main"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
        authors[] = {"DerZade [A]"};
    };
};

#include "cfgFunctions.hpp"
#include "cfgEventHandlers.hpp"
