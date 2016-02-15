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
     	static void updateWindowsVersion();

     private:
	     string userName;
	     string password;
	     string textFile;
	     float availableStorage;
	     
	     static int windowsVersion=8;
	     static int latestVersion;
	     

};

