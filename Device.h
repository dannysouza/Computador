	// Class Device

#include <iostream>

using namespace std;

class Device 
{
    public:
    	Device(); 
    	Device(bool, float); 
    	~Device(); 
    	
    	void turnOn();
    	void turnOff();
    	
    	virtual void displayWelcomeScreen() = 0;
    	
	protected:
		bool turnedOn;
		float storageCapacity;
};


