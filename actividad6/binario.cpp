#include <iostream>
using namespace std;
int buscar(int a,int b, int c){
int ai[]={1,3,4,5,17,18,31,33};
	if (b>c)
	return (-1);
	int medio = (b+c)/2;
	if(a==ai[medio])
	return(medio);
	if(a<ai[medio])
	buscar(a,b,medio-1);
	else
	buscar(a,medio+1,c);
}
int main(){
	int d;
cout<<"Ingrese un numero positivo: ";
cin>> d;
cout<<"El elemento esta en la casilla: "<<buscar(d,0,8);
}
