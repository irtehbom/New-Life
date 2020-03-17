/*
*    Author: Robert Jones
*/

_player = _this select 0;
_playerSteamID = _this select 1;
_playerName = _this select 2;
_ownerID = _this select 3;

if (isNull _player) exitWith {  diag_log "A player didn't send the request"; };

_ownerID = owner _player; //Owner is the actual player client I think

//sanatize query
_playerName = [_playerName] call newLifeServer_fnc_mresString;
_money = [0] call newLifeServer_fnc_numberSafe;
_bank = [2500] call newLifeServer_fnc_numberSafe;

//Prepare the query statement..
_query = format ["INSERT INTO players (steam_id, name, money, bank_money) VALUES('%1', '%2', '%3', '%4')",
    _playerSteamID,
    _playerName,
    _money,
    _bank
];

[_query,1] call newLifeServer_fnc_asyncCall;

//Restart this script now the player is created
[_player] remoteExec ["newLifeServer_fnc_getPlayerData",2];