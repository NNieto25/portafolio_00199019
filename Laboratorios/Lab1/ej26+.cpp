/*
26) Implemente una estructura para utilizar números complejos en C++, con campos para
almacenar la parte real y la parte imaginaria. Cree una función que acepte un número
complejo, calcule su conjugada (negar la parte imaginaria y dejar la parte real tal
como está) y devuelva el resultado (otro número complejo).
*/
#include <iostream>
using namespace std;
struct complejo{
	int real,imaginario;
};
complejo conjugar(complejo a){
	a.imaginario= a.imaginario*(-1);
	cout<<"El conjugado es : "<<a.real<<(a.imaginario>0?"+":"")<<a.imaginario<<"i"<<endl;
}
int main(){
	complejo numero;
	cout <<"Ingrese parte real: ";cin>>numero.real;
	cout <<"Ingrese parte imaginaria: ";cin>>numero.imaginario;
	cout<<"Su imaginario es: "<<numero.real<<(numero.imaginario>0?"+":"")<<numero.imaginario<<"i"<<endl;
	conjugar(numero);
	return 0;
}
