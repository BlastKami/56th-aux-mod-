class CfgPatches
{
	class GAR_Arsenal
	{
		units[] =
		{
			"unit"
		};
		weapons[]=
		{
			"GAR_DC15A",
			"GAR_DC15S",
			"GAR_DC15A_UGL",
			"GAR_DC15L",
			"GAR_DC15X",
			"GAR_DC17",
			"GAR_WESTAR_M5",
			"GAR_Z6",
			"GAR_DC15C"
		};
		author="Apex";
		requiredAddons[]={};
	};
};
class CfgAmmo
{
	class Default;
	class DBA_ammo_base;
	class GAR_IonizedBolt_DC : DBA_ammo_base
	{
		hit = 15;
		indirecthit = 0;
		indirecthitrange = 0;
		typicalspeed = 500;
		caliber = 6;
		effectfly = "SWLW_plasma_blue";
		tracerScale = 0.5;
		audibleFire = 80;
		timetolive = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.8284299;
			duration = 0.60000002;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
};
class CfgWeapons
{
	class RD501_DC_15a;
	class RD501_DC_r15gl;
	class RD501_DC_15c;
	class RD501_DC_15l;
	class RD501_DC_r15s;
	class RD501_DC_r17;
	class arifle_MX_Base_F;
	class RD501_westar_rm5;
	class LMG_Mk200_F;
	class JLTS_Z6 : LMG_Mk200_F
	{
		class manual;
		class WeaponSlotsInfo
		{
			class MuzzleSlot;
		};
	};
	class GAR_rZ6 : JLTS_Z6
	{
		scope = 2;
		scopeArsenal = 2;
		JLTS_hasElectronics = 0;
		recoil = "recoil_lim";
		baseWeapon = "GAR_z6";
		displayName = "[56th] Z6 Rotary Cannon";
		ACE_Overheating_mrbs = 450000;
		canShootInWater = 1;
		magazines[] =
		{
			"GAR_56ars_Z6_mag"
		};
		modes[] =
		{
			"manual",
			"Overcharge"
		};
		class manual : manual
		{
			reloadTime = 0.059;
		};
		class Overcharge : manual
		{
			dispersion = "0.00015*4";
			displayName = "Over Charge Auto";
			reloadTime = 0.015;
			burst = 10;
			textureType = "fastAuto";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot : MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[] =
				{
					"RD501_muzzle_flash",
					"RD501_acc_particle_condenser",
					"RD501_acc_particle_accelerator"
				};
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
		};
	};
	class GAR_DC15A : RD501_DC_15a
	{
		author = "Apex";
		scopecurator = 2;
		displayName = "[56th] DC-15A";
		magazines[] =
		{
			"GAR_56ars_DC15_mag"
		};
	};
	class GAR_DC15S : RD501_DC_r15s
	{
		author = "Apex";
		scopecurator = 2;
		displayName = "[56th] DC-15S";
		magazines[] =
		{
			"GAR_56ars_DC15_mag"
		};
	};
	class GAR_DC15C : RD501_DC_15c
	{
		author = "Apex";
		scopecurator = 2;
		displayName = "[56th] DC-15C";
		magazines[] =
		{
			"GAR_56ars_DC15_mag"
		};
	};
	class GAR_DC15L : RD501_DC_15l
	{
		author = "Apex";
		scopecurator = 2;
		displayName = "[56th] DC-15L";
		magazines[] =
		{
			"GAR_56ars_DC15L_mag"
		};
	};
	class GAR_DC15A_UGL : RD501_DC_r15gl
	{
		author = "Apex";
		scopecurator = 2;
		displayName = "[56th] DC-15A UGL";
		magazines[] =
		{
			"GAR_56ars_DC15_mag"
		};
	};
	class GAR_DC17 : RD501_DC_r17
	{
		author = "Apex";
		scopecurator = 2;
		scope = 2;
		scopeArsenal = 2;
		displayName = "[56th] DC-17 Sidearm";
		magazines[] =
		{
			"DBA_45acp_Mag_Base"
		};
	};
	class JLTS_DC15X : arifle_MX_Base_F
	{
		class Single;
		class WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};
	class GAR_DC15X : JLTS_DC15X
	{
		displayName = "[56th] DC-15X";
		descriptionShort = "DC-15X Scope (12-20x)";
		baseWeapon = "GAR_DC15X";
		canShootInWater = 1;
		ace_overheating_allowSwapBarrel = 1;
		JLTS_hasElectronics = 0;
		magazines[] =
		{
			"GAR_56ars_DC15X_mag"
		};
		class Single : Single
		{
			reloadTime = 1.5;
			dispersion = 0.00030000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleItems[] =
				{
					"RD501_LRPS"
				};
			};
			class UnderBarrelSlot
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk"
				};
			};
		};
	};
	class GAR_WESTAR_M5 : RD501_westar_rm5
	{
		author = "Apex";
		scopecurator = 2;
		displayName = "[56th] Westar M-5";
		magazines[] =
		{
			"GAR_56ars_WM5_mag"
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class GAR_56ars_mag_base : CA_Magazine
	{
		author = "Apex";
		scope = 1;
		displayname = "base magazine";
		initspeed = 900;
		nameSound = "magazine";
		maxLeadSpeed = 25;
		mass = 8;
		reloadaction = "";
		useactiontitle = "";
		modelspecial = "";
		tracersevery = 1;
		picture = "";
		type = 256;
	};
	class GAR_56ars_DC15_mag : GAR_56ars_mag_base
	{
		scope = 2;
		displayname = "DC-15 Standard Power Pack";
		ammo = "GAR_IonizedBolt_DC";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 8;
		count = 50;
		initspeed = 410;
	};
	class GAR_56ars_DC17_mag : GAR_56ars_mag_base
	{
		scope = 2;
		displayname = "DC-17 Standard Power Pack";
		ammo = "GAR_IonizedBolt_DC";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 3;
		count = 20;
		initspeed = 350;
	};
	class GAR_56ars_Z6_mag : GAR_56ars_mag_base
	{
		scope = 2;
		displayname = "Z-6 Standard Power Pack";
		ammo = "GAR_IonizedBolt_DC";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 15;
		count = 500;
		initspeed = 410;
	};
	class GAR_56ars_WM5_mag : GAR_56ars_mag_base
	{
		scope = 2;
		displayname = "Westar M-5 Standard Power Pack";
		ammo = "GAR_IonizedBolt_DC";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 8;
		count = 100;
		initspeed = 450;
	};
	class GAR_56ars_DC15X_mag : GAR_56ars_mag_base
	{
		scope = 2;
		displayname = "DC-15X Standard Power Pack";
		ammo = "GAR_IonizedBolt_DC";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 8;
		count = 15;
		initspeed = 1300;
	};
	class GAR_56ars_DC15L_mag : GAR_56ars_mag_base
	{
		scope = 2;
		displayname = "DC-15L Standard Power Pack";
		ammo = "GAR_IonizedBolt_DC";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 10;
		count = 300;
		initspeed = 410;
	};
};
class cfgMods
{
	author="Apex";
	timepacked="1598061269";
};
