#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <lmcons.h>

int main(int argc, LPTSTR argv){

	if(!LockWorkStation()){
		
		printf("Error : %u", GetLastError());
		return 1;
		
	}else{
		_tprintf(TEXT("Lock ê¨å˜"));
	}

	return 0;

}