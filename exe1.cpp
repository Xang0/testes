#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

struct pessoa{
	string nome;
	int cpf;
	string tipoSanguineo;
	int porcentVermelho;
	int porcentBranco;
    int densidade;
};
void cadastrarpessoa(fstream& arquivoOut) {
    pessoa novaPessoa;

    cout << "** CADASTRO DE PESSOA **" << endl;
    cout << "Nome: " << endl;
    cin >> novaPessoa.nome;
    cout << "CPF: ";
    cin >> novaPessoa.cpf;
    cout << "Tipo Sanguineo: "<< endl;
    cin.ignore();
    getline(cin, novaPessoa.tipoSanguineo);
    cout << "Porcentagem de Globulos Vermelhos: " << endl;
    cin>> novaPessoa.porcentVermelho;
    cout << "Porcentagem de Globulos Brancos: " << endl;
    cin >> novaPessoa.porcentBranco;
    cout << "Densidade do sangue: " << endl;
    cin >> novaPessoa.densidade;


    arquivoOut.open("output/animais_exoticos.txt", ios::out | ios::app);

    if (!arquivoOut) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return;
    }

    arquivoOut << novaPessoa.nome << " " << novaPessoa.cpf << " " << novaPessoa.tipoSanguineo<< " " << novaPessoa.porcentVermelho << " " << novaPessoa.porcentBranco << " " << novaPessoa.densidade<< endl;
    arquivoOut.close();
    cout << "Cadastro realizado!" << endl;
}


void buscarpessoa(fstream& arquivo){
	pessoa nomeProcurado;
	bool encontrar = false;
	string nome;
	cout<< "Digite o nome da pessoa: ";
	cin>> nome;

while ((!encontrar) and (arquivo >> nomeProcurado.nome >> nomeProcurado.cpf >> nomeProcurado.tipoSanguineo >> nomeProcurado.porcentVermelho >> nomeProcurado.porcentBranco >> nomeProcurado.densidade)) {
    cout << "Lendo pessoa: " << nomeProcurado.nome << endl;
        if (nomeProcurado.nome == nome) {
            encontrar = true;
        } 
        
    }
   

	if (encontrar){
		cout << "** PESSOA ENCONTRADA **" << endl;
        cout << "Nome: " << nomeProcurado.nome << endl;
        cout << "CPF: " << nomeProcurado.cpf << endl;
        cout << "Tipo Sanguineo: " << nomeProcurado.tipoSanguineo << endl;
        cout << "Porcentagem Globulos Vermelhos: " << nomeProcurado.porcentVermelho <<"%"<< endl;
        cout << "Porcentagem Globulos Brancos: " << nomeProcurado.porcentBranco <<"%"<< endl;
        cout << "Densidade do Sangue: " << nomeProcurado.densidade << endl;
	}
	else{
		cout << endl << "Pessoa não encontrada" << endl;
	}

}


void alterarpessoa(fstream& arquivo){
	pessoa nomeParaTrocar;
	bool encontrar = false;
	string nome;
	cout<< "Digite o indentificador do animal a ser alterado: ";
	cin>> nome;
	while(!encontrar and arquivo >> nomeParaTrocar.nome >> nomeParaTrocar.cpf >> nomeParaTrocar.tipoSanguineo >> nomeParaTrocar.porcentVermelho >> nomeParaTrocar.porcentBranco ){
		if(nomeParaTrocar.nome == nome){
			encontrar=true;
		}
	}
	if (encontrar){
		cout << "PESSOA ENCONTRADA" << endl;
        cout << "Nome: " << nomeParaTrocar.nome << endl;
        cout << "CPF: " << nomeParaTrocar.cpf << endl;
        cout << "Tipo Sanguineo: " << nomeParaTrocar.tipoSanguineo << endl;
        cout << "Porcentagem de Globulos Vermelhos: " << nomeParaTrocar.porcentVermelho <<"%" << endl;
        cout << "Porcentagem de Globulos Brancos: " << nomeParaTrocar.porcentBranco <<"%"<<  endl;
        cout << "Densidade do Sangue: " << nomeParaTrocar.densidade << endl;
	}


    cout << "** ALTERAÇÃO DE HOMOGRAMA **" << endl;
    cout << "Nome: " << endl;
    cin >> nomeParaTrocar.nome;
    cout << "CPF: ";
    cin >> nomeParaTrocar.cpf;
    cout << "Tipo Sanguineo: "<< endl;
    cin.ignore();
    getline(cin, nomeParaTrocar.tipoSanguineo);
    cout << "Porcentagem de Globulos Vermelhos: " << endl;
    cin>> nomeParaTrocar.porcentVermelho;
    cout << "Porcentagem de Globulos Brancos: " << endl;
    cin >> nomeParaTrocar.porcentBranco;
    cout << "Densidade do sangue: " << endl;
    cin >> nomeParaTrocar.densidade;

	arquivo << nomeParaTrocar.nome << endl;
    arquivo << nomeParaTrocar.cpf << endl;
    arquivo << nomeParaTrocar.tipoSanguineo << endl;
    arquivo << nomeParaTrocar.porcentVermelho << endl;
    arquivo << nomeParaTrocar.porcentBranco << endl;
    arquivo << nomeParaTrocar.densidade << endl;
}





int main() {
    fstream arquivo("animais_exoticos.txt");

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    int opcao;
    do {
        cout << "** CADASTRO DE HOMOGRAMA **" << endl;
        cout << "1. Cadastrar nova pessoa" << endl;
        cout << "2. Buscar pessoa" << endl;
        cout << "3. Alterar dados de uma pessoa" << endl;
        cout << "4. Excluir dados de uma pessoa" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarpessoa(arquivo);
                break;
            case 2:
                buscarpessoa(arquivo);
                break;
            case 3:
                alterarpessoa(arquivo);
                break;
            case 4:
                excluirpessoa(arquivo);
            case 5:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida! Digite novamente." << endl;
                break;
        }

        cout << endl;
    } while (opcao != 4);

    arquivo.close();

    return 0;
}