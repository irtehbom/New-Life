class CfgPatches {
    class new_life {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {};
        fileName = "new_life.pbo";
        author = "Rob";
    };
};

//Functions
class CfgFunctions {
	class newLifeServer
	{
		tag = "newLifeServer";
		#include "modules\houses\config.hpp"
		#include "modules\mysql\config.hpp"
	};
};