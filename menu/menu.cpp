#include <iostream>
#include "menu.h"
#include <limits>

using namespace std;
void limparTela() {
    // Limpa a tela do console de forma portável
    #ifdef _WIN32
    system("cls"); // Para Windows
    #else
    cout << "\033[2J\033[1;1H"; // Para Unix/Linux
    #endif
}

int menu() {
    int resp;
    bool loop = true;

    do {
        limparTela(); // Chama a função para limpar a tela

        cout << "============Opções============" << endl;
        cout << "1 - Menu cidade" << endl;
        cout << "2 - Menu Trajetos" << endl;
        cout << "3 - Menu Transporte" << endl;
        cout << "4 - Menu Passageiros" << endl;
        cout << "5 - Menu viagens" << endl;
        cout << "6 - Relatórios" << endl;
        cout << "0 - Sair" << endl;

        cout << "Digite a ação que deseja seguir: ";
        cin >> resp;

        // Verifica se a entrada é válida
        if (resp < 0 || resp > 6) {
            cout << "Esta ação não existe, tente novamente." << endl;
            // Limpa o buffer de entrada para evitar loops infinitos
            cin.clear(); // Limpa os flags de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora entradas inválidas até a próxima linha
            cin.get(); // Espera por um enter para continuar
        } else {
            loop = false;
        }
    } while (loop);

    return resp;
}

void menuCidade(){
    cout << "============Menu Cidade============"<<endl;
    cout << "1 - Registrar cidade"<<endl;
    cout << "2 - Editar Cidade"<<endl;
    cout << "3 - Excluir cidade"<<endl;
    cout << "0 - voltar ao menu inicial"<<endl;
}