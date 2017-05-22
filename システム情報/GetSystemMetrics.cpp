#include <windows.h>
#include <lmcons.h>
#include <tchar.h>
#include <stdio.h>

int main(int argc, LPTSTR argv[]){

	//SM_CLEANBOOT = 63
	//GetSystemMetrics function
	//https://msdn.microsoft.com/en-us/library/windows/desktop/ms724385(v=vs.85).aspx
	if( GetSystemMetrics(SM_CLEANBOOT) == 0){
		
		_tprintf(TEXT("通常の起動"));
		
	}else if(GetSystemMetrics(SM_CLEANBOOT) == 1){
	
		_tprintf(TEXT("「Safe モード」での起動"));
	
	}else if(GetSystemMetrics(SM_CLEANBOOT) == 2){
	
		_tprintf(TEXT("「ネットワークを使った Safe モード」での起動"));
	
	}else{
		printf("Error : %u", GetLastError());
		return 1;
	}
	
	return 0;

}

//★How to make
//cl /c GetSystemMetrics.cpp
//link user32.lib GetSystemMetrics.obj
//★Result
//>GetSystemMetrics.exe
//通常の起動