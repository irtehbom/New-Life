#include "CustomControlClasses.hpp"
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
			x = 0.15000002;
			y = 0.20000003;
			w = 0.38000004;
			h = 0.25000002;
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
			x = 0.54000017;
			y = 0.2000001;
			w = 0.31000005;
			h = 0.60000001;
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
			x = 0.15000017;
			y = 0.46000015;
			w = 0.38000007;
			h = 0.34000002;
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
			x = 0.15000013;
			y = 0.17000068;
			w = 0.70000003;
			h = 0.02000029;
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
			x = 0.15000012;
			y = 0.10000054;
			w = 0.70000003;
			h = 0.08000007;
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
			x = 0.5500002;
			y = 0.22000051;
			w = 0.29000006;
			h = 0.04000009;
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
			x = 0.55000037;
			y = 0.21000049;
			w = 0.29000003;
			h = 0.04000009;
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
			x = 0.16000011;
			y = 0.22000043;
			w = 0.36000007;
			h = 0.04000009;
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
			x = 0.16000011;
			y = 0.21000049;
			w = 0.36000006;
			h = 0.04000009;
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
			x = 0.55000024;
			y = 0.27000011;
			w = 0.29000002;
			h = 0.46000004;
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
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
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
			x = 0.70000021;
			y = 0.75000055;
			w = 0.14000007;
			h = 0.04000009;
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
			x = 0.55000019;
			y = 0.75000055;
			w = 0.14000007;
			h = 0.04000009;
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
			x = 0.7000003;
			y = 0.74000067;
			w = 0.14;
			h = 0.04000003;
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
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
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
			x = 0.55000029;
			y = 0.74000067;
			w = 0.14;
			h = 0.04000003;
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
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
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
			x = 0.17000017;
			y = 0.27000055;
			w = 0.06000011;
			h = 0.08000007;
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
			x = 0.17000017;
			y = 0.36000056;
			w = 0.06000011;
			h = 0.08000007;
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
			x = 0.25000019;
			y = 0.28000021;
			w = 0.0000001;
			h = 0.15000003;
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
			x = 0.2700003;
			y = 0.38000028;
			w = 0.24000011;
			h = 0.04000006;
			style = 0;
			text = "0000000";
			colorBackground[] = {0.102,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuCashAmount
		{
			type = 0;
			idc = 1000;
			x = 0.2700003;
			y = 0.29000022;
			w = 0.2400001;
			h = 0.04000006;
			style = 0;
			text = "0000000";
			colorBackground[] = {0.102,0.102,0.102,0};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class yMenuServicesTitleBoxShadow
		{
			type = 0;
			idc = -1;
			x = 0.16000011;
			y = 0.48000049;
			w = 0.36000007;
			h = 0.04000009;
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
			x = 0.16000011;
			y = 0.47000049;
			w = 0.36000004;
			h = 0.04000009;
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
			x = 0.19000019;
			y = 0.61000063;
			w = 0.06000011;
			h = 0.08000007;
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
			x = 0.43000026;
			y = 0.6100006;
			w = 0.06000011;
			h = 0.08000007;
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
			x = 0.31000024;
			y = 0.6100006;
			w = 0.06000011;
			h = 0.08000007;
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
			x = 0.28000021;
			y = 0.57000027;
			w = 0.0000001;
			h = 0.16000004;
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
			x = 0.40000025;
			y = 0.57000027;
			w = 0.0000001;
			h = 0.16000004;
			style = 0+176;
			text = "";
			colorBackground[] = {0.902,0.902,0.902,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	
};
