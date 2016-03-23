#include <iostream>
#include "Computer.h"
#include "WorkComputer.h"
#include "PersonalComputer.h"

using namespace std;

void deviceComputer();

void optionWorkC();
void optionPersonalC();
void option(Computer*);

int main()
{
	int opt;
	
	cout << "\n Choose a device: \n 1 - Computer \n";
	
	cin >> opt;
	
	switch(opt)
	{
		case 1:
			deviceComputer();
	}

}

void deviceComputer()
{
    int opt; 
    
	cout << "\n 		Choose a computer: \n\n 1 - Work Computer \n 2 - Personal Computer ";
	cin >> opt;
	
	vector <Computer*> pcs;
	
	if (opt == 1) 
	pcs.push_back(new WorkComputer());
	else if (opt == 2)
	pcs.push_back(new PersonalComputer()); 
	
	option(pcs.at(0));
}

void option(Computer  *computer)
{
	PersonalComputer *personalComp = dynamic_cast<PersonalComputer *>(computer);
	WorkComputer *workComp = dynamic_cast<WorkComputer *>(computer);
	
	if(personalComp!=0)
	    optionPersonalC();
	else
	    optionWorkC();
}

void optionWorkC()
{
	int opt;
    WorkComputer wc;
	
	WorkComputer::launchOSVersion();
	cout << "\n\n          Welcome          \n ";
    do{
         cout << "\n\n 1 - Execute Calculator \n 2 - Execute Text Editor    3 - Update Windows 4 - Connect to the internet \n 0 - Turn Off \n";
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
    				wc.updatedOS();
    				break;
    				
    			case 4:
    				wc.connectToInternet();
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
         cout << "\n\n 1 - Execute Game      3 - Log Off \n 2 - Create new user account    4 - Update Windows 5 - Connect to the internet \n 6 - Install Network drivers \n 0 - Turn Off \n";
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
    				
    			case 5:
    				pc.connectToInternet();
    				break;
    				
    			case 6:
    				pc.installNetworkDrivers();
    				
                default:
                    cout << "\n\n -- Choose an option -- ";
         }
    }while (opt != 0); 
}

