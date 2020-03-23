/*
*    Author: Robert Jones
*/

class sellHouse
	{
	idd=9950;
	class controls
	{

      class sellHouseFrame: RscFrame
      {
      	idc = 1800;

      	x = 0.37625 * safezoneW + safezoneX;
      	y = 0.39 * safezoneH + safezoneY;
      	w = 0.262969 * safezoneW;
      	h = 0.154 * safezoneH;
      	colorBackground[] = {0,0,0,0.9};
      };
      class sellHouseInputFrame: RscEdit
      {
      	idc = 1400;

      	text = "Input Amount"; //--- ToDo: Localize;
      	x = 0.396875 * safezoneW + safezoneX;
      	y = 0.456 * safezoneH + safezoneY;
      	w = 0.128906 * safezoneW;
      	h = 0.044 * safezoneH;
      };
      class sellHouseSellButton: RscButton
      {
      	idc = 1600;

      	text = "Sell House"; //--- ToDo: Localize;
      	x = 0.536094 * safezoneW + safezoneX;
      	y = 0.456 * safezoneH + safezoneY;
      	w = 0.0773437 * safezoneW;
      	h = 0.044 * safezoneH;
      };

	}
}
