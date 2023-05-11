#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int valor, a, b, c, d;
    cin >> valor;

    if(100 <= valor && valor <= 999){
        a = valor/100;
        b = valor%100;
        c = b/10;
        d = b%10;
    } else {
        cout << "Digite um número de três dígitos, por favor.";
    }

    ofstream arquivo("entrada.txt");
    arquivo << a*c*d;

    cout << a+c+d << endl;

    return 0;
}