#include <iostream>
#include "Computer.h"

using namespace std;

int main(){
    int opt;
    string name, pass;
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
