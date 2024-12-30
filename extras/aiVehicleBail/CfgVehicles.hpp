class CfgVehicles {
    class Tank;
    class Car_F;
    class Tank_F : Tank {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.5;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.2;
    };
    class Wheeled_APC_F : Car_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.5;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.2;
    };
    class APC_Tracked_01_base_F : Tank_F {};
    class B_APC_Tracked_01_base_F : APC_Tracked_01_base_F {};
    class B_APC_Tracked_01_AA_F : B_APC_Tracked_01_base_F {
        GVAR(hullDetonationProb) = 0.4;
        GVAR(turretDetonationProb) = 0.4;
        GVAR(engineDetonationProb) = 0.4;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.8;
    };
    class B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_base_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.5;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_base_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.5;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class APC_Wheeled_01_base_F : Wheeled_APC_F {};
    class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F {};
    class B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_base_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class AFV_Wheeled_01_base_F: Wheeled_APC_F {};
    class B_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F {
        GVAR(hullDetonationProb) = 0.5;
        GVAR(turretDetonationProb) = 0.5;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.2;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class MBT_01_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0;
        GVAR(turretFireProb) = 0;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0;
    };
    class APC_Tracked_02_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.5;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class O_APC_Tracked_02_base_F : APC_Tracked_02_base_F {};
    class O_APC_Tracked_02_AA_F : O_APC_Tracked_02_base_F {
        GVAR(hullDetonationProb) = 0.4;
        GVAR(turretDetonationProb) = 0.4;
        GVAR(engineDetonationProb) = 0.4;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.8;
    };
    class MBT_04_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.2;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0;
    };
    class MBT_02_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.2;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0;
    };
    class LT_01_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0.8;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0.3;
        GVAR(hullFireProb) = 0.5;
        GVAR(turretFireProb) = 0;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.9;
    };
    class LT_01_scout_base_F : LT_01_base_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0;
        GVAR(turretFireProb) = 0;
        GVAR(engineFireProb) = 0;
        GVAR(detonationDuringFireProb) = 0;
    };
    class APC_Tracked_03_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class APC_Wheeled_03_base_F : Wheeled_APC_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class MBT_03_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0.3;
        GVAR(turretDetonationProb) = 0.5;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.3;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.7;
    };    
    // class rhs_bmp1tank_base;
    // class rhs_bmp_base : rhs_bmp1tank_base { // RHS BMP1 and BMP2
    //     GVAR(hullDetonationProb) = 0;
    //     GVAR(turretDetonationProb) = 0.2;
    //     GVAR(engineDetonationProb) = 0;
    //     GVAR(hullFireProb) = 0.8;
    //     GVAR(turretFireProb) = 0.5;
    //     GVAR(engineFireProb) = 0.8;
    //     GVAR(detonationDuringFireProb) = 0.5;
    // };
    // class rhs_bmp3tank_base : Tank_F {
    //     GVAR(hullDetonationProb) = 0.2;
    //     GVAR(turretDetonationProb) = 0.2;
    //     GVAR(engineDetonationProb) = 0;
    //     GVAR(hullFireProb) = 0.5;
    //     GVAR(turretFireProb) = 0.2;
    //     GVAR(engineFireProb) = 0.8;
    //     GVAR(detonationDuringFireProb) = 0.5;
    // };
    class rhs_zsutank_base : APC_Tracked_02_base_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.8;
    };
    class rhs_btr_base : Wheeled_APC_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class rhs_bmd_base : Tank_F {   // All RHS BMDs
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.5;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class rhs_a3t72tank_base : Tank_F { // rhs t-72s
        GVAR(hullDetonationProb) = 0.8;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.2;
    };
    class rhs_t72bd_tv: rhs_a3t72tank_base {};
    class rhs_tank_base : Tank_F {  // RHS T-80s. Maybe everything inherits from rhs_t80b ?
        GVAR(hullDetonationProb) = 0.8;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.2;
    };
    class rhs_t90_tv : rhs_t72bd_tv {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.2;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0;
    };
    class rhs_a3spruttank_base : Tank_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.5;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
    };
};

