#pragma once
#include<iostream>
#include "verificacoes.hpp"
#include "utils.hpp"
#include<vector>

using namespace std;

typedef struct{
    string cpf;
    string nome;
    string dataNascimento;
    string cnh;

    void inserirCPF(){
        string cpfInserido;
        bool cpfValido;
        do{
            cout << "Insira um cpf válido(apenas numeros) : ";
            limpaBuffer();
            getline(cin,cpfInserido);
            cpfValido = verificaCPF(cpfInserido);
            if(!cpfValido){
                limpaTela();
            }
        }while(!cpfValido);
        cpf = cpfInserido;
    }

    void inserirNome(){
        string nomeInserido;
        bool nomeValido;
        do{
            cout << "Insira um nome válido : ";
            limpaBuffer();
            getline(cin,nomeInserido);
            nomeValido = verificaNome(nomeInserido);
            if(!nomeValido){
                limpaTela();
            }
        }while(!nomeValido);
        nome = nomeInserido;
    }

    void inserirDataNascimento(){
        string dataNascInserida;
        bool dataNascValida;
        do{
            cout << "Insira uma data de nascimento válida : ";
            limpaBuffer();
            getline(cin,dataNascInserida);
            dataNascValida = verificaDataNascimento(dataNascInserida);
            if(!dataNascValida){
                limpaTela();
            }
        }while(!dataNascValida);
        dataNascimento = dataNascInserida;
    }

    void inserirCNH(){
        string cnhInserida;
        bool cnhValida;
        do{
            cout << "Insira um número de cnh válido(apenas números) : ";
            limpaBuffer();
            getline(cin,cnhInserida);
            cnhValida = verificaDataNascimento(cnhInserida);
            if(!cnhValida){
                limpaTela();
            }
        }while(!cnhValida);
        cnh = cnhInserida;
    }

    void preencheCliente(){
        inserirNome();
        inserirCPF();
        inserirDataNascimento();
        inserirCNH();
    }

    void mostraCliente(){
        cout << endl << "Cliente " << nome << endl;
        cout << "CPF : " << cpf << endl;
        cout << "CNH : " << nome << endl;
        cout << "Data de Nascimento : " << dataNascimento << endl; 
    }



}Cliente;

