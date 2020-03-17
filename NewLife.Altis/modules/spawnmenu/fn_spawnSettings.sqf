/*
    Author: Robert Jones
*/

_markers = [
    "spawn_1",
    "spawn_2",
    "spawn_3",
    "spawn_4",
    "spawn_5",
    "spawn_6",
    "spawn_7",
    "spawn_8",
    "spawn_9",
    "spawn_10",
    "spawn_11",
    "spawn_12",
    "spawn_13",
    "spawn_14"
];

_random = selectRandom _markers;
_spawnPoint = getMarkerPos _random;

_return = [_spawnPoint];

_return;