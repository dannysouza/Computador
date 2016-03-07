// Work Computer

#include "Computer.h"
#include "NetworkAdapter.h"

class WorkComputer : public Computer 
{	
	public:
		WorkComputer();
		~WorkComputer();
		
		void exeCalculator();
		void exeEditor();
};
