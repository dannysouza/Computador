#include <iostream>
#include "Computer.h"

using namespace std;

int main(){
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
