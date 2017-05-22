#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <lmcons.h>

int main(int argc, LPTSTR argv){

	int nIndex = COLOR_3DDKSHADOW ;
		
	if(!GetSysColor(nIndex)){
		printf("Error : %u", GetLastError());
		return 1;
	}
	
	_tprintf(TEXT("%d\n"), GetSysColor(nIndex));
	return 0;
}

//***How to make***
//cl /c GetSysColor.cpp
//link user32.lib GetSysColor.obj

//***Result***
//GetSysColor
//https://msdn.microsoft.com/ja-jp/library/cc429800.aspx