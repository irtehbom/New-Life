/*
*    Author: Robert Jones
*/

if (!(_this select 0)) exitWith {}; //Not a server
[] call compile preprocessFileLineNumbers "\new_life\init.sqf";