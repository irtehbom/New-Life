/*
*    Author: Robert Jones
*/

_player = _this select 0;
_playerSteamID = _this select 1;
_playerName = _this select 2;
_ownerID = _this select 3;

//diag_log format ["SERVER _startingCash Result :: %1", _startingCash];
//diag_log format ["SERVER _startingBank Result :: %1", _startingBank];

if (isNull _player) exitWith {  diag_log "A player didn't send the request"; };

_ownerID = owner _player; //Owner is the actual player client I think

//sanatize query
_playerName = [_playerName] call newLifeServer_fnc_mresString;

_masterConfig = (missionConfigFile >> "masterConfig" >> 'player');
_startingCash = getNumber (_masterConfig >> "startingCash");
_startingBank = getNumber (_masterConfig >> "startingBank");

//Prepare the query statement..
_query = format ["INSERT INTO players (steam_id, name, money, bank_money) VALUES('%1', '%2', '%3', '%4')",
    _playerSteamID,
    _playerName,
    _startingCash,
    _startingBank
];

[_query,1] call newLifeServer_fnc_asyncCall;

//Restart this script now the player is created
[_player] remoteExec ["newLifeServer_fnc_getPlayerData",2];