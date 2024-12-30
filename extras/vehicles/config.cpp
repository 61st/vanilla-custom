#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "lxim_mk20",
            "lxim_mev_mk20",
            "lxim_repair_mk20"
        };
        weapons[] = {"missiles_titan_aa_2Rnd_Pan"};
        magazines[]={"2Rnd_Titan_long_missiles_Pan"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main",
            "A3_Static_F",
            "A3_Static_F_Gamma",
            "A3_Weapons_F_Exp",
            "A3_Weapons_F_Launchers_Titan",
            "A3_Data_F",
            "A3_Air_F",
            "A3_Armor_F",
            "A3_Soft_F",
            "A3_Armor_F_APC_Wheeled_03",
            "A3_Armor_F_Gamma",
            "rhs_main_loadorder",
            "rhsgref_main_loadorder",
            "rhssaf_main_loadorder",
            "rhsusf_main_loadorder"
        };
        authorUrl = URL;
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"