#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "$STR_CBA_Author";
        name = ECSTRING(main,component);
        url = "$STR_CBA_URL";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        VERSION_CONFIG;
        authors[] = {};
    };
};

class CfgSettings {
    class CBA {
        class Versioning {
            class PREFIX {
                class Dependencies {
                    CBA[] = {"cba_main", {1, 0, 0}, "(true)"};
                };
            };
        };
    };
};

class CfgMods {
    class PREFIX {
        dir = "@CBA_A3";
        name = "Community Base Addons (Arma III)";
        picture = "x\cba\addons\main\logo_cba_ca.paa";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "$STR_CBA_URL";
    };
};
