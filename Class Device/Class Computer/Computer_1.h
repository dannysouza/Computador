#include <string>

#include "Device.h"
#include "Date.h"
#include "HardDisk.h"

class Computer : public Device 
{
	public:
		Computer(const string);
		Computer(const Computer &);
		~Computer();
		
		void logIn();
		void logOff();
		void updatedOS();
		static void launchOSVersion();
		void format();
		
     protected:
     	string operationalSystem;
     	float hdSize;
     	string *users;
     	string *passwords;
     	float currentOSVersion;
     	static float latestOSVersion;
     	Date downloadDate;
     	HardDisk hd;
};