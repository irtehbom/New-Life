class yMenu
{
	idd = 9903;
	
	class ControlsBackground
	{
		
	};
	class Controls
	{
		class yMenuBackground
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35572917;
			y = safeZoneY + safeZoneH * 0.33518519;
			w = safeZoneW * 0.15677084;
			h = safeZoneH * 0.13796297;
			style = 0;
			text = "";
			colorBackground[] = {0.102,0.102,0.102,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuBackground2
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.51666667;
			y = safeZoneY + safeZoneH * 0.33518519;
			w = safeZoneW * 0.128125;
			h = safeZoneH * 0.32962963;
			style = 0;
			text = "";
			colorBackground[] = {0.102,0.102,0.102,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuBackground3
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35572917;
			y = safeZoneY + safeZoneH * 0.47777778;
			w = safeZoneW * 0.15677084;
			h = safeZoneH * 0.18703704;
			style = 0;
			text = "";
			colorBackground[] = {0.102,0.102,0.102,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuTitleBoxShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35572917;
			y = safeZoneY + safeZoneH * 0.31851852;
			w = safeZoneW * 0.28854167;
			h = safeZoneH * 0.01111112;
			style = 0;
			text = "";
			colorBackground[] = {0.5059,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuTitleBox
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35572917;
			y = safeZoneY + safeZoneH * 0.27962963;
			w = safeZoneW * 0.28854167;
			h = safeZoneH * 0.04444445;
			style = 0+2;
			text = "PLAYER MENU";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			
		};
		class yMenuInventoryTitleBoxShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.52083334;
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
		class yMenuInventoryTitleBox
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.52083334;
			y = safeZoneY + safeZoneH * 0.34074075;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.02222223;
			style = 0+2;
			text = "Inventory";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
			
		};
		class yMenuFinanceTitleBoxShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.3462963;
			w = safeZoneW * 0.1484375;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "";
			colorBackground[] = {0.5059,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuFinanceTitleBox
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.34074075;
			w = safeZoneW * 0.1484375;
			h = safeZoneH * 0.02222223;
			style = 0+2;
			text = "Finances";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuInventoryList
		{
			type = 5;
			idc = 1500;
			x = safeZoneX + safeZoneW * 0.52083334;
			y = safeZoneY + safeZoneH * 0.37314815;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.25277778;
			style = 16;
			colorBackground[] = {0.302,0.302,0.302,0.6};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.2,0.2,0.2,1};
			colorText[] = {0.902,0.902,0.902,1};
			colorPicture[] = {1,1,1,1};
			colorPictureSelected[] = {1,1,1,1};
			colorPictureDisabled[] = {1,1,1,1};
			font = "PuristaLight";
			maxHistoryDelay = 0;
			rowHeight = 0.005;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class yMenuDiscardShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58229167;
			y = safeZoneY + safeZoneH * 0.63796297;
			w = safeZoneW * 0.0578125;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "";
			colorBackground[] = {0.2078,0.2078,0.2078,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuUseShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.52083334;
			y = safeZoneY + safeZoneH * 0.63796297;
			w = safeZoneW * 0.0578125;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "";
			colorBackground[] = {0.2078,0.2078,0.2078,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuDiscard
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58229167;
			y = safeZoneY + safeZoneH * 0.63240741;
			w = safeZoneW * 0.0578125;
			h = safeZoneH * 0.02222223;
			style = 0+2;
			text = "Discard";
			borderSize = 0;
			colorBackground[] = {0.302,0.302,0.302,1};
			colorBackgroundActive[] = {0.4,0.4,0.4,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			offsetPressedX = 0.00;
			offsetPressedY = 0.00;
			offsetX = 0.00;
			offsetY = 0.00;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			tooltip = "Discard the selected item.";
			
		};
		class yMenuUse
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.52083334;
			y = safeZoneY + safeZoneH * 0.63240741;
			w = safeZoneW * 0.0578125;
			h = safeZoneH * 0.02222223;
			style = 0+2;
			text = "Use";
			borderSize = 0;
			colorBackground[] = {0.302,0.302,0.302,1};
			colorBackgroundActive[] = {0.4,0.4,0.4,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			offsetPressedX = 0.00;
			offsetPressedY = 0.00;
			offsetX = 0.00;
			offsetY = 0.00;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			tooltip = "Use the selected item.";
			
		};
		class yMenuCashImage
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.36822917;
			y = safeZoneY + safeZoneH * 0.38425926;
			w = safeZoneW * 0.01666667;
			h = safeZoneH * 0.02777778;
			style = 0+2+48;
			text = "icons\cash.paa";
			colorBackground[] = {0.702,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			
		};
		class yMenuBankImage
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.36822917;
			y = safeZoneY + safeZoneH * 0.42870371;
			w = safeZoneW * 0.01666667;
			h = safeZoneH * 0.02777778;
			style = 0+2+48;
			text = "icons\bank.paa";
			colorBackground[] = {0.702,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			
		};
		class yMenuLine
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.396875;
			y = safeZoneY + safeZoneH * 0.37870371;
			w = safeZoneW * 0;
			h = safeZoneH * 0.08240741;
			style = 0+176;
			text = "";
			colorBackground[] = {0.902,0.902,0.902,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuBankAmount
		{
			type = 0;
			idc = 1001;
			x = safeZoneX + safeZoneW * 0.40520834;
			y = safeZoneY + safeZoneH * 0.42870371;
			w = safeZoneW * 0.09895834;
			h = safeZoneH * 0.02777778;
			style = 0;
			text = "0000000";
			colorBackground[] = {0.102,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			
		};
		class yMenuCashAmount
		{
			type = 0;
			idc = 1000;
			x = safeZoneX + safeZoneW * 0.40520834;
			y = safeZoneY + safeZoneH * 0.38425926;
			w = safeZoneW * 0.09895834;
			h = safeZoneH * 0.02777778;
			style = 0;
			text = "0000000";
			colorBackground[] = {0.102,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			
		};
		class yMenuServicesTitleBoxShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.48888889;
			w = safeZoneW * 0.1484375;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "";
			colorBackground[] = {0.5059,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuServicesTitleBox
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.48333334;
			w = safeZoneW * 0.1484375;
			h = safeZoneH * 0.02222223;
			style = 0+2;
			text = "Services";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuKeysImage
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.371875;
			y = safeZoneY + safeZoneH * 0.56018519;
			w = safeZoneW * 0.025;
			h = safeZoneH * 0.04444445;
			style = 0+2+48;
			text = "icons\keys.paa";
			colorBackground[] = {0.702,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			tooltip = "View your keychain.";
			
		};
		class yMenuInboxImage
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.47135417;
			y = safeZoneY + safeZoneH * 0.56018519;
			w = safeZoneW * 0.025;
			h = safeZoneH * 0.04444445;
			style = 0+2+48;
			text = "icons\messages.paa";
			colorBackground[] = {0.702,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			tooltip = "View your inbox.";
			
		};
		class yMenuGangImage
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.421875;
			y = safeZoneY + safeZoneH * 0.56018519;
			w = safeZoneW * 0.025;
			h = safeZoneH * 0.04444445;
			style = 0+2+48;
			text = "icons\gang.paa";
			colorBackground[] = {0.702,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			tooltip = "View the gang menu.";
			
		};
		class yMenuLine1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.409375;
			y = safeZoneY + safeZoneH * 0.53888889;
			w = safeZoneW * 0;
			h = safeZoneH * 0.08796297;
			style = 0+176;
			text = "";
			colorBackground[] = {0.902,0.902,0.902,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuLine2
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.45885417;
			y = safeZoneY + safeZoneH * 0.53888889;
			w = safeZoneW * 0;
			h = safeZoneH * 0.08796297;
			style = 0+176;
			text = "";
			colorBackground[] = {0.902,0.902,0.902,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuInventoryTitleBox_copy1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.590625;
			y = safeZoneY + safeZoneH * 0.34074075;
			w = safeZoneW * 0.0453125;
			h = safeZoneH * 0.02222223;
			style = 1;
			text = "0/0";
			colorBackground[] = {0.702,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			shadow = 0;
			
		};
		
	};
	
};
