//Custom Loot
#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			//"SMAW",
			//"Javelin",
			//"G36C",
			//"Stinger"
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.8;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","military"},
			{"","trash"},
			{"ItemSodaMdew","magazine"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"RH_m1911","weapon"},
			{"RH_m1911old","weapon"},
			{"Colt1911","weapon"},
			{"RH_m9","weapon"},			
			{"RH_p226","weapon"},				
			{"RH_p226s","weapon"},				
			{"RH_vz61","weapon"},			
			{"RH_python","weapon"},		
			{"RH_pp2000p","weapon"},
			{"revolver_EP1","weapon"},
			//{"RH_mk2","weapon"},				
			{"RH_tt33","weapon"},				
			{"RH_ppk","weapon"},			
			{"RH_bull","weapon"},		
			{"RH_muzi","weapon"},
			{"RH_tec9","weapon"},			
			{"RH_m93r","weapon"},
			{"DZ_Patrol_Pack_EP1","object"},
			{"DZ_Czech_Vest_Pouch","object"},
			{"DZ_ALICE_Pack_EP1","object"},
			{"WeaponHolder_ItemTent","object"},
			{"Crossbow","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_MeleeCrowbar","object"},
			{"MR43","weapon"},
			{"Skin_Survivor2_DZ","magazine"},
			{"Skin_EuroMan01_DZC","magazine"},
			{"Skin_EuroMan02_DZC","magazine"},
			{"Skin_Cameraman_DZC","magazine"},
			{"Skin_Storm_Trooper1_DZC","magazine"},
			{"Skin_Storm_Trooper2_DZC","magazine"},
			{"Skin_Storm_Trooper3_DZC","magazine"},
			{"Skin_Storm_Trooper4_DZC","magazine"},
			{"Skin_Civ_Soldier_DZC","magazine"},
			//{"Skin_Doctor_DZC","magazine"}
		};
		itemChance[] =	{
			3.50,	//Generic
			0.03,	//Military
			1.00,	//Trash
			0.01,	//Dew
			0.15,	//Watch
			0.15,	//Compass
			0.08,	//Map
			0.10,	//Flashlight
			0.07,	//Knife
			0.08,	//Matchbox
			0.02,	//RH_m1911
			0.08,	//RH_m1911old
			0.08,	//m1911 colt
			0.06,	//RH_m9
			0.03,	//RH_p226
			0.03,	//RH_p226s
			0.03,	//RH_vz61
			0.02,	//RH_python --> Fix 6 shot magazine
			0.02,	//RH_pp2000p
			0.07,	//Revolver
			//0.02,	//RH_mk2
			0.02,	//RH_tt33
			0.02,	//RH_ppk
			0.01,	//RH_bull
			0.02,	//RH_muzi
			0.02,	//RH_tec9
			0.02,	//RH_m93r
			0.10,	//Patrol Pack
			0.08,	//Vest pouch
			0.05,	//Alice pack
			0.01,
			0.01,
			0.08,
			0.06,
			0.05,
			0.07,	//MR43
			0.06,	//Skin_Survivor2_DZ
			0.04,	//Skin_EuroMan01_DZC
			0.04,	//Skin_EuroMan02_DZC
			0.04,	//Skin_Cameraman_DZC
			0.01,	//Skin_Storm_Trooper1_DZC
			0.01,	//Skin_Storm_Trooper2_DZC
			0.01,	//Skin_Storm_Trooper3_DZC
			0.01,	//Skin_Storm_Trooper4_DZC
			0.01,	//Skin_Civ_Soldier_DZC
			//0.02	//Skin_Doctor_DZC
		};	
	};
	class Estate: Default {
		zombieChance = 0.4;
		maxRoaming = 4;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.6;
		lootPos[] = {};		
		itemType[] =	{
			{"","generic"},
			{"","military"},
			{"","trash"},
			{"RH_tec9","weapon"},
			{"RH_mac10p","weapon"},
			{"RH_python","weapon"},
			{"RH_mp7","weapon"},
			{"RH_usp","weapon"},
			{"RH_uspm","weapon"},
			{"RH_mp5sd6","weapon"},
			{"RH_mp5sd6eot","weapon"},
			{"RH_mp5sd6aim","weapon"},
			{"RH_mp5sd6RFX","weapon"}, 
			{"Skin_BAF_Officer1_DZC","magazine"},	
			{"Skin_BAF_Officer2_DZC","magazine"},
			{"Skin_BAF_Officer3_DZC","magazine"}, 
			{"Skin_CZ_Officer1_DZC","magazine"},	
			{"Skin_CZ_Officer2_DZC","magazine"},
			{"Skin_CZ_Officer3_DZC","magazine"}, 
			{"Skin_GER_Officer1_DZC","magazine"},
			{"DZ_British_ACU","object"},
			{"ItemSodaMdew","magazine"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"RH_m1911","weapon"},
			{"RH_m1911old","weapon"},
			{"RH_mp5sd6g","magazine"},
			{"RH_uzig","generic"},
			{"RH_uzisd","generic"},
			//{"RH_Deagleg","weapon"},
			//{"RH_Deaglemzb","weapon"},
			{"RH_anacg","weapon"},
			{"RH_bull","weapon"}
		};			
		itemChance[] =	{
			2.00,	//"generic"
			0.15,	//"military"
			1.00,	//"trash"	
			0.01,	//"RH_tec9"
			0.01,	//RH_mac10p"
			0.01,	//RH_python
			0.03,	//RH_mp7
			0.05,	//RH_usp
			0.02,	//RH_uspm
			0.03,	//RH_mp5sd6
			0.01,	//RH_mp5sd6eot
			0.01,	//RH_mp5sd6aim
			0.01,	//RH_mp5sd6RFX
			0.01,	//Skin_BAF_Officer1_DZC
			0.01,	//Skin_BAF_Officer2_DZC
			0.01,	//Skin_BAF_Officer3_DZC
			0.01,	//Skin_CZ_Officer1_DZC
			0.01,	//Skin_CZ_Officer2_DZC
			0.01,	//Skin_CZ_Officer3_DZC
			0.01,	//Skin_GER_Officer1_DZC
			0.03,	//British ACU
			0.01,	//"ItemSodaMdew"
			0.05,	//"ItemWatch"
			0.05,	//"ItemCompass"
			0.10,	//"ItemMap"
			0.04,	//"RH_m1911"
			0.04,	//"RH_m1911old"
			0.01,	//"RH_mp5sd6g"
			0.01,	//"RH_uzig"
			0.01,	//"RH_uzisd"
			//0.01,	//"RH_Deagleg"
			//0.01,	//"RH_Deaglemzb"
			0.01,	//"RH_anacg"
			0.01	//"RH_bull"
		};			

	};
	class Office: Residential {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","trash"},
			{"WeaponHolder_PartGeneric","object"},
			{"WeaponHolder_PartWheel","object"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartEngine","object"},
			{"WeaponHolder_PartGlass","object"},
			{"WeaponHolder_PartVRotor","object"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"WeaponHolder_ItemHatchet","object"},
			{"ItemKnife","military"},
			{"ItemToolbox","weapon"},
			{"ItemWire","magazine"},
			{"ItemTankTrap","magazine"},
			{"ItemSandbag","magazine"}			
		};
		itemChance[] =	{
			0.15,
			0.25,
			0.01,
			0.06,
			0.02,
			0.03,
			0.04,
			0.01,
			0.04,
			0.11,
			0.07,
			0.06,
			0.01,
			0.04,
			0.05
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.8;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","generic"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"MR43","weapon"},
			{"Crossbow","weapon"},
			//{"RH_m14ebr","weapon"},
			//{"RH_mk14","weapon"},
			//{"RH_m4cmk","weapon"},
			//{"RH_m4cmkaim","weapon"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"Winchester1866","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemHatchet","object"},
			{"TrapBear","magazine"},
			{"RH_python","weapon"},
			{"RH_anac","weapon"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"Skin_Sniper1_DZC","magazine"},
			{"Skin_Camo1_DZC","magazine"},
			{"Skin_Camo2_DZC","magazine"},
			//{"Skin_Camo3_DZC","magazine"}
		};
		itemChance[] =	{
			0.40,   //{"","trash"},
			0.50,   //{"","generic"},
			0.03,   //{"WeaponHolder_ItemJerrycan","object"},
			0.14,   //{"MR43","weapon"},
			0.14,   //{"Crossbow","weapon"},
			//0.02,   ////{"RH_m14ebr","weapon"},
			//0.02,	////{"RH_mk14","weapon"},
			//0.04,	//{"RH_m4cmk","weapon"},
			//0.03,	//{"RH_m4cmkaim","weapon"},
			0.02,   //{"huntingrifle","weapon"},
			0.12,   //{"LeeEnfield","weapon"},
			0.08,   //{"Winchester1866","weapon"},
			0.01,   //{"PartWoodPile","magazine"},
			0.06,	//{"WeaponHolder_ItemHatchet","object"},
			0.05,	//{"TrapBear","magazine"},
			0.03,	//{"RH_python","weapon"},
			0.01,	//{"RH_anac","weapon"},
			0.03,	//{"DZ_Assault_Pack_EP1","object"},
			0.07,	//{"DZ_TK_Assault_Pack_EP1","object"},
			0.01,	//{"Skin_Sniper1_DZC","magazine"},
			0.03,	//{"Skin_Camo1_DZC","magazine"},
			0.02,	//{"Skin_Camo2_DZC","magazine"},
			//0.01	//{"Skin_Camo3_DZC","magazine"}
		};
};
class Hunting: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","generic"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"MR43","weapon"},
			{"Crossbow","weapon"},
			//{"RH_m14ebr","weapon"},
			//{"RH_mk14","weapon"},
			//{"RH_m4cmk","weapon"},
			//{"RH_m4cmkaim","weapon"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"Winchester1866","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemHatchet","object"},
			{"TrapBear","magazine"},
			{"RH_python","weapon"},
			{"RH_anac","weapon"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"Skin_Sniper1_DZC","magazine"},
			{"Skin_Camo1_DZC","magazine"},
			{"Skin_Camo2_DZC","magazine"},
			//{"Skin_Camo3_DZC","magazine"}
		};
		itemChance[] =	{
			0.40,   //{"","trash"},
			0.50,   //{"","generic"},
			0.03,   //{"WeaponHolder_ItemJerrycan","object"},
			0.14,   //{"MR43","weapon"},
			0.14,   //{"Crossbow","weapon"},
			//0.02,   ////{"RH_m14ebr","weapon"},
			//0.02,	////{"RH_mk14","weapon"},
			//0.04,	//{"RH_m4cmk","weapon"},
			//0.03,	//{"RH_m4cmkaim","weapon"},
			0.02,   //{"huntingrifle","weapon"},
			0.12,   //{"LeeEnfield","weapon"},
			0.08,   //{"Winchester1866","weapon"},
			0.01,   //{"PartWoodPile","magazine"},
			0.06,	//{"WeaponHolder_ItemHatchet","object"},
			0.05,	//{"TrapBear","magazine"},
			0.03,	//{"RH_python","weapon"},
			0.01,	//{"RH_anac","weapon"},
			0.03,	//{"DZ_Assault_Pack_EP1","object"},
			0.07,	//{"DZ_TK_Assault_Pack_EP1","object"},
			0.01,	//{"Skin_Sniper1_DZC","magazine"},
			0.03,	//{"Skin_Camo1_DZC","magazine"},
			0.02,	//{"Skin_Camo2_DZC","magazine"},
			//0.01	////{"Skin_Camo3_DZC","magazine"}
		};
};
	class Supermarket: Default {
		lootChance = 0.9;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_survivor","z_Hero"};
		itemType[] = {
			{"","food"},
			{"","trash"},
			{"","generic"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"RH_usp","weapon"},
			{"Colt1911","weapon"},
			//{"RH_mk22","weapon"},
			//{"RH_mk22v","weapon"},
			{"RH_m9","weapon"},			
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
			{"RH_g19t","weapon"},			
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemTent","object"},
			{"Crossbow","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"MR43","weapon"},
			//{"RH_Deagles","weapon"},
			{"Skin_Sniper3_DZC","magazine"},
			{"Skin_Snow_Trooper2_DZC","magazine"}, 
			{"Skin_Hazmat_Red_DZC","magazine"},	
			{"Skin_Storm_Trooper1_DZC","magazine"},
			{"DZ_Patrol_Pack_EP1","object"},
			{"DZ_VestPouch_EP1","object"},
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_CivilBackpack_EP1","object"}
		};
		itemChance[] =	{
			0.20,	//food
			0.50,	//trash
			0.50,	//Generic
			0.15,	//watch
			0.10,	//compass
			0.10,	//map
			0.02, //usp
			0.04, //colt
			//0.02,
			//0.02,
			0.02,
			0.05,			
			0.06,
			0.05,
			0.10,
			0.03,
			0.04,
			0.01,
			0.01,
			0.05,	//tent
			0.03,	//Crossbow
			0.05,	//Bino
			0.02,	//wood
			0.01,
			//0.01,	//RH_Deagles
			0.01,
			0.01,
			0.01,
			0.01,
			0.04,
			0.04,
			0.03,
			0.01
		};
	};
	class HeliCrash: Default {
		zombieChance = 0;
		maxRoaming = 2;
		zombieClass[] = {""};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			//{"FN_FAL","weapon"},
			//{"G36_C_SD_Eotech","weapon"}, 
			//{"M14_EP1","weapon"},
			//{"FN_FAL_ANPVS4","weapon"},
			//{"Mk_48_DZ","weapon"},
			//{"MG36","weapon"},
			{"","military"},
			//{"","medical"},
			{"MedBox0","object"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},			
			{"RH_m9c","weapon"},
			{"RH_m9csd","weapon"}, 
			{"RH_uspm","weapon"},
			{"RH_usp","weapon"},
			{"RH_uspsd","weapon"},
			{"RH_g17sd","weapon"},
			{"RH_g18","weapon"},
			{"RH_mp7","weapon"},
			{"RH_mp7aim","weapon"},
			{"RH_mp7eot","weapon"}, 
			{"RH_mp7sd","weapon"},
			{"RH_mp7sdaim","weapon"},
			{"RH_mp7sdeot","weapon"},
			{"RH_mp7p","weapon"},
			{"RH_mp5sd6","weapon"},
			{"RH_mp5sd6eot","weapon"},
			{"RH_mp5sd6aim","weapon"},
			{"RH_mp5sd6RFX","weapon"}, 
			{"RH_m1911sd","weapon"},
			{"DZ_British_ACU","object"}, //Backpacks
			{"DZ_Backpack_EP1","object"}
		};
		itemChance[] =	{
			//0.02,		//"FN_FAL"
			//0.02,		//"G36_C_SD_Eotech"
			//0.05,		//"M14_EP1"
			//0.02,		//"FN_FAL_ANPVS4"
			//0.03,		//"Mk_48_DZ"
			//0.05,		//"M249_DZ"
			1.00,			//"military"
			//0.50,		//"medical"
			0.10,		//"MedBox0"
			0.10,
			0.10,
			0.04,	//RH_m9c
			0.02,	//RH_m9csd
			0.02,	//RH_uspm
			0.04,	//RH_usp
			0.02,	//RH_uspsd
			0.02,	//RH_g17sd 
			0.05,	//RH_g18  --->Fix 33rnd magazine
			0.05,	//RH_mp7
			0.02,	//RH_mp7aim
			0.03,	//RH_mp7eot
			0.02,	//RH_mp7sd
			0.01,	//RH_mp7sdaim
			0.01,	//RH_mp7sdeot
			0.03,	//RH_mp7p
			0.06,	//RH_mp5sd6
			0.04,	//RH_mp5sd6eot
			0.04,	//RH_mp5sd6aim
			0.02,	//RH_mp5sd6RFX
			0.01,	//RH_m1911sd
			0.04,	//Backpacks
			0.02
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor","z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			//{"","trash"},
			{"","hospital"},
			{"MedBox0","object"},
			//{"Skin_Doctor_DZC","magazine"},
			//{"Skin_Hazmat_Black_DZC","magazine"},
			//{"Skin_Hazmat_Red_DZC","magazine"},
			//{"Skin_Hazmat_Yellow_DZC","magazine"},
			//{"Skin_Hazmat_Olive_DZC","magazine"},
			//{"Skin_HazmatVest_Red_DZC","magazine"},
			//{"Skin_HazmatVest_Yellow_DZC","magazine"},
			//{"Skin_HazmatVest_Olive_DZC","magazine"}			
		};
		itemChance[] =	{
			//0.25,
			0.75,
			0.05,
			//0.10,	//Skin_Doctor_DZC
			//0.01,	//Skin_Hazmat_Black_DZC
			//0.02,	//Skin_Hazmat_Red_DZC
			//0.02,	//Skin_Hazmat_Yellow_DZC
			//0.01,	//Skin_Hazmat_Olive_DZC
			//0.01,	//Skin_HazmatVest_Red_DZC
			//0.01,	//Skin_HazmatVest_Yellow_DZC
			//0.01,	//Skin_HazmatVest_Olive_DZC
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier","z_soldier_heavy","z_soldier","z_soldier_heavy","z_policeman","z_policeman"};
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"RH_m4c","weapon"},
			//{"RH_m4cs","weapon"},
			//{"RH_m4cmk","weapon"},
			//{"RH_m4caim","weapon"},
			//{"RH_m4cacog","weapon"},
			//{"RH_m4ceotech","weapon"},
			//{"RH_m4ct","weapon"},
			//{"RH_m4ctsd","weapon"},
			//{"RH_m4cgl","weapon"},
			//{"RH_m4ctsdgleotech","weapon"},
			{"M9","weapon"},
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M9SD","weapon"},
			{"M4A1_Aim","weapon"},
			//{"G36K","weapon"},
			{"G36C","weapon"},
			//{"G36K","weapon"},
			//{"RH_m4ctsdeotech","weapon"},
			{"M1014","weapon"},
			//{"M4A1","weapon"},
			//{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			//{"M4A3_CCO_EP1","weapon"},
			//{"RH_P90","weapon"},
			{"RH_P90i","weapon"},
			//{"RH_P90aim","weapon"},
			//{"RH_P90eot","weapon"},
			//{"RH_P90sd","weapon"},
			//{"RH_p90isd","weapon"},
			//{"RH_p90sdaim","weapon"},
			//{"RH_p90sdeot","weapon"},
			{"RH_UMP","weapon"},
			{"RH_umpaim","weapon"},
			{"RH_umpeot","weapon"},
			{"RH_umpRFX","weapon"},
			{"RH_umpsd","weapon"},
			{"RH_umpsdaim","weapon"},
			{"RH_umpsdeot","weapon"},
			{"RH_umpsdRFX","weapon"},
			//{"RH_HK53","weapon"},
			//{"RH_HK53aim","weapon"},
			//{"RH_HK53eot","weapon"},
			//{"RH_HK53RFX","weapon"},
			{"RH_mp7p","weapon"},			
			//{"RH_Deaglem ","weapon"},
			//{"RH_Deaglemz","weapon"},
			{"RH_uspm","weapon"},
			{"RH_usp","weapon"},
			{"RH_uspsd","weapon"},
			{"RH_g17sd","weapon"},	
			{"RH_m1911sd","weapon"},
			{"RH_mp5sd6RFX","weapon"},
			{"RH_mp5sd6eot","weapon"},
			{"RH_m9sd","weapon"},	
			//{"RH_m14ebr","weapon"},
			//{"RH_m14ebrsp","weapon"},	
			//{"RH_m14ebrgc","weapon"},
			//{"RH_m14ebr_sd","weapon"},
			//{"RH_m14ebrsp_sd","weapon"},
			//{"RH_m14ebrgc_sd","weapon"},
			//Items
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"DZ_Patrol_Pack_EP1","object"}, //Backpacks
			{"DZ_Assault_Pack_EP1","object"},		
			{"DZ_TK_Assault_Pack_EP1","object"}, //Backpacks
			{"DZ_British_ACU","object"},				
			//Tools
			{"ItemEtool","weapon"},
			{"ItemSandbag","magazine"},
			//Clothing
			{"Skin_BAF_Officer1_DZC","magazine"},	
			{"Skin_BAF_Officer2_DZC","magazine"},
			{"Skin_BAF_Officer3_DZC","magazine"}, 
			{"Skin_CZ_Officer1_DZC","magazine"},	
			{"Skin_CZ_Officer2_DZC","magazine"},
			{"Skin_CZ_Officer3_DZC","magazine"}, 
			{"Skin_GER_Officer1_DZC","magazine"}	
		};
		itemChance[] =	{
			0.50,	//medical
			1.00,	//generic
			2.50,	//military	
			//0.01,   //RH_m4c
			//0.01,   //RH_m4cs
			//0.01,   //RH_m4cmk
			//0.01,	//RH_m4caim
			//0.01,   //RH_m4cacog
			//0.01,	//RH_m4ceotech
			//0.01,   //RH_m4ct
			//0.01,	//RH_m4ctsd
			//0.01,   //RH_m4cgl
			//0.01,   //RH_m4ctsdgleotech
			0.05,   //M9
			0.05,   //M16A2
			0.01,   //M16A2GL
			0.05,   //M9SD
			0.08,   //M4A1_Aim
			//0.05,   //G36K
			0.05,   //G36C
			//0.01,   //G36K
			//0.06,   //RH_m4ctsdeotech
			0.02,   //M1014
			//0.01,   //M4A1
			//0.05,   //M14_EP1
			0.03,   //UZI_EP1
			0.02,   //Remington870_lamp
			0.05,   //glock17_EP1
			0.02,   //MP5A5
			0.01,   //MP5SD
			0.01,	//M4A3_CCO_EP1
			//0.02,	//RH_P90
			0.03,	//RH_P90i
			//0.01,	//RH_P90aim
			//0.01,	//RH_P90eot
			//0.02,	//RH_P90sd
			//0.03,	//RH_p90isd
			//0.01,	//RH_p90sdaim
			//0.01,	//RH_p90sdeot
			0.02,	//RH_UMP
			0.01,	//RH_umpaim
			0.01,	//RH_umpeot
			0.01,	//RH_umpRFX
			0.02,	//RH_umpsd
			0.01,	//RH_umpsdaim
			0.01,	//RH_umpsdeot
			0.01,	//RH_umpsdRFX
			//0.04,	//RH_HK53
			//0.02,	//RH_HK53aim
			//0.02,	//RH_HK53eot
			//0.02,	//RH_HK53RFX
			0.03,	//RH_mp7p
			//0.02,	//RH_Deaglem 
			//0.02,	//RH_Deaglemz
			0.01,	//RH_uspm
			0.05,	//RH_usp
			0.03,	//RH_uspsd
			0.03,	//RH_g17sd
			0.02,	//RH_m1911sd
			0.04,	//RH_mp5sd6RFX
			0.04,	//RH_mp5sd6eot
			0.02,	//RH_m9sd
			//0.02,	//"RH_m14ebr"
			//0.01,	//"RH_m14ebrsp"
			//0.01,	//"RH_m14ebrgc"
			//0.01,	//"RH_m14ebr_sd",
			//0.01,	//"RH_m14ebrsp_sd"
			//0.01,	//"RH_m14ebrgc_sd"
			//Items
			0.18,
			0.15,
			0.10,
			0.01,
			0.15,
			0.08,
			0.06,
			0.03,
			0.02,
			//Tools
			0.05,
			0.02,
			//Clothing
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.05
		};
	};
	class Barracks: Default {
		zombieChance = 0.4;
		minRoaming = 3;
		maxRoaming = 8;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier","z_soldier_heavy","z_soldier","z_soldier_heavy","z_policeman","z_policeman","z_Bandit"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"ItemGPS","generic"},
			{"ItemCompass","generic"},
			{"ItemKnife","military"},
			{"ItemFlashlightRed","military"},			
			{"ItemFlashlight","generic"},			
			{"","trash"},
			{"","military"},
		//Throwaway	
			{"M16A2","weapon"},
			{"M1014","weapon"},
			{"M16A2GL","weapon"},
			{"RH_m1911","weapon"},
			{"RH_m1911old","weapon"},
			{"RH_mp5kp","weapon"},
			{"RH_m9","weapon"},
			{"RH_g17","weapon"},
			{"RH_mp5a4","weapon"},
			{"RH_mp5a4aim","weapon"},
			{"RH_mp5a4eot","weapon"},
			{"RH_mp5a4RFX","weapon"},
			{"RH_mp5a5","weapon"},
			{"RH_mp5a5aim","weapon"},			
			{"RH_mp5a5eot","weapon"},
			{"RH_mp5a5RFX","weapon"},
			{"RH_mp5a5eod ","weapon"},
			{"RH_mp5a5eodaim","weapon"},
			{"RH_mp5a5eodeot","weapon"},
			{"RH_mp5a5eodRFX","weapon"},
			{"RH_mp5kpdw","weapon"},
			{"RH_mp5kpdwaim","weapon"},
			{"RH_mp5kpdweot","weapon"},
			{"RH_mp5kpdwRFX","weapon"},
			//{"RH_fmg9","weapon"},
			{"RH_tmpeot","weapon"},
			{"RH_uzi","weapon"},
		//Midtech
			//{"RH_M4CEOTECH","weapon"},
			//{"RH_M4CAIM","weapon"},		
			//{"RH_M4CS","weapon"},		
			//{"RH_M4CSAIM","weapon"},		
			//{"RH_M4CMKAIM","weapon"},		
			{"G36C","weapon"},
			//{"RH_PDR","weapon"},
			//{"RH_pdraim","weapon"},
			//{"RH_pdreot","weapon"},
			//{"RH_P90","weapon"},
			{"RH_P90i","weapon"},
			//{"RH_P90aim","weapon"},
			//{"RH_P90eot","weapon"},			
			//{"RH_HK53","weapon"},
			//{"RH_HK53aim","weapon"},			
			//{"RH_HK53eot ","weapon"},
			//{"RH_HK53RFX","weapon"},
			//{"RH_m4cmk","weapon"},
			//{"Sa58P_EP1","weapon"},
			//{"Sa58V_EP1","weapon"},
			{"DZ_Patrol_Pack_EP1","object"}, //Backpacks
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_British_ACU","object"},
		//Rare
			//{"RH_M60E4","weapon"},
			//{"RH_MK43","weapon"},			
			{"RH_mp5sd6RFX","weapon"},
			{"RH_m9sd","weapon"},
			//{"RH_deagle","weapon"},
			{"RH_tmpsd","weapon"},
			{"RH_tmpsdaim","weapon"},
			{"RH_tmpsdeot","weapon"},			
			{"RH_uzisd","weapon"},
			//{"RH_P90sd","weapon"},
			//{"RH_p90isd","weapon"},
			//{"RH_p90sdaim","weapon"},
			//{"RH_p90sdeot","weapon"},
			//{"RH_mk22sd","weapon"},
			//{"RH_mk22vsd","weapon"},
		//Clothing
			{"Skin_Soldier1_STD_DZC","magazine"}, 
			{"Skin_Soldier2_STD_DZC","magazine"},	
			{"Skin_Soldier3_STD_DZC","magazine"},
			{"Skin_Soldier1_GL_DZC","magazine"}, 
			{"Skin_Soldier2_GL_DZC","magazine"},	
			{"Skin_Soldier3_GL_DZC","magazine"},
			{"Skin_Soldier1_AT_DZC","magazine"}, 
			{"Skin_Soldier2_AT_DZC","magazine"},	
			{"Skin_Soldier3_AT_DZC","magazine"},
			{"Skin_Soldier1_SL_DZC","magazine"}, 
			{"Skin_Soldier2_SL_DZC","magazine"},	
			//{"Skin_Soldier3_SL_DZC","magazine"}
		};
		itemChance[] =	{
			0.02,
			0.10,
			0.10,
			0.08,
			0.12,
			0.40,
			0.50,
		//Throwaway guns
			0.07,	//M16A2
			0.06,	//M1014
			0.06,	//M16A2GL
			0.08,	//RH_m1911
			0.08,	//RH_m1911old
			0.03,	//RH_mp5kp
			0.08,	//RH_m9
			0.08,	//RH_g17
			0.08,	//RH_mp5a4
			0.02,	//RH_mp5a4aim
			0.02,	//RH_mp5a4eot
			0.02,	//RH_mp5a4RFX
			0.06,	//RH_mp5a5
			0.01,	//RH_mp5a5aim
			0.01,	//RH_mp5a5eot
			0.01,	//RH_mp5a5RFX
			0.03,	//RH_mp5a5eod 
			0.01,	//RH_mp5a5eodaim
			0.01,	//RH_mp5a5eodeot
			0.01,	//RH_mp5a5eodRFX
			0.06,	//RH_mp5kpdw
			0.01,	//RH_mp5kpdwaim
			0.01,	//RH_mp5kpdweot
			0.01,	//RH_mp5kpdwRFX
			//0.06,	//RH_fmg9
			0.04,	//RH_tmpeot
			0.03,	//RH_uzi
		//MidTech
			//0.01,	//RH_M4CEOTECH
			//0.02,	//RH_M4CAIM
			//0.04,	//RH_M4CS
			//0.02,	//RH_M4CSAIM
			//0.01,	//RH_M4CMKAIM
			0.06,	//G36C			
			//0.05,	//RH_PDR
			//0.02,	//RH_pdraim
			//0.02,	//RH_pdreot
			//0.02,	//RH_P90
			0.04,	//RH_P90i
			//0.02,	//RH_P90aim
			//0.02,	//RH_P90eot
			//0.06,	//RH_HK53
			//0.02,	//RH_HK53aim
			//0.02,	//RH_HK53eot
			//0.02,	//RH_HK53RFX
			//0.06,	//MasterKey
			//0.04,	//Sa58P_EP1
			//0.04,	//Sa58V_EP1
			0.10,	//DZ_Patrol_Pack_EP1
			0.07,	//DZ_Assault_Pack_EP1
			0.04,	//DZ_British_ACU
		//Rare
			//0.01,	//RH_M60E4
			//0.01,	//RH_MK43
			0.02,	//RH_mp5sd6RFX
			0.02,	//RH_m9sd
			//0.02,	//RH_deagle
			0.01,	//RH_tmpsd
			0.01,	//RH_tmpsdaim  
			0.01,	//RH_tmpsdeot
			0.01,	//RH_uzisd			
			//0.005,	//RH_P90sd
			//0.01,	//RH_p90isd
			//0.005,	//RH_p90sdaim
			//0.005,	//RH_p90sdeot
			//0.01,	//mk22sd
			//0.01,	//mk22vsd
			//Clothing
			0.02,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.02,
			0.01,
			//0.01,
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy","z_soldier_heavy","z_soldier_heavy","z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"","medical"},
			{"","generic"},
			{"","military"},			
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			//{"MG36","weapon"},
			{"M9SD","weapon"},
			//{"RH_m14ebrgc","weapon"},			
			{"G36C","weapon"},
			//{"G36K","weapon"},
			//{"M4A1_Aim","weapon"},
			//{"M24","weapon"},
			//{"SVD_CAMO","weapon"},
			{"M1014","weapon"},
			//{"M4A1","weapon"},
			//{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"glock17_EP1","weapon"},
			//{"M4A1_AIM_SD_camo","weapon"},
			//{"M16A4_ACG","weapon"},
			//{"M4A1_HWS_GL_camo","weapon"},
			//{"RH_M4C","weapon"},
			//{"RH_M4CSAIM","weapon"},
			//{"RH_M4CSACOG","weapon"},
			//{"RH_M4CSEOTECH","weapon"},
			//{"RH_M4CT","weapon"},
			//{"RH_M4CT_F","weapon"},
			//{"RH_M14EBR","weapon"},
			//{"RH_M14EBRSP","weapon"},
			//{"RH_M14EBRGC","weapon"},
			//{"RH_M4CTSD","weapon"},
			//{"RH_M4CTSD_F","weapon"},			
			//{"Mk_48_DZ","weapon"},
			//{"M240_DZ","weapon"},
			//{"M4A3_CCO_EP1","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"Binocular_Vector","military"},
			//{"RH_mk21a5","weapon"},
			//{"RH_mk21a5sd","weapon"},
			//{"RH_mk14","weapon"},
			//{"RH_mk14aim","weapon"},
			//{"RH_mk14eotech","weapon"},
			//{"RH_mk14sd","weapon"},
			//{"RH_mk14sdaim","weapon"},
			//{"RH_mk14sdeotech","weapon"},
			//{"RH_m60e4eotech","weapon"},
			//{"RH_mk43","weapon"},
			//{"RH_m4cmkacog","weapon"},			
			//{"RH_m4cmkeotech","weapon"},
		//Backpacks
			{"DZ_Patrol_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_British_ACU","object"},	
			{"DZ_Backpack_EP1","object"},
			{"PipeBomb","magazine"},
			//{"Skin_CIV_Pilot1_DZC","magazine"},
			{"Skin_Soldier1_DZC","magazine"}, 
			{"Skin_Soldier2_DZC","magazine"}, 
			{"Skin_Soldier3_DZC","magazine"},	
			{"Skin_Soldier2_DZC","magazine"},
			{"Skin_Soldier1_SF_DZC","magazine"},
			{"Skin_Soldier2_SF_DZC","magazine"}, 
			{"Skin_Soldier3_SF_DZC","magazine"},
			{"Skin_Soldier2_SF_DZC","magazine"}, 
			{"Skin_Soldier3_SF_DZC","magazine"}
		};
		itemChance[] =	{
			0.30,	//Medical
			0.35,	//generic
			0.50,	//military
			0.10, //{"M16A2","weapon"
			0.05, //{"M16A2GL","weapo
			//0.01, //{"MG36","weapon"}
			0.02,	//{"M9SD","weapon"},
			//0.02,	//{"RH_m14ebrgc","w
			0.10,	//{"G36C","weapon"}
			//0.02,	//{"G36K","weapon"}
			//0.10,	//{"M4A1_Aim","weap
			//0.01,	//{"M24","weapon"},
			//0.01,   //{"SVD_CAMO","weap
			0.02,	//{"M1014","weapon"},
			//0.10,	//{"M4A1","weapon"}
			//0.03,	//{"M14_EP1","weapon"
			0.02,	//{"UZI_EP1","weapon"
			0.01, 	//{"glock17_EP1","wea
			//0.20, //{"M4A1_AIM_SD_camo
			0.04, //{"M16A4_ACG","wea
			//0.05, //{"M4A1_HWS_GL_cam
			//0.02, //{"RH_M4C","weapon
			//0.02,	//{"RH_M4CSAIM","we
			//0.01,	//{"RH_M4CSACOG","w
			//0.01,	//{"RH_M4CSEOTECH",
			//0.04,	//{"RH_M4CT","weapo
			//0.03,	//{"RH_M4CT_F","wea
			//0.02,	//{"RH_M14EBR","wea
			//0.01,	//{"RH_M14EBRSP","w
			//0.01,	//{"RH_M14EBRGC","w
			//0.01,	//{"RH_M4CTSD","wea
			//0.01,	//{"RH_M4CTSD_F","w			
			//0.01,	//{"Mk_48_DZ","weap
			//0.01,	//{"M240_DZ","weapo
			//0.08,   //{"M4A3_CCO_EP1","we
			0.10,	//{"Binocular","weapo
			0.08,	//{"ItemFlashlightReded
			0.15,	//{"ItemKnife","milit
			0.05,	//{"ItemGPS","weapon"
			0.15,	//{"ItemMap","militar
			0.01,   //{"Binocular_Vector"
			//0.02,	//{"RH_mk21a5","wea
			//0.01,	//{"RH_mk21a5sd","w
			//0.03,	//{"RH_mk14","weapo
			//0.02,	//{"RH_mk14aim","we
			//0.02,	//{"RH_mk14eotech",
			//0.02,	//{"RH_mk14sd","wea
			//0.01,	//{"RH_mk14sdaim","
			//0.01,	//{"RH_mk14sdeotechh"
			//0.01,	//{"RH_m60e4eotech"
			//0.01,	//{"RH_mk43","weapo
			//0.03,	//{"RH_m4cmkacog","
			//0.03,	//{"RH_m4cmkeotech"
		//Backpacks
			0.08,
			0.06,
			0.05,
			0.01,
			0.001,	//Pipebomb
			//0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01
		};
	};
	class Church: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};
	//Pomme Crashes
	class MerlinWreck_DZC: Default {
		zombieClass[] = {"z_pilot_BAF","z_soldier1_baf","z_soldier2_baf"};
		zombieChance = 0;
		maxRoaming = 5;
		lootChance = 0.8;
		lootPos[] = {};
		itemType[] =	{
		{"","military"}, 
		//{"","trash"}, 
		//{"", "medical"}, 
		{"ItemMap","weapon"}, 
		{"ItemCompass", "generic"}, 
		{"RH_browninghp","weapon"},		//Pistol
		{"RH_p226s","weapon"}, //Pistol
		{"RH_g17sd","weapon"}, //Pistol
		{"M1014","weapon"}, 
		//{"FN_FAL","weapon"}, 
		{"RH_mp5kpdwRFX","weapon"}, 	//HK
		//{"FN_FAL_ANPVS4","weapon"}, 	//NVG FAL
		//{"MG36","weapon"},
		//{"BAF_L85A2_UGL_Holo","weapon"}, 	
		//{"BAF_L86A2_ACOG","weapon"}, 
		//{"G36_C_SD_Eotech","weapon"}, 
		//{"RH_M60E4","weapon"}, 
		//{"RH_M60E4_EOTECH","weapon"}, 	
		{"WeaponHolder_PartGeneric", "object"}, 
		{"WeaponHolder_PartVRotor", "object"}, 
		{"ItemGPS","weapon"}, 
		{"Skin_BAF_Pilot1_DZC","magazine"},
		{"Skin_BAF_Pilot2_DZC","magazine"}, 
		{"Skin_BAF_Pilot3_DZC","magazine"},	
		{"Skin_BAF_Heavy1_DZC","magazine"},
		{"Skin_BAF_Heavy3_DZC","magazine"}, 
		{"Skin_Soldier3_STD_DZC","magazine"},
		{"Skin_Soldier1_STD_DZC","magazine"}, 
		{"Skin_Soldier2_STD_DZC","magazine"},	
		{"DZ_British_ACU","object"}, 
		{"DZ_Backpack_EP1","object"}
		};
		itemChance[] =	{
			1.00,	//military
			//0.40,	//trash
			//0.20,	//medical
			0.10,	//ItemMap
			0.15,	//ItemCompass
			0.15,	//RH_browninghp
			0.10,	//RH_p226s
			0.02,	//RH_g17sd 
			0.06,  	//M1014
			//0.08, 	//FN_FAL
			0.07, 	//RH_mp5kpdwRFX
			//0.03,	//FN_FAL_ANPVS4
			//0.05, 	//MG36
			//0.05, 	//BAF_L85A2_UGL_H
			//0.03,	//BAF_L86A2_ACOG
			//0.03,	//G36_C_SD_Eotech
			//0.01,	//RH_M60E4
			//0.003,	//RH_M60E4_EOTECH
			0.10,	//Scrap
			0.03,	//Rotor
			0.05,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.02,
			0.02,
			0.06,
			0.01,	//Equals 1.0
		};
	};
	class Ch47Wreck_DZC: MerlinWreck_DZC {};	
	//Yankee Crashes
	class UH1Wreck_DZC: Default {
		zombieClass[] = {"z_pilot_USA","z_soldier1_USA","z_soldier2_USA"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
		itemType[] =	{
		{"","military"}, 
		//{"","trash"}, 
		//{"", "medical"}, 
		{"ItemMap","weapon"}, 
		{"ItemCompass", "generic"}, 
		{"RH_p226","weapon"},
		{"RH_m9csd","weapon"},
		//{"RH_Deaglem","weapon"}, 
		{"RH_m1911sd","weapon"},			
		{"M1014","weapon"},
		{"M16A4_ACOG","weapon"},
		{"M16A4_ACG_GL","weapon"}, 
		{"RH_SCARL_AIM","weapon"}, 
		{"RH_SCARLB_AIM","weapon"}, 
		//{"M4SPR","weapon"},
		//{"RH_M14EBRSP","weapon"},	
		{"M40A3","weapon"},
		{"RH_SCARL_MK4","weapon"},				//Scar
		//{"Mk_48_DZ","weapon"}, 
		{"WeaponHolder_PartGeneric", "object"}, 
		{"WeaponHolder_PartVRotor", "object"}, 
		{"ItemGPS","weapon"}, 
		{"Skin_US_Pilot1_DZC","magazine"},
		//{"Skin_Soldier3_SL_DZC","magazine"}, 
		{"Skin_Soldier3_AT_DZC","magazine"}, 
		{"Skin_Soldier1_DZC","magazine"},	
		{"Skin_Soldier2_DZC","magazine"},
		{"Skin_HazmatVest_Black_DZC","magazine"},
		{"Skin_US_Heavy1_DZC","magazine"}, 
		{"Skin_US_Heavy2_DZC","magazine"},	
		{"DZ_Assault_Pack_EP1","object"}, 
		{"DZ_Backpack_EP1","object"}
		};
		itemChance[] =	{
		1.00,	//military
		//0.40,	//trash
		//0.20,	//medical
		0.10,	//ItemMap
		0.15,	//ItemCompass
		0.15,	//RH_p226
		0.02,	//RH_m9csd
		//0.02,	//RH_Deaglem
		0.01,	//RH_m1911sd
		0.04,   //M1014
		0.10,   //M16A4_ACOG
		0.05,   //M16A4_ACG_GL
		0.05,	//RH_SCARL_AIM
		0.05,   //RH_SCARLB_AIM
		//0.03,   //M4SPR
		//0.04,   //RH_M14EBRSP
		0.02,   //M40A3
		0.01,   //RH_SCARL_MK4
		//0.01,   //Mk_48_DZ
		0.10,	//Scrap
		0.03,	//Rotor
		0.04,
		0.05,
		//0.04,	//Skin_Soldier3_SL_DZC
		0.04,
		0.05,	//Skin_Soldier1_DZC
		0.05,
		0.01,	//Skin_HazmatVest_Black_DZC
		0.02,
		0.02,	//Skin_US_Heavy2_DZC
		0.06,
		0.02	//DZ_Backpack_EP1
		};
	};
	class C130Wreck_DZC: UH1Wreck_DZC {};	
	//German Crashes
	class UH60Wreck_DZC: Default {
		zombieClass[] = {"z_pilot_GER","z_soldier1_GER","z_soldier2_GER"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
		itemType[] =	{
			{"","military"}, 
			//{"","trash"}, 
			//{"", "medical"}, 
			{"ItemMap","weapon"}, 
			{"ItemCompass", "generic"}, 
			{"RH_g19t","weapon"}, 
			{"RH_uspm","weapon"}, //Pistol
			{"RH_tt33","weapon"}, //Pistol
			{"Remington870_lamp","weapon"}, 
			{"RH_mp7aim","weapon"},
			//{"G36K","weapon"}, 
			{"RH_ump","weapon"},	
			//{"RH_xm8dc","weapon"},
			//{"G36a_CAMO","weapon"}, 
			{"RH_mp7RFX","weapon"}, 		
			{"RH_mp7sdeot","weapon"}, 
			//{"RH_MK43","weapon"},	
			{"WeaponHolder_PartGeneric", "object"}, 
			{"WeaponHolder_PartVRotor", "object"}, 
			{"RH_g19","weapon"}, 
			{"ItemGPS","weapon"}, 
			//{"Skin_CIV_Pilot1_DZC","magazine"},
			{"Skin_Snow_Trooper1_DZC","magazine"},
			{"Skin_Snow_Trooper2_DZC","magazine"}, 
			{"Skin_GER_Officer1_DZC","magazine"},	
			{"Skin_HazmatVest_Black_DZC","magazine"},
			{"Skin_Soldier1_GL_DZC","magazine"}, 
			{"Skin_Soldier2_GL_DZC","magazine"},	
			{"DZ_Czech_Vest_Pouch","object"}, //Vest Pouch
			{"DZ_CivilBackpack_EP1","object"} //Backpack
		};
		itemChance[] =	{
			1.00,	//military
			//0.40,	//trash
			//0.20,	//medical
			0.10,	//ItemMap
			0.15,	//ItemCompass
			0.15,	//RH_g19t
			0.05,	//RH_uspm
			0.10,	//RH_tt33
			0.02,   //Remington870_lamp
			0.05,   //RH_mp7aim
			//0.05,   //G36K
			0.04,	//RH_ump
			//0.04,   //RH_xm8dc
			//0.05,   //G36a_CAMO
			0.04,   //RH_mp7RFX"
			0.02,   //RH_mp7sdeot
			//0.02,   //RH_MK43
			0.10,	//Scrap
			0.03,	//Rotor
			0.04,	//RH_g19
			0.05,	//GPS
			//0.03,
			0.01,
			0.01,
			0.04,
			0.01,
			0.03,
			0.03,
			0.06,
			0.01	//Equals 1.0
		};
	};

	//Czech Crashes
	class Mi24Wreck_DZC: Default {
		zombieClass[] = {"z_pilot_CZ","z_soldier1_CZ","z_soldier2_CZ"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
		itemType[] =	{
		{"","military"}, 
		//{"","trash"}, 
		//{"", "medical"}, 
		{"ItemMap","weapon"}, 
		{"ItemCompass", "generic"}, 
		{"Makarov","weapon"}, 
		{"MakarovSD","weapon"},
		{"Saiga12K","weapon"}, 
		//{"RH_ak102","weapon"}, 
		//{"RH_ScarAkeotech","weapon"}, 
		//{"RH_ScarAkaim","weapon"}, 
		//{"RH_ScarAk","weapon"}, 
		//{"AK_107_pso","weapon"}, //NVG
		//{"RPK_74","weapon"}, 
		//{"SVD","weapon"}, 
		{"bizon_silenced","weapon"}, 
		{"WeaponHolder_PartGeneric", "object"}, 
		{"WeaponHolder_PartVRotor", "object"}, 
		{"ItemGPS","weapon"}, 
		{"Skin_CZ_Pilot1_DZC","magazine"},
		{"Skin_CZ_Pilot2_DZC","magazine"}, 
		{"Skin_CZ_Pilot3_DZC","magazine"},	
		{"Skin_Soldier3_GL_DZC","magazine"},
		{"Skin_CZ_Heavy1_DZC","magazine"}, 
		//{"Skin_CZ_Heavy2_DZC","magazine"},	
		{"Skin_CZ_Heavy3_DZC","magazine"},
		{"DZ_CivilBackpack_EP1","object"}, 
		{"DZ_Backpack_EP1","object"}	
		};
		itemChance[] =	{
		1.00,	//military
		//0.40,	//trash
		//0.20,	//medical
		0.10,	//ItemMap
		0.15,	//ItemCompass
		0.15,	//Makarov
		0.02,	//MakarovSD
		0.03,	//Saiga12K
		//0.05,   //RH_ak102
		//0.03,   //RH_ScarAkeotech
		//0.03,	//RH_ScarAkaim
		//0.04,   //RH_ScarAk
		//0.02,   //AK_107_pso
		//0.06,   //RPK_74
		//0.01,   //SVD
		0.03,   //bizon_silenced
		0.10,		//Scrap
		0.03,		//Rotor
		0.04,
		0.02,
		0.02,
		0.02,
		0.04,
		0.01,
		//0.01,
		0.01,
		0.06,
		0.01	//Equals 1.0
		};
	};
class Mi17wreck_DZC: Mi24Wreck_DZC {};	
	class EurofighterWreck_DZC: UH60Wreck_DZC {};	

	class Land_HouseV_1I4: Residential {
		lootPos[] = {{-0.400146,-3.87695,-2.76879},{-3.67749,-2.52002,-2.76551},{-0.472168,3.19702,-2.72021}};
	};
	class Land_kulna: Residential {
		lootPos[] = {{0.504395,0.218262,-1.11643},{-0.496582,1.93262,-1.12826}};
	};
	class Land_Ind_Workshop01_01: Industrial {
		lootPos[] = {{0.595215,-2.43115,-1.29412},{1.24365,0.463867,-1.295},{-0.663574,-0.50293,-1.29837}};
	};
	class Land_Ind_Garage01: Industrial {
		lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	};
	class Land_Ind_Workshop01_02: Industrial {
		lootPos[] = {{1.1543,-0.552246,-1.42943},{-1.18665,-0.178223,-1.42868},{-0.661621,1.104,-1.42682}};
	};
	class Land_Ind_Workshop01_04: Industrial {
		lootPos[] = {{-1.37415,4.18896,-1.53123},{0.695435,4.24561,-1.52934},{-1.06677,2.69531,-1.53062},{0.79248,-4.60742,-1.49341},{-1.84424,-6.1709,-1.44427},{-1.05566,-4.08398,-1.51927},{1.43774,-6.59424,-1.41742}};
		hangPos[] = {{-0.541748,4.01221,-2.03068}};
	};
	class Land_Ind_Workshop01_L: Industrial {
		lootPos[] = {{-3.26172,4.75439,-1.30246},{0.175781,3.91748,-1.30766},{-2.37891,2.35303,-1.30405},{4.10547,-4.10791,-1.31345},{0.727539,-2.61621,-1.31418},{2.54688,-2.17725,-1.31482},{1.52344,-3.79443,-1.31332}};
	};
	class Land_Hangar_2: Industrial {
		lootPos[] = {{10.1245,-6.4873,-2.56317},{11.9387,7.91113,-2.56317},{1.79517,7.12695,-2.56317},{-11.8948,10.5449,-2.56317},{-8.97021,-4.34766,-2.56317},{-0.562744,-7.59375,-2.56317},{5.98804,-2.6123,-2.56317}};
	};
	class Land_hut06: Residential {
		lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
	};
	class Land_stodola_old_open: Farm {
		lootPos[] = {{-3.06836,8.63184,-5.08054},{2.52588,10.5261,-5.08051},{4.76758,5.00854,-0.9935},{-2.78467,10.2368,-0.9935},{4.62598,10.4983,-0.993469},{2.09082,10.8425,2.96448},{-0.440918,10.3091,2.96445},{-2.58838,-5.91821,-5.08054},{4.11084,-10.9302,-5.08054},{-2.62842,-6.55518,-1.01584},{2.50537,-10.741,2.96445},{0.0410156,-11.0596,2.96445}};
		hangPos[] = {{-1.50537,5.34473,-5.08813},{0.494141,9.42725,-5.09016},{2.59473,-6.21191,-5.08055},{-1.74854,-2.39844,-1.14301}};
	};
	class Land_A_FuelStation_Build: Industrial {
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	};
	class Land_A_GeneralStore_01a: Supermarket {
		lootPos[] = {{-6.93213,1.0708,-1.20155},{-7.2959,-2.68213,-1.20155},{-3.41406,-4.39307,-1.20155},{-1.28809,-2.57861,-1.20155},{0.903809,-4.35986,-1.20155},{3.1377,-3.40771,-1.20155},{7.53418,-2.69971,-1.20154},{13.9653,-4.50342,-1.20155},{10.2617,0.109863,-1.20155},{10.5869,-3.84375,-1.20155},{7.84521,-0.137207,-1.20154},{3.57471,0.0356445,-1.20154},{-0.370605,5.17676,-1.20155},{4.77783,5.57617,-1.20155},{13.0874,4.35645,-1.20155},{12.9932,6.31689,-1.20155},{7.36328,3.00928,-1.20155},{1.93091,2.17236,-1.20154},{-3.82715,5.3335,-1.20155},{-7.55029,8.54199,-1.20154},{-4.42407,8.96631,-1.20154},{3.72705,8.36084,-1.20155},{9.84033,8.3374,-1.20155},{-2.90918,1.32031,-1.20155}};
	};
	class Land_A_GeneralStore_01: Supermarket {
		lootPos[] = {{-9.38965,-3.30371,-1.20155},{-3.77539,-3.86865,-1.20155},{1.31836,1.46631,-1.20155},{9.01367,3.8457,-1.20155},{13.3008,-1.77832,-1.20155},{9.81055,1.43213,-1.20155},{1.65039,5.14355,-1.20155},{0.753906,-3.69531,-1.20155},{13.3125,-7.65137,-1.20155},{11.168,-3.73682,-1.20155},{8.89453,-8.37402,-1.20155},{-2.04492,-7.58105,-1.20155},{-7.84766,-5.73633,-1.20155},{-8.22461,-7.32422,-1.20155},{3.79004,-5.69336,-1.20155},{-9.38379,4.46191,-1.20155},{-3.5752,4.46533,-1.20155},{-3.33789,0.612793,-1.20155},{10.5918,-9.9458,-1.21082},{0.105469,-9.6084,-1.21082},{-4.86035,-10.4209,-1.21082},{-6.80859,-1.23975,-1.20155},{1.12207,-1.58887,-1.20155}};
	};
	class MAP_A_GeneralStore_01: Land_A_GeneralStore_01 {};
	class MAP_A_GeneralStore_01_dam: Land_A_GeneralStore_01 {};
	class Land_Farm_Cowshed_a: Farm {
		lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	};
	class Land_stodola_open: Farm {
		lootPos[] = {{-2.60303,5.31665,-4.12804},{-2.58154,-0.530029,-4.17349},{-0.0478516,-4.88989,-4.136},{0.983398,6.20483,-4.11143}};
		hangPos[] = {{-0.932617,-3.35962,-4.16446},{-2.01563,-0.115112,-4.19492}};
	};
	class MAP_stodola_old_open: Land_stodola_open {};
	class Land_Barn_W_01: Farm {
		lootPos[] = {{4.93188,-17.0444,-2.63063},{-3.82813,-18.6699,-2.63036},{-4.46387,16.6665,-2.63651},{5.78711,18.9473,-2.6369},{3.9541,4.88428,-2.63446},{-2.99072,-4.16748,-2.63287}};
	};
	class Map_Barn_W_01_dam: Land_Barn_W_01 {};
	class MAP_R_Barn_W_01: Land_Barn_W_01 {};
	class Land_Hlidac_budka: Residential {
		lootPos[] = {{-2.3186,1.5127,-0.78363},{2.02075,0.444336,-0.78363},{-0.460938,1.75879,-0.78363}};
	};
	class Land_HouseV2_02_Interier: Residential {
		lootPos[] = {{7.23096,5.37207,-5.53067},{8.55005,0.754883,-5.53067},{5.20166,-1.54004,-5.53067},{3.34912,1.9707,-5.53067},{-3.62598,3.05371,-5.53067},{-5.4812,-0.0292969,-5.53067},{-5.83325,3.26563,-5.53067},{-5.71045,5.49414,-5.53067}};
	};
	class Map_HouseV2_02_Interier: Land_HouseV2_02_Interier {};
	class Land_a_stationhouse: Barracks {
		lootChance = 0.3;
		lootPos[] = {{-2.69922,-7.57422,-9.47058},{-0.892578,-5.7168,-9.47058},{-3.2417,-6.61914,-4.6489},{-1.35645,-8.3623,-4.6489},{-1.70801,-7.85449,-0.0437927},{-3.39502,-7.88281,-0.0437927},{-1.396,-7.79883,4.41141},{-1.37939,-5.79102,4.41141},{1.5127,1.96484,-9.47058},{18.9058,-4.06738,-9.47058}};
	};
	class MAP_a_stationhouse: Land_a_stationhouse {};
	class Land_Mil_ControlTower: Military {
		lootChance = 0.4;
		lootPos[] = {{10.0703,3.76367,-9.62869},{3.89844,3.43457,-5.46368},{1.75195,5.68164,-5.46368},{6.66113,-0.625488,-1.0687},{2.63965,-0.191406,-1.0687},{6.72266,3.23389,-1.0687}};
	};
	class Land_SS_hangar: Barracks {
		maxRoaming = 3;
		lootPos[] = {{11.7344,-17.165,-5.87253},{-11.7158,-18.9541,-5.87253},{-14.2461,23.0439,-5.87253}};
	};
	class Land_A_Pub_01: Residential {
		zombieChance = 0.2;
		lootPos[] = {{1.83398,0.393799,-5.7462},{-1.76514,0.334473,-5.74622},{-6.62207,-6.55371,-5.74622},{-4.63623,-0.100586,-5.74622},{-5.75928,-3.05029,-5.74622},{-2.08203,0.922852,-1.76122},{-4.76514,-5.89087,-1.76122},{-6.94385,-1.9375,-1.76122},{-4.05225,-0.779785,-1.76122},{1.39795,-1.73779,-1.76122},{3.13867,-2.78564,-1.76122},{3.58301,-0.591309,-1.76122},{3.03027,-4.04346,-1.76122},{1.94092,3.18799,-1.76122},{-0.0961914,6.22437,-1.76122},{5.30469,7.55957,-1.76122},{6.72559,-2.72705,-1.76122},{2.56885,-4.6001,-5.74621},{4.06738,5.41406,-5.74622},{0.753418,2.2998,-5.74622}};
	};
	class Land_HouseB_Tenement: Office {
		lootPos[] = {{5.40576,9.89551,-20.7845},{5.99023,14.1689,-20.7845},{12.9609,14.0718,-20.7845},{14.6069,8.92383,-20.7845},{-2.75635,-2.08594,-20.7845}};
	};
	class Land_A_Hospital: hospital {
		lootChance = 0.6;
		lootPos[] = {{0.807129,-1.16333,-7.33966},{-7.23389,-2.63647,-7.33966},{-16.3687,-2.40381,-7.33966},{-12.2847,-3.19604,-7.33966},{4.40674,-3.50513,-7.33966},{-3.2666,-0.925293,-7.33966},{6.85693,-2.75146,-7.33966},{11.0151,-3.95435,-7.33966},{16.8198,-4.71118,-7.33966},{-1.12793,3.78418,-7.44939},{12.7476,0.142822,3.29184},{10.2661,-1.21558,3.29184}};
	};
	class MAP_A_Hospital_dam: Land_A_Hospital {};

	class Land_Panelak: Office {
		lootPos[] = {{-2.76904,-6.26563,0.0714226},{-2.93896,-1.3916,0.0714226},{-5.42065,-3.13184,0.0714226},{-6.81128,-6.15527,0.0714221},{-4.00879,2.53027,0.0714226},{-0.730957,-3.20117,2.77144},{3.979,-7.08936,2.77144},{2.49609,2.93701,2.77144},{6.7373,1.63281,2.77144},{6.38525,-2.3916,2.77144},{6.80615,-5.77295,2.77144},{3.75122,-0.803711,2.77144},{-0.824219,1.86914,1.32865}};
	};
	class Land_Panelak2: Office {
		lootPos[] = {{-0.729492,-3.00635,-2.62859},{-0.764648,1.36279,-1.37137},{-0.30127,3.65039,1.32864},{0.73584,-3.22217,2.71097},{-0.630859,1.84766,4.05244},{3.68921,-7.33545,5.43665},{2.26807,2.94092,5.43665},{6.7002,2.68994,5.43665},{6.87842,-1.45947,5.43665},{6.09619,-5.94824,5.43665},{4.45508,-1.64893,5.43665},{2.76367,0.445801,5.43665}};
	};
	class MAP_Panelak2: Land_Panelak2 {};
	class Land_Shed_Ind02: Industrial {
		lootPos[] = {{-2.28174,-5.67236,-4.62599},{4.54529,9.6665,-4.62599},{4.41223,2.64941,-1.27954},{-0.437866,11.6943,-1.27641},{-3.44482,12.2119,-1.27704}};
	};
	class Land_Shed_wooden: Residential {
		lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
	};
	class Land_Misc_PowerStation: Industrial {
		lootPos[] = {{4.09888,4.89746,-1.26743},{4.22827,-1.19873,-1.2681}};
	};
	class Land_HouseBlock_A1_1: Residential {
		lootPos[] = {{-3.52881,0.158936,-4.74365},{-3.56152,-2.33484,-4.73106}};
	};
	class Land_Shed_W01: Industrial {
		lootPos[] = {{-1.52637,-0.246094,-1.41129}};
	};
	class Land_HouseV_1I1: Residential {
		lootPos[] = {{0.181641,-1.97314,-2.82275}};
	};
//Celle Start
	class Land_MBG_GER_SUPERMARKET_1 : Supermarket {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{9.28809, -3.89648, -3.2457}, {8.98242, 1.8623, -3.2457}, {8.81836, 8.53906, -3.2457}, {5.18848, 9.23145, -3.2457}, {-2.73242, 7.58691, -3.2457}, {9.3418, 8.62891, 0.25637}, {8.54102, -11.1494, 0.25637}, {8.32813, -5.57422, 0.25637}, {8.68555, -1.44727, 0.25637}, {-5.73242, 2.80957, -3.2457}, {0.323242, 2.64648, -3.2457}, {1.95117, -0.985352, -3.2457}, {-4.31348, -0.868164, -3.2457}, {-6.75391, -6.83594, -3.2457}, {-3.91992, -7.16016, -3.2457}, {6.62305, -6.0625, 0.25637}, {-3.32422, -11.5215, -3.2457}};
	};
	class Land_MBG_GER_SUPERMARKET_2 : Supermarket {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{9.28809, -3.89648, -3.2457}, {8.98242, 1.8623, -3.2457}, {8.81836, 8.53906, -3.2457}, {5.18848, 9.23145, -3.2457}, {-2.73242, 7.58691, -3.2457}, {9.3418, 8.62891, 0.25637}, {8.54102, -11.1494, 0.25637}, {8.32813, -5.57422, 0.25637}, {8.68555, -1.44727, 0.25637}, {-5.73242, 2.80957, -3.2457}, {0.323242, 2.64648, -3.2457}, {1.95117, -0.985352, -3.2457}, {-4.31348, -0.868164, -3.2457}, {-6.75391, -6.83594, -3.2457}, {-3.91992, -7.16016, -3.2457}, {6.62305, -6.0625, 0.25637}, {-3.32422, -11.5215, -3.2457}};
	};	
	class Land_MBG_GER_SUPERMARKET_3 : Supermarket {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{9.28809, -3.89648, -3.2457}, {8.98242, 1.8623, -3.2457}, {8.81836, 8.53906, -3.2457}, {5.18848, 9.23145, -3.2457}, {-2.73242, 7.58691, -3.2457}, {9.3418, 8.62891, 0.25637}, {8.54102, -11.1494, 0.25637}, {8.32813, -5.57422, 0.25637}, {8.68555, -1.44727, 0.25637}, {-5.73242, 2.80957, -3.2457}, {0.323242, 2.64648, -3.2457}, {1.95117, -0.985352, -3.2457}, {-4.31348, -0.868164, -3.2457}, {-6.75391, -6.83594, -3.2457}, {-3.91992, -7.16016, -3.2457}, {6.62305, -6.0625, 0.25637}, {-3.32422, -11.5215, -3.2457}};
	};
	class Land_MBG_GER_SUPERMARKET_4 : Supermarket {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{9.28809, -3.89648, -3.2457}, {8.98242, 1.8623, -3.2457}, {8.81836, 8.53906, -3.2457}, {5.18848, 9.23145, -3.2457}, {-2.73242, 7.58691, -3.2457}, {9.3418, 8.62891, 0.25637}, {8.54102, -11.1494, 0.25637}, {8.32813, -5.57422, 0.25637}, {8.68555, -1.44727, 0.25637}, {-5.73242, 2.80957, -3.2457}, {0.323242, 2.64648, -3.2457}, {1.95117, -0.985352, -3.2457}, {-4.31348, -0.868164, -3.2457}, {-6.75391, -6.83594, -3.2457}, {-3.91992, -7.16016, -3.2457}, {6.62305, -6.0625, 0.25637}, {-3.32422, -11.5215, -3.2457}};
	};
	class Land_MBG_GER_PUB_1 : Residential {
		lootChance = 0.4;
		lootPos[] = {{6.06738, -1.80078, -3.53085}, {0.600586, -5.08105, -3.53085}, {-3.14258, -4.36523, -3.53085}, {-1.55176, -2.04004, -3.53085}, {-3.74805, 0.65332, -3.53085}, {-5.85645, -1.33984, -3.53085}, {-6.57031, -4.13672, -3.53085}, {-1.73535, -0.976563, -0.884312}, {5.01953, -4.50195, -0.63085}, {2.1582, -0.416016, -0.63085}, {-1.68066, 1.04297, -0.63085}, {-3.53418, -3.61719, -0.63085}, {-5.61816, 1.6875, -0.63085}};
	};
	class Land_MBG_GER_PUB_2 : Residential {
		lootChance = 0.4;
		lootPos[] = {{6.06738, -1.80078, -3.53085}, {0.600586, -5.08105, -3.53085}, {-3.14258, -4.36523, -3.53085}, {-1.55176, -2.04004, -3.53085}, {-3.74805, 0.65332, -3.53085}, {-5.85645, -1.33984, -3.53085}, {-6.57031, -4.13672, -3.53085}, {-1.73535, -0.976563, -0.884312}, {5.01953, -4.50195, -0.63085}, {2.1582, -0.416016, -0.63085}, {-1.68066, 1.04297, -0.63085}, {-3.53418, -3.61719, -0.63085}, {-5.61816, 1.6875, -0.63085}};
	};
	class Barrack2 : Barracks {
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.2;
		lootChance = 0.2;
		lootPos[] = {{-1.17383, 4.89941, -0.689161}, {-1.97559, 2.18848, -0.690756}, {0.600586, 0.37793, -0.691821}, {1.37207, -2.66406, -0.693611}, {-1.91113, -2.00488, -0.693226}};
	};
	class Land_MBG_GER_ESTATE_1 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-6.61133, -3.87012, -2.13187}, {-3.37988, -5.80859, -2.13187}, {6.77344, -3.47168, -2.13187}, {5.5332, -0.175781, -2.13187}, {-5.66797, 0.326172, -2.13187}, {-5.71582, 5.30078, -2.13187}, {-2.07227, 5.81934, -2.13187}};
	};
	class Land_MBG_GER_ESTATE_2 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-6.61133, -3.87012, -2.13187}, {-3.37988, -5.80859, -2.13187}, {6.77344, -3.47168, -2.13187}, {5.5332, -0.175781, -2.13187}, {-5.66797, 0.326172, -2.13187}, {-5.71582, 5.30078, -2.13187}, {-2.07227, 5.81934, -2.13187}};
	};
	class Land_MBG_GER_RHUS_1 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-1.27051, -0.229492, -3.36569}, {-0.929688, 2.83105, -3.36569}, {2.51367, 1.93066, -3.36569}, {2.16895, -3.08398, -3.36569}, {2.18555, -0.80957, -3.36569}, {-1.47754, 1.54688, -0.465689}, {0.844727, 3.04492, -0.465689}, {1.96094, -2.76953, -0.465689}, {-0.998047, -3.99902, -0.465689}};
	};
	class Land_MBG_GER_RHUS_2 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-1.27051, -0.229492, -3.36569}, {-0.929688, 2.83105, -3.36569}, {2.51367, 1.93066, -3.36569}, {2.16895, -3.08398, -3.36569}, {2.18555, -0.80957, -3.36569}, {-1.47754, 1.54688, -0.465689}, {0.844727, 3.04492, -0.465689}, {1.96094, -2.76953, -0.465689}, {-0.998047, -3.99902, -0.465689}};
	};
	class Land_MBG_GER_RHUS_3 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-1.27051, -0.229492, -3.36569}, {-0.929688, 2.83105, -3.36569}, {2.51367, 1.93066, -3.36569}, {2.16895, -3.08398, -3.36569}, {2.18555, -0.80957, -3.36569}, {-1.47754, 1.54688, -0.465689}, {0.844727, 3.04492, -0.465689}, {1.96094, -2.76953, -0.465689}, {-0.998047, -3.99902, -0.465689}};
	};
	class Land_MBG_GER_RHUS_4 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-1.27051, -0.229492, -3.36569}, {-0.929688, 2.83105, -3.36569}, {2.51367, 1.93066, -3.36569}, {2.16895, -3.08398, -3.36569}, {2.18555, -0.80957, -3.36569}, {-1.47754, 1.54688, -0.465689}, {0.844727, 3.04492, -0.465689}, {1.96094, -2.76953, -0.465689}, {-0.998047, -3.99902, -0.465689}};
	};
	class Land_MBG_GER_RHUS_5 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-1.27051, -0.229492, -3.36569}, {-0.929688, 2.83105, -3.36569}, {2.51367, 1.93066, -3.36569}, {2.16895, -3.08398, -3.36569}, {2.18555, -0.80957, -3.36569}, {-1.47754, 1.54688, -0.465689}, {0.844727, 3.04492, -0.465689}, {1.96094, -2.76953, -0.465689}, {-0.998047, -3.99902, -0.465689}};
	};
	class Land_MBG_GER_HUS_1 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-4.25488, 6.01367, -3.11289}, {-4.7832, 3.17773, -3.11289}, {-4.30273, -5.76953, -3.11289}, {0.319336, -4.4043, -3.11289}, {5.30859, 0.268555, -3.11289}, {1.31738, 5.64941, -3.11289}, {4.54297, 4.94434, -3.11289}, {3.83301, -5.88965, -0.112886}, {4.37695, -2.8252, -0.112886}, {-1.50879, -2.65332, -0.112886}, {-1.18848, -5.41309, -0.112886}, {-2.35742, 2.8457, -0.112885}, {-2.85645, 5.8291, -0.112886}, {0.261719, 3.79785, -0.112885}, {4.48438, 5.73438, -0.112885}, {-2.875, -0.117188, -0.112885}};
	};
	class Land_MBG_GER_HUS_2 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-4.25488, 6.01367, -3.11289}, {-4.7832, 3.17773, -3.11289}, {-4.30273, -5.76953, -3.11289}, {0.319336, -4.4043, -3.11289}, {5.30859, 0.268555, -3.11289}, {1.31738, 5.64941, -3.11289}, {4.54297, 4.94434, -3.11289}, {3.83301, -5.88965, -0.112886}, {4.37695, -2.8252, -0.112886}, {-1.50879, -2.65332, -0.112886}, {-1.18848, -5.41309, -0.112886}, {-2.35742, 2.8457, -0.112885}, {-2.85645, 5.8291, -0.112886}, {0.261719, 3.79785, -0.112885}, {4.48438, 5.73438, -0.112885}, {-2.875, -0.117188, -0.112885}};
	};
	class Land_MBG_GER_HUS_3 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-4.25488, 6.01367, -3.11289}, {-4.7832, 3.17773, -3.11289}, {-4.30273, -5.76953, -3.11289}, {0.319336, -4.4043, -3.11289}, {5.30859, 0.268555, -3.11289}, {1.31738, 5.64941, -3.11289}, {4.54297, 4.94434, -3.11289}, {3.83301, -5.88965, -0.112886}, {4.37695, -2.8252, -0.112886}, {-1.50879, -2.65332, -0.112886}, {-1.18848, -5.41309, -0.112886}, {-2.35742, 2.8457, -0.112885}, {-2.85645, 5.8291, -0.112886}, {0.261719, 3.79785, -0.112885}, {4.48438, 5.73438, -0.112885}, {-2.875, -0.117188, -0.112885}};
	};
	class Land_MBG_GER_HUS_4 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-4.25488, 6.01367, -3.11289}, {-4.7832, 3.17773, -3.11289}, {-4.30273, -5.76953, -3.11289}, {0.319336, -4.4043, -3.11289}, {5.30859, 0.268555, -3.11289}, {1.31738, 5.64941, -3.11289}, {4.54297, 4.94434, -3.11289}, {3.83301, -5.88965, -0.112886}, {4.37695, -2.8252, -0.112886}, {-1.50879, -2.65332, -0.112886}, {-1.18848, -5.41309, -0.112886}, {-2.35742, 2.8457, -0.112885}, {-2.85645, 5.8291, -0.112886}, {0.261719, 3.79785, -0.112885}, {4.48438, 5.73438, -0.112885}, {-2.875, -0.117188, -0.112885}};
	};
	class Land_MBG_Garage_Single_A : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{-0.922852, 4.46509, -1.03965}, {0.129395, 0.712402, -1.03965}};
	};
	class Land_MBG_Garage_Single_B : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{-0.922852, 4.46509, -1.03965}, {0.129395, 0.712402, -1.03965}};
	};
	class Land_MBG_Garage_Single_C : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{-0.922852, 4.46509, -1.03965}, {0.129395, 0.712402, -1.03965}};
	};
	class Land_MBG_Garage_Single_D : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{-0.922852, 4.46509, -1.03965}, {0.129395, 0.712402, -1.03965}};
	};
	class Land_MBG_ATC_Base : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {{5.70801, -0.544922, -0.913078}, {-1.08984, 3.83887, -1.21875}, {-1.49219, -0.446289, -1.21875}, {3.20117, -4.37012, -1.21875}, {-3.27734, 2.07715, -0.913078}, {-7.55469, 0.0625, -0.813078}};
	};
	class Land_MBG_Companybuilding_1 : Barracks {
		lootChance = 0.9;
		minRoaming = 1;
		maxRoaming = 6;
		lootPos[] = {{16.3525, -1.36719, -9.34856}, {-14.4072, -0.623047, -9.34856}, {-7.51465, -10.2148, -6.68216}, {-1.95459, 7.33594, -6.68216}, {-5.57129, 18.6221, -6.68216}, {1.27002, 17.0938, -6.68216}, {-7.71875, 18.6152, -4.90286}, {1.33154, 21.0879, -3.32216}, {-6.02197, 8.97852, -3.32216}, {-6.00977, -3.26855, -3.32216}, {1.81836, -20.835, -3.32216}, {1.54932, -11.9688, 0.0378399}, {-5.94727, 9.2168, 0.0378399}, {1.1084, 17.373, 0.0378399}};
	};
	class Land_dum_mesto2 : Residential {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{1.44165, -14.6924, -6.68216}, {0.474609, -4.0896, -4.34475}, {-1.25684, 5.45532, -4.34475}, {0.996582, 6.61157, -0.944004}, {0.929688, -4.15967, -0.944004}, {-1.12988, -2.4939, -0.944004}};
	};
	class MAP_dum_mesto_in: Land_dum_mesto2 {};
	class Land_dum_mesto_in : Residential {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{-3.77344, -0.432983, -4.2633}, {0.532227, -0.113403, -4.26418}, {4.06348, -0.706299, -4.26418}, {4.80957, 0.310181, -1.28095}, {-2.58691, 0.44043, -1.27582}};
	};
	class Land_MBG_Observation_Tower : MilitarySpecial {
		lootChance = 0.9;
		minRoaming = 0;
		maxRoaming = 0;
		lootPos[] = {{-4.85791, 0.0922852, 0.462315},  {2.08545, 0.383789, 0.462357}};
	};
