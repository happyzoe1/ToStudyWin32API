#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <lmcons.h>

#define SECURITY_WIN32
#include <Security.h>

//This program doesn't work well.

int main(int argc, LPTSTR argv[]){


	TCHAR szComputerName[UNLEN];
	ULONG nSize = 1024;
        
	if(!GetComputerObjectName(NameDnsDomain , (LPTSTR)szComputerName, &nSize)){
	
		printf("Error : %u", GetLastError());
		return 1;
	
	}
	
	_tprintf(TEXT("%s\n"),szComputerName);
	
	return 0;
}

//***How to make***
//cl /c GetComputerObjectName.cpp
//link secur32.lib GetComputerObjectName.obj