// Class Computer

#ifndef COMPUTER_1_H
#define COMPUTER_1_H 

#include <string>

#include "Device.h"
#include "Date.h"
#include "NetworkAdapter.h"

class Computer : public Device 
{	
public:
        inline Computer() {};
		Computer(const string &, float, float);
		Computer(const Computer &);
		~Computer();
		
        void updatedOS();
		static void launchOSVersion();
	    
	    void installNetworkDrivers();
	    
	    void connectToInternet();
		
     protected:
     	string operationalSystem;
     	float hdSize;
     	float availableStorage;
     	float currentOSVersion;
     	static float latestOSVersion;
     	int usersQuant;
     	Date downloadDate;
     	NetworkAdapter network;
};

#endif 
