/*1) Dados dos números enteros llamados mayor y menor, obtener el máximo común divisor
(mcd) de ambos por el método de Euclides. Para resolver este problema se procede así:
a) se realiza la división entera del mayor entre el menor, b) si el residuo es cero, el mcd
está en la variable llamada menor, despliega el resultado y termina el programa, c)
pero si el residuo no es cero, el valor de menor pasa a mayor y el valor de residuo pasa
a menor, d) repetir el paso a.*/


#include <iostream>
using namespace std;
int mcd(int menor, int mayor){
int aux = mayor%menor;
if(aux==0){
	return menor;
}else{
	mayor = menor;
	menor = aux;
	mcd(menor,mayor);
	}
}
int main(){
	int a=0,b=0;
	cout<<"Ingrese el mayor";
	cin>>a;
	cout<<"Ingrese el menor";
	cin>>b;
	cout <<"el mcm es : "<<mcd(b,a);
	return 0;
}
