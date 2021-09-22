class CfgPatches
{
	class GAR_56std
	{
		units[]=
		{
			"GAR_56std_ct",
			"GAR_56std_medic_ct",
			"GAR_56std_sct",
			"GAR_56std_vct",
			"GAR_56std_lcp",
			"GAR_56std_cp",
			"GAR_56std_medic_cp",
			"GAR_56std_cs",
			"GAR_56std_medic_cs",
			"GAR_56std_css",
			"GAR_56std_cms",
			"GAR_56std_2lt",
			"GAR_56std_1lt",
			"GAR_56std_cpt"
		};
		weapons[]=
		{
			"GAR_56std_ct_helmet",
			"GAR_56std_sct_helmet",
			"GAR_56std_vct_helmet",
			"GAR_56std_jnco_helmet",
			"GAR_56std_nco_helmet",
			"GAR_56std_snco_helmet",
			"GAR_56std_officer_helmet",
			"GAR_56std_medic_helmet",
			"GAR_56std_medic_ct_armor",
			"GAR_56std_medic_cp_armor",
			"GAR_56std_medic_cs_armor",
			"GAR_56std_ct_armor",
			"GAR_56std_sct_armor",
			"GAR_56std_vct_armor",
			"GAR_56std_lcp_armor",
			"GAR_56std_cp_armor",
			"GAR_56std_cs_armor",
			"GAR_56std_css_armor",
			"GAR_56std_cms_armor",
			"GAR_56std_2lt_armor",
			"GAR_56std_1lt_armor",
			"GAR_56std_cpt_armor",
			"GAR_56std_backpack",
			"GAR_56std_medic_backpack",
			"GAR_56std_backpack_rto",
			"GAR_56std_medic_backpack_rto",
			"GAR_56std_jnco_vest",
			"GAR_56std_nco_vest",
			"GAR_56std_snco_vest",
			"GAR_56std_officer_vest",
			"GAR_56std_NVG"
		};
		author="Apex";
		requiredAddons[]={};
	};
};
class CfgFactionClasses
{
	class GAR_56VL
	{
		displayName="56th Vanguard Legion";
	};
};
class CfgEditorSubcategories
{
	class GAR_56std
	{
		displayName="56th Standard Issue";
	};
};
class CfgWeapons
{
	class JLTS_CloneArmor;
	class JLTS_CloneArmorGrenadier;
	class JLTS_CloneArmorSupport;
	class JLTS_CloneArmorMC;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetP2MC;
	class JLTS_CloneHelmetAB;
	class JLTS_CloneHelmetBARC;
	class JLTS_CloneHelmetARC;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestOfficer2;
	class JLTS_CloneVestCommander;
	class JLTS_CloneVestARC;
	class JLTS_CloneVestARCCadet;
	class JLTS_CloneVestLiuetenant;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestReconNCO;
	class JLTS_CloneVestReconOfficer;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestAirborneNCO;
	class JLTS_CloneVestKama;
	class JLTS_CloneNVGRange;
	class JLTS_CloneNVG;
	class JLTS_CloneNVG_black;
	class JLTS_CloneNVG_spec;
	class JLTS_CloneNVGCC;
	class JLTS_CloneNVGMC;
	class 3as_P2_Pilot_helmet;
	class 3AS_ARF_Helmet;
	class VestItem;
	class UniformItem;
	class GAR_56std_ct_helmet: JLTS_CloneHelmetP2
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_ct_helmet.paa"
		};
	};
	class GAR_56std_sct_helmet: JLTS_CloneHelmetP2
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Senior Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_sct_helmet.paa"
		};
	};
	class GAR_56std_vct_helmet: JLTS_CloneHelmetP2
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Veteran Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_vct_helmet.paa"
		};
	};
	class GAR_56std_medic_helmet: JLTS_CloneHelmetP2
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Medic Helmet";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_medic_helmet.paa"
		};
	};
	class GAR_56std_jnco_helmet: JLTS_CloneHelmetP2
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Junior NCO Helmet";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_jnco_helmet.paa"
		};
	};
	class GAR_56std_nco_helmet: JLTS_CloneHelmetP2
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone NCO Helmet";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_nco_helmet.paa"
		};
	};
	class GAR_56std_snco_helmet: JLTS_CloneHelmetP2
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Senior NCO Helmet";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_snco_helmet.paa"
		};
	};
	class GAR_56std_officer_helmet: JLTS_CloneHelmetP2
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Officer Helmet";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_officer_helmet.paa"
		};
	};
	class GAR_56std_ct_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_ct";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_medic_ct_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Medic Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_medic_ct";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_medic_cp_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Medic Corporal Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_medic_cp";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_medic_cs_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Medic Sergeant Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_medic_cs";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_sct_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Senior Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_sct";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_vct_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Veteran Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_vct";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_lcp_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Lance Corporal Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_lcp";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_cp_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Corporal Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_cp";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_cs_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Sergeant Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_cs";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_css_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Senior Sergeant Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_css";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_cms_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Master Sergeant Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_cms";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_2lt_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone 2nd Lieutenant Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_2lt";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_1lt_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone 1st Lieutenant Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_1lt";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_cpt_armor: JLTS_CloneArmor
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Captain Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GAR_56std_cpt";
			containerClass="Supply150";
			mass=40;
		};
	};
	class GAR_56std_NVG: JLTS_CloneNVG_black
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone NV Visor [Black]";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
	};
	class GAR_56std_jnco_vest: JLTS_CloneVestRecon
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Junior NCO Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_jnco_vest.paa",
			"56std\data\GAR_56std_jnco_vest.paa"
		};
	};
	class GAR_56std_nco_vest: JLTS_CloneVestReconNCO
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone NCO Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_nco_vest.paa",
			"56std\data\GAR_56std_nco_vest.paa"
		};
	};
	class GAR_56std_snco_vest: JLTS_CloneVestReconOfficer
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Senior NCO Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_officer_vest.paa",
			"56std\data\GAR_56std_snco_vest.paa"
		};
	};
	class GAR_56std_officer_vest: JLTS_CloneVestOfficer
	{
		author="Apex";
		scopecurator=2;
		displayName="[56th] Clone Officer Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelectionsTextures[]=
		{
			"56std\data\GAR_56std_officer_vest.paa",
			"56std\data\GAR_56std_officer_vest.paa"
		};
	};
};
class CfgVehicles
{
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_backpack_medic;
	class JLTS_Clone_backpack_eod;
	class JLTS_Clone_jumppack;
	class JLTS_Clone_jumppack_mc;
	class JLTS_Clone_P2_corporal;
	class JLTS_Clone_P2_AR;
	class JLTS_Clone_P2_DC15AUGL;
	class JLTS_Clone_P2_marshalcommander;
	class GAR_56std_ct: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Trooper";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_ct_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_ct_upper.paa",
			"\56std\data\GAR_56std_ct_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_ct_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_ct_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_medic_ct: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Medic";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_medic_ct_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_medic_upper.paa",
			"\56std\data\GAR_56std_ct_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_medic_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_medic_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_medic_cp: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Medic Corporal";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_medic_cp_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_medic_cp_upper.paa",
			"\56std\data\GAR_56std_cp_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_medic_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_medic_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_medic_cs: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Medic Sergeant";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_medic_cs_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_medic_cs_upper.paa",
			"\56std\data\GAR_56std_cs_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_medic_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_medic_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_sct: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Senior Clone Trooper";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_sct_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_sct_upper.paa",
			"\56std\data\GAR_56std_sct_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_sct_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_sct_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_vct: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Veteran Clone Trooper";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_vct_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_vct_upper.paa",
			"\56std\data\GAR_56std_vct_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_vct_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_vct_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_lcp: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Lance Corporal";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_lcp_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_lcp_upper.paa",
			"\56std\data\GAR_56std_lcp_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_jnco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_jnco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_cp: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Corporal";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_cp_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_cp_upper.paa",
			"\56std\data\GAR_56std_cp_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_jnco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_jnco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_cs: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Sergeant";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_cs_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_cs_upper.paa",
			"\56std\data\GAR_56std_cs_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_nco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_nco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_css: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Staff Sergeant";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_css_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_css_upper.paa",
			"\56std\data\GAR_56std_css_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_nco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_nco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_cms: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Master Sergeant";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_cms_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_cms_upper.paa",
			"\56std\data\GAR_56std_cms_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_snco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_snco_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_2lt: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Second Lieutenant";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_2lt_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_2lt_upper.paa",
			"\56std\data\GAR_56std_officer_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_officer_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_officer_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_1lt: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone First Lieutenant";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_cms_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_1lt_upper.paa",
			"\56std\data\GAR_56std_officer_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_officer_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_officer_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_cpt: JLTS_Clone_P2_corporal
	{
		author="Apex";
		scopecurator=2;
		editorPreview="";
		displayName="[56th] Clone Captain";
		faction="GAR_56VL";
		editorSubcategory="GAR_56std";
		uniformclass="GAR_56std_cpt_armor";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_cpt_upper.paa",
			"\56std\data\GAR_56std_officer_lower.paa"
		};
		linkedItems[]=
		{
			"GAR_56std_officer_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
		respawnLinkedItems[]=
		{
			"GAR_56std_officer_helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"GAR_56std_NVG"
		};
	};
	class GAR_56std_backpack: JLTS_Clone_backpack
	{
		author="Apex";
		scope=2;
		displayName="[56th] Standard Trooper Backpack";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_backpack.paa"
		};
		maximumLoad=750;
	};
	class GAR_56std_medic_backpack: JLTS_Clone_backpack
	{
		author="Apex";
		scope=2;
		displayName="[56th] Medic Backpack";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_medic_backpack.paa"
		};
		maximumLoad=750;
	};
	class GAR_56std_medic_backpack_rto: JLTS_Clone_backpack_RTO
	{
		author="Apex";
		scope=2;
		displayName="[56th] Medic RTO Backpack";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_medic_backpack.paa"
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		maximumLoad=750;
		tf_range=50000;
		tf_subtype="digital_lr";
	};
	class GAR_56std_backpack_rto: JLTS_Clone_backpack_RTO
	{
		author="Apex";
		scope=2;
		displayName="[56th] Standard RTO Backpack";
		hiddenSelectionsTextures[]=
		{
			"\56std\data\GAR_56std_backpack.paa"
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		maximumLoad=750;
		tf_range=50000;
		tf_subtype="digital_lr";
	};
};
class cfgMods
{
	author="Apex";
	timepacked="1632282587";
};
