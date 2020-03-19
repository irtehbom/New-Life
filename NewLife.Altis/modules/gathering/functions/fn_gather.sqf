/*
*    Author: Robert Jones
*/
_markerName = _this select 0;
_gatherSettings = [_markerName] call newLife_fnc_gatheringSettings;
_itemName = _gatherSettings select 0;
_virtual_inventory = VIRTUAL_INVENTORY;
_virtual_inventory pushBack _itemName;