#ifndef UTILS_HPP
#define UTILS_HPP

#include<iostream>

using namespace std;

void limpaTela();
void limpaBuffer();
void pause();
bool verificaProsseguimento();

void armazenaVerificaSepara(int &dia, int &mes, int &ano ,string data);
void separaData(int &dia, int &mes, int &ano , string data);
int separaDia(int pos1, string data);
int separaMes(int pos1, int pos2 , string data);
int separaAno(int pos2, string data);
bool anoBissexto(int ano);
bool verificaData(int dia , int mes, int ano);
string nomeDoMes(int mes);

void armazenaVerificaSeparaHora(int &segundo, int &minuto, int &hora ,string horario);
void separaHorario(int &segundo, int &minuto, int &hora , string horario);
int separaSegundo(int pos1, string data);
int separaMinuto(int pos1, int pos2 , string data);
int separaHora(int pos2, string data);
bool verificaHorario(int segundo , int minuto, int hora);

#endif