/*
*    Author: Robert Jones
*/
class manageVirtualInventory
	{
	idd=9905;
	class controls
	{
        class virtualInventory: RscFrame
        {
            idc = 1800;
            x = 0.324687 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.350625 * safezoneW;
            h = 0.352 * safezoneH;
                 	colorBackground[] = {0,0,0,0.6};
        };
        class playerInventory: RscListbox
        {
            idc = 1500;
            x = 0.329844 * safezoneW + safezoneX;
            y = 0.434 * safezoneH + safezoneY;
            w = 0.154687 * safezoneW;
            h = 0.187 * safezoneH;
        };
        class objectInventory: RscListbox
        {
            idc = 1501;
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.434 * safezoneH + safezoneY;
            w = 0.149531 * safezoneW;
            h = 0.187 * safezoneH;
        };
        class inventoryManagementLabel: RscText
        {
            idc = 1000;
            text = "Inventory Management"; //--- ToDo: Localize;
            x = 3.5 * safezoneW + safezoneX;
            y = 5.5 * safezoneH + safezoneY;
            w = 10 * safezoneW;
            h = 3 * safezoneH;
        };
        class weightLabel: RscText
        {
            idc = 1001;
            text = "Weight"; //--- ToDo: Localize;
            x = 0.618594 * safezoneW + safezoneX;
            y = 0.357 * safezoneH + safezoneY;
            w = 0.0360937 * safezoneW;
            h = 0.044 * safezoneH;
        };
        class weightText: RscText
        {
            idc = 1002;
            text = "0/0"; //--- ToDo: Localize;
            x = 0.649531 * safezoneW + safezoneX;
            y = 0.357 * safezoneH + safezoneY;
            w = 0.0360937 * safezoneW;
            h = 0.044 * safezoneH;
        };
        class playerInventoryLabel: RscText
        {
            idc = 1003;
            text = "Your Inventory"; //--- ToDo: Localize;
            x = 0.329844 * safezoneW + safezoneX;
            y = 0.401 * safezoneH + safezoneY;
            w = 0.154687 * safezoneW;
            h = 0.022 * safezoneH;
                 	colorBackground[] = {0,0,0,0.9};
        };
        class trunkInventoryLabel: RscText
        {
            idc = 1004;
            text = "Trunk Inventory"; //--- ToDo: Localize;
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.401 * safezoneH + safezoneY;
            w = 0.154687 * safezoneW;
            h = 0.022 * safezoneH;
            colorBackground[] = {0,0,0,0.9};
        };
        class amountInputPlayer: RscEdit
        {
            idc = 1400;
            text = "0"; //--- ToDo: Localize;
            x = 0.329844 * safezoneW + safezoneX;
            y = 0.632 * safezoneH + safezoneY;
            w = 0.0360937 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class amountLabelPlayer: RscText
        {
            idc = 1005;
            text = "Amount"; //--- ToDo: Localize;
            x = 0.365937 * safezoneW + safezoneX;
            y = 0.632 * safezoneH + safezoneY;
            w = 0.0515625 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class amountInputObject: RscEdit
        {
            idc = 1401;
            text = "0"; //--- ToDo: Localize;
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.632 * safezoneH + safezoneY;
            w = 0.0360937 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class amountLabelObject: RscText
        {
            idc = 1006;
            text = "Amount"; //--- ToDo: Localize;
            x = 0.551562 * safezoneW + safezoneX;
            y = 0.632 * safezoneH + safezoneY;
            w = 0.0515625 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class storeItemButton: RscButton
        {
            idc = 1600;
            text = "Store Item(s)"; //--- ToDo: Localize;
            x = 0.427812 * safezoneW + safezoneX;
            y = 0.632 * safezoneH + safezoneY;
            w = 0.0567187 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class takeItemsButton: RscButton
        {
            idc = 1601;
            text = "Take Item(s)"; //--- ToDo: Localize;
            x = 0.608281 * safezoneW + safezoneX;
            y = 0.632 * safezoneH + safezoneY;
            w = 0.0567187 * safezoneW;
            h = 0.022 * safezoneH;
        };
    };
};