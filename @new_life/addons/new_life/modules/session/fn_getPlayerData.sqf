/*
*    Author: Robert Jones
*/

_player = _this select 0;

if (isNull _player) exitWith {  diag_log "A player didn't send the request"; };

_playerSteamID = _player getVariable "steam64ID";
_playerName = _player getVariable "realname";
_ownerID = owner _player; //Owner is the actual player client I think

//Get player Data
_playerDataQuery = format ["SELECT name, money, bank_money FROM players WHERE steam_id = '%1'", _playerSteamID];
_playerDataResult = [_playerDataQuery,2,true] call newLifeServer_fnc_asyncCall;

//If the player doesn't exist, insert the player
if (_playerDataResult isEqualType "" || count _playerDataResult isEqualTo 0) exitWith {
    [_player, _playerSteamID, _playerName, _ownerID] remoteExecCall ["newLifeServer_fnc_insertNewPlayer"];
};

//Get housing data
_playerHousingQuery = format ["SELECT steam_id, name, house_position, virtual_inventory, containers, classname, custom_price FROM houses WHERE steam_id = '%1'", _playerSteamID];
_playerHousingResult = [_playerHousingQuery,2,true] call newLifeServer_fnc_asyncCall;

//Send the player information back to the client
[_playerDataResult,_playerHousingResult] remoteExec ["newLife_fnc_playerDataReceived", _ownerID];

//diag_log format ["SERVER _playerDataResult Result :: %1", _playerDataResult];
//diag_log format ["SERVER _playerHousingResult Result :: %1", _playerHousingResult];