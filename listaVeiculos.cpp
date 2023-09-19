

void insereVeiculo(vector<Veiculo> &listaVeiculos){
    limpaTela();
    Veiculo veiculo;
    if(veiculo.preencheVeiculo()){
        listaVeiculos.push_back(veiculo);
        cout << "Cliente inserido com sucesso" << endl;
        pause();
    }else{
        cout << "Não foi possivel inserir novo cliente" << endl;
        cin.get();
        pause();
    }

}

void excluiVeiculo(vector<Veiculo> &listaVeiculos){
    limpaTela();
    string placaParaBusca;
    do{
        cout << "Insira uma placa válida para exclusão : ";
        cin >> placaParaBusca;
    }while(!verificaPlaca(placaParaBusca));

    for(auto it=listaVeiculos.begin() ; it!=listaVeiculos.end() ; ++it){
        if(it->placa == placaParaBusca){
            listaVeiculos.erase(it);
            cout << "Veiculo excluido com sucesso" << endl;
            pause();
            return;
        }
    }
    limpaTela();
    cout << "O Veiculo de placa " << placaParaBusca << " não se encontra em nosso banco de dados" << endl;
    cin.get();
    pause();
}

void listarVeiculos(vector<Veiculo> &listaVeiculos){
    cout << "-----------VEICULOS------------";
    for(auto it=listaVeiculos.begin() ; it!=listaVeiculos.end() ; ++it){
        cout << "-------------------------------" << endl;
        it->mostraVeiculo();
    }
    cin.get();
    cout << "-------------------------------" << endl;
    pause();
}

void localizaVeiculo(vector<Veiculo> &listaVeiculos){

    string placaParaBusca;
    do{
        cout << "Insira um cpf válido para busca : ";
        cin >> placaParaBusca;
    }while(!verificaCPF(placaParaBusca));

    for(auto it=listaVeiculos.begin() ; it!=listaVeiculos.end() ; ++it){
        if(it->placa == placaParaBusca){
            cout << "-------------------------------" << endl;
            it->mostraVeiculo();
            return;
        }
    }

}

