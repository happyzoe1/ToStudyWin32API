#include <windows.h>
#include <lmcons.h>
#include <tchar.h>
#include <stdio.h>

//BOOL SystemParametersInfo(
//  UINT uiAction,  // �擾�܂��͐ݒ肷��ׂ��V�X�e���p�����[�^
//  UINT uiParam,   // ���{����ׂ�����ɂ���ĈقȂ�
//  PVOID pvParam,  // ���{����ׂ�����ɂ���ĈقȂ�
//  UINT fWinIni    // ���[�U�[�v���t�@�C���̍X�V�I�v�V����
//  );

int main(int argc, LPTSTR argv[]){

	TCHAR szBackGroundPath[256];

	if(!SystemParametersInfo(SPI_GETDESKWALLPAPER,MAX_PATH,&szBackGroundPath,0)){
	
			printf("Error : %u", GetLastError());
			return 1;
	}

	_tprintf(TEXT("%s\n"),szBackGroundPath);
	return 0;

}

//��How to make
//cl /c SystemParametersInfo-GETDESKWALLPAPER.cpp
//link user32.lib SystemParametersInfo-GETDESKWALLPAPER.obj
//��Result
//>SystemParametersInfo-GETDESKWALLPAPER.exe
//C:\Users\dankichi\AppData\Roaming\Microsoft\Windows\Themes\TranscodedWallpaper.jpg