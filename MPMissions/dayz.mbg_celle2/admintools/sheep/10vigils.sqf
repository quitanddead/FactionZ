	_wealth = player getVariable["cashMoney",0];
	_newwealth = _wealth + 10;
	player setVariable["cashMoney",_newwealth, true];
	player setVariable ["moneychanged",1,true];
	dayzPlayerSave = [player,(magazines player),true,true] ;
	publicVariableServer "dayzPlayerSave";