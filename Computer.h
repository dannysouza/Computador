// Class Computer

#ifndef COMPUTER_1_H
#define COMPUTER_1_H 

#include <string>

#include "Device.h"
#include "Date.h"
#include "NetworkAdapter.h"

class Computer : public Device 
{
	friend ostream& operator<<(ostream &, const Computer &);
	
	public:
		Computer(const string &, float, float);
		Computer(const Computer &);
		~Computer();
		
		bool logIn(const string &, const string &);
		void logOff();
		void updatedOS();
		static void launchOSVersion();
		
		const Computer &operator=(const Computer &);
	    bool operator==(const Computer &) const;
	    
	    void installNetworkDrivers();
	    
	    void connectToInternet();
		
     protected:
     	string operationalSystem;
     	float hdSize;
     	float availableStorage;
     	string *users;
     	string *passwords;
     	float currentOSVersion;
     	static float latestOSVersion;
     	int usersQuant;
     	Date downloadDate;
     	NetworkAdapter network;
};

#endif 
