#include<iostream>
#include "listaClientes.hpp"

void insereCliente(vector<Cliente> &listaClientes){
    limpaTela();
    Cliente cliente;
    if(cliente.preencheCliente()){
        listaClientes.push_back(cliente);
        cout << "Cliente inserido com sucesso" << endl;
        pause();
    }else{
        cout << "Não foi possivel inserir novo cliente" << endl;
        cin.get();
        pause();
    }

}
void excluiCliente(vector<Cliente> &listaClientes){
    limpaTela();
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
            cout << "Cliente " << nomeDoExcluido << " excluido com sucesso" << endl;
            pause();
            return;
        }
    }
    limpaTela();
    cout << "O CPF " << cpfParaBusca << " não se encontra em nosso banco de dados" << endl;
    cin.get();
    pause();
}
void alteraCliente(vector<Cliente> &listaClientes){
    string cpfParaAlteracao;
    string nomeDoExcluido;
    do{
        cout << "Insira o cpf do cliente que deseja alterar dados : ";
        cin >> cpfParaAlteracao;
    }while(!verificaCPF(cpfParaAlteracao));

    for(auto it=listaClientes.begin() ; it!=listaClientes.end() ; ++it){
        if(it->cpf == cpfParaAlteracao){
            int escolha;
            do{
                limpaTela();
                it->mostraCliente();
                cout << endl << "Qual dados deseja alterar? " << endl;
                cout << "1. CPF" << endl << "2. Nome" << endl << "3. CNH" << endl << "4. Data de Nascimento" << endl << "5. Nenhum" << endl;
                cout << "Escolha : ";
                cin >> escolha;
                switch (escolha)
                {
                case 1:
                    if(it->inserirCPF()){
                        cout << "CPF alterado com sucesso" << endl;
                        pause();
                        return;
                    }else{
                        cout << "Alteração de dados cancelada" << endl;
                        pause();
                        return;
                    }                       
                case 2 :
                    if(it->inserirNome()){
                        cout << "Nome alterado com sucesso" << endl;
                        pause();
                        return;
                    }else{
                        cout << "Alteração de dados cancelada" << endl;
                        pause();
                        return;
                    }                       
                case 3 :
                    if(it->inserirCNH()){
                        cout << "CPF alterado com sucesso" << endl;
                        pause();
                        return;
                    }else{
                        cout << "Alteração de dados cancelada" << endl;
                        pause();
                        return;
                    }                       
                case 4 :
                    if(it->inserirDataNascimento()){
                        cout << "Data de Nascimento alterada com sucesso" << endl;
                        pause();
                        return;
                    }else{
                        cout << "Alteração de dados cancelada" << endl;
                        pause();
                        return;
                    }   
                case 5:
                    cout << "Alteração de dados cancelada" << endl;
                    pause();
                    return;
                default:
                    break;
                }
            }while(escolha<1 || escolha>5);
        }
    }

}
void listarClientes(vector<Cliente> &listaClientes){
    for(auto it=listaClientes.begin() ; it!=listaClientes.end() ; ++it){
        it->mostraCliente();
    }
    cin.get();
    pause();
}
void localizaCliente(vector<Cliente> &listaClientes){

    string cpfParaBusca;
    do{
        cout << "Insira um cpf válido para busca : ";
        cin >> cpfParaBusca;
    }while(!verificaCPF(cpfParaBusca));

    for(auto it=listaClientes.begin() ; it!=listaClientes.end() ; ++it){
        if(it->cpf == cpfParaBusca){
            it->mostraCliente();
            return;
        }
    }

}
