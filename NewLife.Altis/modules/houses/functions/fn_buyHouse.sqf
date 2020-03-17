/*
*    Author: Robert Jones
*/

_house = _this select 0;
_storeHouseObject = _this select 0; //For some reason _house is changing to a string because of the below line of code, this is a hacky fix, someone please tell me why!!!!!!!
_houseName = typeOf _house;
_housePrice = [_houseName] call newLife_fnc_houseSettings;

//Returns bool
_action = [
	format
	["This House is available for <t color='#8cff9b'>$%1</t> and the rent is <t color='#8cff9b'>$%2</t> every 10 days
	<br/><br/>
	<t color='#8cff9b'>Features</t><br/><br/>
	<t color='#8cff9b'>%3</t> Storage Containers<br/>
	<t color='#8cff9b'>%4</t> Virtual Inventory Space<br/>
	<br/><br/>",
	_housePrice select 0,
	_housePrice select 1,
	_housePrice select 2,
	_housePrice select 3
	], "Buy House?","Accept","Cancel"
] call BIS_fnc_guiMessage;


_storeHouseObject setVariable ["inUse", false, true];

if(_action) then {

    if((_housePrice select 0) > BANK_MONEY) exitWith {
        hint "You don't have enough money to purchase this property";
    };

    _storeHouseObject setVariable ["purchased", true, true];

    _player = player;
    _playerOwner = owner _player;
    _playerSteamID = _player getVariable "steam64ID";
    _playerName = _player getVariable "realname";
    _housePos = getPosATL _storeHouseObject;
    _houseClassname = typeOf _storeHouseObject;
    _newBankAmount = BANK_MONEY - (_housePrice select 0);

    //Setup house
    _house setVariable["owned",true, true];
    _house setVariable["house_locked",true,true];
    _house setVariable["owned_by",_playerSteamID, true];

    //Create the marker
    _marker = createMarkerLocal [format["house_%1",(_house getVariable "owned_by")],_housePos];
    _marker setMarkerTextLocal "House";
    _marker setMarkerColorLocal "ColorRed";
    _marker setMarkerTypeLocal "loc_Lighthouse";

    //Lock the doors
    _numOfDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _house) >> "numberOfDoors");
    for "_i" from 1 to _numOfDoors do {
        _house setVariable[format["bis_disabled_Door_%1",_i],1,true];
    };

    BANK_MONEY = _newBankAmount;
    PLAYER_HOUSES pushBack _housePos;

    hint "House Purchased";

    [_player,_playerOwner,_playerSteamID,_playerName,_housePos,_houseClassname, _newBankAmount] remoteExec ["newLifeServer_fnc_buyHouseServer",2];

}