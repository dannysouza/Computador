#include "Computer.h"

float Computer::latestOSVersion = 1.1;

Computer::Computer(const string &OS, float hd, float currentV)
:downloadDate(1, 1, 2001), Device(true, hd)
{
    displayWelcomeScreen();
    
	this->operationalSystem = OS;
	this->hdSize = hd;
	this->currentOSVersion = currentV;
	this->availableStorage = hd;
}

Computer::Computer(const Computer &other)
{
	this->operationalSystem=other.operationalSystem;
	this->hdSize=other.hdSize;
	this->currentOSVersion=other.currentOSVersion;
}

Computer::~Computer()
{
}

void Computer::updatedOS()
{
	cout << "\n Current version: " << currentOSVersion;
	cout << "\n Latest version available: " << latestOSVersion;
	cout << "\n\n	Downloading files... ";
	
	downloadDate.currentDateTime();
	
	cout << "\n\n Download date: ";
	downloadDate.displayDate();
	
	currentOSVersion = latestOSVersion;
	
	cout << "\n Operational System " << operationalSystem << " has been updated to version " << latestOSVersion;
	
	launchOSVersion();
}

void Computer::launchOSVersion()
{
	latestOSVersion += 0.1;
}

void Computer::installNetworkDrivers()
{
	network.installDrivers();
}

void Computer::connectToInternet()
{
	network.connectToInternet();
}

void Computer::displayWelcomeScreen()
{
	cout << "\n          # Welcome! #         \n ";
}

void Computer::removeMalwares()
{
    network.removeMalwares();
}