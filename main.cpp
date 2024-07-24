#include <iostream>
#include <vector>
#include "menu/menu.h"

using namespace std;
int main(){
    int loop = 1;
    while(loop){
    int resp = menu();
    switch (resp)
    {
    case 0:
        loop = resp;
        break;
    case 1:
        menuCidade();
        cin.ignore();
        cin.get();
        break;
    
    default:
        break;
    }


    }
    

    return 0;
}