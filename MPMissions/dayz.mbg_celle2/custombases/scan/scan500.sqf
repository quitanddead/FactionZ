_scanArea = 500;
_scancost = 10;
_wealth = player getVariable["cashMoney",0];

if(_wealth > _scancost) then{
	_newwealth = _wealth - _scancost;
	_player setVariable["cashMoney",_newwealth, true];
	_player setVariable ["moneychanged",1,true]; 
	dayzPlayerSave = [_player,(magazines _player),true,true];
	publicVariableServer "dayzPlayerSave"; 
	_closePeople = player nearEntities ["CAManBase", _scanArea];
	HumansNearby = 0;
	_counter = 0;
	{
		if ((_x isKindOf "Man" and !(_x isKindOf "zZombie_base")) && !((getPlayerUID _x) in IsInAFaction));then {
			_counter = _counter + 1;
			HumansNearby = HumansNearby + _counter;
		};
	} forEach _closePeople;
	titleText [format[("There are %1 players nearby."),_counter], "PLAIN DOWN"];
}else{
	titleText [format[("You need %1 vigils to buy this!"),_scancost], "PLAIN DOWN"];
};