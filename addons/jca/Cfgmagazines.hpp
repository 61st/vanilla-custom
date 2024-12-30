class CfgMagazines {
    class CA_Magazine;
    class JCA_15Rnd_9x19_P320C_FMJ_Mag: CA_Magazine // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        scope=2;
        displayName="9 mm 15rnd P320 FMJ Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_17Rnd_9x21_P320_Mag_CA.paa";
        ammo="JCA_B_9x19_Ball_P320C_FMJ";
        type=16; // 16Rnd_9x21_Mag
        count=15;
        mass=5.6; // magazine 15 rounds empty 76g + 15x 11.9g, JCA 6
        initSpeed=361; // according to ACE_muzzleVelocities 3.9" barrel (99mm) ICAO conditions (15°C, 1013.25hPa, 0%), JCA 410
        tracersEvery=0;
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P320 Compact";
        displaynameshort="FMJ";
    };
    class JCA_15Rnd_9x19_P320C_JHP_Mag: JCA_15Rnd_9x19_P320C_FMJ_Mag // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 15rnd P320 JHP Mag";
        ammo="JCA_B_9x19_Ball_P320C_JHP";
        mass=6.3; // magazine 15 rounds empty 76g + 15x 13.9g, JCA 6
        initSpeed=300; // according to ACE_muzzleVelocities 3.9" barrel (99mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="JHP";
    };
    class JCA_15Rnd_9x19_P320C_Red_Mag: JCA_15Rnd_9x19_P320C_FMJ_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P320 Tracer (Red) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_15Rnd_9x19_P320C_Green_Mag: JCA_15Rnd_9x19_P320C_Red_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P320 Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_Green";
    };
    class JCA_15Rnd_9x19_P320C_Yellow_Mag: JCA_15Rnd_9x19_P320C_Red_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P320 Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_P320C_IR_Mag: JCA_15Rnd_9x19_P320C_Red_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P320 Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_15Rnd_9x19_P226_FMJ_Mag: CA_Magazine // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        scope=2;
        displayName="9 mm 15rnd P226 FMJ Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_15Rnd_9x21_P226_Mag_CA.paa";
        ammo="JCA_B_9x19_Ball_P226_FMJ";
        type=16; // 16Rnd_9x21_Mag
        count=15;
        mass=5.7; // magazine 15 rounds empty 76g + 15x 12.3g, JCA 6
        initSpeed=378; // according to ACE_muzzleVelocities 4.4" barrel (112mm) ICAO conditions (15°C, 1013.25hPa, 0%), JCA 410
        tracersEvery=0;
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P226";
        displaynameshort="FMJ";
    };
    class JCA_15Rnd_9x19_P226_JHP_Mag: JCA_15Rnd_9x19_P226_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 15rnd P226 JHP Mag";
        ammo="JCA_B_9x19_Ball_P226_JHP";
        displaynameshort="JHP";
    };
    class JCA_15Rnd_9x19_P226_SUB_Mag: JCA_15Rnd_9x19_P226_FMJ_Mag // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Subsonic Mag";
        ammo="JCA_B_9x19_Ball_P226_SUB";
        mass=6.3; // magazine 15 rounds empty 76g + 15x 13.9g, JCA 6
        initSpeed=311; // according to ACE_muzzleVelocities 4.4" barrel (112mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_15Rnd_9x19_P226_Red_Mag: JCA_15Rnd_9x19_P226_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Tracer (Red) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_Red";
        displaynameshort="Tracer";
        tracersEvery=1;
    };
    class JCA_15Rnd_9x19_P226_Green_Mag: JCA_15Rnd_9x19_P226_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_Green";
    };
    class JCA_15Rnd_9x19_P226_Yellow_Mag: JCA_15Rnd_9x19_P226_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_P226_IR_Mag: JCA_15Rnd_9x19_P226_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_9x19_MP5_FMJ_Mag: CA_Magazine // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        scope=2;
        displayName="9 mm 30Rnd MP5 FMJ Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_MP5_MAG_CA.paa";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_MP5_MAG.p3d";
        modelSpecialIsProxy=1;
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\SMGs\MP5\Data\smg_MP5_02_black_CO.paa"
        };
        ammo="JCA_B_9x19_Ball_MP5_FMJ";
        count=30;
        mass=11.9; // magazine 30 rounds empty 170g + 30x 12.3g, JCA 10
        initSpeed=428; // according to ACE_muzzleVelocities 8.858" barrel (225mm) ICAO conditions (15°C, 1013.25hPa, 0%), JCA 370
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 30<br />Used in: MP5A5";
        displaynameshort="FMJ";
    };
    class JCA_30Rnd_9x19_MP5_JHP_Mag: JCA_30Rnd_9x19_MP5_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 30Rnd MP5 JHP Mag";
        ammo="JCA_B_9x19_Ball_MP5_JHP";
        displaynameshort="JHP";
    };
    class JCA_30Rnd_9x19_MP5_Red_Mag: JCA_30Rnd_9x19_MP5_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Red) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_9x19_MP5_Green_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Green) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Yellow_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Yellow) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_IR_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (IR) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Red_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Red) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Green_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Green) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Yellow) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_IR_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (IR) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag: JCA_30Rnd_9x19_MP5_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd MP5 FMJ Sand Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_MP5_MAG_sand_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\SMGs\MP5\Data\smg_MP5_02_sand_CO.paa"
        };
        displaynameshort="FMJ";
    };
    class JCA_30Rnd_9x19_MP5_JHP_Sand_Mag: JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 30Rnd MP5 JHP Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_JHP";
        displaynameshort="JHP";
    };
    class JCA_30Rnd_9x19_MP5_Red_Sand_Mag: JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Red) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_9x19_MP5_Green_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Green) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Yellow) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_IR_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (IR) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Red) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Green) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Yellow) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (IR) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_PMAG: CA_Magazine // JCA default config
    {
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_PMAG_CA.paa";
        author="Grave";
        scope=2;
        displayName="5.56 mm 30Rnd PMAG";
        ammo="JCA_B_556x45_Ball";
        count=30;
        mass=11.2; // Polymer magazine 30 rounds (empty) 140g + 30x 12.3g (M855 cartridge weight)
        initSpeed=926; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: 5.56 STANAG Rifles";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_556_PMAG.p3d";
        modelSpecialIsProxy=1;
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\MagazineProxies\data\mag_30Rnd_556_PMAG_black_CO.paa"
        };
    };
    class JCA_30Rnd_556x45_M855A1_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M855A1 PMAG";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_M193_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M193 PMAG";
        ammo="JCA_B_556x45_Ball_M193";
        mass=10.8; // Polymer magazine 30 rounds (empty) 140g + 30x 11.6g (M193 cartridge weight)
        initSpeed=990; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Mk262_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk262 PMAG";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=11.9; // Polymer magazine 30 rounds (empty) 140g + 30x 13.3g (Mk262 cartridge weight)
        initSpeed=838; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk318 PMAG";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M995 AP PMAG";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=11.4; // Polymer magazine 30 rounds (empty) 140g + 30x 12.6g (M995 cartridge weight)
        initSpeed=880; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_UW_PMAG: JCA_30Rnd_556x45_PMAG // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Dual Purpose PMAG";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Red_PMAG: JCA_30Rnd_556x45_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
    };
    class JCA_30Rnd_556x45_Tracer_Red_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
    {
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_sand_PMAG: JCA_30Rnd_556x45_PMAG
    {
    };
    class JCA_30Rnd_556x45_M855A1_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M855A1 Sand PMAG";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_M193_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M193 Sand PMAG";
        ammo="JCA_B_556x45_Ball_M193";
        mass=10.8; // Polymer magazine 30 rounds (empty) 140g + 30x 11.6g (M193 cartridge weight)
        initSpeed=990; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Mk262_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk262 Sand PMAG";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=11.9; // Polymer magazine 30 rounds (empty) 140g + 30x 13.3g (Mk262 cartridge weight)
        initSpeed=838; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk318 Sand PMAG";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M995 AP Sand PMAG";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=11.4; // Polymer magazine 30 rounds (empty) 140g + 30x 12.6g (M995 cartridge weight)
        initSpeed=880; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_UW_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Dual Purpose Sand PMAG";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Red_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
    };
    class JCA_30Rnd_556x45_Tracer_Red_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
    {
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    // JCA 5.56x45 Stanag Magazines use vanilla class 30Rnd_556x45_Stanag. To avoid all conflict with other mods and RPT Updating base class, all JCA 5.56x45 Stanag Magazines with JCA as prefixe
    /*class 30Rnd_556x45_Stanag: CA_Magazine from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
        author="$STR_A3_Bohemia_Interactive";
        scope=2;
        displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag0";
        ammo="B_556x45_Ball";
        count=30;
        initSpeed=920;
        tracersEvery=0;
        lastRoundsTracer=4;
        descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
        modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
        modelSpecialIsProxy=1;
    };
    class 30Rnd_556x45_Stanag: CA_Magazine // JCA default config
    {
        author="Grave";
        scope=2;
        displayName="5.56 mm 30Rnd Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_CA.paa";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_556_SMAG.p3d";
        modelSpecialIsProxy=1;
        ammo="B_556x45_Ball";
        count=30;
        mass=8;
        initSpeed=920;
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
    };*/
    class JCA_30Rnd_556x45_Stanag: CA_Magazine // JCA default config with JCA as prefixe
    {
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_CA.paa";
        author="Grave";
        scope=2;
        displayName="5.56 mm 30Rnd Mag";
        ammo="JCA_B_556x45_Ball";
        count=30;
        mass=13.6; // Steel magazine 30 rounds (empty) 250g + 30x 12.3g (M855 cartridge weight)
        initSpeed=926; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_556_SMAG.p3d";
        modelSpecialIsProxy=1;
    };
    class JCA_30Rnd_556x45_Stanag_M855A1: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M855A1 Mag";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_Stanag_M193: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M193 Mag";
        ammo="JCA_B_556x45_Ball_M193";
        mass=13.2; // Steel magazine 30 rounds (empty) 250g + 30x 11.6g (M193 cartridge weight)
        initSpeed=990; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Stanag_Mk262: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk262 Mag";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=14.3; // Steel magazine 30 rounds (empty) 250g + 30x 13.3g (Mk262 cartridge weight)
        initSpeed=838; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Stanag_Mk318: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk318 Mag";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_Stanag_M995AP: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M995 AP Mag";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=13.8; // Steel magazine 30 rounds (empty) 250g + 30x 12.6g (M995 cartridge weight)
        initSpeed=880; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_Stanag_UW: JCA_30Rnd_556x45_Stanag // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Dual Purpose Mag";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Stanag_Red: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Red) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_556x45_Stanag_Green: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Green) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Yellow: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Yellow) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_IR: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (IR) Mag";
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Red: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Red) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Green: JCA_30Rnd_556x45_Stanag_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Green) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Yellow: JCA_30Rnd_556x45_Stanag_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Yellow) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_IR: JCA_30Rnd_556x45_Stanag_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (IR) Mag";
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_Stanag_Sand: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Sand Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_sand_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\MagazineProxies\data\mag_30Rnd_556_SMAG_sand_CO.paa"
        };
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M855A1: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M855A1 Sand Mag";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M193: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M193 Sand Mag";
        ammo="JCA_B_556x45_Ball_M193";
        mass=13.2; // Steel magazine 30 rounds (empty) 250g + 30x 11.6g (M193 cartridge weight)
        initSpeed=990; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Mk262: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk262 Sand Mag";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=14.3; // Steel magazine 30 rounds (empty) 250g + 30x 13.3g (Mk262 cartridge weight)
        initSpeed=838; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Mk318: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk318 Sand Mag";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M995AP: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M995 AP Sand Mag";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=13.8; // Steel magazine 30 rounds (empty) 250g + 30x 12.6g (M995 cartridge weight)
        initSpeed=880; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_UW: JCA_30Rnd_556x45_Stanag_Sand // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Dual Purpose Sand Mag";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Red: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Red) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Green: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Green) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Yellow: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Yellow) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_IR: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (IR) Sand Mag";
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Red) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Green) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Yellow) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (IR) Sand Mag";
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_PMAG: CA_Magazine
    {
        ammo="JCA_B_762x51_Ball";
        mass=14.7; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 25.3g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=790; // 7.62x51 Mk316 Mod0, according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
    };
    class JCA_20Rnd_762x51_Red_PMAG: JCA_20Rnd_762x51_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
    };
    class JCA_20Rnd_762x51_Tracer_Red_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_M993AP_PMAG: JCA_20Rnd_762x51_PMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd M993 AP PMAG";
        ammo="JCA_B_762x51_M993AP";
        mass=13.9; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 23.5g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=930; // according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_PMAG: JCA_20Rnd_762x51_PMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd Subsonic PMAG";
        ammo="JCA_B_762x51_Subsonic";
        mass=16; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 28.2g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=331; // according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_Sand_PMAG: JCA_20Rnd_762x51_PMAG
    {
    };
    class JCA_20Rnd_762x51_Red_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_M993AP_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd M993 AP Sand PMAG";
        ammo="JCA_B_762x51_M993AP";
        mass=13.9; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 23.5g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=930; // according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd Subsonic Sand PMAG";
        ammo="JCA_B_762x51_Subsonic";
        mass=16; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 28.2g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=331; // according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_SMAG: CA_Magazine
    {
        ammo="JCA_B_762x51_Ball";
        mass=15.7; //  SMAGs SR25 20 rnds 206g + 20x 25.3g, JCA 9
        initSpeed=790; // 7.62x51 Mk316 Mod0, according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
    };
    class JCA_20Rnd_762x51_Red_SMAG: JCA_20Rnd_762x51_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
    };
    class JCA_20Rnd_762x51_Tracer_Red_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_M993AP_SMAG: JCA_20Rnd_762x51_SMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd M993 AP Mag";
        ammo="JCA_B_762x51_M993AP";
        mass=14.9; //  SMAGs SR25 20 rnds 206g + 20x 23.5g, JCA 9
        initSpeed=930; // according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_SMAG: JCA_20Rnd_762x51_SMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd Subsonic Mag";
        ammo="JCA_B_762x51_Subsonic";
        mass=17; //  SMAGs SR25 20 rnds 206g + 20x 28.2g, JCA 9
        initSpeed=331; // according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_Sand_SMAG: JCA_20Rnd_762x51_SMAG
    {
    };
    class JCA_20Rnd_762x51_Red_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_M993AP_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd M993 AP Sand Mag";
        ammo="JCA_B_762x51_M993AP";
        mass=14.9; //  SMAGs SR25 20 rnds 206g + 20x 23.5g, JCA 9
        initSpeed=930; // according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd Subsonic Sand Mag";
        ammo="JCA_B_762x51_Subsonic";
        mass=17; //  SMAGs SR25 20 rnds 206g + 20x 28.2g, JCA 9
        initSpeed=331; // according to ACE_muzzleVelocities SR10 14.5" (368.3mm), SR25 20" (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_5Rnd_338LM_AWM_Mag: CA_Magazine
    {
        mass=9.7; // magazine 219g + 5x 44.5g, JCA 8
        initSpeed=906; // Lapua .338 LM Scenar 250gr GB488: 905m/s with barrel length 680mm, 906m/s barrel length 27" (685.8mm) according to ACE_ammoTempMuzzleVelocityShifts https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Red_Mag: JCA_5Rnd_338LM_AWM_Mag
    {
        displaynameshort="Tracer";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Green_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag
    {
        displaynameshort="Tracer";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag
    {
        displaynameshort="Tracer";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_IR_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag
    {
        displaynameshort="Tracer IR";
    };
    class JCA_5Rnd_338LM_AWM_AP_Mag: JCA_5Rnd_338LM_AWM_Mag
    {
        author="Grave";
        displayName=".338 LM 5Rnd AP Mag";
        displaynameshort="AP";
        ammo="JCA_B_338LM_AP_Ball";
        // mass=9.7; // magazine 219g + 5x 44.3g
        // initSpeed=906; // Lapua .338 LM 250gr AP485: 905m/s with barrel length 680mm, 906m/s barrel length 27" (685.8mm) according to ACE_ammoTempMuzzleVelocityShifts https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
    };
    class JCA_5Rnd_338LM_AWM_API_Mag: JCA_5Rnd_338LM_AWM_Mag
    {
        author="Grave";
        displayName=".338 LM 5Rnd API Mag";
        displaynameshort="API";
        ammo="JCA_B_338LM_API_Ball";
        // mass=9.7; // magazine 219g + 5x 44.4g
        initSpeed=896; // Lapua .338 LM 253gr API526: 895m/s with barrel length 680mm, 896m/s barrel length 27" (685.8mm) according to ACE_ammoTempMuzzleVelocityShifts https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
    };
};
class CfgMagazineWells {
    class JCA_P320_Compact_9x19 // Weapon initSpeed -1 with ACE_barrelLength 99mm (3.9"), 361, 300m/s at ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_P320C magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x19_P320C_FMJ_Mag",
            "JCA_15Rnd_9x19_P320C_JHP_Mag",
            "JCA_15Rnd_9x19_P320C_Red_Mag",
            "JCA_15Rnd_9x19_P320C_Green_Mag",
            "JCA_15Rnd_9x19_P320C_Yellow_Mag",
            "JCA_15Rnd_9x19_P320C_IR_Mag"
        };
    };
    class JCA_P226_9x19 // Weapon initSpeed -1 with ACE_barrelLength 112mm (4.4"), 378, 311m/s at ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_P226 magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x19_P226_FMJ_Mag",
            "JCA_15Rnd_9x19_P226_JHP_Mag",
            "JCA_15Rnd_9x19_P226_SUB_Mag",
            "JCA_15Rnd_9x19_P226_Red_Mag",
            "JCA_15Rnd_9x19_P226_Green_Mag",
            "JCA_15Rnd_9x19_P226_Yellow_Mag",
            "JCA_15Rnd_9x19_P226_IR_Mag"
        };
    };
    class JCA_MP5_9x19 // Weapon initSpeed -1 with ACE_barrelLength 225mm, 428m/s at ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_30Rnd_9x19_MP5 magazines initSpeed
    {
        JCA_Magazines[]= {
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag"
        };
    };
    class STANAG_556x45 {
        BI_Magazines[]= // JCA default config with 5.56x45mm JCA Mags
        /*{
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_Red",
            "30Rnd_556x45_Stanag_Green",
            "30Rnd_556x45_Stanag_Yellow",
            "30Rnd_556x45_Stanag_IR",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "30Rnd_556x45_Stanag_Tracer_IR",
            "30Rnd_556x45_Stanag_Sand",
            "30Rnd_556x45_Stanag_Sand_Red",
            "30Rnd_556x45_Stanag_Sand_Green",
            "30Rnd_556x45_Stanag_Sand_Yellow",
            "30Rnd_556x45_Stanag_Sand_IR",
            "30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "30Rnd_556x45_Stanag_Sand_Tracer_IR"
        };*/
        { // 5.56x45mm default Arma3 Mags from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_green",
            "30Rnd_556x45_Stanag_red",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "30Rnd_556x45_Stanag_Sand",
            "30Rnd_556x45_Stanag_Sand_green",
            "30Rnd_556x45_Stanag_Sand_red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "30Rnd_556x45_Stanag_Sand_Tracer_Yellow"
        };
        JCA_Magazines[]= // Weapon initSpeed -1 with ACE_barrelLength 508mm (20"): 926, 940, 990, 838, 950, 880, 283m/s at ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_30Rnd_556x45 magazines initSpeed
        { // All 5.56x45mm JCA Mags
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW"
        };
    };
    class JCA_SR_762x51 {
        JCA_Magazines[]= // Weapon initSpeed -1 with ACE_barrelLength 508mm (20"): 790, 930, 331 m/s at ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_20Rnd_762x51 magazines initSpeed
        {
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG"
        };
    };
    class JCA_AWM_338LM // Weapon initSpeed -1 with ACE_barrelLength 685.8mm (27"), 906, 896m/s at ICAO standart conditions (15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM_AWM magazines initSpeed
    {
        JCA_Magazines[]= {
            "JCA_5Rnd_338LM_AWM_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Red_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Green_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_IR_Mag",
            "JCA_5Rnd_338LM_AWM_AP_Mag",
            "JCA_5Rnd_338LM_AWM_API_Mag"
        };
    };
};