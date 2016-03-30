// Class Personal Computer
#include <stdlib.h>
#include "Computer.h"	
#include <vector>

using std::vector;

class PersonalComputer : public Computer 
{
	friend ostream& operator<<(ostream &, const PersonalComputer &);
		
	public:
		PersonalComputer();
		PersonalComputer(const PersonalComputer &);
		~PersonalComputer();
		
		const PersonalComputer &operator=(const PersonalComputer &);
	    bool operator==(const PersonalComputer &) const;
		
		void exeGame();
		void createNewUser();

        bool logIn(const string &, const string &);
		void logOff();
        
        virtual void criticalUpdate();
        
        void cleanCache();
        
        virtual void displayDeviceInformations();
		
	private:
		vector<string> usersVector;
	    vector<string> passwordsVector;
		string name;
};

