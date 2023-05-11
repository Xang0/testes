#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int numero;
    ifstream arquivo("entrada.txt");
    arquivo >> numero;

    int n1 = numero/100000;
    int n2 = (numero%100000)/10000;
    int n3 = ((numero%100000)%10000)/1000;
    int n4 = (((numero%100000)%10000)%1000)/100;
    int n5 = ((((numero%100000)%10000)%1000)%100)/10;
    int n6 = ((((numero%100000)%10000)%1000)%100)%10;

    int m1 = (n1/n2)*10000;
    int m2 = (n2/n3)*1000;
    int m3 = (n3/n4)*100;
    int m4 = (n4/n5)*10;
    int m5 = n5/n6;

    ofstream meu_arq("saida.txt");
    meu_arq << m1 + m2 + m3 + m4 + m5;

    return 0;
}