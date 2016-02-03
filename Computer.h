#include <iostream>
#include <string.h>

using namespace std;

class Computer
{
	 public:
     Computer();
     Computer (const Computer &other);
     void exeGame();
	 void exeEditor();
     void logIn();
     void logOff();	
     void newUser();

     private:
     string userName;
     string password;
     string textFile;
     float availableStorage;
     
     static string biosVersion;
};

