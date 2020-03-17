/*
*    Author: Robert Jones
*/

_playerDataResult = _this select 0;
_selectInnerPlayerDataResult = _playerDataResult select 0;

diag_log format ["CLIENT _playerDataResult Receive Result :: %1", _selectInnerPlayerDataResult];

_housingDataResult = _this select 1;
diag_log format ["CLIENT _housingDataResult Receive Result :: %1", _housingDataResult];

MONEY = _selectInnerPlayerDataResult select 1;
BANK_MONEY = _selectInnerPlayerDataResult select 2;
PLAYER_HOUSES = _housingDataResult;

player_session_complete = true;