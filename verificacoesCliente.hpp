#ifndef VERIFICACOES_CLIENTE_HPP
#define VERIFICACOES_CLIENTE_HPP
#include<iostream>
#include "data.hpp"
#include "utils.hpp"
using namespace std;

bool verificaCPF(string cpf);
bool verificaCNH(string cnh);
bool verificaNome(string nome);
bool verificaDataNascimento(Data dataNascimento);

#endif
