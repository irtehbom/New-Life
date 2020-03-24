/*
*    Author: Robert Jones
*/

_currentListBoxControl = _this select 0;
_targetListBoxControl = _this select 1;
_currentInventory = _this select 2;
_targetInventory = _this select 3;
_inputAmount = _this select 4;
_inputText = ctrlText _inputAmount;
_inputNumber = parseNumber _inputText;

if(_inputText == "") exitWith { hint "Please enter an amount to transfer." };
if(lbCurSel _currentListBoxControl == -1) exitWith { hint "Please select an item." };

_selectedIndex = lbCurSel _currentListBoxControl;
_selectedItemData = _currentListBoxControl lbData _selectedIndex;

if(_selectedItemData == "") exitWith { hint "Please select an item." };

_dataToArray = parseSimpleArray _selectedItemData;
_variableName = _dataToArray select 0;
_innerData =  _dataToArray select 1;
_arrDeleteOnEmpty = [];

{if( _x select 0 == _variableName) exitWith { _arrDeleteOnEmpty = _foreachindex;  }} forEach _currentInventory;
_currentInvKey = _currentInventory select { (_x select 0) isEqualTo _variableName; } select 0;
_targetInvKey = _targetInventory select { (_x select 0) isEqualTo _variableName; } select 0;
if (isNil "_currentInvKey") then { _currentInvKey = []; };
if (isNil "_targetInvKey") then { _targetInvKey = []; };

if(count _targetInvKey != 0) then {

    _currentInvData = _currentInvKey select 1;
    _currentNumOfItems = _currentInvData select 1;

    if(_currentNumOfItems >= _inputNumber) then {

        _targetInvData = _targetInvKey select 1;
        _targetAmount = _targetInvData select 1;
        _newAmountTaget = _targetAmount + _inputNumber;
        _targetInvData set [1, _newAmountTaget];

        _newAmountCurrent = _currentNumOfItems - _inputNumber;

        if(_newAmountCurrent == 0) then {
            _currentInventory deleteAt _arrDeleteOnEmpty;
        };

        _currentInvData set [1, _newAmountCurrent];

    } else {
        hint "You don't have that many items";
    }

} else {

   _currentInvData = _currentInvKey select 1;
   _currentNumOfItems = _currentInvData select 1;

   if(_currentNumOfItems >= _inputNumber) then {

        _newAmount = _currentNumOfItems - _inputNumber;
        _currentInvData set [1, _newAmount];

        if(_newAmount == 0) then {
            _currentInventory deleteAt _arrDeleteOnEmpty;
        };

        _innerData set [1, _inputNumber];
        _targetInventory pushBack _dataToArray;

   } else {
        hint "You don't have that many items";
   }

};

[_targetListBoxControl, _targetInventory] call newLife_fnc_getVirtualInventory;
[_currentListBoxControl, _currentInventory] call newLife_fnc_getVirtualInventory;