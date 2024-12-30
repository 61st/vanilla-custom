/*
 * Author: AUTHOR
 * Function description
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: All <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[bob, ted], false] call lxim_main_fnc_example
 *
 * Public: No
 */

class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class CBA_Extended_EventHandlers;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class AnimationSources;

class CfgVehicles {
    class All {
        class Turrets;
    };
    class AllVehicles: All {
        class NewTurret {
            class Turrets;
        };
    };
    class Land: AllVehicles {};
    class LandVehicle: Land {
        class CommanderOptics;
    };
    class Car: LandVehicle {};
    class Car_F: Car {
        class Turrets {
            class MainTurret: NewTurret {};
        };
    };
    class Wheeled_APC_F: Car_F {
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
            };
        };
        class EventHandlers;
    };
    
    class APC_Wheeled_03_base_F: Wheeled_APC_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };
    class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {};
    class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {
        class MFD {
            class MFD_Driver_Heading {
                topLeft = "MFD_1_TL";
                topRight = "MFD_1_TR";
                bottomLeft = "MFD_1_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                enableParallax = 0;
                font = "LCD14";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {0.61,0.62,0};
                    alpha = 1;
                    condition = "on";
                    class Driver_Heading {
                        type = "text";
                        source = "heading";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.5,0},1};
                        right[] = {{1,0},1};
                        down[] = {{0.5,0.81},1};
                    };
                };
            };
            class MFD_Commander_Display_Damage {
                topLeft = "mfd_com_TL";
                topRight = "mfd_com_TR";
                bottomLeft = "mfd_com_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0,0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Damage_Hull {
                        type = "text";
                        source = "static";
                        text = "HULL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.04,0.18},1};
                        right[] = {{0.065,0.18},1};
                        down[] = {{0.04,0.44},1};
                    };
                    class Damage_Engine {
                        type = "text";
                        source = "static";
                        text = "ENG";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.11,0.18},1};
                        right[] = {{0.135,0.18},1};
                        down[] = {{0.11,0.44},1};
                    };
                    class Damage_Fuel {
                        type = "text";
                        source = "static";
                        text = "FUEL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.178,0.18},1};
                        right[] = {{0.203,0.18},1};
                        down[] = {{0.178,0.44},1};
                    };
                    class Damage_Wheels {
                        type = "text";
                        source = "static";
                        text = "WHL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.04,0.55},1};
                        right[] = {{0.065,0.55},1};
                        down[] = {{0.04,0.81},1};
                    };
                    class Damage_Gun {
                        type = "text";
                        source = "static";
                        text = "GUN";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.11,0.55},1};
                        right[] = {{0.135,0.55},1};
                        down[] = {{0.11,0.81},1};
                    };
                    class Damage_Turret {
                        type = "text";
                        source = "static";
                        text = "TRT";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.178,0.55},1};
                        right[] = {{0.203,0.55},1};
                        down[] = {{0.178,0.81},1};
                    };
                };
            };
            class MFD_Commander_Display {
                topLeft = "mfd_com_TL";
                topRight = "mfd_com_TR";
                bottomLeft = "mfd_com_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones {
                    class FuelScale {
                        type = "linear";
                        source = "fuel";
                        sourceIndex = 1;
                        sourceScale = 1.0;
                        min = 0;
                        max = 1;
                        minPos[] = {0,0};
                        maxPos[] = {-0.09,0};
                    };
                };
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Main_Gun {
                        type = "text";
                        source = "static";
                        text = "MAIN GUN";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.273,0.18},1};
                        right[] = {{0.298,0.18},1};
                        down[] = {{0.273,0.44},1};
                    };
                    class Main_Gun_Ammo_count {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 0;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.273,0.55},1};
                        right[] = {{0.298,0.55},1};
                        down[] = {{0.273,0.81},1};
                    };
                    class Main_Gun_Ammo_Type_text {
                        type = "text";
                        source = "static";
                        text = "TYPE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.385,0.18},1};
                        right[] = {{0.41,0.18},1};
                        down[] = {{0.385,0.44},1};
                    };
                    class Main_Gun_Ammo_Type {
                        type = "text";
                        source = "ammoFormat";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.385,0.55},1};
                        right[] = {{0.41,0.55},1};
                        down[] = {{0.385,0.81},1};
                    };
                    class Coax {
                        type = "text";
                        source = "static";
                        text = "COAX";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.498,0.18},1};
                        right[] = {{0.523,0.18},1};
                        down[] = {{0.498,0.44},1};
                    };
                    class Coax_Ammo_count {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 1;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.498,0.55},1};
                        right[] = {{0.523,0.55},1};
                        down[] = {{0.498,0.81},1};
                    };
                    class Azimuth {
                        type = "text";
                        source = "static";
                        text = "GUN AZIM";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.605,0.18},1};
                        right[] = {{0.63,0.18},1};
                        down[] = {{0.605,0.44},1};
                    };
                    class Azimuth_number {
                        type = "text";
                        source = "[x]turretworld";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.61,0.55},1};
                        right[] = {{0.635,0.55},1};
                        down[] = {{0.61,0.81},1};
                    };
                    class Smoke {
                        type = "text";
                        source = "static";
                        text = "SMOKE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.717,0.18},1};
                        right[] = {{0.742,0.18},1};
                        down[] = {{0.717,0.44},1};
                    };
                    class Fuel_background_white {
                        color[] = {0.2,0.2,0.2};
                        alpha = 0.1;
                        condition = "1";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{{0.877,0.7},1},{{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel_background_green {
                        color[] = {0,0.7,0};
                        condition = "fuel>=0.5";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel_background_yellow {
                        color[] = {0.9,0.7,0};
                        condition = "fuel<0.5";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel_background_red {
                        color[] = {0.7,0,0};
                        condition = "fuel<0.3";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel {
                        type = "text";
                        source = "static";
                        text = "FUEL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.83,0.18},1};
                        right[] = {{0.855,0.18},1};
                        down[] = {{0.83,0.44},1};
                    };
                    class Fuel_number {
                        type = "text";
                        source = "fuel";
                        sourceScale = 100;
                        sourceLength = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.835,0.4},1};
                        right[] = {{0.86,0.4},1};
                        down[] = {{0.835,0.66},1};
                    };
                    class Fuel_percent_sign {
                        type = "text";
                        source = "static";
                        text = "%";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.845,0.4},1};
                        right[] = {{0.87,0.4},1};
                        down[] = {{0.845,0.66},1};
                    };
                };
            };
            class MFD_Commander_OnScreen {
                topLeft = "PIP_COM_TL";
                topRight = "PIP_COM_TR";
                bottomLeft = "PIP_COM_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0,0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Azimuth_number {
                        type = "text";
                        source = "[x]turretworld";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.22,0.435},1};
                        right[] = {{0.245,0.435},1};
                        down[] = {{0.22,0.472},1};
                    };
                    class Elevation_Text {
                        type = "text";
                        source = "static";
                        text = "E: ";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.2,0.28},1};
                        right[] = {{0.225,0.28},1};
                        down[] = {{0.2,0.317},1};
                    };
                    class Elevation_Number {
                        type = "text";
                        source = "[y]turretworld";
                        sourceScale = 1;
                        sourceLength = 4;
                        sourcePrecision = 1;
                        refreshRate = 0;
                        align = "center";
                        scale = 1;
                        pos[] = {{0.23,0.28},1};
                        right[] = {{0.255,0.28},1};
                        down[] = {{0.23,0.317},1};
                    };
                    class Lased_Range {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 4;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.75,0.28},1};
                        right[] = {{0.775,0.28},1};
                        down[] = {{0.75,0.317},1};
                    };
                    class VisionMode_Text {
                        type = "text";
                        source = "static";
                        text = "WFOV";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.75,0.65},1};
                        right[] = {{0.775,0.65},1};
                        down[] = {{0.75,0.687},1};
                    };
                    class VisionMode_String {
                        type = "text";
                        source = "visionMode";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.825,0.65},1};
                        right[] = {{0.85,0.65},1};
                        down[] = {{0.825,0.687},1};
                    };
                };
            };
            class MFD_Commander_Display_MainTurret {
                topLeft = "mfd_com_TL";
                topRight = "mfd_com_TR";
                bottomLeft = "mfd_com_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0,0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Smoke_ammo {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 3;
                        sourceIndex = 0;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.72,0.55},1};
                        right[] = {{0.745,0.55},1};
                        down[] = {{0.72,0.81},1};
                    };
                };
            };
            class MFD_Gunner_Ready_To_Fire {
                topLeft = "mfd_gun_cli_TL";
                topRight = "mfd_gun_cli_TR";
                bottomLeft = "mfd_gun_cli_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0,0,0};
                alpha = 0.5;
                enableParallax = 0;
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {0,0,0};
                    alpha = 1;
                    condition = "1";
                    class Top_text {
                        type = "text";
                        source = "static";
                        text = "READY TO";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.45,0.05},1};
                        right[] = {{0.67,0.05},1};
                        down[] = {{0.45,0.55},1};
                    };
                    class Bottom_text {
                        type = "text";
                        source = "static";
                        text = "FIRE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.465,0.45},1};
                        right[] = {{0.685,0.45},1};
                        down[] = {{0.465,0.95},1};
                    };
                };
            };
            class MFD_Gunner_Display {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Main_armament {
                        type = "text";
                        source = "static";
                        text = "MAIN ARMAMENT";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,-0.003},1};
                        right[] = {{0.075,-0.003},1};
                        down[] = {{0.015,0.075},1};
                    };
                    class Machinegun {
                        type = "text";
                        source = "static";
                        text = "COAX MG";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.31},1};
                        right[] = {{0.075,0.31},1};
                        down[] = {{0.015,0.388},1};
                    };
                    class Main_armament_ammo_type {
                        type = "text";
                        source = "static";
                        text = "AMMO TYPE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.545,-0.003},1};
                        right[] = {{0.605,-0.003},1};
                        down[] = {{0.545,0.075},1};
                    };
                    class Lased_distance_elevation {
                        type = "text";
                        source = "static";
                        text = "LASED DIST";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.84},1};
                        right[] = {{0.069,0.84},1};
                        down[] = {{0.015,0.918},1};
                    };
                    class Azimut {
                        type = "text";
                        source = "static";
                        text = "AZIMUTH";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.915},1};
                        right[] = {{0.075,0.915},1};
                        down[] = {{0.015,0.993},1};
                    };
                    class Damage {
                        type = "text";
                        source = "static";
                        text = "DAMAGE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.39},1};
                        right[] = {{0.075,0.39},1};
                        down[] = {{0.015,0.468},1};
                    };
                    class Heading {
                        type = "text";
                        source = "[x]turretworld";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 0.2;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.34,0.915},1};
                        right[] = {{0.4,0.915},1};
                        down[] = {{0.34,0.993},1};
                    };
                    class Lased_Range {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 4;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.335,0.84},1};
                        right[] = {{0.395,0.84},1};
                        down[] = {{0.335,0.918},1};
                    };
                };
            };
            class MFD_Gunner_Main_Armament_Ammo_Type {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                turret[] = {0};
                enableParallax = 0;
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Gunner_AmmoType {
                        type = "text";
                        source = "ammoFormat";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.56,0.09},1};
                        right[] = {{0.62,0.09},1};
                        down[] = {{0.56,0.168},1};
                    };
                };
            };
            class MFD_Gunner_Coax_Ammo {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Gunner_Text_1 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        sourceIndex = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.31},1};
                        right[] = {{0.43,0.31},1};
                        down[] = {{0.38,0.388},1};
                    };
                };
            };
            class MFD_Gunner_AmmoIndicator_Main_Armament {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospacePro";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Main_Armament_Ammo_Type_1 {
                        type = "text";
                        source = "static";
                        text = "MP-T";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.065},1};
                        right[] = {{0.075,0.065},1};
                        down[] = {{0.015,0.143},1};
                    };
                    class Gunner_Text_1 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 0;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.065},1};
                        right[] = {{0.44,0.065},1};
                        down[] = {{0.38,0.143},1};
                    };
                    class Main_Armament_Ammo_Type_2 {
                        type = "text";
                        source = "static";
                        text = "APFSDS-T";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.125},1};
                        right[] = {{0.065,0.125},1};
                        down[] = {{0.015,0.203},1};
                    };
                    class Gunner_Text_2 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 0;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.125},1};
                        right[] = {{0.44,0.125},1};
                        down[] = {{0.38,0.203},1};
                    };
                    class Main_Armament_Ammo_Type_3 {
                        type = "text";
                        source = "static";
                        text = "AT MISSILE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.185},1};
                        right[] = {{0.065,0.185},1};
                        down[] = {{0.015,0.263},1};
                    };
                    class Gunner_Text_3 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 2;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.185},1};
                        right[] = {{0.43,0.185},1};
                        down[] = {{0.38,0.263},1};
                    };
                };
            };
        };
        memoryPointDriverOptics = "driverview";
        driverInfoPanelCameraPos = "driverview_old";
        viewDriverInExternal = 1;
        viewDriverShadowAmb = 0.5;
        viewDriverShadowDiff = 0.05;
        driverForceOptics = 0;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
            };
        };
        class AnimationSources: AnimationSources {};
        class Components;
    };
    /* BASE ------------------------------------------------------------------------------------------------------------- */
    class lxim_mk20_base_F: I_APC_Wheeled_03_cannon_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "M20A2";
        author = QAUTHOR;
        picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
        side = 1;
        ace_vehicle_damage_hullFireProb = 0.5;
        ace_hunterkiller = 1;
        radarType = 2;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        receiveRemoteTargets = 1;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class DataLinkSensorComponent: SensorTemplateDataLink{};
                };
            };
        };
        maxSpeed = 125;
        maximumLoad = 6000;
        enginePower = 447;
        terrainCoef = 1;
        vehicleClass = "APCs""";
        textureList[] = {"Blu",1};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet","CamoSlat"};
        class EventHandlers;
        class TextureSources {
            class Blu_green {
                displayName = "M20A2";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "M20 Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_V21a {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_V21b {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_V22a {
                displayName = "M20 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_V22b {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_V21a {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_V21b {
                displayName = "M20 Desert 1/1/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_V22a {
                displayName = "M20 Desert 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_V22b {
                displayName = "M20 Desert 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_rino {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_rino {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
            factions[] = {QUOTE(PREFIX)};
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    "RHS_weap_M242BC",
                    "rhs_weap_m240_bradley_coax",
                    QGVAR(missiles_titan)
                };
                magazines[] = {
                    "rhs_mag_1100Rnd_762x51_M240",
                    "rhs_mag_1100Rnd_762x51_M240",

                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",

                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",

                    QGVAR(2Rnd_AA_missiles),
                    QGVAR(2Rnd_AT_missiles),
                    QGVAR(2Rnd_AT_missiles)
                };  
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"SmokeLauncher"};
                        magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
                    };
                };
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                masterPositions[] = {"commander"};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Passenger intercom";
                shortName = "Pax";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 0;
            };
        };

        // Infantry Phone
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"intercom_1"};
        acre_infantryPhoneDisableRinging = 0; // If set to 1, the ringing functionality will not be available
        acre_infantryPhoneCustomRinging[] = {"A3\Sounds_F\sfx\alarm_independent.wss", 5.0, 1.0, 1.0, 50}; // The alarm sound will be played every 5 seconds and will be audible until 50m. Volume and sound pitch are both set to 1

        class AcreRacks {
            class Rack_1 {
                displayName = "VEHICLE";             // Name displayed in the interaction menu
                shortName = "VEH";
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"crew"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};             // Use this to attach simple components like Antennas. Not yet fully implemented
                mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
                isRadioRemovable = 1;                 // Radio can be removed
                intercom[] = {"intercom_1"};                      // No access to intercoms. All units in intercom will be able to hear/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
            class Rack_2 {
                displayName = "SQUAD";             // Name displayed in the interaction menu
                shortName = "SQD";
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"crew"};       // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};             // Use this to attach simple components like Antennas. Not yet fully implemented
                mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
                isRadioRemovable = 1;                 // Radio can be removed
                intercom[] = {"Intercom_1"};                      // No access to intercoms. All units in intercom will be able to hear/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
            class Rack_3 {
                displayName = "PASSENGER";             // Name displayed in the interaction menu
                shortName = "PAX";
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"inside"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};             // Use this to attach simple components like Antennas. Not yet fully implemented
                mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
                isRadioRemovable = 1;                 // Radio can be removed
                intercom[] = {"intercom_2"};                      // No access to intercoms. All units in intercom will be able to hear/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
        };
    };
    class lxim_outlaw_unarmed_base_F: lxim_mk20_base_F {
        supplyRadius = 10;
        attendant = 1;
        forceInGarage = 1;
        scope = 0;
        scopeCurator = 0;
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
        };
        textureList[] = {"Blu",1};
        class TextureSources {
            class Blu_Woodland {
                displayName = "M20 MEV Green";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\med_01_ext_g.paa),QPATHTOF(data\med_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "M20 MEV Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\med_01_ext_d.paa),QPATHTOF(data\med_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
        driverCanSee = "4+8+2+32+16";
        gunnerCanSee = "4+2+8+32+16";
        weapons[] = {"TruckHorn","SmokeLauncher","rhsusf_weap_duke"};
        magazines[] = {"SmokeLauncherMag","rhsusf_mag_duke"};
        class Turrets {};
        threat[] = {0,0,0};
    };
    /* G ---------------------------------------------------------------------------------------------------------------- */
    class lxim_mk20: lxim_mk20_base_F {
        displayName = "M20A2";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "lxim_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    /* UNARMED ---------------------------------------------------------------------------------------------------------- */
    class lxim_mev_mk20: lxim_outlaw_unarmed_base_F {
        displayName = "M20-MEV Green";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 1;
        crew = "B_crew_F";
        class MyAmbulance {
            attendant = 1;
        };
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "lxim_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\med_01_ext_g.paa),QPATHTOF(data\med_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class lxim_repair_mk20: lxim_outlaw_unarmed_base_F {
        displayName = "M20A-SUP Green";
        ace_cargo_space = 12;
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 1;
        transportAmmo = 0;
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        transportSoldier = 4;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "lxim_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    
};
