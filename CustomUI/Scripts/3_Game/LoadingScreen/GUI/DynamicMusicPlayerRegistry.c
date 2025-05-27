modded class DynamicMusicPlayerRegistry
{
    protected override void RegisterTracksMenu()
	{
		m_TracksMenu = new array<ref DynamicMusicTrackData>();

		RegisterTrackMenu("Main_Music_Menu_SoundShader");
		//RegisterTrackMenu("FMusic_Menu_SoundSet_2");
	}
}