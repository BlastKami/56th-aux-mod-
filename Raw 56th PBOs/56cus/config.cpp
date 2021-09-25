class CfgPatches
{
	class VA_armor
	{
		units[]=
		{
			"GAR_56cus_APEX",
			"GAR_56cus_BLAST",
			"GAR_56cus_IMPULSE",
			"GAR_56cus_KINDRED",
			"GAR_56cus_KOZ",
			"GAR_56cus_MACE",
			"GAR_56cus_NOBLE",
			"GAR_56cus_REAPER",
			"GAR_56cus_VITO",
			"GAR_56cus_WARDOG",
			"GAR_56cus_WINTERS",
			"GAR_56cus_ZAINO"
		};
		weapons[]=
		{
			"GAR_56cus_APEX_helmet",
			"GAR_56cus_APEX_armor",
			"GAR_56cus_APEX_vest",
			"GAR_56cus_BLAST_helmet",
			"GAR_56cus_BLAST_armor",
			"GAR_56cus_IMPULSE_helmet",
			"GAR_56cus_IMPULSE_armor",
			"GAR_56cus_KINDRED_helmet",
			"GAR_56cus_KINDRED_armor",
			"GAR_56cus_KOZ_helmet",
			"GAR_56cus_KOZ_armor",
			"GAR_56cus_MACE_helmet",
			"GAR_56cus_MACE_armor",
			"GAR_56cus_NOBLE_helmet",
			"GAR_56cus_NOBLE_armor",
			"GAR_56cus_REAPER_helmet",
			"GAR_56cus_REAPER_armor",
			"GAR_56cus_REAPER_vest",
			"GAR_56cus_VITO_helmet",
			"GAR_56cus_VITO_armor",
			"GAR_56cus_WARDOG_helmet",
			"GAR_56cus_WARDOG_armor",
			"GAR_56cus_WARDOG_vest",
			"GAR_56cus_WARDOG_pack",
			"GAR_56cus_WINTERS_helmet",
			"GAR_56cus_WINTERS_armor",
			"GAR_56cus_ZAINO_helmet",
			"GAR_56cus_ZAINO_armor"

		};
		author="Wardog";
		requiredAddons[]={};
	};
};
class CfgFactionClasses
{
	class GAR_56VL
	{
		dsiplayName="56th Vanguard Armory";
	};
};
class CfgEditorSubcategories
{
	class GAR_56cus
	{
		displayName="56th Custom Vanguard";
	};
};
class CfgGlasses
{
	class G_Diving;
	class G_Combat;
	class 56std_clone_rangefinder_HUD: G_Combat
	{
		author="Wardog";
		ACE_Overlay="\SWLB_equipment\facewears\data\P2_HUD_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\SWLB_equipment\facewears\data\P2_HUD_cracked_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Resistance=1;
		ACE_Protection=1;
		ACE_TintAmount=0;
		displayName="Clone ARC trooper rangefinder";
		identityTypes[]={};
		mass=2;
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_rangefinder_ca.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class 56std_clone_mcvisor_HUD: G_Combat
	{
		author="Wardog";
		ACE_Overlay="\SWLB_equipment\facewears\data\P2_HUD_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\SWLB_equipment\facewears\data\P2_HUD_cracked_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Resistance=1;
		ACE_Protection=1;
		ACE_TintAmount=0;
		displayName="Clone trooper MC-Visor";
		identityTypes[]={};
		mass=2;
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_mc_visor_ui_ca.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
};
class CfgWeapons
{
	class JLTS_CloneArmor;
	class JLTS_CloneArmorRecon;
	class JLTS_CloneArmorSupport;
	class JLTS_CloneVestARCCadet;
	class JLTS_CloneVestARC;
	class JLTS_CloneVestKama;
	class 3as_P1_Base;
	class 3AS_ARF_Helmet;
	class 3as_Engineer_Helmet;
	class 3as_P2_Pilot_helmet;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetARC;
	class JLTS_CloneHelmetBARC;
	class JLTS_CloneHelmetAB;
	class UniformItem;
	class JLTS_CloneNVG_black;
	class JLTS_CloneNVGRange_black;
	class JLTS_CloneNVGCC;
	class JLTS_CloneNVGMC;
	class VA_502re_NVG: JLTS_CloneNVG_black
	{
		Author="Wardog";
		displayName="[502nd] NVG Visor";
		modelOptics="-";
		scopecurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
	};
	class VA_502re_NVGCC: JLTS_CloneNVGCC
	{
		Author="Wardog";
		displayName="[502nd] NVG CC Visor";
		modelOptics="-";
		scopecurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
	};
	class VA_502re_NVGMC: JLTS_CloneNVGMC
	{
		Author="Wardog";
		displayName="[502nd] NVG MC Visor";
		modelOptics="-";
		scopecurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
	};
	class VA_502re_Range: JLTS_CloneNVGRange_black
	{
		Author="Wardog";
		displayName="[502nd] NVG Rangefinder";
		modelOptics="-";
		scopecurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
	};
	class GAR_56cus_APEX_helmet: JLTS_CloneHelmetP2 					//HELMETS
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Apex's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_APEX_helmet.paa"
		};
	};
	class GAR_56cus_BLAST_helmet: JLTS_CloneHelmetP2
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Blast's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_BLAST_helmet.paa"
		};
	};
	class GAR_56cus_IMPULSE_helmet: 3as_P2_Pilot_helmet
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Impulse's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_IMPULSE_helmet.paa"
		};
	};
	class GAR_56cus_KINDRED_helmet: JLTS_CloneHelmetP2
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Kindred's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_KINDRED_helmet.paa"
		};
	};
	class GAR_56cus_KOZ_helmet: JLTS_CloneHelmetP2
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Koz's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_KOZ_helmet.paa"
		};
	};
	class GAR_56cus_MACE_helmet: JLTS_CloneHelmetP2
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Mace's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_MACE_helmet.paa"
		};
	};
	class GAR_56cus_NOBLE_helmet: 3as_P2_Pilot_helmet
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Noble's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_NOBLE_helmet.paa"
		};
	};
	class GAR_56cus_REAPER_helmet: JLTS_CloneHelmetP2
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Reaper's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_REAPER_helmet.paa"
		};
	};
	class GAR_56cus_VITO_helmet: JLTS_CloneHelmetP2
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Vito's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_VITO_helmet.paa"
		};
	};
	class GAR_56cus_WARDOG_helmet: JLTS_CloneHelmetARC
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Wardog's ARC Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_WARDOG_helmet.paa"
		};
	};
	class GAR_56cus_WINTERS_helmet: JLTS_CloneHelmetP2
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Winters's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_WINTERS_helmet.paa"
		};
	};
	class GAR_56cus_ZAINO_helmet: JLTS_CloneHelmetP2
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Zaino's Helmet";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_ZAINO_helmet.paa"
		};
	};
	class GAR_56cus_APEX_armor: JLTS_CloneArmor 					//Armors
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Apex's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_APEX";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_BLAST_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Blast's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_Blast";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_IMPULSE_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Impulse's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_IMPULSE";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_KINDRED_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Kindred's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_KINDRED";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_KOZ_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Koz's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_KOZ";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_MACE_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Mace's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_MACE";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_NOBLE_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Noble's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_NOBLE";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_REAPER_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Reaper's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_REAPER";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_VITO_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Vito's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_VITO";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_WARDOG_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Wardog's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_WARDOG";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_WINTERS_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Winters's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_WINTERS";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_ZAINO_armor: JLTS_CloneArmor
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Zaino's Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56cus_ZAINO";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56cus_APEX_vest: JLTS_CloneVestKama 					//Vests
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Apex's Kama";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_APEX_vest.paa",
		};
	};
	class GAR_56cus_WARDOG_vest: JLTS_CloneVestARC
	{
		author="Wardog";
		scopecurator=2;
		displayName="[56th-Custom] Wardog's ARC Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
		hiddenSelectionsTextures[]=
		{
			"56cus\data\GAR_56cus_WARDOG_vest.paa",
		};
	};
};
class CfgVehicles
{
	class JLTS_Clone_P2_AR;
	class JLTS_Clone_P2_Corporal;
	class JLTS_Clone_P2_Fives_501;
	class JLTS_Clone_P2_Neyo_91;
	class JLTS_Clone_P2_recon;
	class JLTS_Clone_ARC_backpack;
	class GAR_56cus_APEX: JLTS_Clone_P2_Corporal 					//Units
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CC-31-8019-Apex";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_APEX_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_APEX_upper.paa",
			"\56cus\data\GAR_56cus_APEX_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56cus_APEX_helmet",
			"GAR_56cus_APEX_vest",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_APEX_helmet",
			"GAR_56cus_APEX_vest",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_BLAST: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CS-31-5454-Blast";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_BLAST_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_BLAST_upper.paa",
			"\56cus\data\GAR_56cus_BLAST_lower.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
			"MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
		};
		linkedItems[]=
		{
			"GAR_56cus_BLAST_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_BLAST_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_IMPULSE: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CL-31-5325-Impulse";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_IMPULSE_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_IMPULSE_upper.paa",
			"\56cus\data\GAR_56cus_IMPULSE_lower.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
			"MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
		};
		linkedItems[]=
		{
			"GAR_56cus_IMPULSE_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_IMPULSE_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_KINDRED: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CP/M-31-2742-Kindred";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_KINDRED_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_KINDRED_upper.paa",
			"\56cus\data\GAR_56cus_KINDRED_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56cus_KINDRED_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_KINDRED_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_KOZ: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] ARC/CMS-31-1236-Koz";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_KOZ_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_KOZ_upper.paa",
			"\56cus\data\GAR_56cus_KOZ_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56cus_KOZ_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_KOZ_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_MACE: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CL-31-6698-Mace";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_MACE_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_MACE_upper.paa",
			"\56cus\data\GAR_56cus_MACE_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56cus_MACE_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_MACE_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_NOBLE: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CL-31-2312-Noble";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_NOBLE_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_NOBLE_upper.paa",
			"\56cus\data\GAR_56cus_NOBLE_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56cus_NOBLE_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_NOBLE_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_REAPER: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CC-31-1339-Reaper";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_REAPER_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_REAPER_upper.paa",
			"\56cus\data\GAR_56cus_REAPER_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56cus_REAPER_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_REAPER_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_VITO: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CSS-31-0249-Vito";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_VITO_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_VITO_upper.paa",
			"\56cus\data\GAR_56cus_VITO_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56cus_VITO_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_VITO_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_WARDOG: JLTS_Clone_P2_Neyo_91
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CM-31-0312-Wardog";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_WARDOG_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_WARDOG_upper.paa",
			"\56cus\data\GAR_56cus_WARDOG_lower.paa",
			"\56cus\data\GAR_56cus_recon_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
			"MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
		};
		linkedItems[]=
		{
			"GAR_56cus_WARDOG_helmet",
			"GAR_56cus_WARDOG_vest",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_WARDOG_helmet",
			"GAR_56cus_WARDOG_vest",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_WINTERS: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CT-2524-Winters";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_WINTERS_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_WINTERS_upper.paa",
			"\56cus\data\GAR_56cus_WINTERS_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56cus_WINTERS_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_WINTERS_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_ZAINO: JLTS_Clone_P2_Corporal
	{
		author="Wardog";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] CP-1776-Zaino";
		faction="GAR_56VL";
		editorSubcategory="GAR_56cus";
		uniformclass="GAR_56cus_ZAINO_armor";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_ZAINO_upper.paa",
			"\56cus\data\GAR_56cus_ZAINO_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56cus_ZAINO_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56cus_ZAINO_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56cus_NVG"
		};
	};
	class GAR_56cus_WardogARCPack: JLTS_Clone_ARC_backpack
	{
		author="Wardog";
		scope=2;
		displayName="[56th-Custom] Wardog's ARC Backpack";
		hiddenSelectionsTextures[]=
		{
			"\56cus\data\GAR_56cus_WARDOG_pack.paa"
		};
	};
};
class cfgMods
{
	author="Wardogleader59";
	timepacked="1613866659";
};