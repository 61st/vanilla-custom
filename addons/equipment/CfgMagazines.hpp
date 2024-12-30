class CfgMagazines {
    class CA_Magazine;
    class ATMine_Range_Mag;
    class DemoCharge_Remote_Mag;
    class 16Rnd_9x21_Mag;
    class sps_16Rnd_75x27_FK_95gr_jhp : 16Rnd_9x21_Mag {
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
    };
    class SatchelCharge_Remote_Mag : CA_Magazine {
        class ACE_Triggers {
            SupportedTriggers[]={"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch", "Shock", "ShockShort"};
            class Shock {
                FuseTime=3;
            };
            class ShockShort {
                FuseTime=2;
            };
        };
    };
    class SLAMDirectionalMine_Wire_Mag : ATMine_Range_Mag {
        class ACE_Triggers {
            SupportedTriggers[]={"IRSensor", "PressurePlate", "Command", "Timer", "MK16_Transmitter", "Shock", "ShockShort"};
            class Shock {
                FuseTime=3;
            };
            class ShockShort {
                FuseTime=2;
            };
        };
    };
    class IEDUrbanSmall_Remote_Mag : DemoCharge_Remote_Mag {
        class ACE_Triggers {
            SupportedTriggers[]={"Cellphone", "PressurePlate", "Command", "DeadmanSwitch", "Shock", "ShockShort"};
            class Shock {
                FuseTime=3;
            };
            class ShockShort {
                FuseTime=2;
            };
        };
    };
    class IEDUrbanBig_Remote_Mag : DemoCharge_Remote_Mag {
        class ACE_Triggers {
            SupportedTriggers[]={"Cellphone", "PressurePlate", "Command", "DeadmanSwitch", "Shock", "ShockShort"};
            class Shock {
                FuseTime=3;
            };
            class ShockShort {
                FuseTime=2;
            };
        };
    };
};