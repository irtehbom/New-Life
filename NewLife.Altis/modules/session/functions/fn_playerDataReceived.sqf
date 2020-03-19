/*
*    Author: Robert Jones
*/

_playerDataResult = _this select 0;
_selectInnerPlayerDataResult = _playerDataResult select 0;

diag_log format ["CLIENT _playerDataResult Receive Result :: %1", _selectInnerPlayerDataResult];

_housingDataResult = _this select 1;
diag_log format ["CLIENT _housingDataResult Receive Result :: %1", _housingDataResult];

MONEY = _selectInnerPlayerDataResult select 1;
BANK_MONEY = _selectInnerPlayerDataResult select 2;
PLAYER_HOUSES = [];
VIRTUAL_INVENTORY = [];
PLAYER_WEIGHT = 0;
_playerHouses = PLAYER_HOUSES;

//Setup housing for player
if(count _housingDataResult != 0) then {
    _counter = 0;

    {
        _counter = _counter + 1;
        _playerSteamID = _x select 0;
        _housePostion = _x select 2;

         if(typeName _housePostion == "STRING") then {
             _housePostion = parseSimpleArray _housePostion;
         };

          //diag_log format ["CLIENT HOUSING LOOP _housePostion typeName :: %1", typeName _housePostion];
          //diag_log format ["CLIENT HOUSING LOOP :: %1",  _housePostion];

         //Create the marker
         _marker = createMarkerLocal [format["house_%1_%2",_playerSteamID,_counter],_housePostion];
         _marker setMarkerTextLocal "House :: " + str _counter;
         _marker setMarkerColorLocal "ColorRed";
         _marker setMarkerTypeLocal "loc_Lighthouse";
         _playerHouses pushBack _housePostion;

    } forEach _housingDataResult;
};

[player] remoteExec ["newLife_fnc_spawnMenu",owner player];