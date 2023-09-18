#include "utils.hpp"
#include<cctype>
#include<cstdlib>

using namespace std;


void limpaBuffer(){
    cin.get();
}

void pause(){
    cout << "Pressione o botão <Enter>....";
    getchar();

}

void limpaTela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif    
}


