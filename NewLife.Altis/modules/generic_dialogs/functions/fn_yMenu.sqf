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
    _virtualInventoryControl = _display displayCtrl 1500;
    _virtual_inventory = VIRTUAL_INVENTORY;
    _cashInHand ctrlSetText str _money;
    _cashInBank ctrlSetText str _bankMoney;

    {
        _itemData =  _x select 1;
        _currentItemName = _itemData select 0;
        _currentItemAmount = _itemData select 1;
        _currentItemIcon = _itemData select 3;
        _virtualInventoryControl lbAdd format ["%1 | Amount: %2", _currentItemName,_currentItemAmount];
        _virtualInventoryControl lbSetPicture [_foreachindex, _currentItemIcon];

    } forEach _virtual_inventory;

};

