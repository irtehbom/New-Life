/*
*    Author: Robert Jones
*/

#include "script_macros.hpp"
new_life_sql_id = round(random(9999));
CONSTVAR(new_life_sql_id);

"extDB3" callExtension "9:ADD_DATABASE:Database";
"extDB3" callExtension format ["9:ADD_DATABASE_PROTOCOL:Database:SQL:%1:TEXT2",FETCH_CONST(new_life_sql_id)];
_query = "select * from players";
_result = [_query,2,true] call newLifeServer_fnc_asyncCall;

diag_log format["EXTDB 2222::%1", _result];
