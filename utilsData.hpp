#include<iostream>

using namespace std;

void armazenaVerificaSepara(int &dia, int &mes, int &ano ,string data);

void separaData(int &dia, int &mes, int &ano , string data);

int separaDia(int pos1, string data);

int separaMes(int pos1, int pos2 , string data);
int separaAno(int pos2, string data);
bool anoBissexto(int ano);
bool verificaData(int dia , int mes, int ano);
string nomeDoMes(int mes);