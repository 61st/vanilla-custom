// not documented: postInit

if (isServer) then {
 ["Initialize"] call BIS_fnc_dynamicGroups;
} else {
 ["InitializePlayer", [player]] call BIS_fnc_dynamicGroups;
};