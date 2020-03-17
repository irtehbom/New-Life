/*
*    Author: Robert Jones
*/

 //Is the player a headless client?
if (!hasInterface && !isServer) exitWith {
	_selectHC = name player;
	
	if (_selectHC == "new_life_hc") then {
		[] call compile preprocessFileLineNumbers "\new_life_hc\initHC.sqf";
	};
	
};

waitUntil {!isNil "server_ready"};

//Hide Ui
RscNoise_color = [1,1,1,0.5];
4 cutText ["Setting up client", "BLACK", -1];
5 cutRsc ["RscNoise", "PLAIN", 1];

//Main display
waitUntil {!(isNull (findDisplay 46))};

//Setup player event handler
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call newLife_fnc_handlePlayerActions"];

//Setup player variables
player setVariable ["steam64ID",getPlayerUID player,true];
player setVariable ["realname",profileName,true];

FIRST_SPAWN = true;

//Check if player is in the DB, insert if not
[player] remoteExec ["newLifeServer_fnc_getPlayerData",2];

//Wait until the client is complete
waitUntil {player_session_complete};
4 cutFadeOut 1;
5 cutFadeOut 1;