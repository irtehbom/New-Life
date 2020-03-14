/*
*    Author: Robert Jones
*/

_house = _this select 0;
currentTarget = _house;
currentTarget setVariable ["inUse", true, true];

createDialog "houseInteraction";

_display = findDisplay 9902;
_buyHouseButton = _display displayCtrl 1600;
_buyHouseButton buttonSetAction "[currentTarget] spawn newLife_fnc_buyHouse; closeDialog 0";