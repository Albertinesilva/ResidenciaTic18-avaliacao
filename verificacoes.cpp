#include "verificacoes.hpp"
#include "utils.hpp"
#include "menu.hpp"
#include "listaClientes.hpp"
#include "data.hpp"

using namespace std;

bool verificaCPF(string &cpf){

    if (cpf.length() != 11){
        cout << "CPF inválido" << endl;
        pause();
        return false;
    }

    for (char c : cpf) {
        if (!isdigit(c)){
            cout << "CPF inválido" << endl;
            pause();
            return false;
        }
    }

    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }
    int primeiroDigito = 11 - (soma % 11);
    if (primeiroDigito == 10 || primeiroDigito == 11){
        primeiroDigito = 0;
    }

    if (cpf[9] - '0' != primeiroDigito){
        cout << "CPF inválido" << endl;
        pause();
        return false;
    }

    soma = 0;
    for(int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    int segundoDigito = 11 - (soma % 11);
    if(segundoDigito == 10 || segundoDigito == 11){
        segundoDigito = 0;
    }

    if (cpf[10] - '0' != segundoDigito){
        cout << "CPF inválido" << endl;
        pause();
        return false;
    }

    return true;
}

bool verificaCNH(string cnh){
    if (cnh.length() != 10){
        cout << "CNH inválida" << endl;
        pause();
        return false;
    }
    for (char c : cnh) {
        if (!std::isdigit(c)){
            cout << "CNH inválida" << endl;
            pause();
            return false;
        }
    }
    return true;
}

bool verificaDataNascimento(Data dataNascimento){

    time_t tempoAtual = time(0);
    tm *dataHoraAtual = localtime(&tempoAtual);

    int diaAtual = dataHoraAtual->tm_mday;
    int mesAtual = dataHoraAtual->tm_mon + 1;  
    int anoAtual = dataHoraAtual->tm_year + 1900;  

    int idade = anoAtual - dataNascimento.ano;
    if (mesAtual < dataNascimento.mes || (mesAtual == dataNascimento.mes && diaAtual < dataNascimento.dia)) {
        idade--; 
    }

    if(idade>=18){
        return true;
    }else{
        cout << "Clientes menores de idade não tem acesso a locação de veiculos" << endl;
        pause();
        return false;
    }

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







