/*
    Author: Robert Jones
*/

class VirtualItemConfig {

    class gatherZones {
         gatherZones[] = {"gold_1","gold_2","silver_1"};
    };

    class vitem_gold_unprocessed {
        variableName = "vitem_gold_unprocessed";
        displayName = "Gold Ore";
        processedVariableName = "vitem_gold";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = false;
        icon = "icons\ico_goldBar.paa";
    };

    class vitem_gold {
        variableName = "vitem_gold";
        displayName = "Gold Bars";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = false;
        icon = "icons\ico_goldBar.paa";
    };

    class vitem_silver_unprocessed {
        variableName = "vitem_silver_unprocessed";
        displayName = "Silver Ore";
        processedVariableName = "vitem_silver";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = false;
        icon = "icons\ico_goldBar.paa";
    };

    class vitem_silver {
        variableName = "vitem_silver";
        displayName = "Silver Bars";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = false;
        icon = "icons\ico_goldBar.paa";
    };

};
