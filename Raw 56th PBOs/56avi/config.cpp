class CfgPatches
{
	class GAR_56std
	{
		units[]=
		{
			"GAR_56avi_z95_base",
			"GAR_56avi_z95_impulse"
		};
		weapons[]=
		{
			""
		};
		author="Blast";
		requiredAddons[]=
		{
			"A3_Data_F_Tank_Loadorder"
		};
	};
};
class CfgEditorSubcategories
{
	class GAR_56avi
	{
		displayName="56th Aviation";
	};
};
class CfgVehicles
{
	class 3as_Z95_base;
	class 3as_Z95_Republic;
	class GAR_56avi_z95_base: 3as_Z95_Republic
	{
		scope = 2;
		scopecurator = 2;
		displayName = "56th Z95 (Base)";
		crew = "GAR_56std_pilot";
		side = 1;
		faction = "GAR_56VL";
		editorSubcategory="GAR_56avi";
		editorPreview = "";
		hiddenselections[] = {"camo","camo1","camo2"};
		hiddenselectionstextures[] = {"56avi\Data\GAR_56th_avi_z95_hull","3AS\3as_Z95\Data\cockpit_co.paa","3AS\3as_saber\data\glass\glass_ca"};
	};
	class GAR_56avi_z95_impulse: 3as_Z95_Republic
	{
		scope = 2;
		scopecurator = 2;
		displayName = "56th Z95 (Impulse)";
		crew = "GAR_56cus_IMPULSE";
		side = 1;
		faction = "GAR_56VL";
		editorSubcategory="GAR_56avi";
		editorPreview = "";
		hiddenselections[] = {"camo","camo1","camo2"};
		hiddenselectionstextures[] = {"56avi\Data\GAR_56th_avi_impulse_hull","3AS\3as_Z95\Data\cockpit_co.paa","3AS\3as_saber\data\glass\glass_ca"};
	};
};