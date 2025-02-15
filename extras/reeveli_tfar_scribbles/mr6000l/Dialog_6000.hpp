/*
 * Author: Reeveli
 * Part of Reeveli's TFAR Scribbles.
 * UI for MR6000L.
 
2.1
    Increased nigh time threshold to <1

2.0.1
    Updated notebook graphic to v7

2.0 Update
    New UI background image
    New dynamic controls for showing alt channel
        Added function call to alt channel button and onLoad EH for new alt channel functionality
*/


//Notebook x, y, w, h in addon common defines

class mr6000l_radio_dialog
{
    idd = 20135;
    movingEnable = 1;
    controls[] = {"background","Rev_list","Rev_fr_1","Rev_fr_2","Rev_fr_3","Rev_fr_4","Rev_fr_5","Rev_fr_6","Rev_fr_7","Rev_fr_8","Rev_desc_1","Rev_desc_2","Rev_desc_3","Rev_desc_4","Rev_desc_5","Rev_desc_6","Rev_desc_7","Rev_desc_8","Rev_alt_1","Rev_alt_2","Rev_alt_3","Rev_alt_4","Rev_alt_5","Rev_alt_6","Rev_alt_7","Rev_alt_8","enter","channel_edit","edit","clear","prev_channel","next_channel","increase_volume","stereo","channel_01","channel_02","channel_03","channel_04","channel_05","channel_06","channel_07","channel_08","channel_09","additional","speakers"};
    controlsBackground[] = {};
    onUnload = "['OnRadioOpen', [player, TF_lr_dialog_radio, true, 'mr6000l_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;;[TF_lr_dialog_radio # 0, [ctrlText 8009,ctrlText 8010,ctrlText 8011,ctrlText 8012,ctrlText 8013,ctrlText 8014,ctrlText 8015,ctrlText 8016]] call Rev_TFAR_fnc_saveScribble";
    onLoad = "if ((sunOrMoon < 1) AND (isNull objectParent player)) then {((_this select 0) displayCtrl 67676) ctrlSetTextColor [0.12,0.12,0.12,1];((_this select 0) displayCtrl 8000) ctrlSetTextColor [0.12,0.12,0.12,1]};call Rev_TFAR_fnc_getLwAlt;";
    class background: RscBackPicture
    {
        idc = 67676;
        text = "\z\tfar\addons\backpacks\mr6000l\ui\mr6000l.paa";
        x = "0.0413536 * safeZoneW + safeZoneX";
        y = "0.0434751 * safeZoneH + safeZoneY";
        w = "0.533454 * safeZoneW";
        h = "0.926251 * safeZoneH";
        moving = 1;
    };
    class Rev_list: background
    {
        idc=8000;
        x = TFAR_notebook_X + TFAR_notebook_W * 0.75;
        y = TFAR_notebook_Y;
        w = TFAR_notebook_W;
        h = TFAR_notebook_H;
        text="\reeveli_tfar_scribbles\notebook\Rev_notebook_7.paa";
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);";
    };
    class Rev_fr_1: RscText
    {
        idc = 8001;
        text = "";
        font = "Caveat";
        sizeEx = TFAR_notebook_H * 0.03;
        colorText[] = {0,0,0,1};
        shadow = 0;
        x = TFAR_notebook_X + TFAR_notebook_W * (0.75 + 0.38);
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.337;
        w = TFAR_notebook_W * 0.08;
        h = TFAR_notebook_H * 0.03;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]); [1,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_2: Rev_fr_1
    {
        idc = 8002;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.382;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]); [2,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_3: Rev_fr_1
    {
        idc = 8003;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.427;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]); [3,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_4: Rev_fr_1
    {
        idc = 8004;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.472;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]); [4,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_5: Rev_fr_1
    {
        idc = 8005;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.512;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]); [5,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_6: Rev_fr_1
    {
        idc = 8006;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.557;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]); [6,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_7: Rev_fr_1
    {
        idc = 8007;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.602;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]); [7,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_8: Rev_fr_1
    {
        idc = 8008;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.647;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]); [8,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_desc_1: RscEdit
    {
        idc = 8009;
        text = "";
        font = "Caveat";
        sizeEx = TFAR_notebook_H * 0.03;
        colorText[] = {0,0,0,1};
        shadow = 0;
        style = 512;
        x = TFAR_notebook_X + TFAR_notebook_W * (0.75 + 0.465);
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.337;
        w = TFAR_notebook_W * 0.15;
        h = TFAR_notebook_H * 0.03;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);[TF_lr_dialog_radio # 0, 1, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_2: Rev_desc_1
    {
        idc = 8010;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.382;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);[TF_lr_dialog_radio # 0, 2, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_3: Rev_desc_1
    {
        idc = 8011;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.427;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);[TF_lr_dialog_radio # 0, 3, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_4: Rev_desc_1
    {
        idc = 8012;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.472;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);[TF_lr_dialog_radio # 0, 4, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_5: Rev_desc_1
    {
        idc = 8013;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.512;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);[TF_lr_dialog_radio # 0, 5, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_6: Rev_desc_1
    {
        idc = 8014;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.557;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);[TF_lr_dialog_radio # 0, 6, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_7: Rev_desc_1
    {
        idc = 8015;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.602;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);[TF_lr_dialog_radio # 0, 7, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_8: Rev_desc_1
    {
        idc = 8016;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.647;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);[TF_lr_dialog_radio # 0, 8, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_alt_1: Rev_fr_1
    {
        idc=8020;
        text = "";
        font = "Caveat";
        sizeEx = TFAR_notebook_H * 0.03;
        colorText[] = {0,0,0,1};
        shadow = 0;
        x = TFAR_notebook_X + TFAR_notebook_W * (0.75 + 0.624);
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.337;
        w = TFAR_notebook_W * 0.04;
        h = TFAR_notebook_H * 0.03;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr6000l',false]);";
    };
    class Rev_alt_2: Rev_alt_1
    {
        idc=8021;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.382;
    };
    class Rev_alt_3: Rev_alt_1
    {
        idc=8022;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.427;
    };
    class Rev_alt_4: Rev_alt_1
    {
        idc=8023;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.472;
    };
    class Rev_alt_5: Rev_alt_1
    {
        idc=8024;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.512;
    };
    class Rev_alt_6: Rev_alt_1
    {
        idc=8025;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.557;
    };
    class Rev_alt_7: Rev_alt_1
    {
        idc=8026;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.602;
    };
    class Rev_alt_8: Rev_alt_1
    {
        idc=8027;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.647;
    };
    class channel_edit: RscEditLCD
    {
        idc = 1411;
        text = "";
        x = "0.188905 * safeZoneW + safeZoneX";
        y = "0.396594 * safeZoneH + safeZoneY";
        w = "0.135685 * safeZoneW";
        h = "0.055003 * safeZoneH";
        colorText[] = {0,0.95,0,1};
        colorBackground[] = {0,0,0,0};
        font = "TFAR_font_dots";
        shadow = 2;
        sizeEx = "(((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 22) * 1.2)";
        tooltip = "Current channel";
        canModify = 0;
    };
    class edit: RscEditLCD
    {
        idc = 1410;
        x = "0.189421 * safeZoneW + safeZoneX";
        y = "0.329491 * safeZoneH + safeZoneY";
        w = "0.136717 * safeZoneW";
        h = "0.0638035 * safeZoneH";
        colorText[] = {0,0.95,0,1};
        colorBackground[] = {0,0,0,0};
        font = "TFAR_font_dots";
        shadow = 2;
        sizeEx = "(((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 22) * 1.2)";
        tooltip = "Current frequency";
        canModify = 1;
        onKeyUp = "if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter; private _channel = ((TF_lr_dialog_radio) call TFAR_fnc_getLrSettings) # 0; [_channel + 1, displayCtrl (8000 + _channel + 1)] call Rev_TFAR_fnc_getLwFrq;};";
        onLoad = "params ['_control','_config']; ctrlSetFocus _control";
    };
    class enter: HiddenButton
    {
        idc = 20536;
        x = "0.405588 * safeZoneW + safeZoneX";
        y = "0.610006 * safeZoneH + safeZoneY";
        w = "0.0500435 * safeZoneW";
        h = "0.0880048 * safeZoneH";
        tooltip = "Set frequency";
        onButtonClick = "[((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter;private _channel = ((TF_lr_dialog_radio) call TFAR_fnc_getLrSettings) # 0; [_channel + 1, displayCtrl (8000 + _channel + 1)] call Rev_TFAR_fnc_getLwFrq;";
        action = "";
    };
    class clear: HiddenButton
    {
        idc = 20537;
        x = "0.23998 * safeZoneW + safeZoneX";
        y = "0.5011 * safeZoneH + safeZoneY";
        w = "0.03 * safeZoneW";
        h = "0.05 * safeZoneH";
        tooltip = "Clear frequency";
        action = "ctrlSetText [1410,'']; ctrlSetFocus ((findDisplay 20135) displayCtrl 1410);";
    };
    class prev_channel: HiddenButton
    {
        idc = 20538;
        x = "0.347271 * safeZoneW + safeZoneX";
        y = "0.610006 * safeZoneH + safeZoneY";
        w = "0.0495276 * safeZoneW";
        h = "0.0869047 * safeZoneH";
        tooltip = "Previous channel";
        action = "[0, true, 'PRE %1'] call TFAR_fnc_setChannelViaDialog;";
    };
    class next_channel: HiddenButton
    {
        idc = 20539;
        x = "0.461822 * safeZoneW + safeZoneX";
        y = "0.611106 * safeZoneH + safeZoneY";
        w = "0.0500435 * safeZoneW";
        h = "0.0880048 * safeZoneH";
        tooltip = "Next channel";
        action = "[1, true, 'PRE %1'] call TFAR_fnc_setChannelViaDialog;";
    };
    class increase_volume: HiddenRotator
    {
        idc = 20540;
        x = "0.117193 * safeZoneW + safeZoneX";
        y = "0.326191 * safeZoneH + safeZoneY";
        w = "0.0495276 * safeZoneW";
        h = "0.0803044 * safeZoneH";
        tooltip = "Decrease volume | Increase volume";
        onMouseButtonDown = "[_this select 1, true] call TFAR_fnc_setVolumeViaDialog;";
    };
    class stereo: HiddenRotator
    {
        idc = 20541;
        x = "0.114613 * safeZoneW + safeZoneX";
        y = "0.572604 * safeZoneH + safeZoneY";
        w = "0.0665527 * safeZoneW";
        h = "0.110006 * safeZoneH";
        action = "playSound 'TFAR_rotatorPush'; [TF_lr_dialog_radio,((TF_lr_dialog_radio call TFAR_fnc_getCurrentLrStereo) + 1) mod 3] call TFAR_fnc_setLrStereo; [TF_lr_dialog_radio] call TFAR_fnc_showRadioVolume;";
        tooltip = "Stereo settings";
    };
    class channel_01: HiddenButton
    {
        idc = 20542;
        x = "0.347806 * safeZoneW + safeZoneX";
        y = "0.31079 * safeZoneH + safeZoneY";
        w = "0.0469481 * safeZoneW";
        h = "0.0814044 * safeZoneH";
        action = "[TF_lr_dialog_radio, 0] call TFAR_fnc_setLrChannel; [""PRE %1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 1";
    };
    class channel_02: HiddenButton
    {
        idc = 20543;
        x = "0.40662 * safeZoneW + safeZoneX";
        y = "0.30859 * safeZoneH + safeZoneY";
        w = "0.0469481 * safeZoneW";
        h = "0.0847046 * safeZoneH";
        action = "[TF_lr_dialog_radio, 1] call TFAR_fnc_setLrChannel; [""PRE %1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 2";
    };
    class channel_03: HiddenButton
    {
        idc = 20544;
        x = "0.46337 * safeZoneW + safeZoneX";
        y = "0.30969 * safeZoneH + safeZoneY";
        w = "0.0500435 * safeZoneW";
        h = "0.0847046 * safeZoneH";
        action = "[TF_lr_dialog_radio, 2] call TFAR_fnc_setLrChannel; [""PRE %1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 3";
    };
    class channel_04: HiddenButton
    {
        idc = 20545;
        x = "0.348838 * safeZoneW + safeZoneX";
        y = "0.408695 * safeZoneH + safeZoneY";
        w = "0.0479799 * safeZoneW";
        h = "0.0880048 * safeZoneH";
        action = "[TF_lr_dialog_radio, 3] call TFAR_fnc_setLrChannel; [""PRE %1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 4";
    };
    class channel_05: HiddenButton
    {
        idc = 20546;
        x = "0.406104 * safeZoneW + safeZoneX";
        y = "0.410895 * safeZoneH + safeZoneY";
        w = "0.0490117 * safeZoneW";
        h = "0.0869047 * safeZoneH";
        action = "[TF_lr_dialog_radio, 4] call TFAR_fnc_setLrChannel; [""PRE %1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 5";
    };
    class channel_06: HiddenButton
    {
        idc = 20547;
        x = "0.464402 * safeZoneW + safeZoneX";
        y = "0.410895 * safeZoneH + safeZoneY";
        w = "0.0490117 * safeZoneW";
        h = "0.0869047 * safeZoneH";
        action = "[TF_lr_dialog_radio, 5] call TFAR_fnc_setLrChannel; [""PRE %1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 6";
    };
    class channel_07: HiddenButton
    {
        idc = 20548;
        x = "0.347806 * safeZoneW + safeZoneX";
        y = "0.509901 * safeZoneH + safeZoneY";
        w = "0.0479799 * safeZoneW";
        h = "0.0891049 * safeZoneH";
        action = "[TF_lr_dialog_radio, 6] call TFAR_fnc_setLrChannel; [""PRE %1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 7";
    };
    class channel_08: HiddenButton
    {
        idc = 20549;
        x = "0.407652 * safeZoneW + safeZoneX";
        y = "0.511001 * safeZoneH + safeZoneY";
        w = "0.0479799 * safeZoneW";
        h = "0.0880048 * safeZoneH";
        action = "[TF_lr_dialog_radio, 7] call TFAR_fnc_setLrChannel; [""PRE %1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 8";
    };
    class channel_09: HiddenButton
    {
        idc = 20550;
        x = "0.462338 * safeZoneW + safeZoneX";
        y = "0.512101 * safeZoneH + safeZoneY";
        w = "0.053139 * safeZoneW";
        h = "0.0880048 * safeZoneH";
        action = "[TF_lr_dialog_radio, 8] call TFAR_fnc_setLrChannel; [""PRE %1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 9";
    };
    class additional: HiddenFlip
    {
        idc = 12345;
        x = "0.127943 * safeZoneW + safeZoneX";
        y = "0.464992 * safeZoneH + safeZoneY";
        w = "0.0334654 * safeZoneW";
        h = "0.0560125 * safeZoneH";
        tooltip = "Set additional channel";
        action = "[TF_lr_dialog_radio,TF_lr_dialog_radio call TFAR_fnc_getLrChannel] call TFAR_fnc_setAdditionalLrChannel; call TFAR_fnc_updateLRDialogToChannel; [TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo; call Rev_TFAR_fnc_getLwAlt;";
    };
    class speakers: HiddenButton
    {
        idc = "IDC_mr6000l_radio_dialog_SPEAKERS";
        x = "0.195417 * safeZoneW + safeZoneX";
        y = "0.584691 * safeZoneH + safeZoneY";
        w = "0.0520523 * safeZoneW";
        h = "0.085791 * safeZoneH";
        tooltip = "Speakers";
        action = "TF_lr_dialog_radio call TFAR_fnc_setLrSpeakers;[TF_lr_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
    };
};