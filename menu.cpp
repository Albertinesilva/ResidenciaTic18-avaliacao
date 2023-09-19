#include "menu.hpp"
#include "listaClientes.hpp"

using namespace std;

void mostraMenu(){
    limpaTela();
    cout << "MODULO DE GESTÃO DE CLIENTES" << endl << endl;
    cout << "1. Inserir" << endl;
    cout << "2. Excluir" << endl;
    cout << "3. Alterar Informações" << endl;
    cout << "4. Listar" << endl;
    cout << "5. Localizar" << endl;
    cout << "0. Sair" << endl << endl;
    cout << "Escolha : ";

}

void menu(vector<Cliente> &listaClientes){
    int escolha;
    do{
        recebeEscolha(escolha);
        realizaEscolha(escolha,listaClientes);
    }while(escolha!=0);
}

void recebeEscolha(int &escolha){
    bool escolhaValida;
    do{
        mostraMenu();
        cin >> escolha;
        escolhaValida = (escolha >= 0 && escolha <= 5);
        if(!escolhaValida){
            limpaTela();
            cout << "------Escolha Inválida------" << endl;
            pause();
            limpaBuffer();

        }
    }while(!escolhaValida);
}

void realizaEscolha(int escolha, vector<Cliente> &listaClientes){
  switch (escolha)
    {
    case 1 :
            insereCliente(listaClientes);
        break;
    case 2 :
            excluiCliente(listaClientes);
        break;
    case 3 :
            alteraCliente(listaClientes);
        break;
    case 4 :
            listarClientes(listaClientes);
        break;
    case 5 :
            localizaCliente(listaClientes);
        break;
    case 6 :
            exit(0);
        break;
    default:
        break;
    }
}