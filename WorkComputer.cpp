#include "WorkComputer.h"
#include <fstream>

using namespace std;

WorkComputer::WorkComputer()
:Computer("Windows 7", 500, 1.0)
{
	displayWelcomeScreen();
	
	this->privacyPolicy = "\n Please don't hack anything thanks";
}

WorkComputer::PersonalComputer(const WorkComputer &other)
:Computer (static_cast < Computer > (other))
{
	this-> privacypolicy = other.privacyPolicy;
}

WorkComputer::~WorkComputer()
{
}

void WorkComputer::exeCalculator()
{
	float number1, number2;
	char op;
	
	cout << "\n\n      # Calculator #       ";
	cout << "\n 	(Press 'x' to exit. \n)";
	
	cout << "\n Number: ";
	cin >> number1;
	cout << "\n Operation (+, -, *, /): ";
	cin >> op;
	cout << "\n Number: \n\n";
	cin >> number2;		
	
	do
	{
		switch(op)
		{
			case '+':
				cout << number1 + number2;
				break;
			
			case '-':
				cout << number1 - number2;
				break;
				
			case '*':
				cout << number1 * number2;
				break;
				
			case '/':
				cout << number1 / number2;
				break;
			case 'x':
				break;
	
			default:
				cout << "\n Error. Invalid number or operation. "
		}
	}
	while(op != 'x');
}

void WorkComputer::exeEditor()
{
	string name, text;
     char opt;
     
     cout << " -- Text Editor -- \n\n ";
     cout << " (Press '@' to terminate) \n\n ";
     do{
	 text = cin.get();
	 }while(cin.get()!= '@');
     cout << "\n\n Save the file? \n Yes (Y) or No (N) ";   
     do{
     cin >> opt;
     switch (opt){
            case 'Y':
            case 'y':
            	
            	
            	if (availableStorage==0){
            		cout << "\n\n Not enough space available. ";
            		break;}
            	
                 cout << "\n\n File name: ";
                 cin >> name;

                 cout << "\n\n File saved as " << name << ".txt";
		 		 availableStorage -= text.size();
		 		 cout << "\n\n Size of the file: " << text.size();
                 break;
            case 
			'N':
            case 'n':
            
                 cout << "\n\n File not saved. ";
                 break;
            
            default: 
                    cout << "\n\n Please enter a valid option. ";
     } 
     }while ( (opt != 'y') && (opt != 'Y') && (opt != 'N') && (opt != 'n') );	
}

ostream& operator<<(ostream &output, const WorkComputer &display)
{
	output << "\n Operational System: " << 	display.operationalSystem;
    output << "\n HD capacity: " << display.hdSize;
    output << "\n Current OS version: " << display.currentOSVersion;	
    
    return output;
}

void WorkComputer::operator=(const WorkComputer &comp){
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

bool WorkComputer::operator==(const WorkComputer &comp) const{
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

void displayWelcomeScreen()
{
	cout << "\n     Hi.     \n";
}

