#include <iostream>

using namespace std;

class HardDisk
{
	public:
		HardDisk(const float &);
		~HardDisk();
		float formatHD();
	private:
		float hdSize;
		float availableStorage;
};
