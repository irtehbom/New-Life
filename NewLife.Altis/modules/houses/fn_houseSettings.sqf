/*
    Author: Robert Jones
	0 - House Price
	1 - Rent Price
	2 - Containers
	3 - Virtual Inventory Space
*/

private["_return", "_house"];

_house = _this select 0;

switch (_house) do {
	case "Land_i_House_Big_01_V1_F": {
		_return = [100,120,3,800];
	};
	case "Land_i_House_Big_02_V1_F": {
		_return = [150,111,3,900];
	};
	case "Land_i_House_Big_02_V2_F": {
		_return = [200,111,3,100];
	};
	case "Land_i_House_Big_02_V3_F": {
		_return = [250,111,3,200];
	};
	case "Land_i_House_Big_01_V2_F": {
		_return = [350,111,3,300];
	};
	case "Land_i_House_Big_01_V3_F": {
		_return = [450,111,3,711];
	};
	case "Land_i_House_Small_01_V1_F": {
		_return = [550,111,3,800];;
	};
	case "Land_i_House_Small_01_V2_F": {
		_return = [650,111,3,800];
	};
	case "Land_i_House_Small_01_V3_F": {
		_return = [750,111,3,800];
	};
	case "Land_i_House_Small_02_V1_F": {
		_return = [850,111,3,800];
	};
	case "Land_i_House_Small_02_V2_F": {
		_return = [950,111,3,800];
	};
	case "Land_i_House_Small_02_V3_F": {
		_return = [1150,111,3,400];
	};
	case "Land_i_House_Small_03_V3_F": {
		_return = [1250,111,3,860];
	};
	case "Land_i_Stone_HouseSmall_V1_F": {
		_return = [1350,111,3,820];
	};
	case "Land_i_Stone_HouseSmall_V2_F": {
		_return = [1450,111,3,810];
	};
	case "Land_i_Stone_HouseSmall_V3_F": {
		_return = [1550,111,3,860];
	};
	default {
		_return = [];
	};
};

_return;