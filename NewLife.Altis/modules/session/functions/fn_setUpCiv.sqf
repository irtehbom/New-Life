/*
*    Author: Robert Jones
*/

_player = _this select 0;

removeHeadgear _player;
removeGoggles _player;
removeVest _player;
removeBackpack _player;
removeUniform _player;
removeAllWeapons _player;
removeAllAssignedItems _player;

_player addweapon "ItemMap";
_player addweapon "ItemCompass";
_player addweapon "ItemRadio";
_player addweapon "ItemGPS";