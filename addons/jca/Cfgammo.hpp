class CfgAmmo {
    class BulletBase;
    class B_338_Ball;
    // JCA Bullets inherited from vanilla class B_9x21_Ball. To avoid all conflict with other mod, all JCA bullets with JCA as prefixe.
    // class B_9x21_Ball: BulletBase from official BI tool All-in-one Config Arma3 2.17.152041 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class JCA_B_9x19_Ball_P320C_FMJ: BulletBase // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" 9mm 115gr Elite Ball FMJ https://www.sigsauer.com/9mm-115gr-elite-ball-fmj.html
        ACE_bulletMass=7.452; // 115gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.159}; // calculated ballistic coefficient from Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={362}; // Muzzle Velocity shift +1m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 361m/s (1185fps) at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P320 initSpeed, 1185fps barrel length 4.0" ± 1/16" (± 3.9375", 4.0625") https://www.sigsauer.com/9mm-115gr-elite-ball-fmj.html,
        ACE_barrelLengths[]={99}; // 3.9" P320 Compact barrel length https://www.sigsauer.com/p320-compact.html
        hit=4.4; // B_9x21_Ball 5, 486 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=361; // JCA_15Rnd_9x19_P320C_FMJ_Mag initSpeed
        airFriction=-0.00187745; // B_9x21_Ball -0.0016, airFrictionAnalysis.txt in docs folder
        caliber=1.2;
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_P320C_JHP: JCA_B_9x19_Ball_P320C_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" 9mm 147gr Elite V-Crown JHP https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_bulletMass=9.525; // 147gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.176}; // calculated ballistic coefficient from Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={301}; // Muzzle Velocity shift +1m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 300m/s (985fps) at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P320 initSpeed, 985fps barrel length 4.0" ± 1/16" (± 3.9375", 4.0625") https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_barrelLengths[]={99}; // 3.9" P320 Compact barrel length https://www.sigsauer.com/p320-compact.html
        hit=6.9; // B_9x21_Ball 5, 429 Joules
        typicalSpeed=300; // JCA_15Rnd_9x19_P320C_JHP_Mag initSpeed
        airFriction=-0.00115136; // B_9x21_Ball -0.0016, airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class JCA_B_9x19_Ball_P320C_Tracer_Green: JCA_B_9x19_Ball_P320C_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_P320C_Tracer_Red: JCA_B_9x19_Ball_P320C_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_P320C_Tracer_Yellow: JCA_B_9x19_Ball_P320C_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_P320C_Tracer_IR: JCA_B_9x19_Ball_P320C_FMJ
    {
        nvgOnly=1;
    };
    class JCA_B_9x19_Ball_P226_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.194}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // Muzzle Velocities shift +1m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 365m/s (1198fps) 4" barrel, 378m/s (1240fps) 4.4" (112mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P226 initSpeed
        hit=4.8; // B_9x21_Ball 5, 574 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=378; // JCA_15Rnd_9x19_P226_FMJ_Mag and JCA_15Rnd_9x19_P226_JHP_Mag initSpeed
        airFriction=-0.0016589; // B_9x21_Ball -0.0016, airFrictionAnalysis.txt in docs folder
        caliber=1.2;
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_P226_JHP: JCA_B_9x19_Ball_P226_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.166}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // Muzzle Velocities shift +1m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 365m/s (1198fps) 4" barrel, 378m/s (1240fps) 4.4" (112mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P226 initSpeed
        hit=8; // B_9x21_Ball 5, 574 Joules
        airFriction=-0.00193931; // airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2
    };
    class JCA_B_9x19_Ball_P226_SUB: JCA_B_9x19_Ball_P226_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" 9mm 147gr Elite V-Crown JHP https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_bulletMass=9.525; // 147gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.193}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={301,327,354}; // Muzzle Velocities shift +1m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 300m/s (985fps) 4" barrel, 311m/s (1020fps) 4.4" (112mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P226 initSpeed
        hit=7.2; // B_9x21_Ball 5, 461 Joules
        typicalSpeed=311; // JCA_15Rnd_9x19_P226_SUB_Mag initSpeed
        airFriction=-0.00114081; // airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class JCA_B_9x19_Ball_P226_Tracer_Green: JCA_B_9x19_Ball_P226_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_P226_Tracer_Red: JCA_B_9x19_Ball_P226_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_P226_Tracer_Yellow: JCA_B_9x19_Ball_P226_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_P226_Tracer_IR: JCA_B_9x19_Ball_P226_FMJ
    {
        nvgOnly=1;
    };
    class JCA_B_9x19_Ball_MP5_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.235}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // Muzzle Velocities shift +1m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 365m/s (1198fps) 4" barrel, 428m/s (1404fps) 8.858" (225mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_MP5A5 initSpeed
        hit=5.4; // B_9x21_Ball 5, 736 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=428; // JCA_30Rnd_9x19_MP5_FMJ_Mag and JCA_30Rnd_9x19_MP5_JHP_Mag initSpeed
        airFriction=-0.0015693; // ACE3 -0.00201185, B_9x21_Ball -0.0016, airFrictionAnalysis.txt in docs folder
        caliber=1.2;
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_MP5_JHP: JCA_B_9x19_Ball_MP5_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.204}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // Muzzle Velocities shift +1m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 365m/s (1198fps) 4" barrel, 428m/s (1404fps) 8.858" (225mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_MP5A5 initSpeed
        hit=9; // B_9x21_Ball 5, 736 Joules
        airFriction=-0.00180949; // airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2
    };
    class JCA_B_9x19_Ball_MP5_Tracer_Green: JCA_B_9x19_Ball_MP5_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_MP5_Tracer_Red: JCA_B_9x19_Ball_MP5_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_MP5_Tracer_Yellow: JCA_B_9x19_Ball_MP5_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_MP5_Tracer_IR: JCA_B_9x19_Ball_MP5_FMJ
    {
        nvgOnly=1;
    };
    // JCA Bullets inherited from vanilla class B_556x45_Ball. To avoid all conflict with other mods, all JCA bullets with JCA as prefixe.
    // class B_556x45_Ball: BulletBase from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class JCA_B_556x45_Ball: BulletBase // M855, ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L117
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01; // ACE3
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.149}; // US Army's Ballistic Research Laboratory ASM BC 0.151 converted to ICAO 0.149012
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        // ACE_barrelLengths[]={210.82,238.76,269.24,299.72,330.2,360.68,391.16,419.1,449.58,480.06,508,609.6}; // default ACE3 barrel lengths https://en.wikipedia.org/wiki/5.56%C3%9745mm_NATO
        // ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,900}; // default ACE3 MVs at 4m https://en.wikipedia.org/wiki/5.56%C3%9745mm_NATO
        // ACE_muzzleVelocities[]={715,784,832,873,890,912,926,904}; // MVs V0 Strelok Pro 15°C
        // ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508,609.6}; // 8", 10", 12", 14.5", 16", 18", 20", 24" barrels lengths
        ACE_muzzleVelocities[]={723,792,840,881,898,920,934}; // Muzzle Velocities shift +8m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 791m/s (10.3"), 873m/s (14.5"), 926m/s (20") at 15°C (ICAO: 15°C, 1013.25hPa, 0%) according to JCA_M4/M16 initSpeed
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) barrels lengths
        airLock=1;
        hit=9; // B_556x45_Ball, 1723 Joules
        indirectHit=0;
        indirectHitRange=0;
        cost=1;
        typicalSpeed=926; // B_556x45_Ball 920
        airFriction=-0.00133644; // ACE3 0.00130094, B_556x45_Ball 0.0012, airFrictionAnalysis.txt in docs folder
        waterFriction=-0.3;
        caliber=0.869565; // B_556x45_Ball
        model="\A3\Weapons_f\Data\bullettracer\tracer_white"; // B_762x51_Ball, B_556x45_Ball tracer_yellow
        tracerScale=1;
        tracerStartTime=0.17; // 140 m – ≥ 600 m typically 800 m, Strelok Pro MV 920m/s ICAO at 140m  ToF=0.17s, B_556x45_Ball 0.05, https://www.nammo.com/
        tracerEndTime=1.62; // 140 m – ≥ 600 m typically 800 m, Strelok Pro MV 920m/s ICAO at 800m  ToF=1.62s, B_556x45_Ball 1, https://www.nammo.com/
        nvgOnly=0; // B_556x45_Ball w/o nvgOnly
        audibleFire=35;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        aiAmmoUsageFlags=64;
        class CamShakeExplode
        {
            power=2.23607;
            duration=0.4;
            frequency=20;
            distance=6.7082;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_556x45_Ball_Tracer_Red: JCA_B_556x45_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_556x45_Ball_Tracer_Green: JCA_B_556x45_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_556x45_Ball_Tracer_Yellow: JCA_B_556x45_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_JCA_B_556x45_Ball_Tracer_IR: JCA_B_556x45_Ball // JCA_JCA to avoid all conflict with other mods and RPT Updating base class. JCA default config: JCA_B_556x45_Ball_Tracer_IR: B_556x45_Ball
    {
        tracerScale=0.5; // IR dim tracer, B_556x45_Ball 1
        tracerStartTime=0.01; // 13 m-600 m (typically visible to 950 m), Strelok Pro MV 930m/s ICAO at 13m  ToF=0.01s, B_556x45_Ball 0.05, https://www.nammo.com/
        tracerEndTime=2.12; // 13 m-600 m (typically visible to 950 m), Strelok Pro MV 930m/s ICAO at 950m  ToF=2.12s, B_556x45_Ball 1, https://www.nammo.com/
        nvgOnly=1;
    };
    class JCA_B_556x45_Ball_M855A1: JCA_B_556x45_Ball // M855A1 Lake City Army Ammunition Plant, 2022/23 article https://www.ar15.com/forums/AR-15/M855A1-Accuracy-and-Velocity-updated-/16-783286/
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=25.4; // 1"
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.149}; // average ICAO G7 BC 0.149 from "Ballistic Performance of Rifle Bullets" by Bryan Litz, (average ICAO G1 BC 0.291)
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        // 76°F (24°C rounded to 25°C for Ace3), 1019mB, 47%, barrel length 20": 3131fps (954m/s - 954m/s in-game), barrel length 14.5": average 2951fps (899m/s - 900m/s in-game) from 2022/23 article values https://www.ar15.com/forums/AR-15/M855A1-Accuracy-and-Velocity-updated-/16-783286/
        ACE_muzzleVelocities[]={734,804,853,894,911,934,948}; // Muzzle Velocities shift +8m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 803m/s (10.3"), 886m/s (14.5"), 940m/s (20") at 15°C (ICAO: 15°C, 1013.25hPa, 0%) according to JCA_M4/M16 initSpeed
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) barrels lengths
        // hit=9; // B_556x45_Ball, 1775 Joules
        typicalSpeed=940; // B_556x45_Ball 920
        airFriction=-0.00132981; // airFrictionAnalysis.txt in docs folder
        caliber=1; // B_556x45_Ball 0.869565
    };
    class JCA_B_556x45_Ball_M193: JCA_B_556x45_Ball // M193 RUAG Ammotec AG
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=17.78; // Strelok Pro
        ACE_bulletMass=3.6; // 55gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.280}; // M193 RUAG Ammotec AG
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={772,846,898,941,960,983,998}; // Muzzle Velocities shift +8m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 846m/s (10.3"), 933m/s (14.5"), 990m/s (20") at 15°C (ICAO: 15°C, 1013.25hPa, 0%) according to JCA_M4/M16 initSpeed
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) barrels lengths
        // hit=9; // B_556x45_Ball, 1764 Joules
        typicalSpeed=990; // B_556x45_Ball 920
        airFriction=-0.00139457; // airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_556x45_Ball_Mk262: JCA_B_556x45_Ball // ACE_556x45_Ball_Mk262 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L141
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01;
        ACE_bulletMass=4.99; // 77gr
        ACE_muzzleVelocityVariationSD=0.4;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.356}; // ASM BC 0.361 converted to ICAO 0.356247
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={655,717,761,798,813,833,846}; // Muzzle Velocities shift +8m/s at 70°F (21°C), 716m/s (10.3"), 790m/s (14.5"), 838m/s (20") at 15°C (ICAO: 15°C, 1013.25hPa, 0%) according to JCA_M4/M16 initSpeed
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) barrels lengths
        // hit=9; // B_556x45_Ball, 1752 Joules
        typicalSpeed=838; // B_556x45_Ball 920
        airFriction=-0.00114664; // airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_556x45_Ball_Mk318: JCA_B_556x45_Ball // ACE_556x45_Ball_Mk318 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L155
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01;
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.303}; // ASM BC 0.307 converted to ICAO 0.302958
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={742,812,862,904,921,944,958}; // Muzzle Velocities shift +8m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 812m/s (10.3"), 896m/s (14.5"), 950m/s (20") at 15°C (ICAO: 15°C, 1013.25hPa, 0%) according to JCA_M4/M16 initSpeed
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) barrels lengths
        // hit=9; // B_556x45_Ball, 1813 Joules
        typicalSpeed=950; // B_556x45_Ball 920
        airFriction=-0.00130202; // airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_556x45_Ball_M995AP: JCA_B_556x45_Ball // ACE_556x45_Ball_M995_AP https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L168
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01;
        ACE_bulletMass=4.536; // 70gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.306}; // ASM BC 0.310 converted to ICAO 0.305919
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={687,753,799,838,854,875,888}; // Muzzle Velocities shift +8m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 752m/s (10.3"), 830m/s (14.5"), 880m/s (20") at 15°C (ICAO: 15°C, 1013.25hPa, 0%) according to JCA_M4/M16 initSpeed
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) barrels lengths
        // hit=9; // B_556x45_Ball, 1757 Joules
        typicalSpeed=880; // B_556x45_Ball 920
        airFriction=-0.00131582; // airFrictionAnalysis.txt in docs folder
        caliber=1.6; // ACE_556x45_Ball_M995_AP, B_556x45_Ball 0.869565
    };
    /*class B_556x45_dual: B_556x45_Ball // from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        cartridge="FxCartridge_65";
        audibleFire=20;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
        typicalSpeed=270;
        airFriction=-0.02;
        waterFriction=-0.01;
        effectFly="AmmoUnderwater";
        nvgOnly=1;
        aiAmmoUsageFlags="64 + 32";
    };*/
    class JCA_B_556x45_Ball_Dual: JCA_B_556x45_Ball // 5.56mm underwater subsonic DSG Technology https://dsgtec.com/ https://www.thefirearmblog.com/blog/2017/04/20/dsg-technology-underwater-ammo/
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01;
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.149}; // ASM BC 0.151 converted to ICAO 0.149012
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={220,241,255,268,273,280,284}; // Muzzle Velocities shift +1m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 242m/s (10.3"), 267m/s (14.5"), 283m/s (20") at 15°C (ICAO: 15°C, 1013.25hPa, 0%) according to JCA_M4/M16 initSpeed
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), M4A1, M4A1 EGLM 14.5" (368.3mm), M16A4 20" (508mm) barrels lengths
        // cartridge="FxCartridge_65";
        visibleFire=1; // B_127x54_Ball, BulletBase 3
        audibleFire=5; // B_127x54_Ball, B_556x45_Ball 35, B_556x45_dual 20
        dangerRadiusBulletClose=4; // B_556x45_Ball 8
        dangerRadiusHit=8; // B_556x45_Ball 12
        suppressionRadiusBulletClose=2; // B_556x45_Ball 6
        suppressionRadiusHit=4; // B_556x45_Ball 8
        typicalSpeed=270;
        airFriction=-0.0005713; // airFrictionAnalysis.txt in docs folder, https://github.com/acemod/ACE3/pull/7982
        waterFriction=-0.01;
        effectFly="AmmoUnderwater";
        nvgOnly=1;
        aiAmmoUsageFlags="64 + 32";
    };
    // JCA Bullets inherited from vanilla class B_762x51_Ball. To avoid all conflict with other mods, all JCA bullets with JCA as prefixe
    // class B_762x51_Ball: BulletBase from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class JCA_B_762x51_Ball: BulletBase // ACE_762x51_Ball_Mk316_Mod_0 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L317
    {
        ACE_caliber=7.85; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/tabical-en-page125.pdf
        ACE_bulletLength=31.5; // Strelok Pro, Applied Ballistics
        ACE_bulletMass=11.34; // 175gr
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        // ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; default ACE3
        // ACE_ammoTempMuzzleVelocityShifts[]={-5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2}; default ACE_762x51_Ball_Mk316_Mod_0
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5. Muzzle velocity shift 0 at 70°F (21°C), -2m/s at 15°C
        // ACE_ballisticCoefficients[]={0.243}; // Bryan Litz Applied Ballistics ICAO G7 BC based on Sierra ASM G1 BC 0.505, 2800 fps (853m/s) and above
        ACE_ballisticCoefficients[]={0.489}; // ICAO G1 BC 0.48947 converted from Sierra bullet 7.62mm 175 Gr. HPBT MatchKing ASM G1 BC 0.496 between 2800 fps (853m/s) and 1800 fps (549m/s) https://www.sierrabullets.com/product/30-cal-7-62mm-175-gr-hpbt-matchking/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={757,767,777,792,807,812}; // Muzzle Velocities shift +2m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 770m/s (14.5"), 790 m/s (20") at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_SR10/SR25 initSpeed
        ACE_barrelLengths[]={254,330.2,406.4,508,609.6,660.4}; // SR10 14.5" (368.3mm), SR25 20" (508mm) barrels lengths
        hit=16; // ACE_762x51_Ball_Mk316_Mod_0, B_762x51_Ball 11.6, 3539 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_762";
        visibleFire=3;
        audibleFire=45;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        cost=1.2;
        airLock=1;
        typicalSpeed=790; // ACE_762x51_Ball_Mk316_Mod_0, B_762x51_Ball 800
        caliber=1.8; // ACE_762x51_Ball_Mk316_Mod_0, B_762x51_Ball 1.6
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1.2; // ACE3, B_762x51_Ball 0.6
        tracerStartTime=0.19; // 140 m – ≥ 775 m typically 900 m, Strelok Pro ToF ICAO at 140m 0.19s, B_762x51_Ball 0.0075, https://www.nammo.com/
        tracerEndTime=1.72; // 140 m – ≥ 775 m typically 900 m, Strelok Pro ToF ICAO at 900m 1.72s, B_762x51_Ball 5, https://www.nammo.com/
        nvgOnly=0; // B_762x51_Ball w/o nvgOnly
        airFriction=-0.00084907; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.8284299;
            duration=0.60000002;
            frequency=20;
            distance=8.48528;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_762x51_Tracer_Red: JCA_B_762x51_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_762x51_Tracer_Green: JCA_B_762x51_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_762x51_Tracer_Yellow: JCA_B_762x51_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_JCA_B_762x51_Tracer_IR: JCA_B_762x51_Ball // JCA_JCA to avoid all conflict with other mods and RPT Updating base class. JCA default config: JCA_B_762x51_Tracer_IR: B_762x51_Ball
    {
        tracerScale=0.6; // IR dim tracer, B_762x51_Ball
        tracerStartTime=0.02; // 13–775 m (typically visible to 1250 m), Strelok Pro ToF ICAO at 13m 0.02s, B_762x51_Ball 0.0075, https://www.nammo.com/
        tracerEndTime=2.8; // 13–775 m (typically visible to 1250 m), Strelok Pro ToF ICAO at 1250m 2.80s, B_762x51_Ball 5, https://www.nammo.com/
        nvgOnly=1;
    };
    class JCA_B_762x51_M993AP: JCA_B_762x51_Ball // ACE_762x51_Ball_M993_AP https://www.nammo.com/product/our-products/ammunition/small-caliber-ammunition/7-62mm-series/7-62-mm-x-51-armor-piercing-8-m993/
    {
        ACE_caliber=7.85; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/tabical-en-page125.pdf
        ACE_bulletLength=31.5;
        ACE_bulletMass=8.23; // 127gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.359}; // https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L351
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={897,909,920,938,958,962}; // Muzzle Velocities shift +8m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 906m/s (14.5"), 930 m/s (20") at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_SR10/SR25 initSpeed
        ACE_barrelLengths[]={254,330.2,406.4,508,609.6,660.4}; // SR10 14.5" (368.3mm), SR25 20" (508mm) barrels lengths
        hit=12; // ACE_762x51_Ball_M993_AP 11, B_762x51_Ball 11.6, 3560 Joules
        typicalSpeed=930; // ACE_762x51_Ball_M993_AP 910
        caliber=2.2; // ACE_762x51_Ball_M993_AP, B_762x51_Ball 1.6
        airFriction=-0.00110502; // airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_762x51_Subsonic: JCA_B_762x51_Ball // Lapua subsonic B416, 325m/s 16" (406.4mm) barrel (Trajectory charts) https://www.lapua.com/product/308-win-subsonic-fmjbt-tactical-cartridge-13g-200gr-4317340/
    {
        ACE_caliber=7.85; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/tabical-en-page125.pdf
        ACE_bulletLength=34.11; // Strelok Pro
        ACE_bulletMass=12.96; // 200 gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.518}; // https://www.lapua.com/product/30-cal-fmjbt-subsonic-bullet-b416-130-g-200-gr/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={318,322,326,332,339,341}; // Muzzle Velocities shift +1m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 323m/s (14.5"), 331m/s (20") at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_SR10/SR25 initSpeed
        ACE_barrelLengths[]={254,330.2,406.4,508,609.6,660.4}; // SR10 14.5" (368.3mm), SR25 20" (508mm) barrels lengths
        hit=6; // ACE_762x51_Ball_Subsonic, B_762x51_Ball 11.6
        visibleFire=1; // B_127x54_Ball, B_762x51_Ball 3
        audibleFire=5; // B_127x54_Ball, B_762x51_Ball 45
        dangerRadiusBulletClose=4; // B_127x54_Ball, B_762x51_Ball 8
        suppressionRadiusBulletClose=2; // B_127x54_Ball, B_762x51_Ball 6
        typicalSpeed=320; // ACE_762x51_Ball_Subsonic
        caliber=1; // ACE_762x51_Ball_Subsonic, B_762x51_Ball 1.6
        airFriction=-0.00049496; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.23607; // B_127x54_Ball, B_762x51_Ball 2.8284299
            duration=0.4; // B_127x54_Ball, B_762x51_Ball 0.6
            frequency=20; // B_127x54_Ball ,B_762x51_Ball 20
            distance=6.7082; // B_127x54_Ball, B_762x51_Ball 8.48528
        };
    };
    class JCA_B_338LM_Ball: B_338_Ball // B_338_Ball, Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
    {
        ACE_caliber=8.61; // .338 LM CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/338-lapua-mag-en.pdf
        ACE_bulletLength=39.4; // Strelok Pro .338 LM Lapua Scenar 250gr GB488, 1.551" https://jbmballistics.com
        ACE_bulletMass=16.2; // Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5. Muzzle velocity shift 0 at 70°F (21°C), -2m/s at 15°C
        ACE_ballisticCoefficients[]={0.648}; // Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO"; // ICAO: 15°C, 1013.25 hPa, 0%
        ACE_dragModel=1; // Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
        ACE_muzzleVelocities[]={908}; // Muzzle Velocities shift +2m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 906m/s (27") at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM_Mag initSpeed
        ACE_barrelLengths[]={685.8}; // 27"
        hit=20; // hit value according to Arma3 "Armor Level IV" value, B_338_Ball 16, JCA 18. 16.2g 906 m/s = 6650 Joules. NIJ Type IV (Armor Piercing Rifle) and NIJ RF3: 30.06 M2 AP bullet 10.8g 878m/s (165.7gr 2880ft/s): 4163 Joules
        caliber=0.443; // Perforation 5mm RHA "armour_plate_5mm.bisurf" at 300m (5mm 752m/s default ballistic - 761m/s ICAO advanced ballistics), B_338_Ball 2, JCA 1.8, should be Lapua Scenar penetration 3mm RHA at 300m
        typicalSpeed=906; // according to JCA_5Rnd_338LM_Mag initSpeed, B_338_Ball 890
        tracerScale=1.2; // No .338 LM tracer irl, B_338_Ball, JCA 1.3
        tracerStartTime=0.23; // No .338 LM tracer irl, based on 12.7x99 Tracer visible < 200 m to ≥ 1 500 m https://www.nammo.com/ ToF ICAO at 200m 0.23s (Strelok Pro), B_338_Ball 0.075
        tracerEndTime=2.75; // No .338 LM tracer irl, based on 12.7x99 Tracer visible < 200 m to ≥ 1 500 m https://www.nammo.com/ ToF ICAO at 1500m 2.75s (Strelok Pro), B_338_Ball 1, JCA 3
        airFriction=-0.00061662; // elevation gap 0.1, 0.2mRad until 1700m, airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_338LM_Ball_Tracer_IR: JCA_B_338LM_Ball
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.01; // No .338 LM tracer irl, based on 7.62 mm x 51 DIM TRACER (IR), 13–775 m (typically visible to 1250 m) https://www.nammo.com/ ToF ICAO at 13m 0.01s (Strelok Pro), B_338_Ball 0.075
        tracerEndTime=2.08; // No .338 LM tracer irl, based on 7.62 mm x 51 DIM TRACER (IR), 13–775 m (typically visible to 1250 m) https://www.nammo.com/ ToF ICAO at 1250m 2.08s (Strelok Pro), B_338_Ball 1, JCA 3
    };
    class JCA_B_338LM_AP_Ball: JCA_B_338LM_Ball // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
    {
        ACE_caliber=8.61; // .338 LM CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/338-lapua-mag-en.pdf
        ACE_bulletLength=35.5; // 1.398" 35.51mm https://jbmballistics.com
        ACE_bulletMass=16.1; // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5. Muzzle velocity shift 0 at 70°F (21°C), -2m/s at 15°C
        ACE_ballisticCoefficients[]={0.564}; // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO"; // ICAO: 15°C, 1013.25 hPa, 0%
        ACE_dragModel=1; // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
        ACE_muzzleVelocities[]={908}; // Muzzle Velocities shift +2m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 906m/s (27") at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM_AP_Mag initSpeed
        ACE_barrelLengths[]={685.8}; // 27"
        caliber=1.307; // Perforation 12mm RHA "armour_plate_12mm.bisurf" at 550m (12mm 612m/s default ballistic - 619m/s ICAO advanced ballistics), B_338_Ball 2, should be 12 mm at 550 m Steel plate 400 HB https://www.nammo.com/
        hit=20; // hit value according to Arma3 "Armor Level IV" value. 16.1g 906 m/s = 6609 Joules. NIJ Type IV (Armor Piercing Rifle) and NIJ RF3: 30.06 M2 AP bullet 10.8g 878m/s (165.7gr 2880ft/s): 4163 Joules
        typicalSpeed=906; // according to JCA_5Rnd_338LM_AP_Mag initSpeed, B_338_Ball 890
        airFriction=-0.00070864; // elevation gap 0.1, 0.2mRad until 1500m, airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_338LM_API_Ball: JCA_B_338LM_Ball // Lapua .338 LM 253gr API526 Armor Piercing Incendiary https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
    {
        ACE_caliber=8.61; // .338 LM CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/338-lapua-mag-en.pdf
        ACE_bulletLength=39; // 1.535" 38.99mm https://jbmballistics.com
        ACE_bulletMass=16.4; // Lapua .338 LM 253gr API526 Armor Piercing Incendiary https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5. Muzzle velocity shift 0 at 70°F (21°C), -2m/s at 15°C
        ACE_ballisticCoefficients[]={0.554}; // Lapua .338 LM 253gr API526 https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO"; // ICAO: 15°C, 1013.25 hPa, 0%
        ACE_dragModel=1; // Lapua .338 LM 253gr API526 Armor Piercing Incendiary https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
        ACE_muzzleVelocities[]={898}; // Muzzle Velocities shift +2m/s at 70°F (21°C) (70°F: Temp vs MV chart zero), 896m/s (27") at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM_API_Mag initSpeed
        ACE_barrelLengths[]={685.8}; // 27"
        ace_vehicle_damage_incendiary=1; // observable flash at hard targets. Ignition of vaporized fuel https://www.nammo.com/product/our-products/ammunition/small-caliber-ammunition/8-6mm-series-338/8-6-mm-x-70-338-lapua-armor-piercing-incendiary/
        caliber=1.07; // Perforation 10mm RHA (no vanilla "armour_plate_10mm.bisurf", custom model) at 500m (10mm 623m/s default ballistic - 630m/s ICAO advanced ballistics), B_338_Ball 2, should be 10 mm at 500 m Steel plate 400 HB https://www.nammo.com/
        hit=24; // hit value according to Arma3 "Armor Level V" value. 16.4g 896 m/s = 6584 Joules. NIJ Type IV (Armor Piercing Rifle) and NIJ RF3: 30.06 M2 AP bullet 10.8g 878m/s (165.7gr 2880ft/s): 4163 Joules
        indirectHit=4; // B_20mm_AP 8
        indirectHitRange=0.1; // B_20mm_AP 0.2
        typicalSpeed=896; // according to JCA_5Rnd_338LM_API_Mag initSpeed, B_338_Ball 890
        airFriction=-0.0007233; // elevation gap 0.1, 0.2mRad until 1500m, airFrictionAnalysis.txt in docs folder
        CraterEffects="ExploAmmoCrater"; // ammo_Penetrator_Base
        class HitEffects // B_30mm_APFSDS. Observable flash at hard targets. Ignition of vaporized fuel https://www.nammo.com/product/our-products/ammunition/small-caliber-ammunition/8-6mm-series-338/8-6-mm-x-70-338-lapua-armor-piercing-incendiary/
        {
            hitMetal="ImpactMetalSabotSmall";
            hitMetalPlate="ImpactMetalSabotSmall";
            hitBuilding="ImpactConcreteSabotSmall";
            hitConcrete="ImpactConcreteSabotSmall";
            hitGroundSoft="ImpactEffectsGroundSabot";
            hitGroundRed="ImpactEffectsGroundSabot"; // BulletBase ImpactEffectsRed
            hitGroundHard="ImpactEffectsGroundSabot";
            Hit_Foliage_green="ImpactLeavesGreen";
            Hit_Foliage_Dead="ImpactLeavesDead";
            Hit_Foliage_Green_big="ImpactLeavesGreenBig";
            Hit_Foliage_Palm="ImpactLeavesPalm";
            Hit_Foliage_Pine="ImpactLeavesPine";
            hitFoliage="ImpactLeaves";
            hitGlass="ImpactGlass";
            hitGlassArmored="ImpactGlassThin";
            hitWood="ImpactWood";
            hitHay="ImpactHay";
            hitPlastic="ImpactPlastic";
            hitRubber="ImpactRubber";
            hitTyre="ImpactTyre";
            hitMan="ImpactEffectsBlood";
            hitWater="ImpactEffectsWater";
            hitVirtual="ImpactMetal"; // BulletBase
            default_mat="ImpactEffectsGroundSabot";
        };
    };
};