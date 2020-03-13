DB_Async_Active = false;
DB_Async_ExtraLock = false;

if (isNil {uiNamespace getVariable "newLife_sql_id"}) then {
    newLife_sql_id = round(random(9999));
    CONSTVAR(newLife_sql_id);
    uiNamespace setVariable ["newLife_sql_id",newLife_sql_id];
        try {
        _result = EXTDB format ["9:ADD_DATABASE:%1",EXTDB_SETTING(getText,"DatabaseName")];
        if (!(_result isEqualTo "[1]")) then {throw "extDB3: Error with Database Connection"};
        _result = EXTDB format ["9:ADD_DATABASE_PROTOCOL:%2:SQL:%1:TEXT2",FETCH_CONST(newLife_sql_id),EXTDB_SETTING(getText,"DatabaseName")];
        if (!(_result isEqualTo "[1]")) then {throw "extDB3: Error with Database Connection"};
    } catch {
        diag_log _exception;
        _extDBNotLoaded = [true, _exception];
    };
    if (_extDBNotLoaded isEqualType []) exitWith {};
    EXTDB "9:LOCK";
    diag_log "extDB3: Connected to Database";
} else {
    newLife_sql_id = uiNamespace getVariable "newLife_sql_id";
    CONSTVAR(newLife_sql_id);
    diag_log "extDB3: Still Connected to Database";
};