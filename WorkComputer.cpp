#include "WorkComputer.h"

using namespace std;

WorkComputer::WorkComputer()
:Computer("Windows 7", 500, 1.0)
{
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


