#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int area, numero;
    float preco, valor;
    ifstream arquivo("entrada.txt");
    arquivo >> area >> preco;

    numero = ceil((area/3)/18.0);
    valor = preco*numero;

    ofstream meu_arq("saida.txt");
    meu_arq << numero << " " << fixed << setprecision(2) << valor;

    return 0;
}