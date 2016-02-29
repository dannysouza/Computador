#include <iostream>
#include <string.h>
#include "Date.h"
#include "HardDisk.h"

using namespace std;

class Computer : public Device
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
     	void format();

     private:
     	 int usersQuant; 
	     string *users;
	     string *passwords;
	     HardDisk availableStorage;
	     float currentWindowsVersion;
	     static float latestWindowsVersion;
	     Date downloadDate;
	     HardDisk hd;
	     
};

