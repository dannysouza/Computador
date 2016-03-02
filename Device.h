	// Class Device

using namespace std;

class Device 
{
    public:
    	Device(); 
    	Device(bool, float); 
    	~Device(); 
    	
    	void turnOn();
    	void turnOff();
    	
	protected:
		bool turnedOn;
		float storageCapacity;
};


