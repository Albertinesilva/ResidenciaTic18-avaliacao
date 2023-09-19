

using namespace std;

void mostraMenuCliente(){
    limpaTela();
    cout << "MODULO DE GESTÃO DE VEICULOS" << endl << endl;
    cout << "1. Inserir" << endl;
    cout << "2. Excluir" << endl;
    cout << "3. Alterar Informações" << endl;
    cout << "4. Listar" << endl;
    cout << "5. Localizar" << endl;
    cout << "0. Sair" << endl << endl;
    cout << "Escolha : ";

}

void menuVeiculo(vector<Veiculo> &listaVeiculos){
    int escolha;
    do{
        recebeEscolha(escolha);
        realizaEscolha(escolha,listaVeiculos);
    }while(escolha!=0);
}

void recebeEscolha(int &escolha){
    bool escolhaValida;
    do{
        mostraMenuVeiculo();
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

void realizaEscolha(int escolha, vector<Veiculo> &listaVeiculos){
  switch (escolha)
    {
    case 1 :
            insereVeiculo(listaVeiculos);
        break;
    case 2 :
            excluiVeiculo(listaVeiculos);
        break;
    case 3 :
            alteraVeiculo(listaVeiculos);
        break;
    case 4 :
            listarVeiculos(listaVeiculos);
        break;
    case 5 :
            localizaVeiculo(listaVeiculos);
        break;
    case 6 :
            exit(0);
        break;
    default:
        break;
    }
}