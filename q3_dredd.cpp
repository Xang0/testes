#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main (){
    ifstream arquivo("entrada.txt");
    float x1, y1, x2, y2, a, b;
    arquivo >> x1 >> y1 >> x2 >> y2;
    a = pow(x2-x1 , 2);
    b = pow(y2-y1 , 2);

    cout << sqrt(a+b) << endl;
    return 0;
}