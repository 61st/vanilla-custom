class Extended_PostInit_EventHandlers {
    GRAD_screenshotmode="[] call GRAD_screenshotmode_fnc_postInit;";
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_preClientInit));
    };
};
