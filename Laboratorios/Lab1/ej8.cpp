/*
8) Elabore una función recursiva que, dado un número entero que se obtiene desde
teclado, realice un conteo como el siguiente:
Suponiendo que el valor ingresado es 3:
1
2
3
2
1
*/
#include <iostream>
using namespace std;
int contar(int a,int contador){
	if(contador == a){
	
	cout<<contador<<endl;
	return a;}
	else{
		cout<<contador<<endl;
		contador++;
		contar(a,contador);
		contador--;
		if(contador>=1)
		cout<<contador<<endl;
	}
}
int main(){
	int cont =1,a;
	cout<<"Ingrese un entero : ";
	cin>>a;
	contar(a,cont);
}
