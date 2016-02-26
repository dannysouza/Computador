#include <iostream>
#include "Computer.h"


int main(){
    int opt;
    string name, pass;
    Computer c1;
    
	c1.logOff();
	
	
	Computer::launchNewVersion();
    
    
    cout << "\n\n          Welcome          \n ";
    do{
         cout << "\n\n 1 - Execute Game \n 2 - Execute Text Editor \n 3 - Create new user account \n 4 - Log Off \n 5 - Update Windows \n 6 - Format Hard disk \n0 - Turn Off \n";
         cin >> opt;
         switch (opt)
         {
                case 1:
                    c1.exeGame();
                    break;
                case 2:
                    c1.exeEditor();
                    break;
             	case 3:
    				c1.newUser();
    				break;
    			case 4:
    				c1.logOff();
    				break;
    			case 5:
    				c1.updateWindowsVersion();
    				break;
    			case 6:
    				c1.format();
    				break;
                default:
                    cout << "\n\n -- Choose an option -- ";
         }
    }while (opt != 0);    
	     
}    
