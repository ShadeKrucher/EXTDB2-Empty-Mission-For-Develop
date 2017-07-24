class CfgPatches {
    class CustomServer {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {};
        fileName = "CustomServer.pbo";
        author[]= {"Shade"};
    };
};

class CfgFunctions {
    class MySQL_Database {
        tag = "DB";
        class MySQL
        {
            file = "\CustomServer\coredb";
            class async {};
            class strip {};
        };
    };
};