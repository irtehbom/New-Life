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

player enableSimulation false;

"dynamicBlur" ppEffectEnable true;
"dynamicBlur" ppEffectAdjust [6];
"dynamicBlur" ppEffectCommit 0;
"dynamicBlur" ppEffectAdjust [0.0];
"dynamicBlur" ppEffectCommit 99999999;

[parseText format
["<t align='center' font='PuristaBold' size='2.5'>Welcome to New Life</t>" ],
[0.85, 1.25, 1, 1], nil,  7, 0.7, 0] spawn BIS_fnc_textTiles;


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

"dynamicBlur" ppEffectAdjust [6];
"dynamicBlur" ppEffectCommit 0;
"dynamicBlur" ppEffectAdjust [0.0];
"dynamicBlur" ppEffectCommit 2;

FIRST_SPAWN = false;
player enableSimulation true;