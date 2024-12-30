class RscActivePictureKeepAspect;
class RscDisplayMain: RscStandardDisplay {
    class ControlsBackground {
        class GVAR(logo61): RscActivePictureKeepAspect {
            text = QPATHTOF(data\menulogo.paa);
            x = "0.5 - (0.5 * 5) * (pixelW * pixelGridNoUIScale * 2)";
            y = "0.02 - (10 / 1.2) * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * (pixelW * pixelGridNoUIScale * 2)";
            h = "10 * (pixelH * pixelGridNoUIScale * 2)";
            color[] = {1,1,1,1};
            background = 1;
        };
    };

    class controls {
        class GVAR(quickConnectToServer_main): RscButton { // port 2302
            x = "0.5 - (0.5 * 10) * (pixelW * pixelGridNoUIScale * 2)";
            y = "0.37 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * pixelW * pixelGridNoUIScale * 2)";
            h = "1 * (pixelH * pixelGridNoUIScale * 2)";
            text = "61st Operations Server";
            tooltip = "Don't forget your beer!"; 
            colorBackground[] = {0.886,0.616,0.133,1};
            onButtonClick = "connectToServer ['185.150.189.213', 2302, '61st'];";
        };
        // class GVAR(quickConnectToServer_dev): RscButton { // port 2502
        //     x = "0.5 - (0.5 * 10) * (pixelW * pixelGridNoUIScale * 2)";
        //     y = "0.29 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
        //     w = "10 * pixelW * pixelGridNoUIScale * 2)";
        //     h = "1 * (pixelH * pixelGridNoUIScale * 2)";
        //     text = "61st Development Server";
        //     tooltip = "Unicorns!"; 
        //     colorBackground[] = {0.886,0.616,0.133,1};
        //     onButtonClick = "connectToServer ['185.150.189.213', 2502, '61st'];";
        // };
        class GVAR(quickConnectToServer_train): GVAR(quickConnectToServer_main) { // port 2402
            x = "0.5 - (1.5 * 10) * (pixelW * pixelGridNoUIScale * 2) - (2 * pixelW)";
            y = "0.37 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * pixelW * pixelGridNoUIScale * 2)";
            h = "1 * (pixelH * pixelGridNoUIScale * 2)";
            text = "61st Training Server"; 
            tooltip = "Training Server (may not always be running)"; 
            colorBackground[] = {0.886,0.616,0.133,1};
            onButtonClick = "connectToServer ['185.150.189.213', 2402, '61st'];";
        };
        class GVAR(quickConnectToServer_events): GVAR(quickConnectToServer_main) { // port 2602
            x = "0.5 + (0.5 * 10) * (pixelW * pixelGridNoUIScale * 2) + (2 * pixelW)";
            y = "0.37 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * pixelW * pixelGridNoUIScale * 2)";
            h = "1 * (pixelH * pixelGridNoUIScale * 2)";
            text = "61st Events Server"; 
            tooltip = "61st Events Server (extra mods, may not always be running)"; 
            colorBackground[] = {0.886,0.616,0.133,1};
            onButtonClick = "connectToServer ['185.150.189.213', 2602, '61st'];";
        };
    };
};
