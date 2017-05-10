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
//値 	意味
//1 	IBM PC/XT または互換キーボード（83 キー）
//2 	Olivetti "ICO" キーボード（102 キー）
//3 	IBM PC/AT または類似のキーボード（84 キー）
//4 	IBM 拡張キーボード（101 キー、または 102 キー）
//5 	Nokia 1050 または類似のキーボード
//6 	Nokia 9140 または類似のキーボード
//7 	日本語キーボード