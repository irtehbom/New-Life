class spawnMenu
{
	idd = 9904;
	
	class ControlsBackground
	{
		
	};
	class Controls
	{
		class Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35572917;
			y = safeZoneY + safeZoneH * 0.33518519;
			w = safeZoneW * 0.28854167;
			h = safeZoneH * 0.33148149;
			style = 0;
			text = "";
			colorBackground[] = {0.102,0.102,0.102,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TitleBoxShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35572917;
			y = safeZoneY + safeZoneH * 0.31851852;
			w = safeZoneW * 0.2890625;
			h = safeZoneH * 0.01111112;
			style = 0;
			text = "";
			colorBackground[] = {0.5059,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TitleBox
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35572917;
			y = safeZoneY + safeZoneH * 0.28055556;
			w = safeZoneW * 0.2890625;
			h = safeZoneH * 0.04351852;
			style = 2;
			text = "SPAWN MENU";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4);
			
		};
		class PlayerTitleShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.3462963;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "";
			colorBackground[] = {0.5059,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class PlayerTitle
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.34074075;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.02222223;
			style = 2;
			text = "Welcome!";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class StoreButtonShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.578125;
			y = safeZoneY + safeZoneH * 0.5712963;
			w = safeZoneW * 0.0578125;
			h = safeZoneH * 0.01666667;
			style = 0;
			text = "";
			colorBackground[] = {0.502,0.0729,0.0729,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class StoreButton
		{
			type = 1;
			idc = 1601;
			x = safeZoneX + safeZoneW * 0.578125;
			y = safeZoneY + safeZoneH * 0.54444445;
			w = safeZoneW * 0.0578125;
			h = safeZoneH * 0.03888889;
			style = 2;
			text = "Town";
			borderSize = 0;
			colorBackground[] = {0.702,0.102,0.102,1};
			colorBackgroundActive[] = {0.8,0.2,0.2,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.502,0.0729,0.0729,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			offsetPressedX = 0.00;
			offsetPressedY = 0.00;
			offsetX = 0.00;
			offsetY = 0.00;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "[1] spawn newLife_fnc_setVirtualInventory";
			tooltip = "Spawn at a random town.";
			
		};
		class TakeButtonShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.578125;
			y = safeZoneY + safeZoneH * 0.62685186;
			w = safeZoneW * 0.0578125;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "";
			colorBackground[] = {0.502,0.0729,0.0729,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TakeButton
		{
			type = 1;
			idc = 1600;
			x = safeZoneX + safeZoneW * 0.578125;
			y = safeZoneY + safeZoneH * 0.60462963;
			w = safeZoneW * 0.0578125;
			h = safeZoneH * 0.03888889;
			style = 2;
			text = "House";
			borderSize = 0;
			colorBackground[] = {0.702,0.102,0.102,1};
			colorBackgroundActive[] = {0.8,0.2,0.2,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.502,0.0729,0.0729,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			offsetPressedX = 0.00;
			offsetPressedY = 0.00;
			offsetX = 0.00;
			offsetY = 0.00;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "[2] spawn newLife_fnc_setVirtualInventory";
			tooltip = "Spawn at the selected house.";
			
		};
		class Map: CT_MAP
		{
			scaleDefault = 1.00;
			alphaFadeEndScale = 10.00;
			idc = 1802;
			x = safeZoneX + safeZoneW * 0.48333334;
			y = safeZoneY + safeZoneH * 0.34074075;
			w = safeZoneW * 0.15677084;
			h = safeZoneH * 0.18703704;
			
		};
		class HouseList
		{
			type = 5;
			idc = 255555;
			x = safeZoneX + safeZoneW * 0.48333334;
			y = safeZoneY + safeZoneH * 0.53333334;
			w = safeZoneW * 0.08697917;
			h = safeZoneH * 0.12685186;
			style = 16;
			colorBackground[] = {0,0,0,0.6};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.2,0.2,0.2,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			maxHistoryDelay = 0;
			rowHeight = 0.005;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			onLBSelChanged = "[_this] remoteExec call newLife_fnc_spawnMapMarkerPosition";
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class NewsTitleShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.50555556;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "";
			colorBackground[] = {0.5059,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class NewsTitle
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.5;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.02222223;
			style = 2;
			text = "Latest News";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class NewsText
		{
			type = 0;
			idc = 1802;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.53333334;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.12685186;
			style = 16;
			text = "Coronavirus has spread throughout Altis, we are all gonna die.";
			colorBackground[] = {0,0,0,0.6};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.6);
			lineSpacing = 1;
			
		};
		class WelcomeText
		{
			type = 0;
			idc = 1802;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.37314815;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.1212963;
			style = 16;
			text = "Welcome to New Life! Please select a house to spawn at, or spawn in a town.";
			colorBackground[] = {0,0,0,0.6};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.6);
			lineSpacing = 1;
			
		};
		
	};
	
};
