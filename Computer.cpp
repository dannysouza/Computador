#include "Computer.h"

float Computer::latestOSVersion = 1.1;

Computer::Computer(const string &OS, float hd, float currentV)
:downloadDate(1, 1, 2001), Device(true, hd)
{
	this->operationalSystem = OS;
	this->hdSize = hd;
	this->currentOSVersion = currentV;
	this->availableStorage = hd;
	
	users = new string[1];
	passwords = new string[1];
	
	users[0] = "user";
	passwords[0] = "123";
	
	this->usersQuant = 1;
}

Computer::Computer(const Computer &other)
{
	this->operationalSystem=other.operationalSystem;
	this->hdSize=other.hdSize;
	this->currentOSVersion=other.currentOSVersion;
	
	this->users = other.users;
	this->passwords = other.passwords;
}

Computer::~Computer()
{
	delete [] users;
	delete [] passwords;
}

bool Computer::logIn(const string &userName, const string &password)
{
	for(int i=0; i<usersQuant;i++)
	{
		if(userName == users[i] && password == passwords[i])
		return true;
	}
	return false;
}

void Computer::logOff()
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
    			
    			logIn(name, pass);
    			
    			break;
    		default:
    			cout << "\n Choose an option ";
    		}
    		break;	
		}while (opt != 0);
}

void Computer::updatedOS()
{
	cout << "\n Current version: " << currentOSVersion;
	cout << "\n Latest version available: " << latestOSVersion;
	cout << "\n\n	Downloading files... ";
	
	downloadDate.currentDateTime();
	
	cout << "\n\n Download date: ";
	downloadDate.displayDate();
	
	currentOSVersion = latestOSVersion;
	
	cout << "\n Operational System has been updated to version " << operationalSystem << latestOSVersion;
	
	launchOSVersion();
}

void Computer::launchOSVersion()
{
	latestOSVersion += 0.1;
}

ostream& operator<<(ostream &output, const Computer &display)
{
	output << "\n Operational System: " << 	display.operationalSystem;
    output << "\n HD capacity: " << display.hdSize;
    output << "\n Current OS version: " << display.currentOSVersion;	
    
    return output;
}

void Computer::operator=(const Computer &comp){
    this->operationalSystem = comp.operationalSystem;
    this->hdSize = comp.hdSize;
    this->availableStorage = comp.availableStorage;
    this->currentOSVersion = comp.currentOSVersion;
    this->usersQuant = comp.usersQuant; 
    
    delete [] users;
    delete [] passwords;
    
    users = new string[this->usersQuant];
    
    for (int i=0;i<usersQuant;i++){
        this->users[i] = comp.users[i];
        this->passwords[i] = comp.passwords[i];
    }
}

bool Computer::operator==(const Computer &comp) const{
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
