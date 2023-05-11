#include <iostream>
#include <iomanip>

using namespace std;

//Desafio 1:
/*int main() {
    float a, b, c;
    cout = "Informe um número x para a função f(x)= x²+3x+5\n";
    cin >> a;
    b = a*a;
    c = -3*a;
    cout << "O resultado é " << b+c+5 << endl;

    return 0;
}*/

//Desafio 2:
/*int main() {
    int nota1, nota2, nota3, media, mediat;

    cout << "Uma de cada vez, informe as notas das suas 3 provas.\n";
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    media = (nota1+nota2+nota3)/3;
    cout << "Agore informe a média da sua turma.\n";
    cin >> mediat;

    if(media == mediat){
        cout << "Sua média trimestral: " << fixed << setprecision(1) << media << endl;
        cout << "Você ficou na média da turma.\n";
    }else if(media < mediat){
        cout << "Sua média trimestral: " << fixed << setprecision(1) << media << endl;
        cout << "Você ficou abaixo da média da turma.\n";
    }else {
        cout << "Sua média trimestral: " << fixed << setprecision(1) << media << endl;
        cout << "Você ficou acima da média da turma.\n";
    }

    return 0;endl;
}*/

//Desafio 3
int main(){
    int n, s, p=1;
    cout << "Informe um número inteiro e positivo.\n";
    cin >> n;

   
    for(int i=1; i<n; i++){
        p= p*i;
    }
    cout << p << endl;

    return 0;
}