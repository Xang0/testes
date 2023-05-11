#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int grau, minuto, segundo;
    float decimal;
    cout << "Diga uma cordenada em decimal para ser transformada em sexagesimal.\n";
    cin >> decimal;

    grau = decimal/1;
    minuto = ((decimal-grau)*60);
    segundo = (((decimal-grau)*60.0)-minuto)*60;

    ofstream arquivo("coordenadas.txt");
    arquivo << grau << endl << minuto << endl << segundo;

    return 0;
}