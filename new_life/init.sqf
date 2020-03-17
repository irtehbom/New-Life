/*
*    Author: Robert Jones
*/

#include "script_macros.hpp"
server_ready = false;
player_session_complete = false;
new_life_sql_id = round(random(9999));
CONSTVAR(new_life_sql_id);

"extDB3" callExtension "9:ADD_DATABASE:Database";
"extDB3" callExtension format ["9:ADD_DATABASE_PROTOCOL:Database:SQL:%1:TEXT2",FETCH_CONST(new_life_sql_id)];

//Set up houses
[] remoteExecCall ["newLifeServer_fnc_setUpHousing"];

server_ready = true;
publicVariable "server_ready";
