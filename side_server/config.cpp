/*
	File: config.cpp
	Author: John Doe, Kira, Brutalzic
*/
class CfgPatches {
    class side_server {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {};
        fileName = "side_server.pbo";
        author[]= {"Brutalzic,Kira,John Doe"};
    };
};

class CfgFunctions {
	class DB_connect {
        	tag = "DBC";
        	class DataBase {
            		file = "\side_server\Functions\DataBase";
            		class asyncCall {};
		};
	};
};
