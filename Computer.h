// Class Computer

#ifndef COMPUTER_1_H
#define COMPUTER_1_H 

#include <string>

#include "Device.h"
#include "Date.h"
#include "Network.h"

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
        
        void displayWelcomeScreen();
        
        virtual void criticalUpdate() = 0;
        
        void removeMalwares();
		
     protected:
     	string operationalSystem;
     	float hdSize;
     	float availableStorage;
     	float currentOSVersion;
     	static float latestOSVersion;
     	Date downloadDate;
     	Network network;
};

#endif 
