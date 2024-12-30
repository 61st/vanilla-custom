    class InventoryItem_Base_F;
    class ItemCore;
    class Vest_Camo_Base;
    class Vest_NoCamo_Base;
    class VestItem;
    class V_PlateCarrierGL_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_TacVest_khk;
    class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
		class ItemInfo;
	};

    // Plate Carrier Full
    class CLASS(Item_Vest_PlateCarrierFull_Black): V_PlateCarrierIA1_dgtl {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier Full (Black)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply140";
            mass = 50;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrierfull_black_co.paa)};
    };
    class CLASS(Item_Vest_PlateCarrierFull_Green): V_PlateCarrierIA1_dgtl {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier Full (Green)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply140";
            mass = 50;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrierfull_green_co.paa)};
    };

    // Plate Carrier 990
    class CLASS(Item_Vest_PlateCarrier_Black990): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 990 (Black)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_black_co_990.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Green990): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 990 (Green)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_green_co_990.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Coyote990): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 990 (Coyote)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_coyote_co_990.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Khaki990): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 990 (Khaki)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_khaki_co_990.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_MARPAT990): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 990 (MARPAT)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_marpat_co_990.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_White990): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 990 (White)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_white_co_990.paa)};
    };


    // Plate Carrier 991
    class CLASS(Item_Vest_PlateCarrier_Black991): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 991 (Black)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_black_co_991.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Green991): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 991 (Green)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_green_co_991.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Coyote991): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 991 (Coyote)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_coyote_co_991.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Khaki991): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 991 (Khaki)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_khaki_co_991.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_MARPAT991): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 991 (MARPAT)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_marpat_co_991.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_White991): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 991 (White)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_white_co_991.paa)};
    };


    // Plate Carrier 992
    class CLASS(Item_Vest_PlateCarrier_Black992): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 992 (Black)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_black_co_992.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Green992): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 992 (Green)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_green_co_992.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Coyote992): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 992 (Coyote)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_coyote_co_992.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Khaki992): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 992 (Khaki)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_khaki_co_992.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_MARPAT992): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 992 (MARPAT)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_marpat_co_992.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_White992): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 992 (White)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_white_co_992.paa)};
    };


    // Plate Carrier 993
    class CLASS(Item_Vest_PlateCarrier_Black993): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 993 (Black)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_black_co_993.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Green993): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 993 (Green)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_green_co_993.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Coyote993): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 993 (Coyote)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_coyote_co_993.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Khaki993): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 993 (Khaki)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_khaki_co_993.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_MARPAT993): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 993 (MARPAT)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_marpat_co_993.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_White993): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 993 (White)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_white_co_993.paa)};
    };


    // Plate Carrier 999
    class CLASS(Item_Vest_PlateCarrier_Black999): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 999 (Black)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_black_co_999.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Green999): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 999 (Green)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_green_co_999.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Coyote999): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 999 (Coyote)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_coyote_co_999.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Khaki999): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 999 (Khaki)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_khaki_co_999.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_MARPAT999): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 999 (MARPAT)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_marpat_co_999.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_White999): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 999 (White)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_white_co_999.paa)};
    };





    // Plate Carrier 995
    class CLASS(Item_Vest_PlateCarrier_Black995): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 995 (Black)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_black_co_995.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Green995): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 995 (Green)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_green_co_995.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Coyote995): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 995 (Coyote)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_coyote_co_995.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_Khaki995): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 995 (Khaki)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_khaki_co_995.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_MARPAT995): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 995 (MARPAT)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_marpat_co_995.paa)};
    };
    class CLASS(Item_Vest_PlateCarrier_White995): V_PlateCarrier1_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Plate Carrier 995 (White)";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_white_co_995.paa)};
    };


