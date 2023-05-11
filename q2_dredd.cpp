#include <iostream>
#include <fstream>
using namespace std;

int main (){
    string nome, dados;
    cin >> nome;
    cin >> dados;

    ofstream arquivo(nome);
    arquivo << dados;

    return 0;
}