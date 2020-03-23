/*
*    Author: Robert Jones
*/

private ["_targetitemData","_targetItemName","_targetItemAmount","_targetItemIcon","_targetNewAmount"];

_currentListBoxControl = _this select 0;
_targetListBoxControl = _this select 1;
_currentInventory = _this select 2;
_targetInventory = _this select 3;

_selectedIndex = lbCurSel _currentListBoxControl;
_selectedItemData = _currentListBoxControl lbData _selectedIndex;

if(_selectedItemData == "") exitWith { hint "Please select an Item" };

_selectedItemDataToArray = parseSimpleArray _selectedItemData;
_selectedItemVariableName = _selectedItemDataToArray select 0;
_selectedItemData =  _selectedItemDataToArray select 1;
_selectedItemAmount = _selectedItemData select 1;

_arrToRemove = 0;
_itemExistsInTarget = false;
_currentArray = [];

{

    if( _x select 0 == _selectedItemVariableName) exitWith {
        _itemExistsInTarget = true;
    };

} forEach _targetInventory;

{
    if( _x select 0 == _selectedItemVariableName) exitWith { _arrToRemove = _foreachindex; _currentArray = _x; }
} forEach _currentInventory;


if(!_itemExistsInTarget) then {

    _currentInventory deleteAt _arrToRemove;
    _currentListBoxControl lbDelete _selectedIndex;
    _targetInventory pushBack _selectedItemDataToArray;
    [_targetListBoxControl, _targetInventory] call newLife_fnc_getVirtualInventory;

} else {

    {

        if( _x select 0 == _selectedItemVariableName) exitWith {

                _targetItemData =  _x select 1;
                _targetAmount = _targetItemData select 1;

                _oldAmount = _selectedItemAmount - _selectedItemAmount;
                _currentArrData = _currentArray select 1;
                _currentArrData set [1, _oldAmount];

                if(_oldAmount < 1) then {
                     _currentListBoxControl lbDelete _selectedIndex;
                     _currentInventory deleteAt _arrToRemove;
                };

                _targetNewAmount = _selectedItemAmount + _targetAmount;
                _targetItemData set [1, _targetNewAmount];
                [_targetListBoxControl, _targetInventory] call newLife_fnc_getVirtualInventory;
        };

    } forEach _targetInventory;


};