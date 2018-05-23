#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    float wa=0, w1=0, w2=0, w3=0, w4=0,
    w5=0, w6=0, w7=0, w8=0;
    float wb;
    float d1=20, d2=25, d3=20, d4=30,
    d5=35, d6=15, d7=10, d8=40, d9=30;
    float m=0, m1=0, m2=0;
    cout << "\n\n Ingrese por favor el valor de WA\n";
    cin >> wa;
    w2=(d1/d2)*wa;
    w4=(-d3/d4)*w2;
    w6=(-d5/d6)*w4;
    w8=(-d7/d8)*w6;
    m1=d7/d8;
    m2=d8/d9;
    m=m1*m2;
    wb=(m*(wa-w2))+w2;

    cout<<"\n\nEl valor de W2 es: " <<w2<<"\n";
    cout<<"El valor de W4 es: "<<w4<<"\n";
    cout<<"El valor de W6 es: "<<w6<<"\n";
    cout<<"El valor de W8 es: "<<w8<<"\n";
    cout<<"El valor de WB es: "<<wb<<"\n";
    cout << "Hello world!";
    return 0;
}
