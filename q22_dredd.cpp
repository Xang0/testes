#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int caixa, trufa, jujuba, drops, bala;
    float dinheiro;
    cout << "Quanto de dinheiro você possui?\n";
    cin >> dinheiro;

    caixa = dinheiro/13.5;
    trufa = (dinheiro-(13.5*caixa))/2.5;
    jujuba = (dinheiro-(13.5*caixa + 2.5*trufa))/1.5;
    drops = (dinheiro-(13.5*caixa + 2.5*trufa + 1.5*jujuba))/1;
    bala = (dinheiro-(13.5*caixa + 2.5*trufa + 1.5*jujuba + drops))/0.25;

    ofstream arquivo("doces.txt");
    arquivo << dinheiro << endl << caixa << endl << trufa << endl << jujuba << endl << drops << endl << bala; 

    return 0;
}