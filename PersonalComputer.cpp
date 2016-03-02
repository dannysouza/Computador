#include "PersonalComputer.h"

using namespace std;

PersonalComputer::PersonalComputer()
:Computer("Windows 10", 1000, 1.1)
{
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
