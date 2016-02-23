#include <iostream>
#include "Computer.h"
#include <windows.h>
#include <string>
#include <time.h>


using namespace std;

	
Computer::Computer()
:downloadDate()
{
	password="1020";
	availableStorage=1;
	usersQuant=1;
}

Computer::Computer(const Computer &c)
:downloadDate()
{
	password=c.password;
	availableStorage=c.availableStorage;
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
	string name, pass;
	int i;
	
	do{
		cout << "\n User name: ";
		cin >> name;
		cout << "\n Password: ";
		cin >> password;
		
		for(i=0;i<usersQuant;i++)
		{
			if ((name == users[i]) && (pass == passwords[i]))
			{
				cout << "\n Welcome, " << name;
				break;
			}
			else
			cout << "\n Invalid user name or password. ";
		}
	}while((name != users[i]) && (pass != passwords[i]));
}


void Computer::newUser()
{	
	string name;
	int i;
	
	cout << "\n Choose a user name: ";
	cin >> userName;

	string *aux = new string[usersQuant];
	
	for(int i=0; i<usersQuant, i++)
		aux[i] = users[i];
		
	delete [] users;
	
	users = new string[++usersQuant];
	
	for(int i=0; i<usersQuant-1, i++)
		users[i] = aux[i];
		
	users[usersQuant-1] = userName;
	
	delete [] aux;

	cout << "\n Choose a password: ";
	cin >> password;
	
	string *aux2 = new string[usersQuant];
	
	for(int i=0; i<usersQuant, i++)
		aux2[i] = passwords[i];
		
	delete [] passwords;
	
	passwords = new string[++usersQuant];
	
	for(int i=0; i<usersQuant-1, i++)
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
	
	downloadDate = currentDateTime();
	
	currentWindowsVersion = latestWindowsVersion;
	
	cout << "\n Windows has been updated to version " << latestWindowsVersion;
}

void Computer::launchNewVersion(float newVersion)
{
	latestWindowsVersion = newVersion;
}

const string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

