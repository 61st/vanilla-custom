class Controls
{
    // Shortcuts
    class LabelShortcuts: RscText {
        text = "Shortcuts";
        sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
        x = "0";
        y = "0";
        w = "7 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    };
    class ButtonDebugConsole: GVAR(RscButtonMenu) {
        idc = IDC_lxim_ADMINMENU_DASH_DEBUGCON;
        text = "Debug Console";
        onButtonClick = "(ctrlParent param [0]) closeDisplay 1; createDialog 'RscDisplayDebugPublic';";
        x = "0";
        y = "1.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
        w = "7 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    };
    class ButtonClaimZeus: ButtonDebugConsole {
        idc = IDC_lxim_ADMINMENU_DASH_CLAIMZEUS;
        text = "Claim Zeus";
        onButtonClick = QUOTE(call FUNC(claimZeus));
        y = "2.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class ButtonCamera: ButtonDebugConsole {
        idc = IDC_lxim_ADMINMENU_DASH_CAMERA;
        text = "Camera";
        onButtonClick = "(ctrlParent param [0]) closeDisplay 1; [] spawn BIS_fnc_camera;";
        y = "3.3 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class ButtonArsenal: ButtonDebugConsole {
        idc = IDC_lxim_ADMINMENU_DASH_ARSENAL;
        text = "Arsenal";
        tooltip = "ACE Arsenal. Hold Shift to open vanilla Arsenal.";
        onButtonClick = "";
        onMouseButtonClick = "if (player isKindOf 'CAManBase' && alive player) then {(ctrlParent param [0]) closeDisplay 1; if (!param [4]) then {[player, player, true] call ACE_arsenal_fnc_openBox;} else {['Open', true] spawn BIS_fnc_arsenal;};} else {systemChat '[61st Mechanized Infantry Battalion Admin Menu] Player object not compatible with Arsenal';};";
        y = "4.4 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class TabAdminEye: ButtonDebugConsole {
        idc = IDC_lxim_ADMINMENU_ADME;
        text = "Map";
        tooltip = "View Admin Map";
        onButtonClick = QUOTE([] call FUNC(adminEye_open));
        y = "5.5 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };

// class GiveAlive: ButtonDebugConsole {
//         idc = IDC_lxim_GIVEALIVE_ADME;
//         text = "Alive Tablet";
//         tooltip = "Give an Alive Support Tablet";
//         onButtonClick = "[player, ""ALIVE_Tablet"" ,1] call EFUNC(common,addItem);";
//         y = "6.6 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
//     };


    // Safestart
    // class LabelSafestart: LabelShortcuts
    // {
    //     text = "Safestart";
    //     y = "6.8 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    // };
    // class CheckboxSafestartEnabled: RscCheckBox
    // {
    //     idc = IDC_lxim_ADMINMENU_DASH_SAFESTART;
    //     x = "0.1 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     y = "7.7 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    //     w = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    // };
    // class LabelSafestartEnabled: LabelShortcuts
    // {
    //     idc = -1;
    //     text = "Enabled";
    //     sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
    //     colorText[] = {0.8, 0.8, 0.8, 1};
    //     x = "0.9 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     y = "7.7 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    //     w = "5.8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    // };

    // Toggle Spectator Talk
    // class LabelSpectatorTalk: LabelShortcuts
    // {
    //     text = "Talk with Spectators";
    //     y = "9.0 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    // };
    // class CheckboxSpectatorTalkEnabled: RscCheckBox
    // {
    //     idc = IDC_lxim_ADMINMENU_DASH_SPECTATORTALK;
    //     x = "0.1 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     y = "9.9 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    //     w = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    // };
    // class LabelSpectatorTalkEnabled: LabelShortcuts
    // {
    //     idc = -1;
    //     text = "Enabled";
    //     sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
    //     colorText[] = {0.8, 0.8, 0.8, 1};
    //     x = "0.9 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     y = "9.9 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    //     w = "5.8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    // };


    // Units stats table
    #include "dashboard_table.hpp"

    // General stats, center bottom
    class LabelInformation: RscText {
        text = "General Information";
        sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
        x = "8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        y = "8.7 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
        w = "7 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    };
    class StatsLabel_Vehicles: RscText {
        text = "Vehicles";
        colorBackground[] = {1, 1, 1, 0.2};
        sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
        x = "8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        y = "9.8 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
        w = "4.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    };
    class StatsValue_Vehicles: StatsLabel_Vehicles {
        idc = IDC_lxim_ADMINMENU_DASH_VEHICLES;
        text = "0";
        colorBackground[] = {0.5, 0.5, 0.5, 0.1};
        x = "12.6 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        w = "8.8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    };
    class StatsLabel_DeadUnits: StatsLabel_Vehicles {
        text = "Dead Units";
        y = "10.9 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class StatsValue_DeadUnits: StatsValue_Vehicles {
        idc = IDC_lxim_ADMINMENU_DASH_DEADMEN;
        text = "0";
        y = "10.9 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class StatsLabel_HeadlessClients: StatsLabel_Vehicles {
        text = "AI Load Balance";
        tooltip = "The number of groups being run on the server and each HC.";
        y = "12 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class StatsValue_HeadlessClients: StatsValue_Vehicles {
        idc = IDC_lxim_ADMINMENU_DASH_HEADLESS;
        text = "0";
        y = "12 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class StatsLabel_Curators: StatsLabel_Vehicles {
        text = "Zeuses";
        y = "13.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class StatsValue_Curators: StatsValue_Vehicles {
        idc = IDC_lxim_ADMINMENU_DASH_CURATORS;
        text = "0";
        y = "13.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class StatsLabel_CurrentAdmin: StatsLabel_Vehicles {
        text = "Current Admin";
        y = "14.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class StatsValue_CurrentAdmin: StatsValue_Vehicles {
        idc = IDC_lxim_ADMINMENU_DASH_CURRADMIN;
        text = "no data";
        y = "14.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class StatsLabel_MissionRuntime: StatsLabel_Vehicles {
        text = "Mission Runtime";
        y = "15.3 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };
    class StatsValue_MissionRuntime: StatsValue_Vehicles {
        idc = IDC_lxim_ADMINMENU_DASH_RUNTIME;
        text = "18m 37s";
        y = "15.3 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
    };

    // // Mission maker's notes, right
    // class LabelMissionNotes: RscText {
    //     text = "Mission Maker's Notes";
    //     sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
    //     x = "22.4 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     y = "0";
    //     w = "15.4 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    // };
    // class GroupMissionNotes: RscControlsGroup {
    //     idc = IDC_lxim_ADMINMENU_G_DASH_MISSIONNOTES;
    //     x = "22.4 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     y = "1.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    //     w = "15.4 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
    //     h = "19.5 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    //     class Controls
    //     {
    //         class TextMissionNotes: RscStructuredText
    //         {
    //             idc = IDC_lxim_ADMINMENU_DASH_MISSIONNOTES;
    //             size = "(((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) * 0.8)";
    //             sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
    //             x = "0";
    //             y = "0";
    //             w = "14.9 * (((safeZoneW / safeZoneH) min 1.2) / 40)"; // Margin for vertical scrollbar
    //             h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    //         };
    //     };
    // };
};
