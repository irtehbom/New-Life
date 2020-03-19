/*
    Author: Robert Jones
*/

class VirtualItemConfig {

    class gatherZones {
         gatherZones[] = {"gold_1","gold_2"};
    };

    class gold {
        variable = "gold";
        displayName = "Gold";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = false;
        icon = "icons\ico_goldBar.paa";
    };

};
