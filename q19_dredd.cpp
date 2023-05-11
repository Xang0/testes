#include <iostream>
#include <fstream>
using namespace std;

int main (){
    int ms, hora, minuto;
    float segundo;
    ifstream arquivo("tempo.txt");
    arquivo >> ms;

    segundo = (ms%60000)/1000.0;
    minuto = (ms%3600000)/(60000);
    hora = (ms/3600000);

    ofstream meu_arq("horario.txt");
    meu_arq << hora << ":" << minuto << ":" << segundo;

    return 0;
}