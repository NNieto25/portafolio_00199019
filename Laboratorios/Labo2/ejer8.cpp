//8) Escribir una función recursiva que devuelva la cantidad de dígitos de un número entero.
#include <iostream>
using namespace std;
digitos(int a,int contador){
if(a/10<=0){
	return ++contador;
}else{
	a/=10;
	digitos(a,++contador);
}
}
int main(){
	int a;
	cout<<"Ingrese el numero : ";
	cin>>a; 
	cout<<" la cantidad de digitos : "<<digitos(a,0);
}
