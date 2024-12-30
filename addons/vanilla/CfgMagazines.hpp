class CfgMagazines {
    class 140Rnd_30mm_MP_shells;
    class 140Rnd_30mm_MP_shells_Tracer_Red;
    class 60Rnd_30mm_APFSDS_shells;
    class 60Rnd_30mm_APFSDS_shells_Tracer_Red;
    class 250Rnd_30mm_HE_shells;
    class 250Rnd_30mm_HE_shells_Tracer_Red;
    


    class GVAR(100Rnd_35mm_MP_shells):140Rnd_30mm_MP_shells {
        ammo = QGVAR(35mm_MP);
        displayName = "100Rnd MP";
        displayNameShort = "MP";
        displayNameMFDFormat = "MP";
        count=100;
        mass = 8;
    };
    class GVAR(100Rnd_35mm_MP_shells_Tracer_Red):140Rnd_30mm_MP_shells_Tracer_Red {
        ammo = QGVAR(35mm_MP_Tracer_Red);
        displayName = "100Rnd MP Tracer (Red)";
        displayNameShort = "MP-T";
        displayNameMFDFormat = "MP-T";
        count=100;
        mass = 8;        
    };
    class GVAR(100Rnd_35mm_APFSDS_shells):60Rnd_30mm_APFSDS_shells {
        ammo = QGVAR(35mm_APFSDS);
        displayName = "100Rnd APFSDS";
        displayNameShort = "APFSDS";
        displayNameMFDFormat = "APFSDS";
        count=100;
        mass = 8;
    };
    class GVAR(100Rnd_35mm_APFSDS_shells_Tracer_Red):60Rnd_30mm_APFSDS_shells_Tracer_Red {
        ammo = QGVAR(35mm_APFSDS_Tracer_Red);
        displayName = "100Rnd APFSDS Tracer (Red)";
        displayNameShort = "APFSDS-T";
        displayNameMFDFormat = "APFSDS-T";
        count=100;
        mass = 8;  
    };
    class GVAR(100Rnd_35mm_HE_shells):250Rnd_30mm_HE_shells {
        ammo = QGVAR(35mm_HE);
        displayName = "100Rnd HE";
        displayNameShort = "HE";
        displayNameMFDFormat = "HE";
        count=100;
        mass = 8;
    };
    class GVAR(100Rnd_35mm_HE_shells_Tracer_Red):250Rnd_30mm_HE_shells_Tracer_Red {
        ammo = QGVAR(35mm_HE_Tracer_Red);
        displayName = "100Rnd HE Tracer (Red)";
        displayNameShort = "HE-T";
        displayNameMFDFormat = "HE-T";
        count=100;
        mass = 8;        
    };
    class GVAR(100Rnd_35mm_AP_shells):60Rnd_30mm_APFSDS_shells {
        ammo = QGVAR(35mm_AP);
        displayName = "100Rnd AP";
        displayNameShort = "AP";
        displayNameMFDFormat = "AP";
        count=100;
        mass = 8;
    };
    class GVAR(100Rnd_35mm_AP_shells_Tracer_Red):60Rnd_30mm_APFSDS_shells_Tracer_Red {
        ammo = QGVAR(35mm_AP_Tracer_Red);
        displayName = "100Rnd AP Tracer (Red)";
        displayNameShort = "AP-T";
        displayNameMFDFormat = "AP-T";
        count=100;
        mass = 8;
    };
    /* AA --------------------------------------------------------------------------------------------------------------- */
    class 680Rnd_35mm_AA_shells;
    class 680Rnd_35mm_AA_shells_Tracer_Red;
    class ACE_120Rnd_35mm_ABM_shells;
    class ACE_120Rnd_35mm_ABM_shells_Tracer_Red;

    class GVAR(100Rnd_35mm_AA_shells): 680Rnd_35mm_AA_shells {
        displayName = "100Rnd 35mm AA Shells";
        displayNameShort = "AA";
        displayNameMFDFormat = "AA";
        ammo = QGVAR(35mm_AA);
        count=100;
        mass = 8;
    };
    class GVAR(100Rnd_35mm_AA_shells_Tracer_Red): 680Rnd_35mm_AA_shells_Tracer_Red {
        displayName = "100Rnd 35mm AA Shells Tracer";
        displayNameShort = "AA-T";
        displayNameMFDFormat = "AA-T";
        ammo = QGVAR(35mm_AA_Tracer_Red);
        count=100;
        mass = 8;
    };
    class GVAR(100Rnd_35mm_ABM_shells): ACE_120Rnd_35mm_ABM_shells {
        displayName = "100Rnd 35mm ABM Shells";
        displayNameShort = "ABM";
        displayNameMFDFormat = "ABM";
        ammo = QGVAR(35mm_ABM);
        count=100;
        mass = 8;
    };
    class GVAR(100Rnd_35mm_ABM_shells_Tracer_Red): ACE_120Rnd_35mm_ABM_shells_Tracer_Red {
        displayName = "100Rnd 35mm ABM Shells Tracer";
        displayNameShort = "ABM-T";
        displayNameMFDFormat = "ABM-T";
        ammo = QGVAR(35mm_ABM_Tracer_Red);
        count=100;
        mass = 8;
    };


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