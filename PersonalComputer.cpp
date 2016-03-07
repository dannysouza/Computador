#include "PersonalComputer.h"

using namespace std;

PersonalComputer::PersonalComputer()
:Computer("Windows 10", 1000, 1.1)
{
	this->name = "BMO"; 
}

PersonalComputer::PersonalComputer(const PersonalComputer &other)
:Computer (static_cast < Computer > (other))
{
	this->name = other.name;
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
	
	string *aux = new string[usersQuant];
	string *aux2 = new string[usersQuant];
	
	for(int i=0; i<usersQuant; i++)
	aux[i] = users[i];
	aux2[i] = passwords[i];
	
	delete [] users;
	delete [] passwords;
	
	users = new string[++usersQuant];
	passwords = new string [++usersQuant];
	
	for(int i=0; i<usersQuant-1; i++)
		users[i] = aux[i];
		passwords[i] = aux2[i];
		
	users[usersQuant-1] = userName;
	passwords[usersQuant-1] = password;
	
	delete [] aux;
	delete [] aux2;
}

ostream& operator<<(ostream &output, const PersonalComputer &display)
{
	output << "\n Operational System: " << 	display.operationalSystem;
    output << "\n HD capacity: " << display.hdSize;
    output << "\n Current OS version: " << display.currentOSVersion;	
    
    return output;
}

void PersonalComputer::operator=(const PersonalComputer &comp){
    this->operationalSystem = comp.operationalSystem;
    this->hdSize = comp.hdSize;
    this->availableStorage = comp.availableStorage;
    this->currentOSVersion = comp.currentOSVersion;
    this->usersQuant = comp.usersQuant; 
    
    delete [] users;
    delete [] passwords;
    
    users = new string[this->usersQuant];
    passwords = new string[this->usersQuant];
    
    for (int i=0;i<usersQuant;i++){
        this->users[i] = comp.users[i];
        this->passwords[i] = comp.passwords[i];
    }
}

bool PersonalComputer::operator==(const PersonalComputer &comp) const{
    if(operationalSystem != comp.operationalSystem)
        return false;
    if(hdSize != comp.hdSize)
        return false;
    if(availableStorage != comp.availableStorage)
        return false;
    if(currentOSVersion != comp.currentOSVersion)
        return false;
    if(usersQuant != comp.usersQuant)
        return false;
        
    for(int i=0;i<usersQuant;i++){
    	if(users[i] != comp.users[i] || passwords[i] != comp.passwords) 	
    	    return false;
	}
	return true;
}
