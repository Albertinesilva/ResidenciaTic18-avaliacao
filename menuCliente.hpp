#ifndef MENU_CLIENTE_HPP
#define MENU_CLIENTE_HPP

#include<iostream>
#include "cliente.hpp"
#include<vector>
using namespace std;

void mostraMenuCliente();

void menuCliente(vector<Cliente> &listaCliente);

void recebeEscolha(int &escolha);
void realizaEscolha(int escolha, vector<Cliente> &listaClientes);

#endif