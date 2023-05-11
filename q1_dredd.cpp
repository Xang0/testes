#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nome, dado;
    cin >> nome;
    
    ifstream arquivo(nome);
    arquivo >> dado;
    cout << dado << endl;

    return 0;
}