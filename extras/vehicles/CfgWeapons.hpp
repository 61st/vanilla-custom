class CfgWeapons {
    class missiles_titan;
    class GVAR(missiles_titan): missiles_titan {
        magazines[]= {
            QGVAR(2Rnd_AT_missiles),
            QGVAR(2Rnd_AA_missiles),
            QGVAR(2Rnd_AP_missiles),
            QGVAR(2Rnd_BB_missiles)
        };
    };
};