/*
*    Author: Robert Jones
*/

_house = _this select 0;
currentTarget = _house;
currentTarget setVariable ["inUse", true, true];

if (!dialog) then {
    createDialog "manageHouse";
};

disableSerialization;