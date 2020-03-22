/*
*    Author: Robert Jones
*/

_house = _this select 0;
_ownedByPlayer = _this select 1;
currentTarget = _house;
currentTarget setVariable ["inUse", true, true];

if (!dialog) then {
    createDialog "houseMenu";
};

if(_ownedByPlayer) then {
    disableSerialization;
    _display = findDisplay 9902;
    _manageHouse = _display displayCtrl 1600;
    _manageHouse ctrlSetText "Manage House";
    _manageHouse buttonSetAction "[currentTarget] spawn newLife_fnc_manageHouse; closeDialog 0";
} else {
    disableSerialization;
    _display = findDisplay 9902;
    _buyHouse = _display displayCtrl 1600;
    _buyHouse ctrlSetText "Buy House";
    _buyHouse buttonSetAction "[currentTarget] spawn newLife_fnc_buyHouse; closeDialog 0";
};

