/*
*    Author: Robert Jones
*/
_spawnButtonSelection = _this select 0;

if(_spawnButtonSelection == "town") then {
    _spawnPointSettings = getArray (missionConfigFile >> "SpawnPointConfig" >> "markers" >> "spawnPoints");
    _random = selectRandom _spawnPointSettings;
    _spawnPoint = getMarkerPos _random;
    player setPosATL _spawnPoint select 0;
} else {
    _display = findDisplay 9904;
    _listBoxControl = _display displayCtrl 255555;
    _index = lbCurSel _listBoxControl;
    _housePositions = _listBoxControl lbData _index;
    player setPosATL parseSimpleArray _housePositions;
};

player_session_complete = true;