/*
*    Author: Robert Jones
*/

//Start the EventKeyHandler

waitUntil {!(isNull (findDisplay 46))};
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call newLife_fnc_handlePlayerActions"];