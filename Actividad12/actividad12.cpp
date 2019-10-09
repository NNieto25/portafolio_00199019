#include <iostream>
#include <vector>
using namespace std;
struct pupas{
bool arroz;
int r;
int q;
int fq;
};
typedef struct pupas pupusas;
pupusas auxiliar;
char letra;
vector<pupusas> lista;
bool continuar = true;
void agregar(){
int opc=0; 
cout<<"\nCantidad de Revueltas: ";cin>>auxiliar.r;
cout<<"Cantidad de Queso : ";cin>>auxiliar.q;
cout<<"Cantidad de Frijol con Queso : ";cin>>auxiliar.fq;
cout<<"Pupusas de arroz (s/n)";cin>>letra;
if(letra=='n'||letra=='N')
auxiliar.arroz=false;
else
auxiliar.arroz=true;
//---------------------------------------
do
{
cout<<"Agregar elemento : \n1) Al inicio\n2) Al final\nOpcion : ";
cin>>opc;
switch (opc)
{
case 1: 
    lista.insert(lista.begin(),auxiliar);
    continuar=false;
    break;
case 2:
    lista.push_back(auxiliar);
    continuar = false;
    break;
default:
    cout<<"Ingrese una opcion valida.";
    break;
}
} while (continuar);
continuar = true;
}
void mostrar(){
for(int i = 0;i<lista.size();i++){
cout <<
"\n******* ORDEN #"<<i+1<<" *******"<<
"\n Frijol con Queso : "<<lista[i].fq<<
"\n Queso : "<<lista[i].q<<
"\n Revueltas : "<<lista[i].r<<endl;
lista[i].arroz==true?cout<<"Pupusas de arroz\n":cout<<"Pupusas de maiz\n";
}
}

int main(){
    int opcion=0;
do
{
cout<<"\n1) Agregar orden\n2) Mostrar ordenes\n3) Salir\nOpcion : ";
cin>>opcion;
switch (opcion)
{
case 1:
agregar();
    break;
case 2:
mostrar();
    break;
case 3:
(::continuar)=false;
    break;
default:
    cout<<"Ingrese una opcion valida.";
    break;
}
} while (::continuar);
}
