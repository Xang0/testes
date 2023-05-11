#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    float fabrica, plucro, lucro, pimpostos, impostos, preço;
    ifstream arquivo("dados.txt");
    arquivo >> fabrica >> plucro >> pimpostos;

    lucro = plucro*fabrica;
    impostos = pimpostos*fabrica;
    preço = lucro+impostos+fabrica;

    ofstream meu_arq("custo.txt");
    meu_arq << fixed << setprecision(2) << lucro << endl << impostos << endl << preço;

    return 0;
}