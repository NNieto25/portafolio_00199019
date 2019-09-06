/*
16) Solicite diez enteros al usuario, almacénelos en un arreglo y finalmente calcule su suma
y promedio. Utilice el ciclo for para controlar el flujo del programa.
*/
#include <iostream>
using namespace std;
int main(){
  int arreglo[10];
  int suma=0;
for (int a = 0; a <10; a++) {
cout<< "Ingrese el numero "<<a+1<<" : ";
cin>>arreglo[a];
  suma += arreglo[a];
}
cout <<"La suma de los elementos es: "<<suma<<endl<<"Su promedio es : "<<suma/10;

  return 0;
}
