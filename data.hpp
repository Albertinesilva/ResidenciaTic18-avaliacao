#pragma once
#include<iostream>
#include "verificacoes.hpp"
#include "utilsData.hpp"

using namespace std;

typedef struct{
    int dia,mes,ano;

    void preencheData(string data){
        armazenaVerificaSepara(dia,mes,ano,data);
    }

    void mostraData(){
        cout << dia << " de " << nomeDoMes(mes) << " de " << ano << endl;
    }
    

}Data;