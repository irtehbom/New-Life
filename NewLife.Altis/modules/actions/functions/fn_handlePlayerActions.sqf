/*
*    Author: Robert Jones
*/

private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey"];
_ctrl = _this select 0;
_code = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;
_target = cursorObject;
_playerSteamId = player getVariable "steam64ID";
_target setVariable ["inUse", false, true];

//Control key
if (_ctrlKey) then {

    if(_target isKindOF "House_F") then {

        _targetString = typeOf _target;
		_isBuyable = isClass (missionConfigFile >> "housingConfig" >> _targetString);

		if(!_isBuyable) exitWith { hint "This house is not purchasable"};

        //Check that the house menu is not in use
        if(_target getVariable "inUse") exitWith { hint "This house is being purchased"};

        _houseOwned = _target getVariable ["owned",false];
        _houseOwnedBy = _target getVariable ["owned_by",""];
        _ownedByPlayer = false;

        //Check if the house is owned, if not pull up the menu
        if(!_houseOwned) then {
            [_target,_ownedByPlayer] call newLife_fnc_houseMenu;
        };

        //Check if the house belongs to the player, pull up the menu if so
        if(_houseOwnedBy == _playerSteamId) then {
            _ownedByPlayer = true;
            [_target,_ownedByPlayer] call newLife_fnc_houseMenu;
        };

	};

	if(cursorObject isKindOF "Car") then {
	
	};

};

//Y key
if (_code == 21) then {
   [] call newLife_fnc_yMenu;
};

//U key
if (_code == 22) then {
    //Check if the target is a house
    if(_target isKindOF "House_F") then {
        [_target] call newLife_fnc_unlockHouseDoor;
    }
};

//G key
if (_code == 34) then {

    _gatherMarkers = getArray (missionConfigFile >> "VirtualItemConfig" >> "gatherZones" >> "gatherZones");
    _getGatherMarkerName = [_gatherMarkers, player] call BIS_fnc_nearestPosition;
    _checkIfPlayerInMarker = [_getGatherMarkerName, player] call bis_fnc_intrigger;

     if(_checkIfPlayerInMarker) then {
         [_getGatherMarkerName] spawn newLife_fnc_gather;
     };

};

//Escape handler
if(_code == 1) then {
    _target setVariable ["inUse", false, true];
};

