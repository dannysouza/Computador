#include <iostream>
#include "Class Computer.h"

void turnOn()
{
	cout << "Inicializando" <<;
}

int exeProgram(string prog)
{
	switch(prog){
		case 'Calculator':
		case 'calculator':
			exeCalculator();
			break;
		case 'Editor':
		case 'editor':
			exeEditor();
			break;
	}
}

void exeEditor(){
	String text;
	cout << "-- Text Editor -- \n\n";
	cin << text;
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
	}while (opt != 0)
}
