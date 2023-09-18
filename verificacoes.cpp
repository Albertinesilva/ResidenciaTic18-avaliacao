#include "verificacoes.hpp"
#include "utils.hpp"
#include "menu.hpp"
#include "listaClientes.hpp"

using namespace std;

bool verificaCPF(string cpf){
    return true;
}

bool verificaCNH(string cnh){
    return true;
}

bool verificaDataNascimento(string dataNascimento){
    return true;
}   

bool verificaNome(string nome){
    for(int i = 0 ; i < nome.length() ; i++){
            if((nome[i] < 40 && nome[i] >=0) || (nome[i] > 40 && nome[i] < 65) || (nome[i] > 90 && nome[i] < 97) || (nome[i] > 122 && nome[i] <=127)){
            cout << "Nome inválido, devem conter apenas letras" << endl;
            pause();
            return false;
        }
    }
    return true;
}

