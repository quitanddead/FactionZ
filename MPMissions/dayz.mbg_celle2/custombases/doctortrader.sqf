if (isServer) then {
//Doctor Trader test
_vehicle_1000 = objNull;
if (true) then
{
  _this = createAgent ["Doctor_DZC", [8899.4492, 2131.6995, 4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1000 = _this;
  _this setDir 270;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

//MEDIC Trader
_vehicle_1 = objNull;
if (true) then
{
  _this = createVehicle ["MBG_Killhouse_1_InEditor", [8934.8418, 2072.417], [], 0, "CAN_COLLIDE"];
  _vehicle_1 = _this;
  _this setDir 92.148521;
  _this setPos [8934.8418, 2072.417];
};
_vehicle_4 = objNull;
if (true) then
{
  _this = createVehicle ["MBG_Killhouse_3_InEditor", [8945.7568, 2065.158], [], 0, "CAN_COLLIDE"];
  _vehicle_4 = _this;
  _this setDir 92.031219;
  _this setPos [8945.7568, 2065.158];
};
_vehicle_6 = objNull;
if (true) then
{
  _this = createVehicle ["MBG_Killhouse_5_InEditor", [8958.6611, 2048.1409], [], 0, "CAN_COLLIDE"];
  _vehicle_6 = _this;
  _this setDir -359.55374;
  _this setPos [8958.6611, 2048.1409];
};
_vehicle_10 = objNull;
if (true) then
{
  _this = createVehicle ["USMC_WarfareBFieldhHospital", [8964.9727, 2061.8372], [], 0, "CAN_COLLIDE"];
  _vehicle_10 = _this;
  _this setDir 91.120193;
  _this setPos [8964.9727, 2061.8372];
};
_vehicle_12 = objNull;
if (true) then
{
  _this = createVehicle ["MBG_Killhouse_3_InEditor", [8985.7197, 2065.3799], [], 0, "CAN_COLLIDE"];
  _vehicle_12 = _this;
  _this setDir -90.473;
  _this setPos [8985.7197, 2065.3799];
};
_vehicle_13 = objNull;
if (true) then
{
  _this = createVehicle ["MBG_Killhouse_1_InEditor", [8974.123, 2047.7739], [], 0, "CAN_COLLIDE"];
  _vehicle_13 = _this;
  _this setDir -89.650772;
  _this setPos [8974.123, 2047.7739];
};
};