#include <iostream>
#include "Computer.h"


int main(){
    int opt;
    cout << "          Welcome          \n\n -- Chose an option -- ";
    Computer c1;
    do{
         cout << "\n\n 1 - Execute Game \n 2 - Execute Text Editor \n 0 - Turn Off \n";
         cin >> opt;
         switch (opt)
         {
                case 1:
                     c1.exeGame();
                     break;
                case 2:
                     c1.exeEditor();
                     break;
                case 0:
                     cout << "\n\n Turning off... ";
                     break;
                default:
                        cout << "\n\n -- Chose an option -- ";
         }
    }while (opt != 0);         
}    
