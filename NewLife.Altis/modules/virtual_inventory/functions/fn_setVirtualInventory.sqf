/*
*    Author: Robert Jones
     Mode 1: Takes from player Inventory and stores it in object
     Mode 2: Takes from object inventory and stores it in player
*/
_mode = _this select 0;

disableSerialization;
_display = findDisplay 9905;

_playerListBoxControl = _display displayCtrl 1500;
_playerInputBoxControl = _display displayCtrl 1400;

_playerInventroy = VIRTUAL_INVENTORY;

_objectListBoxControl = _display displayCtrl 1501;
_objectInputBoxControl = _display displayCtrl 1401;

_objectInventory = currentTarget getVariable["virtual_inventory",[]];

if(_mode == 1) then {
    [_playerListBoxControl, _objectListBoxControl, _playerInventroy, _objectInventory] call newLife_fnc_transferVirtualInventory;
};

if(_mode == 2) then {
    [_objectListBoxControl, _playerListBoxControl, _objectInventory, _playerInventroy] call newLife_fnc_transferVirtualInventory;
};
