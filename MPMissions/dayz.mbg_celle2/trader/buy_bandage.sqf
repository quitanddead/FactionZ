//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
if ((_wealth > Bandage_Cost) && !(_trading)) then {
	_trading = true;
	cutText [format[("Trade in progress."),Bloodbag_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
	_player addMagazine "ItemBandage";
	_newwealth = _wealth - Bandage_Cost;
	_player setVariable["cashMoney",_newwealth, true];
	_player setVariable ["moneychanged",1,true]; 
	dayzPlayerSave = [_player,(magazines _player),true,true] ;
	publicVariableServer "dayzPlayerSave"; 
		//time between trades
	sleep 1;
	_trading = false;
	cutText [format[("Bought a bandage."),Bloodbag_Cost], "PLAIN DOWN"];
} else {
	cutText [format[("You need %1 vigils to buy this!"),Bandage_Cost], "PLAIN DOWN"];
};

