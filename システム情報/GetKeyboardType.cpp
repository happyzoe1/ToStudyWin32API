#include <windows.h>
#include <lmcons.h>
#include <tchar.h>
#include <stdio.h>

int main(int argc, LPTSTR argv){

	int nTypeFlg = 0;  //keyboard type
	
	if(!GetKeyboardType(nTypeFlg)){
	
		printf("Error : %u\n",GetLastError());
		return 1;
	}

	_tprintf(TEXT("%d\n"),GetKeyboardType(nTypeFlg));
	return 0;

}

//***How to make***
//cl /c GetKeyboardType.cpp
//link User32.lib GetKeyboardType.obj

//***Result***
//�l 	�Ӗ�
//1 	IBM PC/XT �܂��͌݊��L�[�{�[�h�i83 �L�[�j
//2 	Olivetti "ICO" �L�[�{�[�h�i102 �L�[�j
//3 	IBM PC/AT �܂��͗ގ��̃L�[�{�[�h�i84 �L�[�j
//4 	IBM �g���L�[�{�[�h�i101 �L�[�A�܂��� 102 �L�[�j
//5 	Nokia 1050 �܂��͗ގ��̃L�[�{�[�h
//6 	Nokia 9140 �܂��͗ގ��̃L�[�{�[�h
//7 	���{��L�[�{�[�h