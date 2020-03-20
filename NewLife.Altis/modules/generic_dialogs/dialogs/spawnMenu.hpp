/*
*    Author: Robert Jones
*/
class spawnMenu
	{
	idd=9904;
	class controls
	    {
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT START (by Rob, v1.063, #Zywoku)
    ////////////////////////////////////////////////////////

    class welcomeFrame: RscFrame
    {
    	idc = 1800;

    	x = 0.298906 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.402187 * safezoneW;
    	h = 0.517 * safezoneH;
    	colorBackground[] ={255,0,0,0.2};
    };
    class innerFrameLeft: RscFrame
    {
    	idc = 1801;
    	x = 0.304062 * safezoneW + safezoneX;
    	y = 0.258 * safezoneH + safezoneY;
    	w = 0.195937 * safezoneW;
    	h = 0.451 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    };
    class welcomeText: RscText
    {
    	idc = 1000;
    	text = "Welcome to New Life"; //--- ToDo: Localize;
    	x = 0.309219 * safezoneW + safezoneX;
    	y = 0.269 * safezoneH + safezoneY;
    	w = 0.170156 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class newsLabel: RscText
    {
    	idc = 1001;

    	text = "Latest News"; //--- ToDo: Localize;
    	x = 0.309219 * safezoneW + safezoneX;
    	y = 0.467 * safezoneH + safezoneY;
    	w = 0.165 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorText[] = {255,255,255,1};
    };
 class map: CT_MAP
    {
    	idc = 1802;
    	maxSatelliteAlpha = 0.75;
    	alphaFadeStartScale = 1.15;
    	alphaFadeEndScale = 1.29;

    	x = 0.505156 * safezoneW + safezoneX;
    	y = 0.258 * safezoneH + safezoneY;
    	w = 0.185625 * safezoneW;
    	h = 0.264 * safezoneH;
    };
    class spawnInfo: RscListBox
    {
    	idc = 255555;
    	x = 0.505156 * safezoneW + safezoneX;
    	y = 0.566 * safezoneH + safezoneY;
    	w = 0.185625 * safezoneW;
    	h = 0.121 * safezoneH;
    	onLBSelChanged = "[_this] remoteExec call newLife_fnc_spawnMapMarkerPosition";
    };
    class spawnAtHouse: RscButton
    {
    	idc = 1600;
      	colorBackground[] ={255,0,0,0.7};
    	text = "Spawn at House"; //--- ToDo: Localize;
    	x = 0.618594 * safezoneW + safezoneX;
    	y = 0.709 * safezoneH + safezoneY;
    	w = 0.0721875 * safezoneW;
    	h = 0.033 * safezoneH;

    };
    class spawnAtTown: RscButton
    {
    	idc = 1601;
      	colorBackground[] ={255,0,0,0.7};
    	text = "Spawn at Town"; //--- ToDo: Localize;
    	x = 0.546406 * safezoneW + safezoneX;
    	y = 0.709 * safezoneH + safezoneY;
    	w = 0.061875 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class spacerOne: RscFrame
    {
    	idc = 1801;
    	x = 0.309219 * safezoneW + safezoneX;
    	y = 0.302 * safezoneH + safezoneY;
    	w = 0.185625 * safezoneW;
    	h = 0.000999999 * safezoneH;
    	colorBackground[] = {255,255,255,1};
    };
    class spacerTwo: RscFrame
    {
    	idc = 1801;

    	x = 0.309219 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.185625 * safezoneW;
    	h = 0.000999999 * safezoneH;
    	colorBackground[] = {255,255,255,1};
    };
    class spawnDesc: RscText
    {
    	idc = 1000;
        sizeEx = 0.03;
    	text = "If you have a house select it below, otherwise click Spawn at Town"; //--- ToDo: Localize;
    	x = 0.5 * safezoneW + safezoneX;
    	y = 0.533 * safezoneH + safezoneY;
    	w = 0.190781 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT END
    ////////////////////////////////////////////////////////


    };
}