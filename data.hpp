#ifndef DATA_HPP
#define DATA_HPP

#include<iostream>
#include "utils.hpp"
using namespace std;

typedef struct{
    int dia,mes,ano;

    void preencheData(const string &data){
        armazenaVerificaSepara(dia,mes,ano,data);
    }

    void mostraData(){
        cout << dia << " de " << nomeDoMes(mes) << " de " << ano << endl;
    }
    

}Data;

#endif