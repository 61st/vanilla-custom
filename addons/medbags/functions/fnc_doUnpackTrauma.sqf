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
        hint "Unpacking Trauma Kit....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "lxim_medbags_Trauma";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "ACM_Paracetamol",8, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_AmmoniaInhalant",8, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Inhaler_Penthrox",8, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_OxygenTank_425",4, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        // Catastrophic Bleeding
        [_unit, "ACM_PressureBandage",20, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_EmergencyTraumaDressing",20, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_ElasticWrap",60, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_tourniquet",16, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        // Airway
        [_unit, "ACM_IGel",20, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_ACCUVAC",5, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_GuedelTube",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_NPA",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_SuctionBag",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        // Breathing
        [_unit, "ACM_ChestSeal",20, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_BVM",4, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_NCDKit",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_PulseOximeter",5, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_ChestTubeKit",5, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        // Circulation
        [_unit, "ACM_AED",1, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_PressureCuff",4, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_IV_16g",25, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_IV_14g",15, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Syringe_1",5, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Syringe_3",5, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Syringe_5",5, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Syringe_10",2, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_IO_FAST",15, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_IO_EZ",15, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Vial_Epinephrine",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Vial_Adenosine",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Vial_TXA",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Vial_Amiodarone",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_epinephrine",5, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_BloodBag_ON_1000",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_BloodBag_ON_500",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_BloodBag_ON_250",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_plasmaIV",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_plasmaIV_500",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_plasmaIV_250",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_salineIV",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_salineIV_500",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_salineIV_250",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        // Disability
        // [_unit, "ACE_morphine",5, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Vial_Morphine",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Vial_Ketamine",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Vial_Fentanyl",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Vial_Lidocaine",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_Vial_Ondansetron",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_splint",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACM_SAMSplint",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        // Other
        [_unit, "ACM_Spray_Naloxone",10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_surgicalKit",2, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_bodyBag",5, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_suture",60, _order, _overflow] call EFUNC(common,addItem);
    };

    if (lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {

        [_unit, QGVAR(Medical_MedicKit_Open_1)] call EFUNC(common,stop3dSound);



    };

};
