# ToStudyWin32API
Making easy programs to study Win32API.

# How to compile .cpp file
I use Visual Studio 2010.★★★  
You can use the following command.  

   cl  /c  XXXXXXXX.cpp  
   
# How to Link
You must find the lack of external link.  
You can use the following command.  

   dumpbin /SYMBOLs  XXXXXXXX.obj | findstr External  

==
Example
==
     dumpbin /SYMBOLS GetUserName.obj | findstr External

     00B 00000000 SECT4  notype ()    External     | main
     012 00000000 UNDEF  notype ()    External     | __GSHandlerCheck
     013 00000000 UNDEF  notype ()    External     | printf
     014 00000000 UNDEF  notype       External     | __imp_GetLastError
     015 00000000 UNDEF  notype       External     | __imp_GetUserNameA
     016 00000000 UNDEF  notype       External     | __security_cookie
     017 00000000 UNDEF  notype ()    External     | __security_check_cookie
     
⇒I need to import GetLastError and GetUserName API.  
  You found the following infomation in MSDN Web page  

  ・GetLastError requires kernel32.lib  
  ・GetUserName requires advapi32.lib  


And Kernel32.lib is linked by default,so you should link advapi32.lib.  
You can use the following command to link library to .obj .  

    link advapi32.lib GetUserName.obj
    
After that you can get .exe file.
