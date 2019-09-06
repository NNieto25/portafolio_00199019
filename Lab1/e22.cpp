/*
22) Cree una matriz cuadrada de enteros que contenga cinco filas y cinco columnas e
inicialice todas sus casillas a cero. Solicite al usuario sólo aquellos valores que sean
necesarios para crear una matriz tri-diagonal y muéstrela en consola de forma
ordenada (más información en: http://mathworld.wolfram.com/TridiagonalMatrix.html).
*/
#include <iostream>
using namespace std;
int main(){
  int a[5][5]={},b=0;
  for(int i =0;i<5;i++){
    for(int j =0;j<5;j++){
      b=i+j;
if (i==j||(i==j-1)||(j==i-1)) {
cout <<"Ingrese el elemento en fila: "<<i+1<< ", columna: "<<j+1<<" : ";
cin>>a[i][j];
}else
a[i][j]=0;
    }
  }
cout<<"\nLa matriz :\n";
  for(int i =0;i<5;i++){
    for(int j =0;j<5;j++){
      cout<<a[i][j]<<"\t";
    }
    cout<<"\n";
  }
}
