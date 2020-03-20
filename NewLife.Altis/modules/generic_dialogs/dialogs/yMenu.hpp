/*
*    Author: Robert Jones
*/
class yMenu
	{
	idd=9903;
	class controls
	    {
       class yMenuBackground: RscFrame
       {
       	idc = 1800;

       	x = 0.309219 * safezoneW + safezoneX;
       	y = 0.28 * safezoneH + safezoneY;
       	w = 0.37125 * safezoneW;
       	h = 0.352 * safezoneH;
       	colorBackground[] = {0,0,0,0.9};
       };
       class yMenuCashInHand: RscText
       {
       	idc = 1000;
        sizeEx = 0.03;
       	text = "0"; //--- ToDo: Localize;
       	x = 0.335 * safezoneW + safezoneX;
       	y = 0.335 * safezoneH + safezoneY;
       	w = 0.0515625 * safezoneW;
       	h = 0.022 * safezoneH;
       };
       class yMenuCashInBank: RscText
       {
       	idc = 1001;
        sizeEx = 0.03;
       	text = "0"; //--- ToDo: Localize;
       	x = 0.335 * safezoneW + safezoneX;
       	y = 0.368 * safezoneH + safezoneY;
       	w = 0.0464063 * safezoneW;
       	h = 0.022 * safezoneH;
       };
       class yMenuCashLabel: RscText
       {
       	idc = 1002;
        sizeEx = 0.03;
       	text = "Cash:"; //--- ToDo: Localize;
       	x = 0.309219 * safezoneW + safezoneX;
       	y = 0.335 * safezoneH + safezoneY;
       	w = 0.0257812 * safezoneW;
       	h = 0.022 * safezoneH;
       };
       class syncButton: RscButton
       {
       	idc = 1600;
      	colorBackground[] ={255,0,0,0.7};
       	text = "Sync"; //--- ToDo: Localize;
       	x = 0.628906 * safezoneW + safezoneX;
       	y = 0.588 * safezoneH + safezoneY;
       	w = 0.0464063 * safezoneW;
       	h = 0.033 * safezoneH;
       };
       class bankLabel: RscText
       {
       	idc = 1002;
        sizeEx = 0.03;
       	text = "Bank:"; //--- ToDo: Localize;
       	x = 0.309219 * safezoneW + safezoneX;
       	y = 0.368 * safezoneH + safezoneY;
       	w = 0.0464063 * safezoneW;
       	h = 0.022 * safezoneH;
       };
       class inventoryListbox: _CT_LISTBOX
       {
       	idc = 1500;
       	x = 0.530937 * safezoneW + safezoneX;
       	y = 0.335 * safezoneH + safezoneY;
       	w = 0.144375 * safezoneW;
       	h = 0.198 * safezoneH;
       	 sizeEx = 0.03;
       	colorBackground[] = {0,0,0,0.2};
       	 colorSelectBackground[] =  {0,0,0,0.5};
       };
       class moneyStatusLabel: RscText
       {
       	idc = 1004;
       	text = "Money Status"; //--- ToDo: Localize;
       	x = 0.309219 * safezoneW + safezoneX;
       	y = 0.291 * safezoneH + safezoneY;
       	w = 0.0721875 * safezoneW;
       	h = 0.033 * safezoneH;
       };
       class playerStatusLabel: RscText
       {
       	idc = 1005;
       	text = "Player Status"; //--- ToDo: Localize;
       	x = 0.391719 * safezoneW + safezoneX;
       	y = 0.291 * safezoneH + safezoneY;
       	w = 0.0721875 * safezoneW;
       	h = 0.033 * safezoneH;
       };
       class inventoryLabel: RscText
       {
       	idc = 1006;
       	        sizeEx = 0.03;
       	text = "Inventory"; //--- ToDo: Localize;
       	x = 0.530937 * safezoneW + safezoneX;
       	y = 0.291 * safezoneH + safezoneY;
       	w = 0.144375 * safezoneW;
       	h = 0.033 * safezoneH;
       };
       class removeYitem: RscButton
       {
       	idc = 1600;

       	text = "Remove Item"; //--- ToDo: Localize;
       	x = 0.618593 * safezoneW + safezoneX;
       	y = 0.544 * safezoneH + safezoneY;
       	w = 0.0567187 * safezoneW;
       	h = 0.022 * safezoneH;
        colorBackground[] ={255,0,0,0.7};
       };
       class useYitem: RscButton
       {
       	idc = 1600;

       	text = "Use"; //--- ToDo: Localize;
       	x = 0.556719 * safezoneW + safezoneX;
       	y = 0.544 * safezoneH + safezoneY;
       	w = 0.0567187 * safezoneW;
       	h = 0.022 * safezoneH;
        colorBackground[] ={255,0,0,0.7};
       };
       class housesOwnedLabel: RscText
       {
       	idc = 1002;
        sizeEx = 0.03;
       	text = "Houses Owned:"; //--- ToDo: Localize;
       	x = 0.391719 * safezoneW + safezoneX;
       	y = 0.335 * safezoneH + safezoneY;
       	w = 0.0567187 * safezoneW;
       	h = 0.022 * safezoneH;
       };
       class housesOwned: RscText
       {
       	idc = 1000;
        sizeEx = 0.03;
       	text = "0"; //--- ToDo: Localize;
       	x = 0.448438 * safezoneW + safezoneX;
       	y = 0.335 * safezoneH + safezoneY;
       	w = 0.0515625 * safezoneW;
       	h = 0.022 * safezoneH;
       };
       class transferMoney: RscButton
       {
       	idc = 1600;

       	text = "Transfer Money"; //--- ToDo: Localize;
       	x = 0.314375 * safezoneW + safezoneX;
       	y = 0.412 * safezoneH + safezoneY;
       	w = 0.0670312 * safezoneW;
       	h = 0.022 * safezoneH;
       	      	colorBackground[] ={255,0,0,0.7};
       };
       class gangNameLabel: RscText
       {
       	idc = 1002;
        sizeEx = 0.03;
       	text = "Gang Name:"; //--- ToDo: Localize;
       	x = 0.391719 * safezoneW + safezoneX;
       	y = 0.368 * safezoneH + safezoneY;
       	w = 0.0567187 * safezoneW;
       	h = 0.022 * safezoneH;
       };
       class gangName: RscText
       {
       	idc = 1002;
        sizeEx = 0.03;
       	text = "No Name"; //--- ToDo: Localize;
       	x = 0.438125 * safezoneW + safezoneX;
       	y = 0.368 * safezoneH + safezoneY;
       	w = 0.0567187 * safezoneW;
       	h = 0.022 * safezoneH;
       };
       class yInventoryWeightLabel: RscText
       {
       	idc = 1011;
       	        sizeEx = 0.03;
       	text = "Weight:"; //--- ToDo: Localize;
       	x = 0.608281 * safezoneW + safezoneX;
       	y = 0.291 * safezoneH + safezoneY;
       	w = 0.0309375 * safezoneW;
       	h = 0.033 * safezoneH;
       };
       class yInventoryWeight: RscText
       {
       	idc = 1012;
       	        sizeEx = 0.03;
       	text = "0/0"; //--- ToDo: Localize;
       	x = 0.639219 * safezoneW + safezoneX;
       	y = 0.291 * safezoneH + safezoneY;
       	w = 0.0309375 * safezoneW;
       	h = 0.033 * safezoneH;
       };

    };
}