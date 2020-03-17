/*
*    Author: Robert Jones
*/

_house = _this select 0;

_houseOwnedBy = _target getVariable "owned_by";
_playerSteamId = player getVariable "steam64ID";
_lockedStatus = _target getVariable "house_locked";

//Unlock the doors if the house has the player steamID assigned to it
if(_houseOwnedBy == _playerSteamId) then {

    //If locked, unlock and visa-versa
    if(_lockedStatus) then {

        _house setVariable["house_locked",false,true];

        _numOfDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _house) >> "numberOfDoors");
        for "_i" from 1 to _numOfDoors do {
            _house setVariable[format["bis_disabled_Door_%1",_i],0,true];
        };

        hint "House unlocked";

    } else {

        _house setVariable["house_locked",true,true];

        _numOfDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _house) >> "numberOfDoors");
        for "_i" from 1 to _numOfDoors do {
            _house setVariable[format["bis_disabled_Door_%1",_i],1,true];
        };

        hint "House locked";

    };

} else {
    hint "You do not own this house";
}