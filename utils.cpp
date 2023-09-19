#include<iostream>
using namespace std;
#include "utils.hpp"


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

//--------------------------------------

void armazenaVerificaSepara(int &dia, int &mes, int &ano ,string data){
        do{
            separaData(dia,mes,ano,data);
            if(!verificaData(dia,mes,ano)){
                limpaTela();
                cout << "Data invalida" << endl;
            }else{
                break;
            }
        }while(1);
}


void separaData(int &dia, int &mes, int &ano , string data){
    int pos1 =  data.find('/');
    int pos2 = data.find_last_of('/');
    dia = separaDia(pos1,data);
    mes = separaMes(pos1,pos2,data);
    ano = separaAno(pos2,data);
}

int separaDia(int pos1, string data){
    return stoi(data.substr(0,pos1));
}

int separaMes(int pos1, int pos2 , string data){
    return stoi(data.substr(pos1+1,pos2));
}

int separaAno(int pos2, string data){
    return stoi(data.substr(pos2+1));
}

bool anoBissexto(int ano){
    return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? true : false;
}


bool verificaData(int dia , int mes, int ano){

    int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(ano < 0 ){
        return false;
    }

    if (mes < 1 || mes > 12) {
        return false;
    }

    if (mes == 2 && anoBissexto(ano)) {
        if (dia < 1 || dia > 29) {
            return false;
        }
    } else {
        if (dia < 1 || dia > diasNoMes[mes]) {
            return false;
        }
    }

    return true;

}

string nomeDoMes(int mes){
    string nomes[] = {"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    return nomes[mes-1];
}


//-----------------------------------------------


void armazenaVerificaSeparaHora(int &segundos, int &minutos, int &horas ,string horario){
        do{
            separaHorario(segundos,minutos,horas,horario);
        if(!verificaHorario(segundos,minutos,horas)){
            limpaTela();
            cout << "Hora invalida" << endl;
        }else{
            break;
        }
        }while(1);
}


void separaHorario(int &segundos, int &minutos, int &horas ,string horario){
    int pos1 =  horario.find(':');
    int pos2 = horario.find_last_of(':');
    segundos = separaSegundo(pos1,horario);
    minutos = separaMinuto(pos1,pos2,horario);
    horas = separaHora(pos2,horario);
}

int separaSegundo(int pos1, string data){
    return stoi(data.substr(0,pos1));
}

int separaMinuto(int pos1, int pos2 , string data){
    return stoi(data.substr(pos1+1,pos2));
}

int separaHora(int pos2, string data){
    return stoi(data.substr(pos2+1));
}


bool verificaHorario(int segundos , int minutos, int horas){

    if(segundos > 59 || segundos < 0 || minutos > 59 || minutos < 0 || horas>23 || horas < 0){
        return false;
    }

    return true;

}


