#include <iostream>
#include "Computer.h"
#include "WorkComputer.h"
#include "PersonalComputer.h"

using namespace std;

void optionWorkC();
void optionPersonalC();

int main()
{
	int opt;
	
	cout << "\n 		Choose a computer: \n\n 1 - Work Computer \n 2 - Personal Computer ";
	cin >> opt;
	
	switch(opt)
	{
		case 1:
			optionWorkC();
			break;
			
		case 2:
			optionPersonalC();
			break;
			
		default:
			cout << "\n Please enter a valid option. \n";
	}
}

void optionWorkC()
{
	int opt;
    WorkComputer wc;
    
	wc.logOff();
	
	WorkComputer::launchOSVersion();
	cout << "\n\n          Welcome          \n ";
    do{
         cout << "\n\n 1 - Execute Calculator      3 - Log Off \n 2 - Execute Text Editor    4 - Update Windows \n 0 - Turn Off \n";
         cin >> opt;
         switch (opt)
         {
                case 1:
                    wc.exeCalculator();
                    break;
                    
                case 2:
                    wc.exeEditor();
                    break;
                    
             	case 3:
    				wc.logOff();
    				break;
    				
    			case 4:
    				wc.updatedOS();
    				break;
    				
                default:
                    cout << "\n\n -- Choose an option -- ";
         }
    }while (opt != 0);   
}

void optionPersonalC()
{
	int opt;
    string name, pass;
    PersonalComputer pc;
    
	pc.logOff();
	
	PersonalComputer::launchOSVersion();
    
    cout << "\n\n          Welcome          \n ";
    do{
         cout << "\n\n 1 - Execute Game      3 - Log Off \n 2 - Create new user account    4 - Update Windows \n 0 - Turn Off \n";
         cin >> opt;
         switch (opt)
         {
                case 1:
                    pc.exeGame();
                    break;
                    
                case 2:
                    pc.createNewUser();
                    break;
                    
             	case 3:
    				pc.logOff();
    				break;
    				
    			case 4:
    				pc.updatedOS();
    				break;
    				
                default:
                    cout << "\n\n -- Choose an option -- ";
         }
    }while (opt != 0); 
}

