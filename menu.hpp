#pragma once
#include<iostream>
#include "utils.hpp"
#include <vector>
#include "cliente.hpp"
#include "listaClientes.hpp"



void mostraMenu();
void menu(vector<Cliente> listaCliente);

void recebeEscolha(int &escolha);
void realizaEscolha(int escolha, vector<Cliente> listaClientes);