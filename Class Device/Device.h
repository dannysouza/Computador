
using namespace std;

class Device 
{
    public:
    	Device(); 
    	Device(bool); 
    	~Device(); 
    	
    	void turnOn();
    	void turnOff();
    	bool isOn() const;
    	
	protected:
		bool turnedOn;
		float storageCapacity;
};