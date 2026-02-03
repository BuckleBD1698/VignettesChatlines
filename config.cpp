class CfgPatches
{
	class VignettesChatlines
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};

class CfgMods
{
	class VignettesChatlines_Mod
	{
		dir 		= "VignettesChatlines";
		name 		= "Vignettes Chatlines";
		author 		= "BuckleBD";
		credits 	= "";
		creditsJSON = "";
		version 	= 1.0;
		extra 		= 0;
		type 		= "mod";
		inputs 		= "VignettesChatlines\data\inputs.xml";
		picture 	= "";
		logo 		= "";
		logoSmall 	= "";
		logoOver 	= "";
		action 		= "";

		dependencies[] = {"Game","World","Mission"};
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"VignettesChatlines/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"VignettesChatlines/scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"VignettesChatlines/scripts/5_mission"};
			};
		};
	};
};