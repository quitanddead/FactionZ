//Hunter items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "30Rnd_9x19_UZI";
if (_wealth > A_30Rnd_9x19_UZI_Cost) then {
	_trading = true;
	titleText [format[(" \n \n Trade in progress."),A_30Rnd_9x19_UZI_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
		_player addMagazine _item;
		_newwealth = _wealth - A_30Rnd_9x19_UZI_Cost;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
		sleep 1;
		_trading = false;
		titleText [format[(" \n \n Bought 30Rnd_9x19_UZI Ammo."),A_30Rnd_9x19_UZI_Cost], "PLAIN DOWN"];
	}else{
        titleText [format[" \n \n Not enough room!", A_30Rnd_9x19_UZI_Cost], "PLAIN DOWN"];
    };	
} else {
	titleText [format[(" \n \n You need %1 vigils to buy this!"),A_30Rnd_9x19_UZI_Cost], "PLAIN DOWN"];
};

