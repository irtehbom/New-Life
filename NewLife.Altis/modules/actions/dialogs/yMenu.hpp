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
            x = 0.314375 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.366094 * safezoneW;
            h = 0.286 * safezoneH;
            colorBackground[] = {0,0,0,0.9};
        };
        class yMenuCashInHand: RscText
        {
            idc = 1000;

            text = "0"; //--- ToDo: Localize;
            x = 0.325 * safezoneW + safezoneX;
            y = 0.38 * safezoneH + safezoneY;
            w = 0.0773437 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class yMenuCashInBank: RscText
        {
            idc = 1001;

            text = "0"; //--- ToDo: Localize;
            x = 0.4 * safezoneW + safezoneX;
            y = 0.38 * safezoneH + safezoneY;
            w = 0.0773437 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class yMenuCashLabel: RscText
        {
            idc = 1002;

            text = "Cash"; //--- ToDo: Localize;
            x = 0.325 * safezoneW + safezoneX;
            y = 0.36 * safezoneH + safezoneY;
            w = 0.0773437 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class RscButton_1600: RscButton
        {
            idc = 1600;

            text = "Sync"; //--- ToDo: Localize;
            x = 0.628906 * safezoneW + safezoneX;
            y = 0.588 * safezoneH + safezoneY;
            w = 0.0464063 * safezoneW;
            h = 0.033 * safezoneH;
            colorBackground[] = {0.9,0,0,1};
        };
        class RscText_1003: RscText
        {
            idc = 1002;

            text = "Bank"; //--- ToDo: Localize;
            x = 0.4 * safezoneW + safezoneX;
            y = 0.36 * safezoneH + safezoneY;
            w = 0.0773437 * safezoneW;
            h = 0.022 * safezoneH;
        };
    };
}