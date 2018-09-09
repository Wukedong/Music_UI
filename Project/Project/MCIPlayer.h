#pragma once

#include<mmsystem.h> 
#pragma comment(lib,"winmm.lib") 

#include <Digitalv.h>

class MCIPlayer
{
public:
	MCIPlayer();
	~MCIPlayer(void);

	// ����
	void Play(LPCTSTR lpAudioFile, DWORD* pAudioLen = NULL);
	// ��ͣ
	void Pause();
	// ����
	void Resume();
	// ֹͣ
	void Stop();
	// ����ʱ��
	DWORD GetAudioLength(LPCTSTR lpAudioFile);
	// ����
	void SetVolume(DWORD dwVolume); // volume: 0-1000

private:
	MCIDEVICEID m_idDevPlay;
};
