#include <iostream>
#include <string.h>
#include "Date.h"

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
     	void updateWindowsVersion();
     	static void launchNewVersion(float NewVersion);
     	const string currentDateTime();

     private:
     	 int usersQuant; 
	     string *userName[];
	     string password;
	     float availableStorage;
	     float currentWindowsVersion;
	     static int latestWindowsVersion;
	     Date downloadDate;
	     
};

