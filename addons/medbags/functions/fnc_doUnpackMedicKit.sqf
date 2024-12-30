#include "..\script_component.hpp"
/*

 * \lxim_medical\supplies\functions\fn_doUnpackMedicKit.sqf
 * by YonV
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call lxim_medical_supplies_fnc_doUnpackMedicKit;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

    params ["_unit"];

    _unit playAction "Gear";

    if (!isNull objectParent _unit) then {
        playSound QGVAR(Medical_MedicKit_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\lxim\addons\medbags\data\sounds\medickit_open_1.ogg", _unit]
    };

    lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [], { lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; }, { lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        hint "Unpacking Medical Kit....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "lxim_medbags_MedicKit";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "ACM_Paracetamol",2, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_AmmoniaInhalant",4, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Inhaler_Penthrox",4, _order, _overflow] call EFUNC(common,addItem);
        
        // Catastrophic Bleeding
        [_unit, "ACM_PressureBandage",20, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_EmergencyTraumaDressing",20, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_ElasticWrap",20, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACE_tourniquet",16, _order, _overflow] call EFUNC(common,addItem);
        
        // Airway
        [_unit, "ACM_IGel",8, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_GuedelTube",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_NPA",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_SuctionBag",02, _order, _overflow] call EFUNC(common,addItem);
        
        // Breathing
        [_unit, "ACM_ChestSeal",8, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_BVM",2, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_NCDKit",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_ChestTubeKit",4, _order, _overflow] call EFUNC(common,addItem);
        
        // Circulation
        [_unit, "ACM_IV_16g",12, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_IV_14g",8, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Syringe_1",4, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Syringe_3",4, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Syringe_5",4, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Syringe_10",2, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_IO_FAST",8, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_IO_EZ",8, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Vial_Epinephrine",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Vial_Adenosine",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Vial_TXA",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Vial_Amiodarone",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACE_epinephrine",6, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACE_salineIV",1, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACE_salineIV_500",2, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACE_salineIV_250",4, _order, _overflow] call EFUNC(common,addItem);
        
        // Disability
        // [_unit, "ACE_morphine",6, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Vial_Morphine",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Vial_Ketamine",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Vial_Fentanyl",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Vial_Lidocaine",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Vial_Ondansetron",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_SAMSplint",02, _order, _overflow] call EFUNC(common,addItem);
        
        // Other
        [_unit, "ACM_Spray_Naloxone",02, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACE_suture",20, _order, _overflow] call EFUNC(common,addItem);
    };
    if (lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {
        [_unit, QGVAR(Medical_MedicKit_Open_1)] call EFUNC(common,stop3dSound);
    };
};
