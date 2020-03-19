/*
    Author: Robert Jones
*/

private["_return", "_house"];

_gatherZone = _this select 0;

switch (_gatherZone) do {
	case "gold_pickup": {
		_return = [100,120,3,800];
	};

	default {
		_return = [];
	};
};

_return;