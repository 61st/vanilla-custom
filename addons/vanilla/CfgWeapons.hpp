class CfgWeapons {
    class CannonCore;
    class autocannon_Base_F: CannonCore {
        class player;
    };
    class autocannon_30mm_CTWS: autocannon_Base_F {
        class HE: autocannon_Base_F {};
        class AP: autocannon_Base_F {};
    };
    class GVAR(autocannon_35mm_CTWS): autocannon_30mm_CTWS {
        displayName = "Bushmaster III MP";
        muzzles[] = {"HE","AP","AA"};
        reloadTime = 0.15;
        class HE: HE {
        };
        class AP: AP {
        };
        class AA: HE {
        };
    };

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