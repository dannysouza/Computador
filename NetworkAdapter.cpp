#include "NetworkAdapter.h"

using namespace std;

NetworkAdapter::NetworkAdapter()
{
	driversInstalled = false;
}

NetworkAdapter::~NetworkAdapter()
{
}

void NetworkAdapter::installDrivers()
{
	if(driversInstalled)
		cout << "\n Network drivers are already installed.";
	
	else
		driversInstalled = true;
} 