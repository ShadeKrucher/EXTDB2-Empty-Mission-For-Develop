call compile preprocessFile "CustomServer\init.sqf";

// TO MANAGE DATABASE:
_query = "HERE SQL CODE";
OR
var1 = "TEST";
var2 = "TESTING";
var3 = "TESTED";
_query = format["%1 | %2 | %3",var1,var2,var3];
// "TEST | TESTING | TESTED"
[_query,2] call db_fnc_async;