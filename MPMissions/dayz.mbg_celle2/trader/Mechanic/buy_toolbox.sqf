//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "ItemToolbox";
if ((Toolbox_Cost)&& !(_trading)) then {
	_trading = true;
	cutText [format[("Trade in progress."),Toolbox_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
	//check if space and add item
	_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
		_newwealth = _wealth - Toolbox_Cost;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true];
		publicVariableServer "dayzPlayerSave"; 
		sleep 1;
		_trading = false;
		cutText [format[("Bought a Toolbox."),Toolbox_Cost], "PLAIN DOWN"];
    }else{
        cutText [format["Not enough room!", Toolbox_Cost], "PLAIN DOWN"];
    };
} else {
	cutText [format[("You need %1 vigils to buy this!"),Toolbox_Cost], "PLAIN DOWN"];
};

