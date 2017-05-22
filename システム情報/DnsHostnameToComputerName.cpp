#include <windows.h>
#include <lmcons.h>
#include <tchar.h>
#include <stdio.h>

int main(int argc, LPTSTR argv[]){

	TCHAR szDNSname[] = {_T("test.com")};
	TCHAR szComputerName[256];
	DWORD dwCNLen = UNLEN;
	     
	if( !DnsHostnameToComputerName((LPTSTR)szDNSname,(LPTSTR)szComputerName, &dwCNLen)){
		
		printf("Error : %u", GetLastError());
		return 1;
	}
	
	_tprintf(TEXT("%s\n"),szDNSname);
	_tprintf(TEXT("%s\n"),szComputerName);
	return 0;
 }
	
	