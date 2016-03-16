// Work Computer

#include "Computer.h"
#include "NetworkAdapter.h"

class WorkComputer : public Computer 
{	
	friend ostream& operator<<(ostream &, const WorkComputer &);
	
	public:
		WorkComputer();
		WorkComputer(const WorkComputer &);
		~WorkComputer();
		
		const Computer &operator=(const WorkComputer &);
	    bool operator==(const WorkComputer &) const;
		
		void exeCalculator();
		void exeEditor();
		
		virtual void displayWelcomeScreen();
		
	private:
		string privacyPolicy;
};
