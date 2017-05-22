#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <lmcons.h>

int main (int argc, LPTSTR argv[]){
	
	//HW_PROFILE_INFO structure
	//https://msdn.microsoft.com/ja-jp/library/windows/desktop/ms724479(v=vs.85).aspx
	HW_PROFILE_INFO hwProfileInfo;

	if(!GetCurrentHwProfile(&hwProfileInfo)){
		
		printf("Error : %u", GetLastError());
		return 1;
	}
	
	_tprintf(TEXT("DockInfo = %d\n"), hwProfileInfo.dwDockInfo);
	_tprintf(TEXT("Profile Guid = %s\n"), hwProfileInfo.szHwProfileGuid);
	_tprintf(TEXT("Friendly Name = %s\n"), hwProfileInfo.szHwProfileName);

	return 0;
}
//šHow to make
//cl /c GetCurrentHwProfile.cpp
//link advapi32.lib GetCurrentHwProfile.obj
//šResult
//>GetCurrentHwProfile.exe
//DockInfo = 1
//Profile Guid = {846ee340-7039-11de-9d20-806e6f6e6963}
//Friendly Name = Undocked Profile