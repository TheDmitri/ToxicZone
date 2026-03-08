class CfgPatches
{
	class ToxicZone_Data_Script
	{
		units[] = {"GP5GasMask_Filter","ToxicCase","TZParticleBase","GreenSmokeLong","GreySmokeLong","RedSmokeLong","BlueSmokeLong","WhiteSmokeLong","GreenSmoke2Long","MustardSmokeLong","GreenSmoke","MustardSmoke","WhiteSmoke","GreenSmoke2","GreySmoke","BlueSmoke","RedSmoke","PurpleSmoke","GreenSmokeStaticLong","GreySmokeStaticLong","RedSmokeStaticLong","BlueSmokeStaticLong","WhiteSmokeStaticLong","MustardSmokeStaticLong","GreenSmokeStatic","MustardSmokeStatic","WhiteSmokeStatic","GreySmokeStatic","BlueSmokeStatic","RedSmokeStatic","PurpleSmokeStatic","GreenSpore","MustardSpore","WhiteSpore","BlueSpore","RedSpore","PurpleSpore","ToxicM18SmokeGrenade_Red","ToxicM18SmokeGrenade_Green","ToxicM18SmokeGrenade_Purple","ToxicM18SmokeGrenade_Yellow","ToxicM18SmokeGrenade_White","ToxicCure","ToxicZoneGP5GasMask_black","ToxicZoneGP5GasMask_green","ToxicZoneSuits_Hood_black","ToxicZoneSuits_Hood_green","ToxicZoneSuits_Hood_yellow","ToxicZoneSuits_Jacket_black","ToxicZoneSuits_Jacket_green","ToxicZoneSuits_Jacket_yellow","ToxicZoneSuits_Pants_black","ToxicZoneSuits_Pants_green","ToxicZoneSuits_Pants_yellow","ToxicZoneSuits_Boots_black","ToxicZoneSuits_Boots_green","ToxicZoneSuits_Boots_yellow","ToxicZoneSuits_Gloves_yellow","ToxicZoneSuits_Gloves_black","ToxicZoneSuits_Gloves_green"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Pants","DZ_Characters_Tops","DZ_Gear_Containers","DZ_Characters_Masks","DZ_Characters_Headgear","DZ_Data"};
	};
};
class CfgMods
{
	class ToxicZone_Data
	{
		dir = "ToxicZone_Data";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ToxicZone_Data";
		credits = "TheDmitri";
		author = "TheDmitri";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class GP5GasMask_Filter: Inventory_Base
	{
		scope = 2;
		displayName = "GP5GasMask Filter";
		descriptionShort = "Mask filter that can be attach to a GP5GasMask. A full filter provide 45 min of use";
		model = "\DZ\characters\masks\GP5GasMask_filter.p3d";
		inventorySlot[] = {"GasMaskFilter"};
		rotationFlags = 2;
		weight = 5;
		itemSize[] = {2,2};
		absorbency = 0;
		heatIsolation = 0.6;
		visibilityModifier = 0.95;
		quantityBar = 1;
		varQuantityInit = 45;
		varQuantityMin = 0;
		varQuantityMax = 45;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\dz\characters\masks\data\GP5GasMask_white_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\masks\data\GP5GasMask.rvmat"}},{0.7,{"DZ\characters\masks\data\GP5GasMask.rvmat"}},{0.5,{"DZ\characters\masks\data\GP5GasMask_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\GP5GasMask_damage.rvmat"}},{0,{"DZ\characters\masks\data\GP5GasMask_destruct.rvmat"}}};
				};
			};
		};
	};
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class GP5GasMask: Clothing
	{
		class EnergyManager
		{
			autoSwitchOff = 1;
			energyAtSpawn = 5;
			energyStorageMax = 100;
			energyUsagePerSecond = 0.997;
			updateInterval = 59;
		};
	};
	class GasMask: GP5GasMask{};
	class AirborneMask: GP5GasMask{};
	class ToxicCase: Container_Base
	{
		scope = 2;
		descriptionShort = "A Case Found in the Toxic Zone";
		model = "\ToxicZone_Data\data\ToxicCase\ToxicCase.p3d";
		displayName = "ToxicCase";
		weight = 10000;
		heavyItem = 2;
		itemSize[] = {50,50};
		carveNavmesh = 1;
		rotationFlags = 2;
		class Cargo
		{
			itemsCargoSize[] = {10,50};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
	class HouseNoDestruct;
	class TZParticleBase: HouseNoDestruct
	{
		scope = 2;
		model = "\dz\weapons\explosives\smokegrenade.p3d";
		displayName = "ToxicZoneParticles";
		forceFarBubble = "true";
		carveNavmesh = 1;
		rotationFlags = 2;
		itemSize[] = {1,1};
		weight = 1000000;
	};
	class GreenSmokeLong: TZParticleBase{};
	class GreySmokeLong: TZParticleBase{};
	class RedSmokeLong: TZParticleBase{};
	class BlueSmokeLong: TZParticleBase{};
	class WhiteSmokeLong: TZParticleBase{};
	class GreenSmoke2Long: TZParticleBase{};
	class MustardSmokeLong: TZParticleBase{};
	class GreenSmoke: TZParticleBase{};
	class MustardSmoke: TZParticleBase{};
	class WhiteSmoke: TZParticleBase{};
	class GreenSmoke2: TZParticleBase{};
	class GreySmoke: TZParticleBase{};
	class BlueSmoke: TZParticleBase{};
	class RedSmoke: TZParticleBase{};
	class PurpleSmoke: TZParticleBase{};
	class GreenSmokeStaticLong: TZParticleBase{};
	class GreySmokeStaticLong: TZParticleBase{};
	class RedSmokeStaticLong: TZParticleBase{};
	class BlueSmokeStaticLong: TZParticleBase{};
	class WhiteSmokeStaticLong: TZParticleBase{};
	class MustardSmokeStaticLong: TZParticleBase{};
	class GreenSmokeStatic: TZParticleBase{};
	class MustardSmokeStatic: TZParticleBase{};
	class WhiteSmokeStatic: TZParticleBase{};
	class GreySmokeStatic: TZParticleBase{};
	class BlueSmokeStatic: TZParticleBase{};
	class RedSmokeStatic: TZParticleBase{};
	class PurpleSmokeStatic: TZParticleBase{};
	class GreenSpore: TZParticleBase{};
	class MustardSpore: TZParticleBase{};
	class WhiteSpore: TZParticleBase{};
	class BlueSpore: TZParticleBase{};
	class RedSpore: TZParticleBase{};
	class PurpleSpore: TZParticleBase{};
	class Grenade_Base;
	class ToxicM18SmokeGrenade_ColorBase: Grenade_Base
	{
		displayName = "$STR_CfgVehicles_M18SmokeGrenade_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_M18SmokeGrenade_ColorBase1";
		model = "\dz\weapons\explosives\smokegrenade.p3d";
		rotationFlags = 17;
		lootTag[] = {"Military_west"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"dz\weapons\explosives\data\smokegrenade.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\explosives\data\smokegrenade.rvmat"}},{0.7,{"DZ\weapons\explosives\data\smokegrenade.rvmat"}},{0.5,{"DZ\weapons\explosives\data\smokegrenade_damage.rvmat"}},{0.3,{"DZ\weapons\explosives\data\smokegrenade_damage.rvmat"}},{0,{"DZ\weapons\explosives\data\smokegrenade_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn = 90;
			energyUsagePerSecond = 1;
			wetnessExposure = 0.1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Unpin
				{
					soundSet = "SmokegGrenades_M18_oneshot_ignite_SoundSet";
					id = 201;
				};
			};
		};
	};
	class ToxicM18SmokeGrenade_Red: ToxicM18SmokeGrenade_ColorBase
	{
		scope = 2;
		displayName = "ToxicM18SmokeGrenade_Red";
		descriptionShort = "After activation, a toxic gaz is spreading on a 8 meter radius. The only way to avoid getting sick is to wear a GasMask";
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\Grenades\toxicgrenade_red_co.paa"};
	};
	class ToxicM18SmokeGrenade_Green: ToxicM18SmokeGrenade_ColorBase
	{
		scope = 2;
		displayName = "ToxicM18SmokeGrenade_Green";
		descriptionShort = "After activation, a toxic gaz is spreading on a 8 meter radius. The only way to avoid getting sick is to wear a GasMask";
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\Grenades\toxicgrenade_green_co.paa"};
	};
	class ToxicM18SmokeGrenade_Purple: ToxicM18SmokeGrenade_ColorBase
	{
		scope = 2;
		displayName = "ToxicM18SmokeGrenade_Purple";
		descriptionShort = "After activation, a toxic gaz is spreading on a 8 meter radius. The only way to avoid getting sick is to wear a GasMask";
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\Grenades\toxicgrenade_violet_co.paa"};
	};
	class ToxicM18SmokeGrenade_Yellow: ToxicM18SmokeGrenade_ColorBase
	{
		scope = 2;
		displayName = "ToxicM18SmokeGrenade_Yellow";
		descriptionShort = "After activation, a toxic gaz is spreading on a 8 meter radius. The only way to avoid getting sick is to wear a GasMask";
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\Grenades\toxicgrenade_yellow_co.paa"};
	};
	class ToxicM18SmokeGrenade_White: ToxicM18SmokeGrenade_ColorBase
	{
		scope = 2;
		displayName = "ToxicM18SmokeGrenade_White";
		descriptionShort = "After activation, a toxic gaz is spreading on a 8 meter radius. The only way to avoid getting sick is to wear a GasMask";
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\Grenades\toxicgrenade_white_co.paa"};
	};
	class Epinephrine;
	class ToxicCure: Epinephrine
	{
		scope = 2;
		displayName = "Toxic cure";
		descriptionShort = "Cure for Toxic sickness";
		model = "\dz\gear\medical\Epinephrine.p3d";
		rotationFlags = 17;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\ToxicCure\ToxicCure.paa","ToxicZone_Data\data\ToxicCure\ToxicCure.paa","ToxicZone_Data\data\ToxicCure\ToxicCure.paa"};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 1;
		itemSize[] = {1,2};
		weight = 60;
		lootTag[] = {"Medic"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\medical\data\epipen.rvmat"}},{0.7,{"DZ\gear\medical\data\epipen.rvmat"}},{0.5,{"DZ\gear\medical\data\epipen_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\epipen_damage.rvmat"}},{0,{"DZ\gear\medical\data\epipen_destruct.rvmat"}}};
				};
			};
		};
	};
	class ToxicZoneGP5GasMask_black: GP5GasMask
	{
		displayName = "GP5GasMask Black";
		descriptionShort = "A GP5GasMask green to protect from radiation and toxic gas. Attach a filter to make it work. It provide 45 min of use.";
		scope = 2;
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\GP5Gasmask_black.paa","ToxicZone_Data\data\NBC\GP5Gasmask_black.paa","ToxicZone_Data\data\NBC\GP5Gasmask_black.paa"};
	};
	class ToxicZoneGP5GasMask_green: GP5GasMask
	{
		displayName = "GP5GasMask Green";
		descriptionShort = "A GP5GasMask green to protect from radiation and toxic gas. Attach a filter to make it work. It provide 45 min of use.";
		scope = 2;
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\GP5Gasmask_green.paa","ToxicZone_Data\data\NBC\GP5Gasmask_green.paa","ToxicZone_Data\data\NBC\GP5Gasmask_green.paa"};
	};
	class NBCHoodBase;
	class ToxicZoneSuits_Hood_black: NBCHoodBase
	{
		displayName = "NBC Black Hood";
		descriptionShort = "A Black NBC Pants to protect from radiation and toxic gas";
		scope = 2;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Hood_black.paa","ToxicZone_Data\data\NBC\Hood_black.paa","ToxicZone_Data\data\NBC\Hood_black.paa"};
	};
	class ToxicZoneSuits_Hood_green: NBCHoodBase
	{
		displayName = "NBC Green Hood";
		descriptionShort = "A NBC Green Hood to protect from radiation and toxic gas";
		scope = 2;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Hood_green.paa","ToxicZone_Data\data\NBC\Hood_green.paa","ToxicZone_Data\data\NBC\Hood_green.paa"};
	};
	class ToxicZoneSuits_Hood_yellow: NBCHoodBase
	{
		displayName = "NBC Yellow Hood";
		descriptionShort = "A Yellow NBC Hood to protect from radiation and toxic gas";
		scope = 2;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Hood_yellow.paa","ToxicZone_Data\data\NBC\Hood_yellow.paa","ToxicZone_Data\data\NBC\Hood_yellow.paa"};
	};
	class NBCJacketBase;
	class ToxicZoneSuits_Jacket_black: NBCJacketBase
	{
		displayName = "NBC Black Jacket";
		descriptionShort = "A Black NBC Jacket to protect from radiation and toxic gas";
		scope = 2;
		itemsCargoSize[] = {5,4};
		repairableWithKits[] = {8,2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camoGround","zbytek","zbytek"};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Jacket_black.paa","ToxicZone_Data\data\NBC\Jacket_black.paa","ToxicZone_Data\data\NBC\Jacket_black.paa"};
	};
	class ToxicZoneSuits_Jacket_green: NBCJacketBase
	{
		displayName = "NBC Green Jacket";
		descriptionShort = "A NBC Green Jacket to protect from radiation and toxic gas";
		scope = 2;
		itemsCargoSize[] = {5,4};
		repairableWithKits[] = {8,2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camoGround","zbytek","zbytek"};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Jacket_green.paa","ToxicZone_Data\data\NBC\Jacket_green.paa","ToxicZone_Data\data\NBC\Jacket_green.paa"};
	};
	class ToxicZoneSuits_Jacket_yellow: NBCJacketBase
	{
		displayName = "NBC Yellow Jacket";
		descriptionShort = "A Yellow NBC Jacket to protect from radiation and toxic gas";
		scope = 2;
		itemsCargoSize[] = {5,4};
		repairableWithKits[] = {8,2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camoGround","zbytek","zbytek"};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Jacket_yellow.paa","ToxicZone_Data\data\NBC\Jacket_yellow.paa","ToxicZone_Data\data\NBC\Jacket_yellow.paa"};
	};
	class NBCPantsBase;
	class ToxicZoneSuits_Pants_black: NBCPantsBase
	{
		displayName = "NBC Black Pant";
		descriptionShort = "A Black NBC Pants to protect from radiation and toxic gas";
		scope = 2;
		repairableWithKits[] = {5,2};
		itemsCargoSize[] = {5,4};
		repairCosts[] = {30,25};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Pants_black.paa","ToxicZone_Data\data\NBC\Pants_black.paa","ToxicZone_Data\data\NBC\Pants_black.paa"};
	};
	class ToxicZoneSuits_Pants_green: NBCPantsBase
	{
		displayName = "NBC Green Pant";
		descriptionShort = "A Green NBC Pants to protect from radiation and toxic gas";
		scope = 2;
		repairableWithKits[] = {5,2};
		itemsCargoSize[] = {5,4};
		repairCosts[] = {30,25};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Pants_green.paa","ToxicZone_Data\data\NBC\Pants_green.paa","ToxicZone_Data\data\NBC\Pants_green.paa"};
	};
	class ToxicZoneSuits_Pants_yellow: NBCPantsBase
	{
		displayName = "NBC Yellow Pant";
		descriptionShort = "A Yellow NBC Pants to protect from radiation and toxic gas";
		scope = 2;
		itemsCargoSize[] = {5,4};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Pants_yellow.paa","ToxicZone_Data\data\NBC\Pants_yellow.paa","ToxicZone_Data\data\NBC\Pants_yellow.paa"};
	};
	class NBCBootsBase;
	class ToxicZoneSuits_Boots_black: NBCBootsBase
	{
		displayName = "NBC Black Shoes";
		descriptionShort = "A Black NBC Shoes to protect from radiation and toxic gas";
		scope = 2;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Boots_black.paa","ToxicZone_Data\data\NBC\Boots_black.paa","ToxicZone_Data\data\NBC\Boots_black.paa"};
	};
	class ToxicZoneSuits_Boots_green: NBCBootsBase
	{
		displayName = "NBC Green Shoes";
		descriptionShort = "A Green NBC Shoes to protect from radiation and toxic gas";
		scope = 2;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Boots_green.paa","ToxicZone_Data\data\NBC\Boots_green.paa","ToxicZone_Data\data\NBC\Boots_green.paa"};
	};
	class ToxicZoneSuits_Boots_yellow: NBCBootsBase
	{
		displayName = "NBC Yellow Shoes";
		descriptionShort = "A Yellow NBC Shoes to protect from radiation and toxic gas";
		scope = 2;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Boots_yellow.paa","ToxicZone_Data\data\NBC\Boots_yellow.paa","ToxicZone_Data\data\NBC\Boots_yellow.paa"};
	};
	class NBCGloves_ColorBase;
	class ToxicZoneSuits_Gloves_yellow: NBCGloves_ColorBase
	{
		displayName = "NBC Yellow Gloves";
		descriptionShort = "A Yellow NBC Gloves to protect from radiation and toxic gas";
		scope = 2;
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Gloves_yellow.paa","ToxicZone_Data\data\NBC\Gloves_yellow.paa","ToxicZone_Data\data\NBC\Gloves_yellow.paa"};
	};
	class ToxicZoneSuits_Gloves_black: NBCGloves_ColorBase
	{
		displayName = "NBC Black Gloves";
		descriptionShort = "A Black NBC Gloves to protect from radiation and toxic gas";
		scope = 2;
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Gloves_black.paa","ToxicZone_Data\data\NBC\Gloves_black.paa","ToxicZone_Data\data\NBC\Gloves_black.paa"};
	};
	class ToxicZoneSuits_Gloves_green: NBCGloves_ColorBase
	{
		displayName = "NBC Green Gloves";
		descriptionShort = "A Green NBC Gloves to protect from radiation and toxic gas";
		scope = 2;
		hiddenSelectionsTextures[] = {"ToxicZone_Data\data\NBC\Gloves_green.paa","ToxicZone_Data\data\NBC\Gloves_green.paa","ToxicZone_Data\data\NBC\Gloves_green.paa"};
	};
};

