#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double produto, tantes, valor_prestacoes, tagora, valor_prestacoes2;
    int prestacoes;
    ifstream arquivo("venda.txt");
    arquivo >> produto >> prestacoes;

    tantes = (produto*0.1)+produto;
    valor_prestacoes = tantes*0.1;
    valor_prestacoes2 = valor_prestacoes-(valor_prestacoes*0.1);
    tagora = valor_prestacoes2/0.1;

    ofstream meu_arq("cliente.txt");
    meu_arq << fixed << setprecision(1) << tantes << endl << valor_prestacoes << endl << valor_prestacoes2 << endl << tagora;

    return 0;
}