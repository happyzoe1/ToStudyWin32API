#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <lmcons.h>

int main (int argc, LPTSTR argv[]){
	
	//OSVERSIONINFO structure
	//https://msdn.microsoft.com/ja-jp/library/windows/desktop/ms724834(v=vs.85).aspx
	OSVERSIONINFO  OsVersionInfo;
	
	//if you forget following line, you get error code 122 = システム コールに渡されるデータ領域が小さすぎます。
	OsVersionInfo.dwOSVersionInfoSize=sizeof(OSVERSIONINFO);

	if(!GetVersionEx(&OsVersionInfo)){
		
		printf("Error : %u", GetLastError());
		return 1;
	}
	
	_tprintf(TEXT("MajorVersion = %d\n"), OsVersionInfo.dwMajorVersion);
	_tprintf(TEXT("MinorVersion = %d\n"), OsVersionInfo.dwMinorVersion);
	_tprintf(TEXT("BuildNumber = %d\n"), OsVersionInfo.dwBuildNumber);

	return 0;
}
//★How to make
//cl /c GetVersionEx.cpp
//link  GetVersionEx.obj
//★Result
//>GetVersionEx.exe
//MajorVersion = 6
//MinorVersion = 1
//BuildNumber = 7601

//Refernce
//http://yamatyuu.net/computer/program/sdk/base/GetVersionEx/index.html