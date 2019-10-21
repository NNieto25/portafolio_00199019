#include <iostream>
#include <stack>
#include <string>
using namespace std;
struct libro{
    int pag;
    string titulo;
};
void agregar(stack<libro> *p,int num,string dato){
cout<<"Agreganding..."<<endl<<endl;
libro aux;
aux.pag=num;
aux.titulo=dato;
(*p).push(aux);
}
void buscar(stack<libro> p,string dato,int n){
if (!p.empty())
{
    if(n<p.size()){
         cout<<"Buscanding..."<<endl;
        if(p.top().titulo==dato)
        cout<<"Numero de paginas : "<<p.top().pag<<endl<<endl;
        else{
            p.pop();
            buscar(p,dato,n+1);
        }
    }
}
else
cout<<"El libro no se encontro."<<endl<<endl;
}
void mostrar(stack<libro> p){
    cout<<"Mostranding ... "<<endl;
    int tam = p.size();
for (size_t i = 0; i < tam; i++)
{
    cout<<
    "Libro "<<i+1<<": "<<p.top().titulo<<endl;
    p.pop();
}
cout<<endl;
}
bool continuar = true;
int main(){
    int opc=0,paginas=0;
    string ttlo;
    stack <libro> pila;
    do
    {
        cout<<
        "1) Agregar libro"<<endl<<
        "2) Mostrar libros"<<endl<<
        "3) Buscar libro"<<endl<<
        "4) Salir"<<endl<<
        "Opcion seleccionada : ";
        cin>>opc;
        switch (opc)
        {
        case 1: 
        cout<<"Ingrese el titulo del libro : ";cin>>ttlo;
        cout<<"Cantidad de paginas : ";cin>>paginas;
        agregar(&pila,paginas,ttlo);
            break;
        case 2:
            mostrar(pila);
            break;
        case 3: 
        cout<<"Ingrese el titulo del libro : ";cin>>ttlo;
        buscar(pila,ttlo,0);
            break;
        case 4: 
        continuar = false;
            break;
            
        default:
        cout<<"Ingrese una opcion valida!"<<endl;
            break;
        }
    } while (continuar);
    
    return 0;
}