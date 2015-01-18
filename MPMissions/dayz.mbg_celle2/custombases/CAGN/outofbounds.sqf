private["_debug","_distance"];

_character = player;
_characterID =	_character getVariable ["characterID","0"];
_charPos = getPosATL _character;
_isInVehicle = vehicle _character != _character;
_debug = getMarkerpos "respawn_west";
_distance = _debug distance _charPos;

if (_distance < 2000) exitWith {
//blank just exit :)
};
_nearDebug = ((_debug distance _charPos) < 1500);
_isAlive = alive _character;
_nearSpawnPos = ((dayz_spawnPos distance _charPos) < 100);
_xCoord = _charPos select 0;
_yCoord = _charPos select 1;

if ((_xCoord > MAP_MAX_x or _xCoord < MAP_MIN_x or _yCoord > MAP_MAX_y or _yCoord < MAP_MIN_y) and !_nearDebug and !_nearSpawnPos) then {	
	systemChat ("OUTOFBOUNDS: You are OUTOFBOUNDS! \n  You have 10 seconds to go back or die!"); 
	sleep 5;
	systemChat ("OUTOFBOUNDS: 5 seconds to go back!"); 
	sleep 5;
	_character allowDamage true;
	_character setDamage 1;
	
	systemChat ("OUTOFBOUNDS: Killing Player"); 
	if (_isInVehicle) then {
		(vehicle _character) allowDamage true;
		(vehicle _character) setDamage 1;
		systemChat ("OUTOFBOUNDS: Vehicle Destroyed"); 
	};
};