#include <iostream>
#include "Computer.h"

using namespace std;

Computer::Computer(){
	
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
            
            case 'N':
            case 'n':
            
                 cout << "\n\n File not saved. ";
                 break;
            
            default: 
                    cout << "\n\n Please enter a valid option. ";
     } 
     }while ( (opt != 'y') && (opt != 'Y') && (opt != 'N') && (opt != 'n') );	
}
