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
     	static void launchNewVersion();
     	const string currentDateTime();

     private:
     	 int usersQuant; 
	     string *users;
	     string *passwords;
	     float availableStorage;
	     float currentWindowsVersion;
	     static int latestWindowsVersion;
	     Date downloadDate;
	     
};

