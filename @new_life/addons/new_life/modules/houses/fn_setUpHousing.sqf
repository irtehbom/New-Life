/*
*    Author: Robert Jones
*/

//Get player Data
_housingDataQuery = format ["SELECT * from houses"];
_housingDataResult = [_housingDataQuery,2,true] call newLifeServer_fnc_asyncCall;

if(count _housingDataResult != 0) then {
    //Set up houses
    {
        _playerSteamID = _x select 1;
        _housePostion = _x select 3;
        _houseClassname = _x select 6;

         if(typeName _housePostion == "STRING") then {
             _housePostion = parseSimpleArray _housePostion;
         };

        //diag_log format ["SERVER _housePostion typeName :: %1", typeName _housePostion];
        //diag_log format ["SERVER _housePostion :: %1",  _housePostion];
        //diag_log format ["SERVER _XXXXX :: %1",  _x];

        _house = nearestObject [_housePostion, _houseClassname];
        _house setVariable["owned",true, true];
        _house setVariable["house_locked",true,true];
        _house setVariable["owned_by",_playerSteamID, true];

        _numOfDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _house) >> "numberOfDoors");
        for "_i" from 1 to _numOfDoors do {
            _house setVariable[format["bis_disabled_Door_%1",_i],1,true];
        };

    } forEach _housingDataResult;
};