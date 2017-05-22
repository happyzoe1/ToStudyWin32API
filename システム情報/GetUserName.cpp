#include <windows.h> 
#include <lmcons.h> 
#include <tchar.h> 
#include <stdio.h> 

int main(int argc, LPTSTR argv[]) {

      TCHAR szUserName[UNLEN + 1];
      DWORD dwUNLen = UNLEN;

      if( !GetUserName( (LPTSTR) szUserName, &dwUNLen ) ) {

           printf("Error: %u", GetLastError() );
           return 1;

      }

      _tprintf( TEXT("%s\n"), szUserName );
      return 0;
 }

