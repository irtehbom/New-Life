/*
*    Author: Robert Jones
*/

_target = _this select 0;
_caller = _this select 1;
_actionID = _this select 2;
_itemType = _this select 3;

//Unprocessed item
_itemSettings = (missionConfigFile >> "VirtualItemConfig" >> _itemType);
_variableName = getText (_itemSettings  >> "variableName");
_processedVariableName = getText (_itemSettings  >> "processedVariableName");
_displayName = getText (_itemSettings  >> "displayName");
_itemWeight = getNumber (_itemSettings  >> "weight");
_icon = getText (_itemSettings  >> "icon");

//Processed item
_processedItemSettings = (missionConfigFile >> "VirtualItemConfig" >> _processedVariableName);
_processedDisplayName = getText (_processedItemSettings  >> "displayName");
_processedItemWeight = getNumber (_processedItemSettings  >> "weight");
_processedIcon = getText (_processedItemSettings  >> "icon");


_playerWeight = PLAYER_WEIGHT;
_maxPlayerWeight = MAX_PLAYER_WEIGHT;
_virtual_inventory = VIRTUAL_INVENTORY;
_sleep_amount = 0.1;
_progress = 0.01;
cancelled_process = false;
_itemFound = false;

_itemAmount = 0;
_itemDisplayName = "";

{
    _checkItemVariableName = _x select 0;
    if(_checkItemVariableName == _itemType) then {
        _itemFound = true; //Check if the item is in the virtual inventory class
        _itemData =  _x select 1; //Selects the inner class array
        _itemDisplayName = _itemData select 0;
        _itemAmount = _itemData select 1; //Check to see how many items of this you have
    };

} forEach _virtual_inventory;

if(!_itemFound) exitWith { hint format["You don't have any %1 to process", _displayName]; };

_action = [
    format["Process <t color='#8cff9b'>%1</t> <t color='#ffffff'>%2</t>",
    _itemAmount,
    _itemDisplayName], "Process","Accept","Cancel"
] call BIS_fnc_guiMessage;

if(_action) then {

    if (_itemAmount <= 10)
        then { _sleep_amount =  0.3; }; //0:30
    if (_itemAmount > 10)
        then { _sleep_amount =  1.2; }; //2:00
    if (_itemAmount > 49)
        then { _sleep_amount =  2.1; }; //3:30
    if (_itemAmount > 99)
        then { _sleep_amount =  3.0; }; //5:00
    if (_itemAmount > 149)
        then { _sleep_amount =  3.9; }; //6:30
    if (_itemAmount > 199)
        then { _sleep_amount =  4.8; }; //8:00
    if (_itemAmount > 249)
        then { _sleep_amount =  6.0; }; //10:00

    disableSerialization;
    5 cutRsc ["ProgressBar","PLAIN"];

    _display = uiNameSpace getVariable "PBarProgress";
    _progressBar = _display displayCtrl 37202;
    _progressText = _display displayCtrl 37203;

    _progressBar progressSetPosition _progress;
    _progressText ctrlSetText format["%2 (1%1)...","%",_itemDisplayName];

    while{true} do
    {
        //sleep _sleep_amount;
        sleep 0;
        _progress = _progress + 0.01;
        _progressBar progressSetPosition _progress;
        _progressText ctrlSetText format["Processing %3 (%1%2)...",round(_progress * 100),"%",_itemDisplayName];

        if(_progress >= 1) exitWith {
            5 cutText ["","PLAIN"];
            [parseText format
            ["<t align='center' font='PuristaBold' size='1.5'>You processed %1 %2</t>", _itemAmount, _displayName],
            [0.9, 1.30, 1, 1], nil,  2, 0.7, 0] spawn BIS_fnc_textTiles;
        };

        if(player distance _target > 10) exitWith {
            hint "You need to stay within 10 meters of the trader";
            5 cutText ["","PLAIN"];
            cancelled_process = true;
        };
    };

    if(!cancelled_process) then {
        {
            _checkItemVariableName = _x select 0;

            if(_checkItemVariableName == _itemType) then {

                _oldItemVariableName = _x;
                _itemData =  _x select 1; //Selects the inner class array
                _itemDisplayName = _itemData select 0;
                _itemAmount = _itemData select 1; //Check to see how many items of this you have

                _oldItemVariableName set[0, _processedVariableName];
                _itemData set[0, _processedDisplayName];
                _itemData set[2, _processedItemWeight];
                _itemData set[3, _processedIcon];

                _itemIndividualWeight = _itemAmount * _processedItemWeight; //Works out how much each item weighs
                PLAYER_WEIGHT = _itemIndividualWeight; //Sets the new weight

            };

        } forEach _virtual_inventory;
    };

};