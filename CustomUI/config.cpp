class CfgPatches
{
	class DayZExpansion_LoadingScreen_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class DZ_Expansion_LoadingScreen
	{
		dir="CustomUI";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="CustomUI and Sound";
		credits="WhoEver!?";
		author="H3liumCat";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] =
				{
					"CustomUI/Scripts/3_Game"
				};
			};
			class missionScriptModule
			{
				value = "";
				files[] = 
				{
					"CustomUI/Scripts/5_Mission"
				};
			};
		};
	};
};
class CfgSoundSets
{
	class Main_Music_Menu_SoundSet
	{
		soundShaders[] = {"Main_Music_Menu_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
};	
class CfgSoundShaders
{
	class Main_Music_Menu_SoundShader
	{
		samples[] = 
		{
			{"CustomUI\Music\mainmenu1.ogg",1}
		};
		volume = 1.0;
	};
};