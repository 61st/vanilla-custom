/*
 * Author: Reeveli
 * Part of Reeveli's TFAR Scribbles.
 * UI for ANPRC 152.
 
 1.1
    Increased nigh time threshold to <1
*/


#define TFAR_152_X 0.0138687 * safeZoneW + safeZoneX
#define TFAR_152_Y -1.28145 * safeZoneH + safeZoneY
#define TFAR_152_W 0.335981 * safeZoneW
#define TFAR_152_H 2.2902 * safeZoneH

class anprc152_radio_dialog
{
    idd=1333;
    movingEnable=1;
    objects[]={};
    controls[] = {"background","Rev_list","Rev_fr_1","Rev_fr_2","Rev_fr_3","Rev_fr_4","Rev_fr_5","Rev_fr_6","Rev_fr_7","Rev_fr_8","Rev_desc_1","Rev_desc_2","Rev_desc_3","Rev_desc_4","Rev_desc_5","Rev_desc_6","Rev_desc_7","Rev_desc_8","enter","edit","channel_edit","clear","prev_channel","next_channel","volume_Switch","stereo","additional","speakers"};
    controlsBackground[] = {};
    onUnload="['OnRadioOpen', [player, TF_sw_dialog_radio, false, 'anprc152_radio_dialog', false]] call TFAR_fnc_fireEventHandlers; [TF_sw_dialog_radio, [ctrlText 8009,ctrlText 8010,ctrlText 8011,ctrlText 8012,ctrlText 8013,ctrlText 8014,ctrlText 8015,ctrlText 8016]] call Rev_TFAR_fnc_saveScribble;";
    onLoad="if (sunOrMoon < 1) then {((_this select 0) displayCtrl 67676) ctrlSetText '\z\tfar\addons\handhelds\anprc152\ui\152_n.paa';((_this select 0) displayCtrl 8000) ctrlSetTextColor [0.12,0.12,0.12,1]};";
    class background: RscBackPicture
    {
        idc=67676;
        text = "\z\tfar\addons\handhelds\anprc152\ui\152.paa";
        x="0.0138687 * safeZoneW + safeZoneX";
        y="-1.28145 * safeZoneH + safeZoneY";
        w="0.335981 * safeZoneW";
        h="2.2902 * safeZoneH";
        moving=1;
    };
    class Rev_list: background
    {
        idc=8000;
        text="\reeveli_tfar_scribbles\anprc152\Rev_anprc152.paa";
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);";
    };
    class Rev_fr_1: RscText
    {
        idc = 8001;
        text = "";
        font = "Caveat";
        sizeEx = TFAR_152_H * 0.009;
        colorText[] = {0,0,0,1};
        shadow = 0;
        x = TFAR_152_X + TFAR_152_W * 0.44;
        y = TFAR_152_Y + TFAR_152_H * 0.914;
        w = TFAR_152_W * 0.096;
        h = TFAR_152_H * 0.005;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]); [1,_control] call Rev_TFAR_fnc_getSwFrq;";
    };
    class Rev_fr_2: Rev_fr_1
    {
        idc = 8002;
        y = TFAR_152_Y + TFAR_152_H * 0.921;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[2,_control] call Rev_TFAR_fnc_getSwFrq;";
    };
    class Rev_fr_3: Rev_fr_1
    {
        idc = 8003;
        y = TFAR_152_Y + TFAR_152_H * 0.928;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[3,_control] call Rev_TFAR_fnc_getSwFrq;";
    };
    class Rev_fr_4: Rev_fr_1
    {
        idc = 8004;
        y = TFAR_152_Y + TFAR_152_H * 0.935;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[4,_control] call Rev_TFAR_fnc_getSwFrq;";
    };
    class Rev_fr_5: Rev_fr_1
    {
        idc= 8005;
        y = TFAR_152_Y + TFAR_152_H * 0.942;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[5,_control] call Rev_TFAR_fnc_getSwFrq;";
    };
    class Rev_fr_6: Rev_fr_1
    {
        idc= 8006;
        y = TFAR_152_Y + TFAR_152_H * 0.949;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[6,_control] call Rev_TFAR_fnc_getSwFrq;";
    };
    class Rev_fr_7: Rev_fr_1
    {
        idc= 8007;
        y = TFAR_152_Y + TFAR_152_H * 0.956;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[7,_control] call Rev_TFAR_fnc_getSwFrq;";
    };
    class Rev_fr_8: Rev_fr_1
    {
        idc= 8008;
        y = TFAR_152_Y + TFAR_152_H * 0.963;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[8,_control] call Rev_TFAR_fnc_getSwFrq;";
    };
    class Rev_desc_1: RscEdit
    {
        idc = 8009;
        text = "";
        font = "Caveat";
        sizeEx = TFAR_152_H * 0.008;
        colorText[] = {0,0,0,1};
        shadow = 0;
        style = 512;
        x = TFAR_152_X + TFAR_152_W * 0.54;
        y = TFAR_152_Y + TFAR_152_H * 0.914;
        w = TFAR_152_W * 0.125;
        h = TFAR_152_H * 0.005;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[TF_sw_dialog_radio, 1, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_2: Rev_desc_1
    {
        idc = 8010;
        y = TFAR_152_Y + TFAR_152_H * 0.921;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[TF_sw_dialog_radio, 2, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_3: Rev_desc_1
    {
        idc = 8011;
        y = TFAR_152_Y + TFAR_152_H * 0.928;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[TF_sw_dialog_radio, 3, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_4: Rev_desc_1
    {
        idc = 8012;
        y = TFAR_152_Y + TFAR_152_H * 0.935;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[TF_sw_dialog_radio, 4, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_5: Rev_desc_1
    {
        idc = 8013;
        y = TFAR_152_Y + TFAR_152_H * 0.942;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[TF_sw_dialog_radio, 5, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_6: Rev_desc_1
    {
        idc = 8014;
        y = TFAR_152_Y + TFAR_152_H * 0.949;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[TF_sw_dialog_radio, 6, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_7: Rev_desc_1
    {
        idc = 8015;
        y = TFAR_152_Y + TFAR_152_H * 0.956;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[TF_sw_dialog_radio, 7, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_8: Rev_desc_1
    {
        idc = 8016;
        y = TFAR_152_Y + TFAR_152_H * 0.963;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_152',false]);[TF_sw_dialog_radio, 8, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class edit: RscEditLCD
    {
        moving=1;
        idc=1400;
        x="0.168556 * safeZoneW + safeZoneX";
        y="0.4824 * safeZoneH + safeZoneY";
        w="0.0599875 * safeZoneW";
        h="0.043175 * safeZoneH";
        font="TFAR_font_dots";
        shadow=2;
        tooltip="$STR_tfar_core_current_freq";
        canModify=1;
        onKeyUp="if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter; private _channel = ((TF_sw_dialog_radio) call TFAR_fnc_getSwSettings) select 0;[_channel + 1, displayCtrl (8000 + _channel + 1)] call Rev_TFAR_fnc_getSwFrq;};";
        onLoad = "params ['_control','_config']; ctrlSetFocus _control";
    };
    class channel_edit: RscEditLCD
    {
        moving=1;
        idc=1604;
        x="0.134731 * safeZoneW + safeZoneX";
        y="0.482125 * safeZoneH + safeZoneY";
        w="0.033825 * safeZoneW";
        h="0.044275 * safeZoneH";
        font="TFAR_font_dots";
        shadow=2;
        tooltip="$STR_tfar_core_current_channel";
        canModify=0;
    };
    class enter: HiddenButton
    {
        idc=1600;
        x="0.205269 * safeZoneW + safeZoneX";
        y="0.60285 * safeZoneH + safeZoneY";
        w="0.0144375 * safeZoneW";
        h="0.017875 * safeZoneH";
        tooltip="$STR_tfar_core_set_frequency";
        onButtonClick="[((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter; private _channel = ((TF_sw_dialog_radio) call TFAR_fnc_getSwSettings) select 0;[_channel + 1, displayCtrl (8000 + _channel + 1)] call Rev_TFAR_fnc_getSwFrq;";
        action="";
    };
    class clear: HiddenButton
    {
        idc=1601;
        x="0.205887 * safeZoneW + safeZoneX";
        y="0.56985 * safeZoneH + safeZoneY";
        w="0.0146438 * safeZoneW";
        h="0.0198 * safeZoneH";
        tooltip="$STR_tfar_core_clear_frequency";
        action="ctrlSetText [1400,'']; ctrlSetFocus ((findDisplay 1333) displayCtrl 1400);";
    };
    class additional: HiddenButton
    {
        idc=12345;
        x="0.161956 * safeZoneW + safeZoneX";
        y="0.658675 * safeZoneH + safeZoneY";
        w="0.0169125 * safeZoneW";
        h="0.023925 * safeZoneH";
        tooltip="$STR_tfar_core_set_additional";
        action="[TF_sw_dialog_radio, TF_sw_dialog_radio call TFAR_fnc_getSwChannel] call TFAR_fnc_setAdditionalSwChannel; call TFAR_fnc_updateSWDialogToChannel; [TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class speakers: HiddenButton
    {
        idc=123456;
        x="0.181756 * safeZoneW + safeZoneX";
        y="0.659225 * safeZoneH + safeZoneY";
        w="0.0179438 * safeZoneW";
        h="0.0231 * safeZoneH";
        tooltip="$STR_tfar_core_speakers_settings_true";
        action="[TF_sw_dialog_radio] call TFAR_fnc_setSwSpeakers;[TF_sw_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
    };
    class next_channel: HiddenButton
    {
        idc=1602;
        x="0.205062 * safeZoneW + safeZoneX";
        y="0.63035 * safeZoneH + safeZoneY";
        w="0.0154688 * safeZoneW";
        h="0.020075 * safeZoneH";
        tooltip="$STR_tfar_core_next_channel";
        action="[1, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class prev_channel: HiddenButton
    {
        idc=1603;
        x="0.204237 * safeZoneW + safeZoneX";
        y="0.6584 * safeZoneH + safeZoneY";
        w="0.0154688 * safeZoneW";
        h="0.023375 * safeZoneH";
        tooltip="$STR_tfar_core_previous_channel";
        action="[0, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class stereo: HiddenButton
    {
        idc=1607;
        x="0.139475 * safeZoneW + safeZoneX";
        y="0.65895 * safeZoneH + safeZoneY";
        w="0.0198 * safeZoneW";
        h="0.024475 * safeZoneH";
        action="[TF_sw_dialog_radio,((TF_sw_dialog_radio call TFAR_fnc_getCurrentSwStereo) + 1) mod 3] call TFAR_fnc_setSwStereo; [TF_sw_dialog_radio] call TFAR_fnc_showRadioVolume;";
        tooltip="$STR_tfar_core_stereo_settings";
    };
    class volume_Switch: HiddenRotator
    {
        idc=-1;
        x="0.167319 * safeZoneW + safeZoneX";
        y="0.0762632 * safeZoneH + safeZoneY";
        w="0.0400125 * safeZoneW";
        h="0.201575 * safeZoneH";
        tooltip="$STR_tfar_core_rotator_volume";
        onMouseButtonDown="[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
    };
};