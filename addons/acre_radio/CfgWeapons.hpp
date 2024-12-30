class CfgWeapons {

    class ACRE_BaseRadio;
    class CBA_MiscItem_ItemInfo;

    class ACRE_PRC117F: ACRE_BaseRadio {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
            allowedSlots[]={701,901}; // 701 = vest, 801 = uniform, 901 = backpack
            scope = 0;
        };
    };
    class ACRE_PRC148: ACRE_BaseRadio {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = .01;
            scope = 0;
        };
    };
    class ACRE_PRC152: ACRE_BaseRadio {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 4;
            scope = 0;
        };
    };
};
