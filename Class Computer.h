#include <iostream>
#include <string.h>

using namespace std;

class Computer 
{
	private: 
	
		String name;
		int ramSize;
		float hdSize;
		float clock;
		String program;
		
	public:
		
		Computer(); 
		
		void turnOn();
		int exeProgram(string);
		void turnOff();
		void showPrograms();
		void turnOff();
};


