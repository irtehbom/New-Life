/*
*    Author: Robert Jones
*/

private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey"];
_ctrl = _this select 0;
_code = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;
_target = cursorObject;

if (_ctrlKey) then {
    if(_target isKindOF "House_F") then {
	
		_isBuyable = [typeOf _target] call newLife_fnc_houseSettings;
		
		if(count _isBuyable != 0) then {
			if(!(_target getVariable ["inUse",false])) then {
				[_target] call newLife_fnc_houseMenu;
			} else {
				hint "This house is being purchased";
			};
		} else {
			hint "This house is not purchasable";
		};

	};

	if(cursorObject isKindOF "Car") then {
	
	};       
};