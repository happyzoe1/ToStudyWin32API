#include <windows.h> 
#include <lmcons.h> 
#include <tchar.h> 
#include <stdio.h> 

//To get userprofile path program

int main(int argc, LPTSTR argv[]) {

      TCHAR szEnvName[] = {_T("%USERPROFILE%")};
      TCHAR szEnvValue[UNLEN+1];
      DWORD dwUNLen = UNLEN;

      if( !ExpandEnvironmentStrings( (LPTSTR) szEnvName,(LPTSTR) szEnvValue , dwUNLen ) ) {

           printf("Error: %u", GetLastError() );
           return 1;

      }

      _tprintf( TEXT("%s\n"), szEnvName );
      _tprintf( TEXT("%s\n"), szEnvValue );
      return 0;
 }

