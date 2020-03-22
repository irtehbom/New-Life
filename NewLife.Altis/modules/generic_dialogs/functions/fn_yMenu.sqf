/*
*    Author: Robert Jones
*/

disableSerialization;

if (!dialog) then {

    createDialog "yMenu";

    _money = MONEY;
    _bankMoney = BANK_MONEY;

    _display = findDisplay 9903;
    _cashInHand = _display displayCtrl 1000;
    _cashInBank = _display displayCtrl 1001;
    _cashInHand ctrlSetText str _money;
    _cashInBank ctrlSetText str _bankMoney;

    _virtualInventoryControl = _display displayCtrl 1500;
    [_virtualInventoryControl, VIRTUAL_INVENTORY] call newLife_fnc_getVirtualInventory;

};

