/*
*    Author: Robert Jones
*/

_house = _this select 0;
_houseName = typeOf _house;

_housePrice = [_houseName] call newLife_fnc_houseSettings;

_action = [
	format
	["This House is available for <t color='#8cff9b'>$%1</t> and the rent is <t color='#8cff9b'>$%2</t> every 10 days
	<br/><br/>
	<t color='#8cff9b'>Features</t><br/><br/>
	<t color='#8cff9b'>$%3</t> Large Storage Containers<br/>
	<t color='#8cff9b'>%4</t> Virtual Inventory Space<br/>
	Can not be raided by civilians or cops<br/>
	<br/><br/>",
	[_housePrice select 0] call newLife_fnc_numberText,
	[_housePrice select 1] call newLife_fnc_numberText,
	[_housePrice select 2] call newLife_fnc_numberText,
	[_housePrice select 3] call newLife_fnc_numberText
	], "Buy House?","Accept","Cancel"
] call BIS_fnc_guiMessage;