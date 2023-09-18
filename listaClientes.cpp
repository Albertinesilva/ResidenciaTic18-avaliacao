#include<iostream>
#include "listaClientes.hpp"

void insereCliente(vector<Cliente> listaClientes){
    limpaTela();
    Cliente cliente;
    cliente.preencheCliente();
    listaClientes.push_back(cliente);
    cout << "Cliente inserido com sucesso" << endl;
    pause();

}
void excluiCliente(vector<Cliente> listaClientes){
    string cpfParaBusca;
    string nomeDoExcluido;
    do{
        cout << "Insira um cpf válido para exclusão : ";
        cin >> cpfParaBusca;
    }while(!verificaCPF(cpfParaBusca));

    for(auto it=listaClientes.begin() ; it!=listaClientes.end() ; ++it){
        if(it->cpf == cpfParaBusca){
            nomeDoExcluido = it->nome;
            listaClientes.erase(it);
            cout << "Cliente " << nomeDoExcluido << "excluido com sucesso";
            pause();
            return;
        }
    }
    limpaTela();
    cout << "O CPF " << cpfParaBusca << " não se encontra em nosso banco de dados" << endl;
    pause();
}
void alteraCliente(vector<Cliente> listaClientes){

}
void listarClientes(vector<Cliente> listaClientes){
    for(auto it=listaClientes.begin() ; it!=listaClientes.end() ; ++it){
        it->mostraCliente();
    }
}
void localizaCliente(vector<Cliente> listaClientes){

    string cpfParaBusca;
    do{
        cout << "Insira um cpf válido para busca : ";
        cin >> cpfParaBusca;
    }while(!verificaCPF(cpfParaBusca));

    for(auto it=listaClientes.begin() ; it!=listaClientes.end() ; ++it){
        if(it->cpf == cpfParaBusca){
            
            return;
        }
    }

}
