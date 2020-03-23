class manageVirtualInventory
{
	idd = 9905;
	
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
			w = safeZoneW * 0.28854167;
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
			y = safeZoneY + safeZoneH * 0.27962963;
			w = safeZoneW * 0.28854167;
			h = safeZoneH * 0.04444445;
			style = 0+2;
			text = "VIRTUAL INVENTORY";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			
		};
		class StorageTitleShadow
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
		class StorageTitle
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.52083334;
			y = safeZoneY + safeZoneH * 0.34074075;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "Storage Inventory";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
			
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
			style = 0;
			text = "Your Inventory";
			colorBackground[] = {0.702,0.102,0.102,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class StorageInventoryList
		{
			type = 5;
			idc = 1501;
			x = safeZoneX + safeZoneW * 0.52083334;
			y = safeZoneY + safeZoneH * 0.37314815;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.28611112;
			style = 16;
			colorBackground[] = {0.302,0.302,0.302,0.6};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.2,0.2,0.2,1};
			colorText[] = {0.902,0.902,0.902,1};
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
		class StoreButtonShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.49166667;
			y = safeZoneY + safeZoneH * 0.48888889;
			w = safeZoneW * 0.01666667;
			h = safeZoneH * 0.02222223;
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
			idc = -1;
			x = safeZoneX + safeZoneW * 0.49166667;
			y = safeZoneY + safeZoneH * 0.48333334;
			w = safeZoneW * 0.01666667;
			h = safeZoneH * 0.02222223;
			style = 0+2;
			text = ">";
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
			tooltip = "Discard the selected item.";
			
		};
		class PlayerInventoryList
		{
			type = 5;
			idc = 1500;
			x = safeZoneX + safeZoneW * 0.35989584;
			y = safeZoneY + safeZoneH * 0.37314815;
			w = safeZoneW * 0.11979167;
			h = safeZoneH * 0.28611112;
			style = 16;
			colorBackground[] = {0.302,0.302,0.302,0.6};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.2,0.2,0.2,1};
			colorText[] = {0.902,0.902,0.902,1};
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
		class TakeButtonShadow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.49166667;
			y = safeZoneY + safeZoneH * 0.52222223;
			w = safeZoneW * 0.01666667;
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
			idc = -1;
			x = safeZoneX + safeZoneW * 0.49166667;
			y = safeZoneY + safeZoneH * 0.51666667;
			w = safeZoneW * 0.01666667;
			h = safeZoneH * 0.02222223;
			style = 0+2;
			text = "<";
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
			tooltip = "Discard the selected item.";
			
		};
		class InputAmount
		{
			type = 2;
			idc = 1400;
			x = safeZoneX + safeZoneW * 0.48333334;
			y = safeZoneY + safeZoneH * 0.45092593;
			w = safeZoneW * 0.0328125;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0.102,0.102,0.102,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {1,0,0,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class PlayerWeight
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.43802084;
			y = safeZoneY + safeZoneH * 0.34074075;
			w = safeZoneW * 0.04114584;
			h = safeZoneH * 0.02222223;
			style = 1;
			text = "0/0";
			colorBackground[] = {0.702,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			
		};
		class StorageWeight
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.59895834;
			y = safeZoneY + safeZoneH * 0.34074075;
			w = safeZoneW * 0.04114584;
			h = safeZoneH * 0.02222223;
			style = 1;
			text = "0/0";
			colorBackground[] = {0.702,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			
		};
		
	};
	
};
