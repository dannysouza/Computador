#include <iostream>

using namespace std;

class NetworkAdapter
{
	public:
		NetworkAdapter();
		~NetworkAdapter();
		
		void installDrivers();
		
    private:
    	bool driversInstalled
};