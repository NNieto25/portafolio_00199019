//funcion recursiva que calcula la suma de numeros pares e impares de una lista 
#include <iostream>
#include <vector>
using namespace std;
vector<int> lista; 
void sumar(int lis,int n,int m){
if (lis<lista.size()){
    if (lista[lis]%2==0)
    n+=lista[lis];
    else
    m+=lista[lis];
    sumar(lis+1,n,m);}
else
cout<<"Suma de numeros pares : "<<n<<"\nSuma de numeros impares : "<<m<<endl;}
int main(){
    int numero = 0;
    do
    {
        cout<<"Ingresa un numero (0 para salir) :"; cin>> numero;
        lista.push_back(numero);
    } while (numero!=0);
    sumar(0,0,0);}