#include <iostream>
#include <string.h>

using namespace std;

class Computer
{
      private:
      		  string userName;
      		  string password;
      		  string textFile;
              float availableStorage;
      public:
      	     Computer();
             void exeGame();
             void exeEditor();
             void logIn();
             void logOff();	
             void newUser();
};


