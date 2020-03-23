/*
*    Author: Robert Jones
*/

_listBoxControl = _this select 0;
_virtual_inventory = _this select 1;

lbClear _listBoxControl;

{
    _allData = _x;
    _itemData =  _x select 1;
    _currentItemName = _itemData select 0;
    _currentItemAmount = _itemData select 1;
    _currentItemIcon = _itemData select 3;
    _listBoxControl lbAdd format ["%1 | Amount: %2", _currentItemName,_currentItemAmount];
    _listBoxControl lbSetData [_foreachindex, str _allData];
    _listBoxControl lbSetPicture [_foreachindex, _currentItemIcon];

} forEach _virtual_inventory;