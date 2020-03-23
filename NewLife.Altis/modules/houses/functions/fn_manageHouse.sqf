/*
*    Author: Robert Jones
*/

_house = _this select 0;
currentTarget = _house;
currentTarget setVariable ["inUse", true, true];

disableSerialization;

if (!dialog) then {
    createDialog "manageHouse";
};

_display = findDisplay 9902;
_manageVirtualInventory = _display displayCtrl 1950;
_manageVirtualInventory buttonSetAction "[currentTarget] spawn newLife_fnc_manageVirtualInventory; closeDialog 0";

_manageVirtualInventory = _display displayCtrl 1602;
_manageVirtualInventory buttonSetAction "[currentTarget] spawn newLife_fnc_sellHouse; closeDialog 0";


