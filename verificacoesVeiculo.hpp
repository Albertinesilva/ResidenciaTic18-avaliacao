#ifndef VERIFICACOES_VEICULO_HPP
#define VERIFICACOES_VEICULO_HPP

#include<iostream>
#include "dataHora.hpp"

using namespace std;

bool verificaRenavan(string &renavam);
bool verificaPlaca(string &placa);
bool verificaRetirada(DataHora retirada);
bool verificaEntrega(DataHora retirada, DataHora entrega);
bool verificaLoja(string Loja);

#endif


