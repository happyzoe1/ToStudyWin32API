#include <windows.h>
#include <lmcons.h>
#include <tchar.h>
#include <stdio.h>

int main(int argc, LPTSTR argv[]){

	TCHAR szComputerName[256];
	DWORD dwCNLen = UNLEN;
	
	if( !GetComputerName((LPTSTR)szComputerName, &dwCNLen)){
		
		printf("Error : %u", GetLastError());
		return 1;
	}
	
	_tprintf(TEXT("%s\n"),szComputerName);
	return 0;
 }
	
	