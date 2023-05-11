#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3, t1c, t1b, t2c, t2b, t3c, t3b, ttc, ttb;
    string situacao1, situacao2, situacao3;
    cin >> x1 >> y1 >> situacao1;
    cin >> x2 >> y2 >> situacao2;
    cin >> x3 >> y3 >> situacao3;

    if(situacao1 == "cheio"){
        t1c = sqrt(pow(x1, 2)+pow(y1, 2))*24.0;
        t1b = sqrt(pow(x1, 2)+pow(y1, 2))*18.0;
    } else{
        t1c = sqrt(pow(x1,2)+pow(y1,2))*5.0;
        t1b = sqrt(pow(x1,2)+pow(y1,2))*15.0;
    }
    if(situacao2 == "cheio"){
        t2c = sqrt(pow(x2-x1,2.0)+pow(y2-y1,2))*24.0;
        t2b = sqrt(pow(x2-x1,2.0)+pow(y2-y1,2))*18.0;
    } else{
        t2c = sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0))*5.0;
        t2b = sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0))*15.0;
    }
    if(situacao3 == "cheio"){
        t3c = sqrt(pow(x3-x2,2.0)+pow(y3-y2,2.0))*24.0;
        t3b = sqrt(pow(x3-x2,2.0)+pow(y3-y2,2.0))*18.0;
    } else{
        t3c = sqrt(pow(x3-x2,2.0)+pow(y3-y2,2.0))*5.0;
        t3b = sqrt(pow(x3-x2,2.0)+pow(y3-y2,2.0))*15.0;
    }

    ttc = t1c+t2c+t3c;
    ttb = t1b+t2b+t3b;
    if(ttc > ttb){
        cout << "Bicicleta " << ceil(ttb) << endl;
    } else {
        cout << "Carro " << ceil(ttc) << endl;
    }

    return 0;
}