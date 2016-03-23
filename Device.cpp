#include "Device.h"

Device::Device()
{
	turnedOn = false;
}

Device::Device(bool state, float storage)
{
	turnedOn = state;
	
	if(storage>0)
	this->storageCapacity = storage;
	
	else
	this->storageCapacity = 1;
}

Device::~Device()
{	
}

void Device::turnOn()
{
	if(turnedOn)
		cout << "\n The device is already turned On. \n";
	
	else
	{
		turnedOn = true;
		cout << "\n Device has been turned on. \n";
	}
}

void Device::turnOff()
{
	if (not turnedOn)
		cout << "\n The device is already turned off. \n";
	
	else
	{
		turnedOn = false;
		cout << "\n Device has been turned off. Bye bye <3 \n";
	}
}
