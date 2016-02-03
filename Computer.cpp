#include <iostream>
#include "Computer.h"
#include <windows.h>
#include <string>


using namespace std;

string Computer::biosVersion = "biosDefault";
	
Computer::Computer(){
	
	userName="User";
	password="1020";
	availableStorage=1;
}

Computer::Computer(const Computer &c){
	userName=c.userName;
	password=c.password;
	textFile=c.textFile;
	availableStorage=c.availableStorage;
}

void Computer::exeGame()
{
     system("Hangman.exe");
}

void Computer::exeEditor()
{
     string name;
     char opt;
     
     cout << " -- Text Editor -- \n\n ";
     cout << " (Press '@' to terminate) \n\n ";
     do{
	 textFile = cin.get();
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
		 		 availableStorage -= textFile.size();
		 		 cout << "\n\n Size of the file: " << textFile.size();
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

void Computer::logIn()
{
	string name, pass;
	do{
		cout << "\n User name: ";
		cin >> name;
		cout << "\n Password: ";
		cin >> pass;
		if ((name == userName) && (pass == password))
			cout << "\n Welcome, " << name;
		else
			cout << "\n Invalid user name or password. ";
	}while((name != userName) && (pass != password));
}


void Computer::newUser()
{
	
	cout << "\n Choose a user name: ";
	cin >> userName;
	cout << "\n Choose a password: ";
	cin >> password;
	cout << "\n\n User account created. ";
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
    			logIn();
    			break;
    		default:
    			cout << "\n Choose an option ";
    		}
    		break;	
		}while (opt != 0);
}

