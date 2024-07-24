#include <iostream>
#include "menu.h"

using namespace std;

int menu(){
    cout << "============Opções============"<<endl;
    cout << "1 - Menu cidade"<<endl;
    cout << "2 - Menu Trajetos"<<endl;
    cout << "3 - Menu Transporte"<<endl;
    cout << "4 - Menu Passageiros"<<endl;
    cout << "5 - Menu viagens"<<endl;
    cout << "6 - Relatórios"<<endl;
    cout << "0 - Sair"<<endl;

    int resp;
    cout<<"Digite a ação que deseja seguir: ";
    cin >> resp;
    return resp;
}