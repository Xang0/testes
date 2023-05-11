#include <iostream>
using namespace std;

int main(){
    string carro;
    int dias;
    float km;
    cout << "Me diga qual tipo de carro deseja, por quantos dias usará e quantos Km rodará.\n";
    cin >> carro;
    cin >> dias;
    cin >> km;

    if(carro == "ECONOMICO"){
        cout << (km*1.15)+(dias*88) << endl;
        cout << "Carros a disposição: Fiat Uno 1.0, Fiat Mobi 1.0, Renault Kwid 1.0, VW Gol 1.0, Ford Ka 1.0, Renault Sandero 1.0, Onix Joy 1.0\n";
    } else if(carro == "INTERMEDIARIO"){
        cout << (km*1.56)+(dias*197) << endl;
        cout << "Carros a disposição: HB20 1.6, VW Gol 1.6, Renault Sandero 1.0, Fiat Cronos 1.3, Onix 1.0 Turbo, Nissan Versa FAST\n";
    } else if(carro == "PRIME"){
        cout << (km*2.98)+(dias*265) << endl;
        cout << "Carros a disposição: Ford Ecoesport 1.5, Renault Duster 1.6, Nissan Kicks 1.6, VW Nivus 1.6, Fiat Pulse 1.6, Chery Tiggo 3X Turbo\n";
    } else {
        cout << (km*3.40)+(dias*335) << endl;
        cout << "Carros a disposição: Jeep Compass 4x4 Diesel, Mitsubishi Pajero 2.4 Diesel, Mercedes C180, Toyota Corola Cross, VW Taos Highline, Mitsubishi Eclipse Cross\n";
    }

return 0;
}