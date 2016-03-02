#include "Computer_1.h"
#include "Data.h"
#include "HardDisk.h"

float Computer::latestOSVersion = 1.1;

Computer::Computer(const string OS, float hd, float currentV, HardDisk storage)
:downloadDate(), availableStorage();
{
	this->operationalSystem = OS;
	this->hdSize = hd;
	this->currentOSVersion = currentV;
	
	this->downloadDate = 0;
	this->availableStorage = storage; 
	
	users = 0;
	passwords = 0;
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