////////////////////////////////////////



    // Plate Carrier Heavy 990
    class CLASS(Item_Vest_PlateCarrierHeavy_Black990): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 990 (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_black_co_990.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    class CLASS(Item_Vest_PlateCarrierHeavy_Coyote990): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 990 (Coyote)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_coyote_co_990.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_Green990): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 990 (Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_green_co_990.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_White990): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 990 (White)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_white_co_990.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };



    // Plate Carrier Heavy 991
    class CLASS(Item_Vest_PlateCarrierHeavy_Black991): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 991 (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_black_co_991.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    class CLASS(Item_Vest_PlateCarrierHeavy_Coyote991): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 991 (Coyote)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_coyote_co_991.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_Green991): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 991 (Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_green_co_991.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_White991): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 991 (White)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_white_co_991.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };




    // Plate Carrier Heavy 992
    class CLASS(Item_Vest_PlateCarrierHeavy_Black992): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 992 (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_black_co_992.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    class CLASS(Item_Vest_PlateCarrierHeavy_Coyote992): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 992 (Coyote)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_coyote_co_992.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_Green992): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 992 (Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_green_co_992.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_White992): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 992 (White)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_white_co_992.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };


    // Plate Carrier Heavy 993
    class CLASS(Item_Vest_PlateCarrierHeavy_Black993): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 993 (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_black_co_993.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    class CLASS(Item_Vest_PlateCarrierHeavy_Coyote993): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 993 (Coyote)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_coyote_co_993.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_Green993): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 993 (Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_green_co_993.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_White993): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 993 (White)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_white_co_993.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };


    // Plate Carrier Heavy 999
    class CLASS(Item_Vest_PlateCarrierHeavy_Black999): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 999 (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_black_co_999.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    class CLASS(Item_Vest_PlateCarrierHeavy_Coyote999): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 999 (Coyote)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_coyote_co_999.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_Green999): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 999 (Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_green_co_999.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_White999): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 999 (White)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_white_co_999.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };



    // Plate Carrier Heavy 995
    class CLASS(Item_Vest_PlateCarrierHeavy_Black995): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 995 (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_black_co_995.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    class CLASS(Item_Vest_PlateCarrierHeavy_Coyote995): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 995 (Coyote)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_coyote_co_995.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_Green995): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 995 (Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_green_co_995.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_White995): V_PlateCarrierGL_rgr {
        scope = 2;
        author = AUTHOR;
        displayName = "Heavy Plate Carrier 995 (White)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_white_co_995.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };






    // carrier lite 990
    class CLASS(Item_Vest_PlateCarrier1_brn990 ): V_PlateCarrier1_rgr {
        author = AUTHOR;
        displayName = "Carrier Lite 990 (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_990.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
    };
    // carrier 990
    class CLASS(Item_Vest_PlateCarrier2_brn990 ): V_PlateCarrier2_rgr {
        author = AUTHOR;
        displayName = "Carrier Rig 990(Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_990.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    // carrier lite 991
    class CLASS(Item_Vest_PlateCarrier1_brn991 ): V_PlateCarrier1_rgr {
        author = AUTHOR;
        displayName = "Carrier Lite 991 (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_991.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
    };
    // carrier 991
    class CLASS(Item_Vest_PlateCarrier2_brn991 ): V_PlateCarrier2_rgr {
        author = AUTHOR;
        displayName = "Carrier Rig 991(Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_991.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    // carrier lite 992
    class CLASS(Item_Vest_PlateCarrier1_brn992 ): V_PlateCarrier1_rgr {
        author = AUTHOR;
        displayName = "Carrier Lite 992 (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_992.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
    };
    // carrier 992
    class CLASS(Item_Vest_PlateCarrier2_brn992 ): V_PlateCarrier2_rgr {
        author = AUTHOR;
        displayName = "Carrier Rig 992(Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_992.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    // carrier lite 993
    class CLASS(Item_Vest_PlateCarrier1_brn993 ): V_PlateCarrier1_rgr {
        author = AUTHOR;
        displayName = "Carrier Lite 993 (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_993.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
    };
    // carrier 993
    class CLASS(Item_Vest_PlateCarrier2_brn993 ): V_PlateCarrier2_rgr {
        author = AUTHOR;
        displayName = "Carrier Rig 993(Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_993.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    // carrier lite 999
    class CLASS(Item_Vest_PlateCarrier1_brn999 ): V_PlateCarrier1_rgr {
        author = AUTHOR;
        displayName = "Carrier Lite 999 (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_999.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
    };
    // carrier 999
    class CLASS(Item_Vest_PlateCarrier2_brn999 ): V_PlateCarrier2_rgr {
        author = AUTHOR;
        displayName = "Carrier Rig 999(Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_999.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    // carrier lite 995
    class CLASS(Item_Vest_PlateCarrier1_brn995 ): V_PlateCarrier1_rgr {
        author = AUTHOR;
        displayName = "Carrier Lite 995 (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_995.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
    };
    // carrier 995
    class CLASS(Item_Vest_PlateCarrier2_brn995 ): V_PlateCarrier2_rgr {
        author = AUTHOR;
        displayName = "Carrier Rig 995(Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_995.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };


    // carrier plane
    class CLASS(Item_Vest_PlateCarrier3_brn ): V_PlateCarrier1_rgr {
        author = AUTHOR;
        displayName = "Carrier Alternative (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_LT2.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };
