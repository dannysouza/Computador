// Class Personal Computer

#include "Computer.h"	

class PersonalComputer : public Computer 
{
	friend ostream& operator<<(ostream &, const PersonalComputer &);
		
	public:
		PersonalComputer();
		PersonalComputer(const PersonalComputer &);
		~PersonalComputer();
		
		const Computer &operator=(const PersonalComputer &);
	    bool operator==(const PersonalComputer &) const;
		
		void exeGame();
		void createNewUser();
		
		virtual void displayWelcomeScreen();
		
	private:
		string name;
};

