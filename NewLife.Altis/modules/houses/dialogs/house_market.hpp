/*
*    Author: Robert Jones
*/

class houseMarket 
	{
	idd=9901;
	class controls
	{
		class houseMarketFrame: RscFrame
		{
			idc = 1800;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.319 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class houseMarketAvailableHousesListBox: RscListbox
		{
			idc = 1500;
			x = 0.536093 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.286 * safezoneH;
		};
		class houseMarketButtonSell: RscButton
		{
			idc = 1600;
			text = "Sell House"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class houseMarketYourHouses: RscListbox
		{
			idc = 1501;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.242 * safezoneH;
		};
	}
}
