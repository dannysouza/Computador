#include <iostream>
#include "Hangman.h"

int main ()
{
	int op; 
	Hangman hang;
	cout << "          -- Hangman Game --          ";
	do{
	cout << "\n\n Chose a theme \n\n 1 - Animals         4 - Disney Princesses  \n 2 - Fruits          0 - Exit \n 3 - Movies \n ";
	cin >> op;
	
	switch(op){
		case 1:
			hang.animals();
			break;
		case 2:
			hang.fruits();
			break;
		case 3:
			hang.movies();
			break;
		case 4:
			hang.princess();
			break;
		case 0:
			cout << "\n\n Closing game... ";
		default:
			cout << "\n\n Please enter a valid option. ";
	}
	} while (op != 0);
}
