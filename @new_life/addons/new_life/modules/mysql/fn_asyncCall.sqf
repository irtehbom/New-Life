/*
    File: fn_mresArray.sqf
    Author: Bryan "Tonic" Boardwine";

    Description:
    Acts as a mres (MySQL Real Escape) for arrays so they
    can be properly inserted into the database without causing
    any problems. The return method is 'hacky' but it's effective.
*/

#include "\new_life\script_macros.hpp"

private ["_queryStmt","_mode","_multiarr","_queryResult","_key","_return","_loop"];
_queryStmt = [_this,0,"",[""]] call BIS_fnc_param;
_mode = [_this,1,1,[0]] call BIS_fnc_param;
_multiarr = [_this,2,false,[false]] call BIS_fnc_param;

_key = "extDB3" callExtension format ["%1:%2:%3",_mode,FETCH_CONST(new_life_sql_id),_queryStmt];

if (_mode isEqualTo 1) exitWith {true};

_key = call compile format ["%1",_key];
_key = (_key select 1);
_queryResult = "extDB3" callExtension format ["4:%1", _key];

//Make sure the data is received
if (_queryResult isEqualTo "[3]") then {
    for "_i" from 0 to 1 step 0 do {
        if (!(_queryResult isEqualTo "[3]")) exitWith {};
        _queryResult = "extDB3" callExtension format ["4:%1", _key];
    };
};

if (_queryResult isEqualTo "[5]") then {
    _loop = true;
    for "_i" from 0 to 1 step 0 do { // extDB3 returned that result is Multi-Part Message
        _queryResult = "";
        for "_i" from 0 to 1 step 0 do {
            _pipe = "extDB3" callExtension format ["5:%1", _key];
            if (_pipe isEqualTo "") exitWith {_loop = false};
            _queryResult = _queryResult + _pipe;
        };
    if (!_loop) exitWith {};
    };
};
_queryResult = call compile _queryResult;
if ((_queryResult select 0) isEqualTo 0) exitWith {diag_log format ["extDB3: Protocol Error: %1", _queryResult]; []};
_return = (_queryResult select 1);
if (!_multiarr && count _return > 0) then {
    _return = (_return select 0);
};

_return;
