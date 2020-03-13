/*
*   Author: Robert Jones
	0 - House Price
	1 - Containers
*/

params ["_house"];

if(_house == "") exitWith {[]};

switch (_house) do {
	case "Land_i_House_Big_01_V1_F": {
		_return = [100,3];
	};
	case "Land_i_House_Big_01_V1_F": {
		_return = [150,3];
	};
	default {
		_return = [];
	};
};

_ret;