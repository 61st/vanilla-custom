#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "Bear, Snippers";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"lxim_common", "A3_UI_F", "cba_diagnostic"};
        VERSION_CONFIG;
    };
};

// SteamID64 of players authorized to access admin tools (matches against getPlayerUID)
class GVAR(authorized_players) {
    class Yonv {
        uid = "76561198000002705";
    };
    class MAJORCARNAGE {
        uid = "76561198176590682";
    };
    class CURY {
        uid = "76561198068010293";
    };
    class MUFFINS {
        uid = "76561198311674523";
    };
    class MONEY {
        uid = "76561199004329880";
    };
    class SIERRA {
        uid = "76561198989999596";
    };
    class DELTA {
        uid = "76561198420345263";
    };
    class INVALID {
        uid = "76561199164737010";
    };
    class BIGFOOT {
        uid = "76561198309279053";
    };
    class MENDEZ {
        uid = "76561198332977952";
    };
};

#include "CfgFunctions.hpp"
#include "CfgDebriefing.hpp"
#include "CfgEventHandlers.hpp"
// #include "autotest.hpp"
#include "gui\adminMenu.hpp"
