class CfgFactionClasses {
    class NO_CATEGORY;
    class PREFIX: NO_CATEGORY {
        displayName = CSTRING(Category);
    };
};

class CfgVehicleClasses {
    class PREFIX##_Vehicles {
        displayName = CSTRING(Category);
    };
    class PREFIX_Vehicles {
        displayName = CSTRING(Category);
    };
};

class CfgEditorCategories {
    class PREFIX  {
        displayName = CSTRING(Category);
    };
};
class CfgEditorSubcategories {
    class PREFIX  {
        displayName = CSTRING(Category);
    };
    class lxim_EdSubcat_vehicles_green {
        displayname = "AMPF"; 
    };
};
