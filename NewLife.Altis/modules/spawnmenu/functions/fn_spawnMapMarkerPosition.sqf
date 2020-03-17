/*
*    Author: Robert Jones
*/

_listBoxControl = _this select 0;
_display = findDisplay 9904;

_index = lbCurSel _listBoxControl;
_housePositions = _listBoxControl lbData _index;

_mapControl = _display displayCtrl 1802;
_mapControl ctrlMapAnimAdd[0.5, 0.1, parseSimpleArray _housePositions];
ctrlMapAnimCommit _mapControl;

