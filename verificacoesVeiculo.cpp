

bool verificaRenavan(string &renavam){
    if (renavam.size() != 11) {
        return false;
    }

    if (regex_match(renavam, regex("^[0-9]+$"))) {
        return false;
    }

    // Calculo do dígito verificador
    int peso[8] = {3, 2, 9, 8, 7, 6, 5, 4};
    int soma = 0;
    for (int i = 0; i < 8; i++) {
        soma += (renavam[i] - '0') * peso[i];
    }
    int resto = soma % 11;
    int digitoVerificador = (resto == 0 || resto == 1) ? 0 : 11 - resto;

    return (digitoVerificador == (renavam[8] - '0'));
}

bool verificaPlaca(string &placa){
    return regex_match(placa, regex("^\\w{3}\\d{4}$"));

}

bool verificaRetirada(DataHora retirada){
    time_t tempoAtual = time(0);
    tm *dataHoraAtual = localtime(&tempoAtual);

    int diaAtual = dataHoraAtual->tm_mday;
    int mesAtual = dataHoraAtual->tm_mon + 1;  
    int anoAtual = dataHoraAtual->tm_year + 1900; 
    int secAtual = dataHoraAtual->tm_sec;
    int minAtual = dataHoraAtual->tm_min;
    int horaAtual = dataHoraAtual->tm_hour; 

    cout << horaAtual << endl;

    if(retirada.data.ano < anoAtual){
        cout << "Não é possível agendar datas anteriores a atual" << endl; 
        return false;
    }else if(retirada.data.ano == anoAtual){
        if(retirada.data.mes < mesAtual){
            cout << "Não é possível agendar datas anteriores a atual" << endl; 
            return false;
        }else if(retirada.data.mes == mesAtual){
            if(retirada.data.dia < diaAtual){
                cout << "Não é possível agendar datas anteriores a atual" << endl; 
                return false;
            }else if(retirada.data.dia == diaAtual){
                if(horaAtual >= 21){
                    cout << "É necessário agendar com pelo menos 3 horas de antecedência, tente novamente com uma data do proximo dia" << endl;
                    return false;
                }else if(retirada.hora.hora-horaAtual <3){
                    cout << "É necessário agendar com pelo menos 3 horas de antecedência " << endl;
                    return false;
                }else{
                    return true;
                }
            }
        }
    }
    return true;

}


bool verificaEntrega(DataHora retirada, DataHora entrega){
    if(entrega.data.ano < retirada.data.ano){
        cout << "Data de entrega deve ser superior pelo menos a 1 dia, a data de retirada" << endl;
        return false;
    }else if(entrega.data.ano == retirada.data.ano){
        if(entrega.data.mes < retirada.data.mes){
            cout << "Data de entrega deve ser superior pelo menos a 1 dia, a data de retirada" << endl;
            return false;
        }else if(entrega.data.mes == retirada.data.mes){
            if(entrega.data.dia <= retirada.data.dia ){
                cout << "Data de entrega deve ser superior pelo menos a 1 dia, a data de retirada" << endl;
                return false;
            }
        }
    }

    return true;
}

bool verificaLoja(string loja){
    return regex_match(loja, regex("^[a-zA-Z0-9 ]*$"));
}
