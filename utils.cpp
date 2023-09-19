#include "utils.hpp"
#include<cctype>
#include<cstdlib>
#include <termios.h>  

using namespace std;


void limpaBuffer(){
    cin.get();
}

void pause() {
    cout << "Pressione Enter para continuar...";
    cout.flush(); 
    cin.ignore(); 
    int ch;

    if (ch == '\n' || ch == '\r') {
        while ((ch = getchar()) != EOF && ch != '\n');
    }
    getchar();
}

void limpaTela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif    
}

bool verificaProsseguimento(){
    char escolha;
    do{
        limpaTela();
        cout << "Deseja continuar cadastro?" << endl << "('s' - Para sim/ 'n' - para não) : ";
        cin >> escolha;
        if(escolha != 's' && escolha!='n'){
            cout << "Escolha inválida" << endl;
        }else if(escolha=='n'){
            return false;
        }
    }while(escolha!= 's' && escolha!='n');
    return true;
}
