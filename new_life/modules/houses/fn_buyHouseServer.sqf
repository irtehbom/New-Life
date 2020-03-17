/*
*    Author: Robert Jones
*/

_player = _this select 0;
_playerOwner = _this select 1;
_playerSteamID = _this select 2;
_playerName = [ _this select 3] call newLifeServer_fnc_mresString;
_housePostion = [_this select 4] call newLifeServer_fnc_mresArray;
_houseClassname = [_this select 5] call newLifeServer_fnc_mresString;
_newBankAmount = [_this select 6] call newLifeServer_fnc_numberSafe;

if (isNull _player) exitWith {  diag_log "A player didn't send the request"; };

//sanatize query

//Insert the house
_insertHouseQuery = format ["INSERT INTO houses (steam_id, name, house_position, classname) VALUES('%1', '%2', '%3', '%4')",
    _playerSteamID,
    _playerName,
    _housePostion,
    _houseClassname
];

[_insertHouseQuery,1] call newLifeServer_fnc_asyncCall;

//Update players bank account
_updatePlayerBankQuery = format["UPDATE players SET bank_money = '%1' where steam_id = '%2'",
    [_newBankAmount] , _playerSteamID
];

[_updatePlayerBankQuery,1] call newLifeServer_fnc_asyncCall;