#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <lmcons.h>

int main(int argc, LPTSTR argv){

		long processorFeature = PF_FLOATING_POINT_EMULATED;
		
	if(IsProcessorFeaturePresent(processorFeature)){

		_tprintf(TEXT("�G�~�����[�g�����"));

	}else{
	
		_tprintf(TEXT("�G�~�����[�g����Ȃ�"));
	
	}
	
	return 0;
}
//***How to make***
//>cl /c IsProcessorF
//>link IsProcessorFeaturePresent.obj
