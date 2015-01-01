//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "ItemAntibiotic";
if ((_wealth > Antibiotic_Cost)&& !(_trading)) then {
	_trading = true;
	cutText [format[("Trade in progress."),Antibiotic_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
		_player addMagazine _item;
		_newwealth = _wealth - Antibiotic_Cost;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
			//time between trades
		sleep 1;
		_trading = false;
		cutText [format[("Bought Antibiotics."),Antibiotic_Cost], "PLAIN DOWN"];
	}else{
        cutText [format["Not enough room!", Toolbox_Cost], "PLAIN DOWN"];
    };	
} else {
	cutText [format[("You need %1 vigils to buy this!"),Axe_Cost], "PLAIN DOWN"];
};

