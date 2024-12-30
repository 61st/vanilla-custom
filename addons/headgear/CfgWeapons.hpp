class CfgWeapons {
    class H_HelmetCrew_B;
    class H_HelmetCrew_I: H_HelmetCrew_B {};

    class HelmetBase;
    class H_Cap_headphones: HelmetBase {
        class ItemInfo;
    };
    class GVAR(Cap_Headphones_BlackLogo): H_Cap_headphones {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = QAUTHOR;
        displayName = "[61st] Cap Headphones (Black)";
        picture = QPATHTOF(UI\cap_headphones_blacklogo_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_headphones_blacklogo_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };
    class H_Cap_red: HelmetBase {
        class ItemInfo;
    };
    class GVAR(Cap_BlackLogo): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = QAUTHOR;
        displayName = "[61st] Cap (Black)";
        picture = QPATHTOF(UI\cap_blacklogo_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };

    class GVAR(H_HelmetCrew_green): H_HelmetCrew_I {
        author = QAUTHOR;
        displayName = "61st Crew Helmet (Green)";
        picture = QPATHTOF(data\icon_h_i_helmet_crew_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\lxim_headgear_ia_helmet_crew_co.paa)};
    };
    class GVAR(H_HelmetCrew_sand): H_HelmetCrew_I {
        author = QAUTHOR;
        displayName = "61st Crew Helmet (Sand)";
        picture = QPATHTOF(data\icon_H_HelmetCrew_I_I_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\lxim_H_HelmetCrew_I_I_CO.paa)};
    };
    
    
};
