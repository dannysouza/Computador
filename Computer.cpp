#include <iostream>
#include "Computer.h"
#include <windows.h>
#include <string>
#include <time.h>


using namespace std;

float Computer::latestWindowsVersion=8.0;
	
Computer::Computer()
:downloadDate()
:hd();
{
	availableStorage=1;
	usersQuant = 1;
	currentWindowsVersion=8.0;
}

Computer::Computer(const Computer &c)
:downloadDate()
{
	availableStorage = c.availableStorage;
	usersQuant = c.usersQuant;
	currentWindowsVersion=c.currentWindowsVersion;
}

void Computer::exeGame()
{
     system("Hangman.exe");
}

void Computer::exeEditor()
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

void Computer::logIn()
{
	string name, password;
	int i;
	
	do{
		cout << "\n User name: ";
		cin >> name;
		cout << "\n Password: ";
		cin >> password;
		
		for(i=0;i<usersQuant;i++)
		{
			if ((name == users[i]) && (password == passwords[i]))
			{
				cout << "\n Welcome, " << name;
				break;
			}
			else
			cout << "\n Invalid user name or password. ";
		}
	}while((name != users[i]) && (password != passwords[i]));
}


void Computer::newUser()
{	
	string userName, password;
	int i;
	
	cout << "\n Choose a user name: ";
	cin >> userName;

	string *aux = new string[usersQuant];
	
	for(int i=0; i<usersQuant; i++)
		aux[i] = users[i];
		
	delete [] users;
	
	users = new string[++usersQuant];
	
	for(int i=0; i<usersQuant-1; i++)
		users[i] = aux[i];
		
	users[usersQuant-1] = userName;
	
	delete [] aux;

	cout << "\n Choose a password: ";
	cin >> password;
	
	string *aux2 = new string[usersQuant];
	
	for(int i=0; i<usersQuant; i++)
		aux2[i] = passwords[i];
		
	delete [] passwords;
	
	passwords = new string[++usersQuant];
	
	for(int i=0; i<usersQuant-1; i++)
		passwords[i] = aux2[i];
		
	passwords[usersQuant-1] = password;
	
	delete [] aux2;
	
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

void Computer::updateWindowsVersion()
{
	cout << "\n Current version: " << currentWindowsVersion;
	cout << "\n Latest version available: " << latestWindowsVersion;
	cout << "\n\n	Windows is downloading files... ";
	
	downloadDate.currentDateTime();
	
	cout << "\n\n Download date: ";
	downloadDate.displayDate();
	
	currentWindowsVersion = latestWindowsVersion;
	
	cout << "\n Windows has been updated to version " << latestWindowsVersion;
	
	launchNewVersion();
}

void Computer::launchNewVersion()
{
	latestWindowsVersion += 0.1;
}
 
void Computer::format()
{
	int op;
	cout << "\n Are you sure you want to format the Hard Disk? \n\n 1 - Yes \n 2 - No";
	cin >> op;
	
	do{
		switch (op)
		{
			case 1:
				availableStorage = hd.formatHD();
				break;
			case 2:
				cout << "\n Hard disk not formatted. ";
				break;
		}
	}while(op != 'y' && op != 'n');
}

