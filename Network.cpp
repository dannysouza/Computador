#include "Network.h"
#include <stdlib.h> 
#include <time.h>

using namespace std;

Network::Network()
{
	driversInstalled = false;
    malware = false;
}

Network::~Network()
{
}

void Network::installDrivers()
{
	if(driversInstalled)
		cout << "\n Network drivers are already installed. \n";
	
	else
		driversInstalled = true;
} 

void Network::connectToInternet()
{
	if(driversInstalled)
    {
        int random;
        
		cout << "\n Connected.";
        
        srand (time(NULL));
        
        random = rand() % 2;
        
        if(random == 0)
            malware = false;
            
        else
        {
            malware = true; 
            cout << "\n\n Your computer has been infected. ";
        }
    }
	
	else
		cout << "\n Network drivers not installed. \n";
}

void Network::removeMalwares()
{
    if(malware)
    {
        malware = false;
        cout << "\n\n Malwares successfully removed. ";
    }
    
        cout << "\n\n Your computer is not infected. ";
        
}