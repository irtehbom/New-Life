/*
*    Author: Robert Jones
*/

class houseInteraction 
	{
	idd=9902;
	class controls
	{
		class houseInteractionFrame: RscFrame
		{
			idc = 1800;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.308 * safezoneH;
		};
		class houseInteractionBuyHouseButton: RscButton
		{
			idc = 1600;
			text = "Buy House"; //--- ToDo: Localize;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			action="";
		};
	}
}
