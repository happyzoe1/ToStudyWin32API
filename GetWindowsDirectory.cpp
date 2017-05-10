#include <windows.h>
#include <lmcons.h>
#include <tchar.h>
#include <stdio.h>

int main(int argc, LPTSTR argv[]){

	TCHAR szDirectoryName[256];
	UINT uSize = UNLEN;
	
	if( !GetWindowsDirectory((LPTSTR)szDirectoryName, uSize)){
		
		printf("Error : %u", GetLastError());
		return 1;
	}
	
	_tprintf(TEXT("%s\n"),szDirectoryName);
	return 0;
 }
	
//***How to make***
//cl /c GetWindowsDirectory.cpp
//link GetWindowsDirectory.obj
