/*
*    Author: Robert Jones
*/
if (!dialog) then {
    createDialog "yMenu";
};

disableSerialization;

_money = MONEY;
_bankMoney = BANK_MONEY;
_virtual_inventory = [["vitem_silver",[12,"Silver",2,0]],["vitem_gold",[20,"Gold",2,0]]];

_display = findDisplay 9903;
_cashInHand = _display displayCtrl 1000;
_cashInBank = _display displayCtrl 1001;
_virtualInventory = _display displayCtrl 1500;

_cashInHand ctrlSetText str _money;
_cashInBank ctrlSetText str _bankMoney;

{
    _itemData =  _x select 1;
    _currentItemName = _itemData select 0;
    _currentItemAmount = _itemData select 1;
    _currentItemIcon = _itemData select 3;
    _virtualInventory lbAdd format ["%1 | Amount: %2", _currentItemName,_currentItemAmount];
    _virtualInventory lbSetPicture [_foreachindex, _currentItemIcon];

} forEach VIRTUAL_INVENTORY;

