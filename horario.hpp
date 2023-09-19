#ifndef HORARIO_HPP
#define HORARIO_HPP
#include "utils.hpp"
#include<cstdio>
#include<iostream>

using namespace std;

typedef struct{
    int segundo,minuto,hora;

    void preencheHorario(string horario){
        armazenaVerificaSeparaHora(segundo,minuto,hora,horario);
    }

    void mostraHorario(){
        printf("%2d:%2d:%2d\n",segundo,minuto,hora);
    }
}Horario;

#endif