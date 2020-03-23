/*
*    Author: Robert Jones
*/

private ["_targetitemData","_targetItemName","_targetItemAmount","_targetItemIcon"];

_currentListBoxControl = _this select 0;
_targetListBoxControl = _this select 1;
_currentInventory = _this select 2;
_targetInventory = _this select 3;

_selectedIndex = lbCurSel _currentListBoxControl;
_oldItemData = _currentListBoxControl lbData _selectedIndex;

_oldItemDataToArray = parseSimpleArray _oldItemData;
_oldItemVariableName = _oldItemDataToArray select 0;
_oldItemData =  _oldItemDataToArray select 1;
_oldItemAmount = _oldItemData select 1;

_arrToRemove = 0;
_itemExistsInTarget = false;

{

    if( _x select 0 == _oldItemVariableName) exitWith {
        _itemExistsInTarget = true;
     };

} forEach _targetInventory;

{
    if( _x select 0 == _oldItemVariableName) exitWith { _arrToRemove = _foreachindex; }
} forEach _currentInventory;

if(!_itemExistsInTarget) then {

    _currentInventory deleteAt _arrToRemove;
    _currentListBoxControl lbDelete _selectedIndex;
    _targetInventory pushBack _oldItemDataToArray;
    [_targetListBoxControl, _targetInventory] call newLife_fnc_getVirtualInventory;

} else {



};