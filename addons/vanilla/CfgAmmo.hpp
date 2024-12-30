class CfgAmmo {
    class B_30mm_AP;
    class B_30mm_AP_Tracer_Red;
    class B_30mm_APFSDS;
    class B_30mm_APFSDS_Tracer_Red;
    class B_30mm_MP;
    class B_30mm_MP_Tracer_Red;
    class B_30mm_HE;
    class B_30mm_HE_Tracer_Red;

    class GVAR(35mm_APFSDS): B_30mm_APFSDS {
        caliber = 7;
        hit = 130;
    };
    class GVAR(35mm_APFSDS_Tracer_Red): B_30mm_APFSDS_Tracer_Red {
        caliber = 7;
        hit = 130;
    };

    class GVAR(35mm_AP): B_30mm_AP {};
    class GVAR(35mm_AP_Tracer_Red): B_30mm_AP_Tracer_Red {};

    class GVAR(35mm_HE): B_30mm_HE {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 378;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 181;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        ace_vehicle_damage_incendiary = 0.3;
        indirectHitRange = 4;
        indirectHit = 8;
    };
    class GVAR(35mm_HE_Tracer_Red): B_30mm_HE_Tracer_Red {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 378;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 181;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        ace_vehicle_damage_incendiary = 0.3;
        indirectHitRange = 4;
        indirectHit = 8;
    };
    class GVAR(35mm_MP): B_30mm_MP {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 378;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 181;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        ace_vehicle_damage_incendiary = 0.3;
        indirectHitRange = 4;
        indirectHit = 8;
    };
    class GVAR(35mm_MP_Tracer_Red): B_30mm_MP_Tracer_Red {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 378;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 181;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        ace_vehicle_damage_incendiary = 0.3;
        indirectHitRange = 4;
        indirectHit = 8;
    };

    /* AA --------------------------------------------------------------------------------------------------------------- */
    class B_35mm_AA;
    class B_35mm_AA_Tracer_Red;
    class ACE_B_35mm_ABM;
    class ACE_B_35mm_ABM_Tracer_Red;
    
    class GVAR(35mm_AA): B_35mm_AA {
        weaponType = "cannon"; 
    };
    class GVAR(35mm_AA_Tracer_Red): B_35mm_AA_Tracer_Red {
        weaponType = "cannon"; 
    };
    class GVAR(35mm_ABM): ACE_B_35mm_ABM {
        weaponType = "cannon"; 
    };
    class GVAR(35mm_ABM_Tracer_Red): ACE_B_35mm_ABM_Tracer_Red {
        weaponType = "cannon"; 
    };

    /* titans ----------------------------------------------------------------------------------------------------------- */
    class M_Titan_AP;
    class M_Titan_AT;
    class M_Titan_AA;
    class rhs_ammo_TOW2_BB_explosive;

    class GVAR(Titan_BB_round): rhs_ammo_TOW2_BB_explosive {};
};