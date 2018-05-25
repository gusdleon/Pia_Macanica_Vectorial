#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	float wa,wb,w2,w3,w4,
	w5, w6, w7, w8;
	float n2=-20, n3=28, d3=20, //d4=30,
	//d5=35, d6=15, d7=10, d8=40, d9=30;
	float m=0, m1=0, m2=0;
	cout << "Hola necesito los siguientes datos\n para calcular el valor de WB";
	cout << "\n\n Ingrese por favor el valor de la primera entrada (WA)\n";
	cin >> wa;
	cout << "\n\n Ahora ingrese el valor de la segunda entrada (Wb)\n";
	cin >> wb;
	cout << "\n Gracias :)";
	w2=wa;
	w5=wb
	w7=w6


	w3=(n2/n3)*wa;
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
