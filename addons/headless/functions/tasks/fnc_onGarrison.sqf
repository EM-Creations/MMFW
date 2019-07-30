/*
 * Author: TheMagnetar
 * Handle patrol building state
 *
 * Arguments:
 * 0: Group <OBJECT> (default: objNull)
 *
 * Return Value:
 * None
 *
 * Example:
 * [nearestBuilding player] call mmfw_task_fnc_onGarrison
 *
 * Public: No
 */
#include "script_component.hpp"
EXEC_CHECK(SERVERHC);

params ["_group"];

private _units = units _group;
if (_units findIf {alive _x} isEqualTo -1) exitWith {deleteGroup _group;};

private _leader = leader _group;
private _targetPos = waypointPosition [_group, 0];

if (!local _leader) exitWith {
    _group setVariable [QEGVAR(tasks,waitUntil), _group getVariable [QEGVAR(tasks,waitUntil), CBA_missionTime], true];
    _group setVariable [QEGVAR(tasks,distance), _group getVariable [QEGVAR(building,distance), (getPos _leader) distance2D _targetPos], true];
    _group setVariable [QEGVAR(tasks,buildingCheckTime), _group getVariable [QEGVAR(tasks,buildingCheckTime), CBA_missionTime], true];
    _group setVariable [QEGVAR(building,inBuilding), _group getVariable [QEGVAR(building,inBuilding), false], true];
};

{
    private _inBuilding = (_x getVariable [QEGVAR(building,inBuilding), [false]]) select 0;
    if (_inBuilding) then {
        [_x, false] call EFUNC(building,patrolBuilding);
    };
} forEach _units;