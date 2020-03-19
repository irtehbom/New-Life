/*
    Author: Robert Jones
*/

class VirtualItemConfig {

    class gatherZones {
         gatherZones[] = {"gold_1","gold_2","silver_1"};
    };

    class vitem_gold {
        variableName = "vitem_gold";
        displayName = "Gold";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = false;
        icon = "icons\ico_goldBar.paa";
    };

     class vitem_silver {
            variableName = "vitem_silver";
            displayName = "Silver";
            weight = 2;
            buyPrice = -1;
            sellPrice = -1;
            illegal = false;
            edible = false;
            icon = "icons\ico_goldBar.paa";
        };

};
