class CfgPatches
{
	class BlastTestmod
	{
		units[]=
		{
			"BT_blast"
		};
		weapons[]=
		{
			"BT_blast_helmet",
			"BT_blast_armour"
		};
		author="Wardog";
		requiredAddons[]={};
	};
};
class CfgFactionClasses
{
	class BT_TEST
	{
		dsiplayName="Blast Test Mod";
	};
};
class CfgEditorSubcategories
{
	class BT_TEST2
	{
		dsiplayName="Blast Test armours";
	};
};
class CfgWeapons
{
	class JLTS_CloneArmor;
	class JLTS_CloneArmorRecon;
	class JLTS_CloneArmorSupport;
	class JLTS_CloneVestARCCadet;
	class JLTS_CloneVestARC;
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
	class JLTS_CloneNVGCC;
	class JLTS_CloneNVGMC;
	class BT_blast_armour: JLTS_CloneArmor
	{
		author="Blast";
		scopecurator=2;
		displayName="Blast Armour";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BT_blast";
			containerClass="Supply150";
			mass=40;
		};
	};
	class BT_blast_helmet: JLTS_CloneHelmetP2
	{
		author="blast";
		scopecurator=2;
		displayName="Blast helmet";
		hiddenSelectionsTextures[]=
		{
			"Blasttest\data\GAR_56cus_BLAST_helmet.paa"
		};
	};
};
class CfgVehicles
{
	class JLTS_Clone_P2_AR;
	class JLTS_Clone_P2_Corporal;
	class JLTS_Clone_P2_Neyo_91;
	class JLTS_Clone_P2_recon;
	class BT_blast: JLTS_Clone_P2_Corporal
	{
		author="Blast";
		scopecurator=2;
		editorPreview="";
		displayName="Blast weeb test";
		faction="BT_TEST";
		editorSubcategory="BT_TEST2";
		uniformclass="BT_blast_armour";
		hiddenSelectionsTextures[]=
		{
			"Blasttest\data\GAR_56cus_BLAST_upper.paa",
			"Blasttest\data\GAR_56cus_BLAST_lower.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
};