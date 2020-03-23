/*
*    Author: DRU
*/

_house = _this select 0;
currentTarget = _house;
currentTarget setVariable ["inUse", true, true];

disableSerialization;

if (!dialog) then {
    createDialog "sellHouse";
};

