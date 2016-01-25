#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;

void turnOn();
void exeProgram();
void exeCalculator();
void exeEditor();
void exeGame();
void showPrograms();
void showDateAndTime();
void turnOff();

int main ()
{	
	int opt;
	
	turnOn();
	
	cout << " -- Chose an option -- ";
	
	do{
	cout << "\n\n 1 - Show all the programs     3 - Show date and time \n 2 - Execute a program         4- Turn off \n\n ";
	cin >> opt;
	
	if (opt=1)
		showPrograms();
		
	else if (opt=2)
		exeProgram();
		
	else if (opt=3)
		showDateAndTime();
		
	else if (opt=4)
		turnOff();
	
	else
		cout <<"\n Please enter a valid option";

	}while (opt != 5);
}

void showPrograms()
{
	cout << " -- Programs installed on this computer -- \n\nCalculator \nText editor \nHanging game";
}

void exeProgram()
{
	int op;
	cout << "\n\nChose a program to execute \n\n 1 - Calculator \n 2 - Text Editor \n 3 - Game \n 0 - Exit";
	cin >> op;
	do{
		if (op=1)
			exeCalculator();
		else if (op=2)
			exeEditor();
		else if (op=3)
			system("start Game.exe");
		else if (op=0)
			cout << "\n\nClosing program... ";
		else
			cout << "\n\nPlease enter a valid operation";
	}while (op!=0);
}

void exeCalculator(){
	int opt;
	char op;
	float x, y;
	do
	{
		cout << " -- Calculator -- \n\n";
		cout << "First value: ";
		cin >> x;
		cout << "Operation (+, -, *, /): ";
		cin >> op;
		cout << "Second value: ";
		cin >> y;
		
		switch (op)
		{
			case '+':
				cout << "Result: " << x+y;
				break;
			case '-':
				cout << "Result: " << x-y;
				break;
			case '*':
				cout << "Result: " << x*y;
				break;
			case '/':
				cout << "Result: " << x/y;
				break;
		}
		cout << "\n\n Press 0 to exit. ";
		cin >> opt;
	}while (opt != 0);
}

void exeEditor(){
	string text, name;
	int op;
	
	cout << "\n\n-- Text Editor -- \n\n";
	cin >> text;
	
	cout << "\n\nSave the document? \n\n Yes (1) or No (2)";
	cin >> op;
	do
	{
		if (op = 1){
			cout << "\nFile name: ";
			cin >> name;
			cout << "File saved as " << name; cout << ".docx";
			break;
		}
		else if (op = 2){
			cout << "\nFile not saved";
			break;}
		else 
		cout << "\nEnter a valid option. ";
	} while ((op != 1) && (op != 2) );
	
}

void turnOn()
{
	cout << "				Welcome				\n\n";
}

void showDateAndTime()
{
	time_t now;
	struct tm nowLocal;
	now=time(NULL);
	nowLocal=*localtime(&now);
	
	cout << "Today is: " <<nowLocal.tm_mday<<"/" <<nowLocal.tm_mon+1<<"/" <<nowLocal.tm_year+1900<< endl;
	cout << "Time: " <<nowLocal.tm_hour<<"h " <<nowLocal.tm_min<<"min " <<nowLocal.tm_sec<<"sec "<< endl;
	cin.get();
}

void turnOff()
{
	cout << "\n\n Shutting down... ";
}
