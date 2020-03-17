/*
*    Author: Robert Jones
*/

class houseMenu
	{
	idd=9902;
	class controls
	{
		class houseMenuFrame: RscFrame
		{
			idc = 1800;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		class houseMenuBuyHouseButton: RscButton
		{
			idc = 1600;
			text = "";
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			action="";
			colorBackground[] = {0.9,0,0,1};
		};
	}
}