// MGB Killhouse Start
	class MBG_Killhouse_1_InEditor : Industrial {
		lootChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		lootPos[] = {{-0.437, 1.250, 1.05}, {3.501, 3.181, -2.15},{2.595, -1.929, 1.05}, {-1.3824778, 3.3526506, -2.15}, {2.5953794, 2, 1.05} };
	};
	class MBG_Killhouse_2_InEditor : Industrial {
		lootChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		lootPos[] = {{5.02, 2.12, 3.75}, {5.25,0,0.45}, {1,-4,-2.85}, {-6.56, 0.49, 0.45}, {-6.99, 1.12, -2.85}, {-5.02, -3.52, .45}, {1,-1,-2.85}, {1,-1,-2.85}, {3.02, -2.12, 3.75}, {2.02, -3.52, 0.45}, {-2.02, 1, .45}, {3.0,0,0.45}};
	};
	class MBG_Warehouse_InEditor : Industrial {
		lootChance = .4;
		minRoaming = 3;
		maxRoaming = 4;
		lootPos[] = {{17.5, 9.0, -2.85}, {21.5, 12.0, -2.85}, {18.0, 16.0, -2.85}, {19, -2, -2.85}, {19.5, -6, -2.85}, {19.5, -4, -2.85}, {19.5, -11, -2.85}, {19.5, -11, -6.15}, {19.5, -13, -6.15}, {17.5, -11, -6.15}, {17.5, -13, -6.15},{12.5, -8, -6.15}, {0, 0, -6.15}, {2.3, -5.4, -6.15}, {17.5, 0, -5.9}, {11.5, -2.8, -6.15}, {5.9, 5.9, -6.15}, {-15.5, -12, -6.15}, {-12.5, -8, -6.15}, {0, 0, 5.15}, {10, 10, 5.15}, {-10, 10, 5.15}, {-10, -10, 5.15}, {-10, 8, 5.15}, {-12, 15, 5.15}, {18, 0, 5.15}, {10, -10, 5.15}};
	};
	class MBG_Killhouse_3_InEditor : Military {
		lootChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		lootPos[] = { {12.91238, -1.2579162, -.93},{-13.021757, -1.3520229, -.93}, {12.173838, 2.3130512, -2.85}, {3.1853416, 1.5268432, -2.85}, {-11.14875, 2.1999118, -2.85}, {-2.2182579, 1.9148608, -2.85}, {-8.1577587, 0.21965861, -2.85}, {-1.5196946, -1.6437323, 0.5}, {3.8753147, -1.880957, 0.5}, {11.173838, 2.3130512, 0.5}};
	};
	class MBG_Killhouse_4_InEditor : Farm {
		lootChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		lootPos[] = { {4.5, -3, -3.88}, {-4, -3, -3.88}, {-3, 5, -3.88}, {4.5, 5, -3.88}, {-4, -3, -0.58}, {-3, 5, -0.58}, {4.5, -3, -0.58}, {4.5, 5, -0.58} };
	};
	class MBG_Killhouse_5_InEditor : Farm {
		lootChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		lootPos[] = { {4.5, -3, -3.88}, {-4, -3, -3.88}, {-6, 5, -0.58}, {4.5, 5, -3.88}, {-4, -3, -0.58}, {-3.5, 6.5, -3.88 }, {4.5, -3, -0.58}, {4.5, 5, -0.58} };
	};
// MGB Killhouse Finish
	class FgS_Hill3: MilitarySpecial {
		lootChance = .5;
		minRoaming = 1;
		maxRoaming = 3;
		lootPos[] = {{4, 3, 10.57}, {-4, -3, 10.57}, {6.5, -5.25, 5.39}};
	};
// Celle End
	class Land_Tovarna2: Industrial {
		lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
	};
	class Land_rail_station_big: Office {
		lootPos[] = {{-4.97266,4.55737,-5.04438},{0.458496,4.85229,-5.04438},{2.4624,2.21851,-5.04438},{-1.32373,-2.60571,-5.04438},{-3.29443,-0.121826,-5.04438},{-1.07764,2.36646,-5.04438},{7.46045,-3.41528,-5.04438},{8.93408,3.1189,-5.04438},{-8.16357,-5.12842,-5.04438}};
	};
	class Land_Ind_Vysypka: Industrial {
		lootPos[] = {{0.486084,4.95459,-4.96861},{1.08032,-0.406738,-4.96801},{-0.0354004,-10.8208,-4.96686},{-5.07788,-16.4624,-4.96759},{-6.30298,2.92969,-4.96838},{-6.26685,26.7349,-4.9772},{1.64697,23.4038,-4.97097},{7.14575,3.92529,-4.96972},{4.63599,-12.1621,-4.96971}};
	};
	class Land_A_MunicipalOffice: Residential {
		zombieChance = 0;
		minRoaming = 3;
		maxRoaming = 9;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	};
	class Land_A_Office01: Office {
		lootPos[] = {{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	};
	class Land_A_Office02: Office {
		lootPos[] = {{4.72266,-5.74121,-8.15108},{0.961426,-5.16943,-8.15076}};
	};
	class Land_A_BuildingWIP: Industrial {
		lootChance = 0.5;
		lootPos[] = {{-4.62573,4.52344,-6.45268},{-12.6377,0.494141,-6.49242},{-14.6023,-8.62842,-6.49961},{-16.0005,-9.80957,-6.50423},{-15.5627,-5.17725,-6.50523},{0.94458,-2.30371,-6.43043},{7.28125,3.20898,-6.44042},{9.75708,10.1138,-6.40827},{14.771,7.29688,-6.47756},{15.4504,-0.314941,-6.52979},{20.4895,2.31836,-4.52571},{17.3123,-3.1001,-2.53291},{10.707,-6.51611,-2.53255},{2.22534,-9.21582,-2.534},{-8.91943,-7.18896,-2.53313},{-16.3179,-8.35645,-2.53357},{-21.3064,-6.7915,-2.53182},{-21.6018,-1.79541,-2.53182},{-17.5808,6.14746,-2.53182},{-23.198,8.44727,-2.53182},{-17.1973,9.58594,-2.53182},{-4.99023,9.80957,-2.53182},{14.0872,7.44092,-2.52676},{10.5796,-6.84912,1.48116},{-3.19116,-2.49463,1.49403},{-13.8186,3.98975,1.49829},{-15.9502,-6.17383,1.48802},{-20.6997,-16.9761,1.50282},{-15.415,-13.3901,5.46683}};
	};
	class Land_Church_01: Church {
		lootPos[] = {{-6.92102,-0.382813,-4.21339}};
	};
	class Land_Church_03: Church {
		lootPos[] = {{5.15332,-6.96875,-14.3021},{-1.79053,-7.68018,-14.3021},{-0.0263672,-2.98438,-14.3021},{-0.00341797,2.02246,-14.3021},{5.49878,7.20508,-14.3021},{5.38892,3.4043,-14.3021},{3.23657,2.76074,-14.3021},{-1.51001,7.66309,-14.3021},{-7.6416,4.8125,-14.3021},{-6.56592,-4.59131,-14.3021},{9.552,2.22363,-13.7588},{9.93262,-3.85254,-13.7588}};
		hangPos[] = {{1.72168,-8.39771,-0.172569},{2.08838,-14.4236,-0.27536},{-13.7158,-10.4808,-0.795174},{-12.9072,-16.4105,-0.895065}};
	};
	class MAP_Church_03_dam: Land_Church_03 {};
	class MAP_Church_03: Land_Church_03 {};
	class Land_Church_02: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_02a: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_05R: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Mil_Barracks_i: MilitarySpecial {
		lootPos[] = {{5.39038,-1.75684,-1.09824},{1.46753,-0.131836,-1.09824},{1.29395,-2.16211,-1.09824},{-1.78394,-0.168945,-1.09824},{-1.80615,-1.97656,-1.09824},{-4.77881,0.0488281,-1.09824},{-5.39258,-2.11816,-1.09824},{-5.47046,2.58105,-1.09824},{-8.32593,-0.144531,-1.09824},{-9.14966,-2.55859,-1.09824},{-1.95288,2.57715,-1.09824},{5.46362,2.57813,-1.09824}};
	};	//Qty: 2
	class Land_A_TVTower_Base: Industrial {
		lootPos[] = {{-0.982422,-1.92627,-2.21573},{-2.01782,-4.2417,-2.21918},{-0.759277,1.42139,-2.21573}};
	};
	class Land_Mil_House: Military {
		vehPos[] = {{13.439,3.25244,-5.71244,84}};
		lootPos[] = {{12.457,1.4248,-5.81439},{11.0391,4.85278,-5.81439},{13.667,4.42139,-5.81439}};
	};
	class Land_Misc_Cargo1Ao: Industrial {
		lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
	};
	class Land_Misc_Cargo1Bo: Industrial {
		lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
	};
	class Land_Nav_Boathouse: Industrial {
		lootPos[] = {{5.27588,5.51953,3.9203},{5.49609,0.106445,4.19408},{1.68945,7.5166,3.80288},{-5.03613,6.19141,3.91093},{-5.63037,-1.27246,4.41481},{-6.98779,5.52441,3.9814},{-2.92236,9.2002,3.73014},{6.99463,7.80859,3.80663},{7.00342,-2.07422,4.31929}};
	};
	class Land_ruin_01: Residential {
		lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	};
	class Land_wagon_box: Industrial {
		lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	};
	class Land_HouseV2_04_interier: Residential {
		lootPos[] = {{7.49463,5.8374,-5.73902},{7.50989,-0.930176,-5.74176},{1.95532,4.16406,-5.73938},{2.10876,6.60645,-5.7386},{-2.30017,4.22461,-5.73936},{-5.13306,6.74365,-5.73856},{-4.74658,2.68457,-5.73985}};
	};
	class MAP_R_HouseV2_04: Land_HouseV2_04_interier {};
	class Land_HouseV2_01A: Residential {
		lootPos[] = {{-3.52881,-3.16895,-5.60346},{-1.62988,-3.25439,-5.66887}};
	};
	class Land_psi_bouda: Residential {
		maxRoaming = 4;
		lootPos[] = {{-1.77002,-1.45166,1.95942}};
	}; // Qty: 183
	class Land_KBud: Residential {
		zombieChance = 0;
		maxRoaming = 0;
		lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
	}; // Qty: 90
	class Land_A_Castle_Bergfrit: Residential {
		lootPos[] = {{0.0185547,1.91602,-2.8364},{1.19141,-1.43848,-2.8364},{-2.36816,3.32275,-0.628571},{2.36133,3.86768,1.83972},{2.48438,-3.20557,3.85541},{-2.09473,-3.44873,6.31903},{-1.15918,3.13867,8.76691},{1.74707,1.26807,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.27979,13.4801},{-2.23047,4.82471,16.856},{1.67578,-0.825195,16.8505}};
	}; // Qty: 3
	class Land_A_Castle_Stairs_A: Residential {
		lootPos[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};
	}; // Qty: 3
	class Land_A_Castle_Gate: Residential {
		lootChance = 0.7;
		lootPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
	}; // Qty: 3
	class Land_Mil_Barracks: Military {
		lootPos[] = {};
	}; // Qty: 8
	class Land_Mil_Barracks_L: Military {
		lootPos[] = {};
	}; // Qty: 5 
	class Land_Barn_W_02: Farm {
		lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
	}; // Qty: 3
	class MAP_Barn_W_02: Land_Barn_W_02 {};
	class Land_sara_domek_zluty: Residential {
		maxRoaming = 1;
		lootPos[] = {{2.95703,3.00732,-2.4337},{7.06738,2.95557,-2.4337},{6.36304,-0.236328,-2.43375},{0.627686,-0.586914,-2.43387},{-0.659912,2.05371,-2.4337},{-2.77515,0.751953,-2.43372},{-5.07666,3.04492,-2.43361},{-6.17139,-2.33691,-2.43382},{-3.75293,-3.54688,-2.43382}};
	}; // Qty: 3
	class Land_HouseV_3I4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_Shed_W4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 172
	class Land_HouseV_3I1: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_HouseV_1L2: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 101
	class Land_HouseV_1T: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 90
	class Land_telek1: Industrial {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 4
	class Land_Rail_House_01: Industrial {
		lootPos[] = {{2.81152,3.61426,-1.28266},{-1.82178,3.10547,-1.28266},{0.487793,3.38867,-1.28266}};
	}; // Qty: 9
	class Land_HouseV_2I: Default {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 83
	class Land_Misc_deerstand: Military {
		zombieChance = 0;
		lootChance = 0.5;
		maxRoaming = 3;
		lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
	}; // Qty: 56
	class Land_A_Villa_EP1: Estate {
  lootPos[] = {
   { -23.3442,1.71484,-3.65929 },
   { 14.5498,-5.69775,-5.06722 },
   { 5.8457,-2.09814,-5.06717 },
   { 9.5249,3.76563,-5.06717 },
   { 10.0454,11.5093,-5.0734 },
   { 0.268555,8.64648,-5.06699 },
   { -0.378906,15.3989,-5.06724 },
   { -6.68506,14.9448,-5.06722 },
   { -10.9644,13.0996,-5.06719 },
   { 11.0571,4.48926,-1.48401 },
   { 2.85938,9.12939,-1.48407 },
   { -3.87646,8.01416,-1.4844 },
   { 0.0537109,10.3984,-1.4844 },
   { -2.78467,13.5903,-1.4844 },
   { -0.118652,15.3394,-1.4844 },
   { -6.73779,15.772,-1.4844 },
   { -8.39453,13.5249,-1.4844 },
   { -10.5317,9.75146,-1.4844 },
   { -11.8062,14.2358,-1.4844 },
   { -15.5771,14.0396,-1.4844 }};
 };
	class Camp: Military {
		maxRoaming = 1;
		lootPos[] = {{0.833252,-1.52246,-1.15955},{0.38501,0.963867,-1.15955}};
	}; // Qty: 1
	class Land_House_C_2_EP1: Residential {
	lootPos[] = {
   { -3.70313,-0.119629,-0.927744 },
   { -7.34131,-0.464844,-0.927744 },
   { -6.0498,-2.62646,-0.927744 },
   { 3.95093,-2.81006,-0.927744 },
   { 3.69873,0.496582,-0.927744 },
   { 6.72168,-1.4165,-0.927744 },
   { 5.64063,-3.16113,-0.927744 }};
 };
	class Land_House_C_3_EP1: Residential {
  lootPos[] = {
   { 6.61987,-1.8667,-3.91483 },
   { 5.80493,1.21094,-3.91483 },
   { -7.11523,2.78418,-3.86868 },
   { -6.45874,-0.478271,-3.86868 },
   { -6.37598,-2.27344,-3.86868 },
   { -4.84521,-2.55664,0.576136 },
   { -1.21606,-1.24634,1.96108 }};
 };
	class Land_House_C_4_EP1: Residential {
  lootPos[] = {
   { 5.38452,-0.364746,-3.48355 },
   { 3.16089,2.81616,-3.48355 },
   { -3.36499,2.44629,-3.48355 },
   { -4.60474,0.0483398,-3.48355 },
   { 4.34985,-0.835205,-0.35146 },
   { 1.84668,-3.7168,-0.352423 },
   { -1.23096,-5.15308,-0.27861 },
   { -4.16602,2.48022,-0.348963 }};
 };
	class Land_House_C_5_EP1: Residential {
  lootPos[] = {
   { 3.1499,2.39502,-1.36692 },
   { -1.80127,-2.98022,-1.36692 }};
 };
	class Land_House_C_5_V2_EP1: Residential {
  lootPos[] = {
   { 3.42529,1.77832,-1.36692 },
   { -3.6687,1.98779,-1.36692 },
   { -2.0271,-2.9126,-1.36692 },
   { -1.271,-3.94385,1.33329 }};
 };
	class Land_House_C_5_V3_EP1: Residential {
  lootPos[] = {
   { 2.59375,2.28711,-1.4715 },
   { -2.56445,-3.37988,-1.4715 },
   { 1.88525,2.08398,1.42051 },
   { -1.42725,-4.34424,1.23343 }};
 };
	class Land_House_C_5_V1_EP1: Residential {
  lootPos[] = {
   { 2.59375,2.28711,-1.4715 },
   { -2.56445,-3.37988,-1.4715 },
   { 1.88525,2.08398,1.42051 },
   { -1.42725,-4.34424,1.23343 }};
 };
	class Land_House_C_9_EP1: Residential {
  lootPos[] = {
   { -3.47339,2.13086,-3.74726 },
   { -3.17773,4.19849,-3.74837 },
   { -0.839844,5.7041,-3.74944 },
   { 4.67529,1.19897,-3.74832 },
   { 4.20508,-1.85229,-3.74805 },
   { 1.01074,-0.609619,-0.152166 },
   { 0.213379,1.56616,-0.152166 },
   { 1.66138,4.33472,-0.152166 },
   { 4.38208,-5.14136,-0.152166 }};
 };
	class Land_House_C_10_EP1: Residential {
  lootPos[] = {
   { -1.69873,-1.29932,-4.18862 },
   { -1.44849,-6.23291,-4.19626 },
   { 3.10547,-1.64893,-4.1758 },
   { 2.32983,6.66553,-4.16892 },
   { -1.91699,8.00635,-4.16562 },
   { -2.5752,5.90967,-4.1708 },
   { -0.346924,-6.49536,-0.869595 },
   { 0.373047,-2.14429,-0.869452 },
   { -2.33911,-5.66138,-0.86986 },
   { -2.09888,1.83032,-0.868948 }};
 };
	class Land_House_C_11_EP1: Residential {
  lootPos[] = {
   { -4.875,-3.75586,-2.45703 },
   { -1.22852,-3.17529,-2.08453 },
   { 6.55859,0.731934,-2.08453 },
   { 4.74072,3.21436,-2.08453 },
   { 4.39551,0.458984,-2.08453 },
   { 0.449219,-3.03857,0.972969 },
   { 4.8291,3.44629,0.972969 }};
 };
	class Land_House_C_12_EP1: Industrial {
  lootPos[] = {
   { 6.2915,1.28516,-3.51101 },
   { 6.84961,-2.6499,-3.51101 },
   { 3.27588,-3.54541,-3.51101 },
   { -1.03223,0.811768,-3.51101 },
   { -2.31982,0.178223,-3.51101 },
   { -2.46631,-6.43018,-3.51101 },
   { -3.02686,-8.6123,0.136051 },
   { 0.570801,-8.02637,0.139021 }};
 };
	class Land_House_K_3_EP1: Residential {
  lootPos[] = {
   { 0.524414,3.5166,-0.53767 },
   { 1.53491,-0.0644531,-0.790318 },
   { -0.887451,0.615234,-0.790318 },
   { -4.46191,1.38379,-0.795597 },
   { 1.1001,5.40723,2.81719 }};
 };
	class Land_House_K_7_EP1: Residential {
  lootPos[] = {
   { -0.995361,1.89014,-0.218372 },
   { -4.9541,3.85254,-0.218374 },
   { -3.4502,4.0376,3.32767 }};
 };
	class Land_House_L_7_EP1: Residential {
  lootPos[] = {
   { 0.769287,1.41162,-1.44695 },
   { -1.43384,1.45557,-1.45483 },
   { 5.36255,-0.136719,-1.509 },
   { 4.55078,1.49414,1.281 },
   { 6.6394,1.8252,1.281 }};
 };
	class Land_House_L_6_EP1: Residential {
  lootPos[] = {
   { -3.84692,-0.850586,-1.5254 },
   { -1.49683,1.06152,-1.45482 },
   { 3.26392,0.291992,-1.509 },
   { 5.48096,-0.556641,-1.509 },
   { 7.14697,2.24023,-1.509 }};
 };
	class Land_House_K_8_EP1: Residential {
  lootPos[] = {
   { 2.47577,-2.24414,-2.56724 },
   { -1.96313,-1.05566,-2.54675 },
   { -2.44165,2.20215,-2.57804 },
   { 1.6947,1.77832,-2.58702 },
   { 0.350647,-0.424805,0.251534 },
   { -0.741699,3.94141,0.252193 },
   { -0.392883,3.23242,3.35996 },
   { -1.83887,-0.766602,3.35996 }};
 };
	class Land_House_K_5_EP1: Residential {
  lootPos[] = {
   { -2.40381,1.90674,1.51889 },
   { -5.96777,0.826416,0.710116 },
   { -3.05811,4.05676,1.52165 },
   { 1.29199,1.85913,1.54825 },
   { 4.40381,3.96619,2.26365 },
   { 4.17725,0.271484,2.4009 },
   { 1.30908,1.50195,1.55225 }};
 };
	class Land_House_K_1_EP1: Residential {
  lootPos[] = {
   { -0.685547,4.02161,1.56626 },
   { 3.71387,5.48114,1.56626 },
   { 3.23438,2.35388,1.56626 },
   { -3.30566,4.65558,1.54929 },
   { -3.77539,2.02087,1.60863 }};
 };
	class Land_House_L_3_EP1: Residential {
  lootPos[] = {
   { -5.59863,-0.384766,-0.173644 },
   { -5.23425,2.49609,-0.22691 },
   { 0.75769,2.95508,-0.222477 },
   { -0.387817,0.0234375,-0.222477 },
   { 2.11365,2.99512,-0.222477 }};
 };
	class Land_House_L_4_EP1: Residential {
  lootPos[] = {
   { -3.34961,-0.487122,-1.33058 },
   { -6.60547,0.131348,-1.29852 },
   { -0.385742,-0.0551758,-1.34066 },
   { -0.209961,3.14941,-1.253 },
   { 3.47559,0.370972,-1.05766 },
   { 5.41992,3.25671,-1.01435 }};
 };

	class CampEast: Military {
		maxRoaming = 1;
		lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};
	}; // Qty: 1
	class CampEast_EP1: Military {
		maxRoaming = 1;
		lootPos[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
	}; // Qty: 1

	class MASH: Hospital {
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};
	}; // Qty: 1
	class MASH_EP1: MASH {};

	class USMC_WarfareBFieldhHospital: MASH {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_soldier","z_soldier_heavy"};
		lootPos[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};
	}; // Qty: 1

	class Land_Ind_Shed_02_main: Default {
		zombieChance = 0;
		maxRoaming = 3;
	}; // Qty: 283
	class HouseRoaming: Residential {
		lootChance = 0;
		zombieChance = 0;
		maxRoaming = 2;
	};
	class FarmRoaming: Farm {
		lootChance = 0;
		zombieChance = 0;
		maxRoaming = 2;
	};
	class Land_Shed_W03: HouseRoaming {}; // Qty: 206
	class Land_HouseV_1I3: HouseRoaming {}; // Qty: 117
	class Land_HouseV_1L1: HouseRoaming {}; // Qty: 97
	class Land_HouseV_1I2: HouseRoaming {};
	class Land_HouseV_2L: HouseRoaming {};
	class Land_HouseV_2T1: HouseRoaming {};
	class Land_houseV_2T2: HouseRoaming {};
	class Land_HouseV_3I2: HouseRoaming {};
	class Land_HouseV_3I3: HouseRoaming {};
	class Land_HouseBlock_A1: HouseRoaming {};
	class Land_HouseBlock_A1_2: HouseRoaming {};
	class Land_HouseBlock_A2: HouseRoaming {};
	class Land_HouseBlock_A2_1: HouseRoaming {};
	class Land_HouseBlock_A3: HouseRoaming {};
	class Land_HouseBlock_B1: HouseRoaming {};
	class Land_HouseBlock_B2: HouseRoaming {};
	class Land_HouseBlock_B3: HouseRoaming {};
	class Land_HouseBlock_B4: HouseRoaming {};
	class Land_HouseBlock_B5: HouseRoaming {};
	class Land_HouseBlock_B6: HouseRoaming {};
	class Land_HouseBlock_C1: HouseRoaming {};
	class Land_HouseBlock_C2: HouseRoaming {};
	class Land_HouseBlock_C3: HouseRoaming {};
	class Land_HouseBlock_C4: HouseRoaming {};
	class Land_HouseBlock_C5: HouseRoaming {};
	class Land_HouseV2_01B: HouseRoaming {}; // Qty: 20
	class Land_Misc_Cargo1D: HouseRoaming {}; // Qty: 29
	class Land_HouseV2_03: HouseRoaming {}; // Qty: 8
	class Land_Ind_Shed_01_end: HouseRoaming {}; // Qty: 266
	class Land_A_statue01: HouseRoaming {
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	}; // Qty: 3
	class Land_Shed_W02: FarmRoaming {}; // Qty: 213
};