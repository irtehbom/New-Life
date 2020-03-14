/*
*    Author: Robert Jones
*/

private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey"];
_ctrl = _this select 0;
_code = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;
_inUse = false;
_target = cursorObject;

if (_ctrlKey) then {
    if(_target isKindOF "House_F") then {
	
		//_target setVariable[_inUse,true];
		_isBuyable = [typeOf _target] call newLife_fnc_houseSettings;
		if(count _isBuyable != 0) then {
			[_target] call newLife_fnc_houseMenu;
		}
		
	};

	if(cursorObject isKindOF "Car") then {
		hint "CAR";
		//_action = _player addAction ["<t color='#FF0000'>CAR</t>","functions\houses\buyHouse.sqf",_obj,1,false,true,"","player distance cursorObject < 10"];
	};       
};