/*
*    Author: Robert Jones
*/

//if(isNull _this select 0) exitWith {};
//if(!(_this select 0 isKindOf "House_F")) exitWith {};
_house = _this select 0;
currentTarget = _house;

createDialog "houseInteraction";

_display = findDisplay 9902;
_buyHouseButton = _display displayCtrl 1600;
_buyHouseButton buttonSetAction "[currentTarget] spawn newLife_fnc_buyHouse; closeDialog 0";