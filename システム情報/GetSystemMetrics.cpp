#include <windows.h>
#include <lmcons.h>
#include <tchar.h>
#include <stdio.h>

int main(int argc, LPTSTR argv[]){

	//SM_CLEANBOOT = 63
	//GetSystemMetrics function
	//https://msdn.microsoft.com/en-us/library/windows/desktop/ms724385(v=vs.85).aspx
	if( GetSystemMetrics(SM_CLEANBOOT) == 0){
		
		_tprintf(TEXT("�ʏ�̋N��"));
		
	}else if(GetSystemMetrics(SM_CLEANBOOT) == 1){
	
		_tprintf(TEXT("�uSafe ���[�h�v�ł̋N��"));
	
	}else if(GetSystemMetrics(SM_CLEANBOOT) == 2){
	
		_tprintf(TEXT("�u�l�b�g���[�N���g���� Safe ���[�h�v�ł̋N��"));
	
	}else{
		printf("Error : %u", GetLastError());
		return 1;
	}
	
	return 0;

}

//��How to make
//cl /c GetSystemMetrics.cpp
//link user32.lib GetSystemMetrics.obj
//��Result
//>GetSystemMetrics.exe
//�ʏ�̋N��