class CfgMagazines {
    /* TITANS ----------------------------------------------------------------------------------------------------------- */
    class 2Rnd_GAT_missiles;
    class GVAR(2Rnd_AT_missiles): 2Rnd_GAT_missiles {
        displayName = "AT Missile";
        displayNameShort="AT";
        count=2;
    };
    class GVAR(2Rnd_AA_missiles): 2Rnd_GAT_missiles {
        ammo = "M_Titan_AA";
        displayName = "AA Missile";
        displayNameShort="AA";
        count=2;
    };
    class GVAR(2Rnd_AP_missiles): 2Rnd_GAT_missiles {
        ammo = "M_Titan_AP";
        displayName = "AP Missile";
        displayNameShort="AP";
        count=2;
    };
    class GVAR(2Rnd_BB_missiles): 2Rnd_GAT_missiles {
        ammo = QGVAR(Titan_BB_round);
        displayName = "BB Missile";
        displayNameShort="BB";
        count=2;
    };
};
