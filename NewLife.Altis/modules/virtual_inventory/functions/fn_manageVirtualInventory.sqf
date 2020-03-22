/*
*    Author: Robert Jones
*/

_house = _this select 0;
currentTarget = _house;
currentTarget setVariable ["inUse", true, true];

if (!dialog) then {
    createDialog "manageVirtualInventory";
};

_houseInventory = currentTarget getVariable["virtual_inventory",[]];

_display = findDisplay 9905;

_playerListBoxControl = _display displayCtrl 1500;
[_playerListBoxControl, VIRTUAL_INVENTORY] call newLife_fnc_getVirtualInventory;

_objectListBoxControl = _display displayCtrl 1501;
[_objectListBoxControl, _houseInventory] call newLife_fnc_getVirtualInventory;

_storeAmount = _display displayCtrl 1600;

_storeButton = _display displayCtrl 1600;
_storeButton buttonSetAction "[_playerListBoxControl, VIRTUAL_INVENTORY] spawn newLife_fnc_setVirtualInventory";
