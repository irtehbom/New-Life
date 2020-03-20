/*
*    Author: Robert Jones
*/

if(ACTION_INUSE) exitWith {};

_markerName = _this select 0;
_itemType = markerText _markerName;

_itemSettings = (missionConfigFile >> "VirtualItemConfig" >> _itemType);
_variableName = getText (_itemSettings  >> "variableName");
_displayName = getText (_itemSettings  >> "displayName");
_itemWeight = getNumber (_itemSettings  >> "weight");
_icon = getText (_itemSettings  >> "icon");
_gatherAmount = floor random 5;
_playerWeight = PLAYER_WEIGHT;
_maxPlayerWeight = MAX_PLAYER_WEIGHT;
_virtual_inventory = VIRTUAL_INVENTORY;

ACTION_INUSE = true;

_item = [_variableName, [_displayName, _gatherAmount, _itemWeight, _icon]];
_itemFound = false;

{
    _checkItemVariableName = _x select 0;

    if(_checkItemVariableName == _variableName) then {
        _itemFound = true; //Check if the item is in the virtual inventory class
        _itemData =  _x select 1; //Selects the inner class array
        _currentItemAmount = _itemData select 1; //Check to see how many items of this you have
        _newAmount = _currentItemAmount + _gatherAmount; //Works out how many items you should have
        if(_playerWeight >= _maxPlayerWeight) exitWith { hint "Your Inventory is full"; }; //Check if the inventory is full
        _itemIndividualWeight = _gatherAmount * _itemWeight; //Works out how much each item weighs
        PLAYER_WEIGHT = (PLAYER_WEIGHT) + (_itemWeight); //Sets the new weight
        _itemData set [1, _newAmount]; //Sets the new amount
    };

} forEach _virtual_inventory;

if (!_itemFound) then {
    _virtual_inventory pushBack _item; //If the item doesn't exist push it into the virtual items array
};

for "_i" from 0 to 4 do {
    player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
    sleep 0.5;
};

[parseText format
["<t align='center' font='PuristaBold' size='1.5'>Gathered %1 %2</t>", _gatherAmount, _displayName],
[0.9, 1.30, 1, 1], nil,  2, 0.7, 0] spawn BIS_fnc_textTiles;

ACTION_INUSE = false;