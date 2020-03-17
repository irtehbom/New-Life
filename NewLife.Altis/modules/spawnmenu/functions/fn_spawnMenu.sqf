/*
*    Author: Robert Jones
*/
if (!dialog) then {
    createDialog "spawnMenu";
};

_display = findDisplay 9904;
_listBoxControl = _display displayCtrl 255555;
_spawnAtHouseButton = _display displayCtrl 1600;
_spawnAtTown = _display displayCtrl 1601;


//House spawn controls
if(count PLAYER_HOUSES == 0) then {
    _spawnAtHouseButton ctrlEnable false;
};

_counter = 0;
{
    _housePos =  _x;
    _counter = _counter + 1;

    _index = _listBoxControl lbAdd "House" + str _counter;
    _listBoxControl lbSetData [_index, str _housePos];

} forEach (PLAYER_HOUSES);

_spawnAtHouseButton buttonSetAction "['house'] call newLife_fnc_spawnConfirm; closeDialog 0";
_spawnAtTown buttonSetAction "['town'] call newLife_fnc_spawnConfirm; closeDialog 0";


