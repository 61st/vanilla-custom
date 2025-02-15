  #include "script_component.hpp"

   class ADDON {
		name = COMPONENT_NAME;
		author = AUTHOR;
        units[] = {
			QCLASS(Vest_PlateCarrierFull_Black),
			QCLASS(Vest_PlateCarrierFull_Green),
			QCLASS(Vest_PlateCarrier_Black990),
			QCLASS(Vest_PlateCarrier_Green990),
			QCLASS(Vest_PlateCarrier_Coyote990),
			QCLASS(Vest_PlateCarrier_Khaki990),
			QCLASS(Vest_PlateCarrier_MARPAT990),
			QCLASS(Vest_PlateCarrier_White990),
			QCLASS(Vest_PlateCarrier_Black991),
			QCLASS(Vest_PlateCarrier_Green991),
			QCLASS(Vest_PlateCarrier_Coyote991),
			QCLASS(Vest_PlateCarrier_Khaki991),
			QCLASS(Vest_PlateCarrier_MARPAT991),
			QCLASS(Vest_PlateCarrier_White991),
			QCLASS(Vest_PlateCarrier_Black992),
			QCLASS(Vest_PlateCarrier_Green992),
			QCLASS(Vest_PlateCarrier_Coyote992),
			QCLASS(Vest_PlateCarrier_Khaki992),
			QCLASS(Vest_PlateCarrier_MARPAT992),
			QCLASS(Vest_PlateCarrier_White992),
			QCLASS(Vest_PlateCarrier_Black993),
			QCLASS(Vest_PlateCarrier_Green993),
			QCLASS(Vest_PlateCarrier_Coyote993),
			QCLASS(Vest_PlateCarrier_Khaki993),
			QCLASS(Vest_PlateCarrier_MARPAT993),
			QCLASS(Vest_PlateCarrier_White993),
			QCLASS(Vest_PlateCarrier_Black999),
			QCLASS(Vest_PlateCarrier_Green999),
			QCLASS(Vest_PlateCarrier_Coyote999),
			QCLASS(Vest_PlateCarrier_Khaki999),
			QCLASS(Vest_PlateCarrier_MARPAT999),
			QCLASS(Vest_PlateCarrier_White999),
			QCLASS(Vest_PlateCarrier_Black995),
			QCLASS(Vest_PlateCarrier_Green995),
			QCLASS(Vest_PlateCarrier_Coyote995),
			QCLASS(Vest_PlateCarrier_Khaki995),
			QCLASS(Vest_PlateCarrier_MARPAT995),
			QCLASS(Vest_PlateCarrier_White995),
			QCLASS(Vest_PlateCarrierHeavy_Black990),
			QCLASS(Vest_PlateCarrierHeavy_Coyote990),
			QCLASS(Vest_PlateCarrierHeavy_Green990),
			QCLASS(Vest_PlateCarrierHeavy_White990),
			QCLASS(Vest_PlateCarrier1_brn990),
			QCLASS(Vest_PlateCarrier2_brn990),
			QCLASS(Vest_PlateCarrierHeavy_Black991),
			QCLASS(Vest_PlateCarrierHeavy_Coyote991),
			QCLASS(Vest_PlateCarrierHeavy_Green991),
			QCLASS(Vest_PlateCarrierHeavy_White991),
			QCLASS(Vest_PlateCarrier1_brn991),
			QCLASS(Vest_PlateCarrier2_brn991),
			QCLASS(Vest_PlateCarrierHeavy_Black992),
			QCLASS(Vest_PlateCarrierHeavy_Coyote992),
			QCLASS(Vest_PlateCarrierHeavy_Green992),
			QCLASS(Vest_PlateCarrierHeavy_White992),
			QCLASS(Vest_PlateCarrier1_brn992),
			QCLASS(Vest_PlateCarrier2_brn992),
			QCLASS(Vest_PlateCarrierHeavy_Black993),
			QCLASS(Vest_PlateCarrierHeavy_Coyote993),
			QCLASS(Vest_PlateCarrierHeavy_Green993),
			QCLASS(Vest_PlateCarrierHeavy_White993),
			QCLASS(Vest_PlateCarrier1_brn993),
			QCLASS(Vest_PlateCarrier2_brn993),
			QCLASS(Vest_PlateCarrierHeavy_Black999),
			QCLASS(Vest_PlateCarrierHeavy_Coyote999),
			QCLASS(Vest_PlateCarrierHeavy_Green999),
			QCLASS(Vest_PlateCarrierHeavy_White999),
			QCLASS(Vest_PlateCarrier1_brn999),
			QCLASS(Vest_PlateCarrier2_brn999),
			QCLASS(Vest_PlateCarrierHeavy_Black995),
			QCLASS(Vest_PlateCarrierHeavy_Coyote995),
			QCLASS(Vest_PlateCarrierHeavy_Green995),
			QCLASS(Vest_PlateCarrierHeavy_White995),
			QCLASS(Vest_PlateCarrier1_brn995),
			QCLASS(Vest_PlateCarrier2_brn995),
			QCLASS(Vest_PlateCarrier3_brn)
        };
        weapons[] = {
			QCLASS(Item_Vest_PlateCarrierFull_Black),
			QCLASS(Item_Vest_PlateCarrierFull_Green),
			QCLASS(Item_Vest_PlateCarrier_Black990),
			QCLASS(Item_Vest_PlateCarrier_Green990),
			QCLASS(Item_Vest_PlateCarrier_Coyote990),
			QCLASS(Item_Vest_PlateCarrier_Khaki990),
			QCLASS(Item_Vest_PlateCarrier_MARPAT990),
			QCLASS(Item_Vest_PlateCarrier_White990),
			QCLASS(Item_Vest_PlateCarrierHeavy_Black990),
			QCLASS(Item_Vest_PlateCarrierHeavy_Coyote990),
			QCLASS(Item_Vest_PlateCarrierHeavy_Green990),
			QCLASS(Item_Vest_PlateCarrierHeavy_White990),
			QCLASS(Item_Vest_PlateCarrier1_brn990),
			QCLASS(Item_Vest_PlateCarrier2_brn990),
			QCLASS(Item_Vest_PlateCarrier_Black991),
			QCLASS(Item_Vest_PlateCarrier_Green991),
			QCLASS(Item_Vest_PlateCarrier_Coyote991),
			QCLASS(Item_Vest_PlateCarrier_Khaki991),
			QCLASS(Item_Vest_PlateCarrier_MARPAT991),
			QCLASS(Item_Vest_PlateCarrier_White991),
			QCLASS(Item_Vest_PlateCarrierHeavy_Black991),
			QCLASS(Item_Vest_PlateCarrierHeavy_Coyote991),
			QCLASS(Item_Vest_PlateCarrierHeavy_Green991),
			QCLASS(Item_Vest_PlateCarrierHeavy_White991),
			QCLASS(Item_Vest_PlateCarrier1_brn991),
			QCLASS(Item_Vest_PlateCarrier2_brn991),
			QCLASS(Item_Vest_PlateCarrier_Black992),
			QCLASS(Item_Vest_PlateCarrier_Green992),
			QCLASS(Item_Vest_PlateCarrier_Coyote992),
			QCLASS(Item_Vest_PlateCarrier_Khaki992),
			QCLASS(Item_Vest_PlateCarrier_MARPAT992),
			QCLASS(Item_Vest_PlateCarrier_White992),
			QCLASS(Item_Vest_PlateCarrierHeavy_Black992),
			QCLASS(Item_Vest_PlateCarrierHeavy_Coyote992),
			QCLASS(Item_Vest_PlateCarrierHeavy_Green992),
			QCLASS(Item_Vest_PlateCarrierHeavy_White992),
			QCLASS(Item_Vest_PlateCarrier1_brn992),
			QCLASS(Item_Vest_PlateCarrier2_brn992),
			QCLASS(Item_Vest_PlateCarrier_Black993),
			QCLASS(Item_Vest_PlateCarrier_Green993),
			QCLASS(Item_Vest_PlateCarrier_Coyote993),
			QCLASS(Item_Vest_PlateCarrier_Khaki993),
			QCLASS(Item_Vest_PlateCarrier_MARPAT993),
			QCLASS(Item_Vest_PlateCarrier_White993),
			QCLASS(Item_Vest_PlateCarrierHeavy_Black993),
			QCLASS(Item_Vest_PlateCarrierHeavy_Coyote993),
			QCLASS(Item_Vest_PlateCarrierHeavy_Green993),
			QCLASS(Item_Vest_PlateCarrierHeavy_White993),
			QCLASS(Item_Vest_PlateCarrier1_brn993),
			QCLASS(Item_Vest_PlateCarrier2_brn993),
			QCLASS(Item_Vest_PlateCarrier_Black999),
			QCLASS(Item_Vest_PlateCarrier_Green999),
			QCLASS(Item_Vest_PlateCarrier_Coyote999),
			QCLASS(Item_Vest_PlateCarrier_Khaki999),
			QCLASS(Item_Vest_PlateCarrier_MARPAT999),
			QCLASS(Item_Vest_PlateCarrier_White999),
			QCLASS(Item_Vest_PlateCarrierHeavy_Black999),
			QCLASS(Item_Vest_PlateCarrierHeavy_Coyote999),
			QCLASS(Item_Vest_PlateCarrierHeavy_Green999),
			QCLASS(Item_Vest_PlateCarrierHeavy_White999),
			QCLASS(Item_Vest_PlateCarrier1_brn999),
			QCLASS(Item_Vest_PlateCarrier2_brn999),
			QCLASS(Item_Vest_PlateCarrier_Black995),
			QCLASS(Item_Vest_PlateCarrier_Green995),
			QCLASS(Item_Vest_PlateCarrier_Coyote995),
			QCLASS(Item_Vest_PlateCarrier_Khaki995),
			QCLASS(Item_Vest_PlateCarrier_MARPAT995),
			QCLASS(Item_Vest_PlateCarrier_White995),
			QCLASS(Item_Vest_PlateCarrierHeavy_Black995),
			QCLASS(Item_Vest_PlateCarrierHeavy_Coyote995),
			QCLASS(Item_Vest_PlateCarrierHeavy_Green995),
			QCLASS(Item_Vest_PlateCarrierHeavy_White995),
			QCLASS(Item_Vest_PlateCarrier1_brn995),
			QCLASS(Item_Vest_PlateCarrier2_brn995),
			QCLASS(Item_Vest_PlateCarrier3_brn)
        };
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };