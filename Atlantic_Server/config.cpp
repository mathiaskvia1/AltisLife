class DefaultEventhandlers;
class CfgPatches {
	class Atlanitc_Server {
		units[] = {"C_man_1"};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F","A3_Soft_F","A3_Soft_F_Offroad_01","A3_Characters_F"};
		fileName = "Atlanitc_Server.pbo";
		author[]= {"AtlanticNetwork & Tonic"};
	};
};

class Life_Server_Settings {
	class EXTDB {
		DatabaseName = "ArmaLife";
		DebugMode = 0;
	};
};

class CfgFunctions {
	class BIS_Overwrite {
		tag = "BIS";
		class MP
		{
			file = "\Atlantic_Server\Functions\MP";
			class initMultiplayer{};
			class call{};
			class spawn{};
			class execFSM{};
			class execVM{};
			class execRemote{};
			class addScore{};
			class setRespawnDelay{};
			class onPlayerConnected{};
			class initPlayable{};
			class missionTimeLeft{};
		};
	};

	class MySQL_Database {
		tag = "DB";
		class MySQL
		{
			file = "\Atlantic_Server\Functions\MySQL";
			class numberSafe {};
			class mresArray {};
			class queryRequest{};
			class asyncCall{};
			class insertRequest{};
			class updateRequest{};
			class mresToArray {};
			class insertVehicle {};
			class bool{};
			class mresString {};
			class updatePartial {};
		};
	};

	class Life_System {
		tag = "life";
		class Wanted_Sys {
			file = "\Atlantic_Server\Functions\WantedSystem";
			class wantedFetch {};
			class wantedPerson {};
			class wantedBounty {};
			class wantedRemove {};
			class wantedAdd {};
			class wantedCrimes {};
			class wantedProfUpdate {};
		};

		class Jail_Sys {
			file = "\Atlantic_Server\Functions\Jail";
			class jailSys {};
		};

		class Client_Code {
			file = "\Atlantic_Server\Functions\Client";
		};
	};

	class TON_System {
		tag = "TON";
		class Systems {
			file = "\Atlantic_Server\Functions\Systems";
			class managesc {};
			class cleanup {};
			class huntingZone {};
			class getID {};
			class vehicleCreate {};
			class vehicleDead {};
			class spawnVehicle {};
			class getVehicles {};
			class vehicleStore {};
			class vehicleDelete {};
			class spikeStrip {};
			class logIt {};
			class federalUpdate {};
			class chopShopSell {};
			class clientDisconnect {};
			class cleanupRequest {};
			class setObjVar {};
			class keyManagement {};
		};

		class Housing {
			file = "\Atlantic_Server\Functions\Housing";
			class addHouse {};
			class addContainer {};
			class fetchPlayerHouses {};
			class initHouses {};
			class sellHouse {};
			class sellHouseContainer {};
			class updateHouseContainers {};
			class updateHouseTrunk {};
			class houseCleanup {};
			class deleteDBContainer {};
		};

		class Gangs {
			file = "\Atlantic_Server\Functions\Gangs";
			class insertGang {};
			class queryPlayerGang {};
			class removeGang {};
			class updateGang {};
		};

		class Actions {
			file = "\Atlantic_Server\Functions\Actions";
			class pickupAction {};
		};
	};
};

class CfgVehicles {
	class Car_F;
	class CAManBase;
	class Civilian;
	class Civilian_F : Civilian {
		class EventHandlers;
	};

	class C_man_1 : Civilian_F {
		class EventHandlers: EventHandlers {
			init = "(_this select 0) execVM ""\Atlantic_Server\fix_headgear.sqf""";
		};
	};
};
