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
_playerHouses = PLAYER_HOUSES;

//House spawn controls
if(count _playerHouses == 0) then {
    _spawnAtHouseButton ctrlEnable false;
};

_counter = 0;
{
    _housePos =  _x;
    _counter = _counter + 1;

    _index = _listBoxControl lbAdd "House" + str _counter;
    _listBoxControl lbSetData [_index, str _housePos];

} forEach (_playerHouses);

_spawnAtHouseButton buttonSetAction "['house'] call newLife_fnc_spawnConfirm; closeDialog 0";
_spawnAtTown buttonSetAction "['town'] call newLife_fnc_spawnConfirm; closeDialog 0";


