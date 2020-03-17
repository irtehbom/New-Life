/*
*    Author: Robert Jones
*/
if (!dialog) then {
    createDialog "yMenu";
};

_display = findDisplay 9903;
_cashInHand = _display displayCtrl 1000;
_cashInBank = _display displayCtrl 1001;
_cashInHand ctrlSetText str MONEY;
_cashInBank ctrlSetText str BANK_MONEY;