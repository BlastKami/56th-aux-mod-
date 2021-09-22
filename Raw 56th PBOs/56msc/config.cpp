class CfgPatches
{
	class GAR_Arsenal
	{
		units[]=
		{
			"unit"
		};
		weapons[]=
		{
			""
		};
		author="Apex";
		requiredAddons[]={};
	};
};
class CfgEditorSubcategories
{
	class GAR_56
	{
		displayName="56th Vanguard Legion";
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class GAR_Flag: FlagCarrier
	{
		author="Apex";
		displayName="Flag";
		editorCategory="GAR_56";
		editorSubcategory="GAR_56std";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
	};
	class GRFlag: GAR_Flag
	{
		scope=2;
		scopeCurator=2;
		displayName="Galactic Republic Flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\56msc\data\republicflag.paa'";
		};
	};
};
class cfgMods
{
	author="Apex";
	timepacked="1632197538";
};
