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
	     float availableStorage;
	     int currentWindowsVersion=8;
	     static int latestWindowsVersion;
	     

};

