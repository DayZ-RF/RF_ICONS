#define _ARMA_

class CfgPatches {
	class RF_ICONS {
		author = "Dad Fedor & romabeorn";
		name = "RF_ICONS";
		url = "https://discord.gg/d9kP7ezX3n";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"DZ_Data", "DZ_Sounds_Effects"};
		requiredVersion = 0.1;
	};

    class DZ_Gear_Camping {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data"};
    };
};

class CfgMods {
	class RF_ICONS {
		type="mod";
		dir="RF_ICONS";
		class defs {
			class imageSets{
                files[]= {"RF_ICONS/GUI/imagesets/rf_icons_inventory.imageset"};
            };
		};
	};
};
