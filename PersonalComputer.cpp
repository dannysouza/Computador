#include "PersonalComputer.h"

using namespace std;

PersonalComputer::PersonalComputer()
:Computer("Windows 10", 1000, 1.1)
{	
	// displayWelcomeScreen();
	
	// logOff();
	
	this->name = "BMO"; 
}

PersonalComputer::PersonalComputer(const PersonalComputer &other)
{	
	this->name = other.name;
	
	this->operationalSystem=other.operationalSystem;
	this->hdSize=other.hdSize;
	this->currentOSVersion=other.currentOSVersion;
}

PersonalComputer::~PersonalComputer()
{
}

void PersonalComputer::exeGame()
{
	system("Hangman.exe");
}

void PersonalComputer::createNewUser()
{	
	string userName, password;
	int i;
	
	cout << "\n Choose a user name: ";
	cin >> userName;
	cout << "\n Choose a password: ";
	cin >> password;
	
	usersVector.push_back(userName);
	passwordsVector.push_back(password);
}

ostream& operator<<(ostream &output, const PersonalComputer &display)
{
	output << "\n Operational System: " << 	display.operationalSystem;
    output << "\n HD capacity: " << display.hdSize;
    output << "\n Current OS version: " << display.currentOSVersion;	
    
    return output;
}

const PersonalComputer &PersonalComputer::operator=(const PersonalComputer &comp)
{
    this->operationalSystem = comp.operationalSystem;
    this->hdSize = comp.hdSize;
    this->availableStorage = comp.availableStorage;
    this->currentOSVersion = comp.currentOSVersion;
    this->usersQuant = comp.usersQuant; 
    
    this->usersVector = comp.usersVector;
    this->passwordsVector = comp.passwordsVector;
}

void PersonalComputer::displayWelcomeScreen()
{
	cout << "\n          # Welcome! #         \n ";
}

bool PersonalComputer::logIn(const string &userName, const string &password)
{
	for(int i=0; usersVector.size(); i++)
	{
		if(userName == usersVector[i] && password == passwordsVector[i])
		return true;
	}
	return false;
}

void PersonalComputer::logOff()
{
		int opt;
		string name, pass;
		
	    do{
    	cout << "\n 1 - Login as guest \n 2 - Login as user \n 0 - Turn off ";
    	cin >> opt;
    	switch (opt){
    		case 1:
    			break;
    		case 2:
    			
    			cout << "\n User name: ";
    			cin >> name;
    			cout << "\n Password: ";
    			cin >> pass;
    			
    			if(logIn(name, pass));
    			{
    				cout << "\n Login sucessful \n";
					break;
				}
				
				cout << "\n Invalid user name or password. \n";
    			
    		default:
    			cout << "\n Choose an option ";
    		}
    		break;	
		}while (opt != 0);
}
