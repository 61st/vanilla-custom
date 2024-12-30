class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;
        };

        class ModuleDescription {
            class AnyPlayer;
            class AnyBrain;
            class EmptyDetector;
        };
    };

    #include "AISpawnsEastModule.hpp"
    #include "AISpawnsIndependentModule.hpp"
    #include "AISpawnsWestModule.hpp"
    #include "CivilianSpawnsModule.hpp"

    class ModuleEmpty_F;
    class ModuleCurator_F: Module_F {
        class Attributes {
            class lxim_Config_Zeus {
                property = QUOTE(lxim_Config_Zeus);
                control = "Checkbox";
                typeName = "BOOL";
                displayName = "61st Mechanized Infantry Battalion: Config Zeus:";
                tooltip = "Enable to allow this Zeus to have placed units use 61st AI Difficulty Settings (Settings - Addon Options)";
                expression = "if (_value isEqualTo true) then {[_this] call lxim_ai_fnc_ConfigZeus;}";
                condition = "logicModule";
                defaultValue = "(true)";
            };
        };
    };
};