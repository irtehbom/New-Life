/*
*    Author: Robert Jones
*/

class manageHouse
	{
	idd=9902;
	class controls
	{
     class manageHouseFrame: RscFrame
     {
     	idc = 1800;

     	x = 0.32975 * safezoneW + safezoneX;
     	y = 0.3572 * safezoneH + safezoneY;
     	w = 0.340313 * safezoneW;
     	h = 0.297 * safezoneH;
     	colorBackground[] = {0,0,0,0.9};
     };
     class VirtualInventoryListBox: RscListBox
     {
     	idc = 1500;

     	x = 0.57225 * safezoneW + safezoneX;
     	y = 0.412 * safezoneH + safezoneY;
     	w = 0.0928125 * safezoneW;
     	h = 0.176 * safezoneH;
     	colorBackground[] = {0,0,0,0.9};
     };
     class VirtualInventoryLabel: RscText
     {
     	idc = 1000;

     	text = "Inventory"; //--- ToDo: Localize;
     	x = 0.5715 * safezoneW + safezoneX;
     	y = 0.368 * safezoneH + safezoneY;
     	w = 0.0928125 * safezoneW;
     	h = 0.033 * safezoneH;
     };
     class houseInfomation: RscText
     {
     	idc = 1001;

     	text = "House Information"; //--- ToDo: Localize;
     	x = 0.335 * safezoneW + safezoneX;
     	y = 0.368 * safezoneH + safezoneY;
     	w = 0.118594 * safezoneW;
     	h = 0.033 * safezoneH;
     };
     class rentLabel: RscText
     {
     	idc = 1002;

     	text = "Rent Due"; //--- ToDo: Localize;
     	x = 0.335 * safezoneW + safezoneX;
     	y = 0.4008 * safezoneH + safezoneY;
     	w = 0.118594 * safezoneW;
     	h = 0.033 * safezoneH;
     };
     class managePermissions: RscButton
     {
     	idc = 1600;

     	text = "Manage Permissions"; //--- ToDo: Localize;
     	x = 0.474219 * safezoneW + safezoneX;
     	y = 0.61 * safezoneH + safezoneY;
     	w = 0.0928125 * safezoneW;
     	h = 0.033 * safezoneH;
     };
     class payRent: RscButton
     {
     	idc = 1601;

     	text = "Pay Rent"; //--- ToDo: Localize;
     	x = 0.402031 * safezoneW + safezoneX;
     	y = 0.61 * safezoneH + safezoneY;
     	w = 0.0670312 * safezoneW;
     	h = 0.033 * safezoneH;
     };
     class sellHouse: RscButton
     {
     	idc = 1602;

     	text = "Sell House"; //--- ToDo: Localize;
     	x = 0.335 * safezoneW + safezoneX;
     	y = 0.61 * safezoneH + safezoneY;
     	w = 0.061875 * safezoneW;
     	h = 0.033 * safezoneH;
     	action = "";
     };
     class managePermissionsListBox: RscListBox
     {
     	idc = 1501;

     	x = 0.464 * safezoneW + safezoneX;
     	y = 0.412 * safezoneH + safezoneY;
     	w = 0.0979687 * safezoneW;
     	h = 0.176 * safezoneH;
     	colorBackground[] = {0,0,0,0.9};
     };
     class managePermissionsLabel: RscText
     {
     	idc = 1004;

     	text = "Players with access to this house"; //--- ToDo: Localize;
     	x = 0.462 * safezoneW + safezoneX;
     	y = 0.368 * safezoneH + safezoneY;
     	w = 0.108281 * safezoneW;
     	h = 0.033 * safezoneH;
     };
     class rentPrice: RscText
     {
     	idc = 1003;

     	text = "0"; //--- ToDo: Localize;
     	x = 0.335 * safezoneW + safezoneX;
     	y = 0.434 * safezoneH + safezoneY;
     	w = 0.118594 * safezoneW;
     	h = 0.033 * safezoneH;
     };
     class houseStatusLabel: RscText
     {
     	idc = 1005;

     	text = "House Status"; //--- ToDo: Localize;
     	x = 0.335 * safezoneW + safezoneX;
     	y = 0.4672 * safezoneH + safezoneY;
     	w = 0.118594 * safezoneW;
     	h = 0.044 * safezoneH;
     };
     class houseStatus: RscText
     {
     	idc = 1006;

     	text = "0"; //--- ToDo: Localize;
     	x = 0.335 * safezoneW + safezoneX;
     	y = 0.5112 * safezoneH + safezoneY;
     	w = 0.113437 * safezoneW;
     	h = 0.033 * safezoneH;
     };
     class buyStorage: RscButton
     {
     	idc = 2710;

     	text = "Buy Storage"; //--- ToDo: Localize;
     	x = 0.335 * safezoneW + safezoneX;
     	y = 0.566 * safezoneH + safezoneY;
     	w = 0.0670312 * safezoneW;
     	h = 0.033 * safezoneH;
     };
     class manageVirtualInventory: RscButton
     {
     	idc = 1950;
        action = "";
     	text = "Manage Inventory"; //--- ToDo: Localize;
     	x = 0.572187 * safezoneW + safezoneX;
     	y = 0.61 * safezoneH + safezoneY;
     	w = 0.0928125 * safezoneW;
     	h = 0.033 * safezoneH;
     };
	}
}
