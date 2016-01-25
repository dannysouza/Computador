#include <iostream>
#include <string.h>

using namespace std;

class Computer 
{
	private: 
	
		string name;
		int ramSize;
		float hdSize;
		float clock;
		int op;
		
	public:
		
		Computer(); // Construtor
		
		void turnOn();
		void exeProgram();
		void exeCalculator();
		void exeEditor();
		void showPrograms();
		int showDateAndTime();
		void turnOff();
};
