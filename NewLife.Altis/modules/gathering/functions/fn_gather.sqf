/*
*    Author: Robert Jones
*/
_markerName = _this select 0;
_itemType = markerText _markerName;

_itemSettings = (missionConfigFile >> "VirtualItemConfig" >> _itemType);
_variableName = getText (_itemSettings  >> "variableName");
_displayName = getText (_itemSettings  >> "displayName");
_weight = getNumber (_itemSettings  >> "weight");
_icon = getText (_itemSettings  >> "icon");
_gatherAmount = floor random 5;

_virtual_inventory = VIRTUAL_INVENTORY;

_item = [_variableName, [_displayName, _gatherAmount, _weight, _icon]];

_itemFound = false;

{
    _checkItemVariableName = _x select 0;

    if(_checkItemVariableName == _variableName) then {
        _itemFound = true;
        _itemData =  _x select 1;
        _currentItemAmount = _itemData select 1;
        _newAmount = _currentItemAmount + _gatherAmount;
        _itemData set [1, _newAmount];
    };

} forEach _virtual_inventory;

if (!_itemFound) then {
    _virtual_inventory pushBack _item;
};