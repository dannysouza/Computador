#ifndef NETWORKADAPTER_H
#define NETWORKADAPTER_H

#include <iostream>

using namespace std;

class NetworkAdapter
{
	public:
		NetworkAdapter();
		~NetworkAdapter();
		
		void installDrivers();
		void connectToInternet();
		
    private:
    	bool driversInstalled;
};

#endif 