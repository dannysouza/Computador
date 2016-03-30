#ifndef NETWORKADAPTER_H
#define NETWORKADAPTER_H

#include <iostream>

using namespace std;

class Network
{
	public:
		Network();
		~Network();
		
		void installDrivers();
		void connectToInternet();
        void removeMalwares();
		
    private:
    	bool driversInstalled;
        bool malware; 
};

#endif 