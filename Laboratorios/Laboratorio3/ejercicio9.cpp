/* Nestor Eduardo Nieto Alas 00199019
menu para administrar una lista lineal simple 
-llenar lista
-Eliminar persona
-actualizar persona
-mostrar
-salir
DATOS : Carne,nombre,apellido,edad,telefono y correo
*/
#include <vector>
#include <iostream>
#include <string>
using namespace std;
struct persona{
    int carne,edad,telefono;
    string nombre, apellido, correo;
};
struct conjunto{bool verif;int indice;};
    persona referencia;
    int opcion = 0;
    bool continuar = true;
    vector<persona> lista;
            conjunto ver;
    conjunto verificar(){
        ver.verif=true;
        for (size_t i = 0; i < lista.size(); i++)
        {
            if(referencia.carne==lista[i].carne){
            ver.verif=false;
            ver.indice=i;
            break;
            }
        }
        return ver;
    }
void agregar(){
    cout<<"Agregando..."<<
    "\n\tIngresa el carne : ";cin>>referencia.carne;
    if (verificar().verif)
    {
    cout<<"\tIngresa el nombre : ";cin>>referencia.nombre;
    cout<<"\tIngresa el apellido : ";cin>>referencia.apellido;
    cout<<"\tIngresa la edad : ";cin>>referencia.edad;
    cout<<"\tIngresa el telefono : ";cin>>referencia.telefono;
    cout<<"\tIngresa el correo : ";cin>>referencia.correo;
    lista.push_back(referencia);
    cout<<"Usuario agregado correctamente!"<<endl;
    }else
    cout<<"El carne ya ha sido registrado!"<<endl;
}
void eliminar(){
cout<<"Eliminar persona..."<<endl<< 
"Lista de carne: \n{\t";
for(int i = 0; i<lista.size();i++)
cout<<lista[i].carne<<"\t";
cout<<"}"<<endl;
cout<<"Ingrese carne de persona a eliminar : ";cin>>referencia.carne;
if(!verificar().verif){
lista.erase(lista.begin()+verificar().indice);
cout<<"Persona eliminada con exito!\n";
}
else
cout<<"La persona no ha sido registrada!"<<endl;
}
void actualizar(){
cout<<"Modificar persona..."<<endl<< 
"Lista de carne: \n{\t";
for(int i = 0; i<lista.size();i++)
cout<<lista[i].carne<<"\t";
cout<<"}"<<endl;
cout<<"\tIngrese carne de persona a modificar : ";cin>>referencia.carne;
if(!verificar().verif){
cout<<"\tIngrese el nombre : ";cin>>referencia.nombre;
cout<<"\tIngrese el apellido : ";cin>>referencia.apellido;
cout<<"\tIngrese la edad : ";cin>>referencia.edad;
cout<<"\tIngrese el telefono : ";cin>>referencia.telefono;
cout<<"\tIngrese el correo : ";cin>>referencia.correo;
lista[verificar().indice] = referencia;
cout<<"\nPersona modificada con exito!"<<endl;
}else
cout<<"La persona no ha sido registrada!"<<endl;
}
void mostrar(){
    cout<<"Mostrando personas..."<<endl;
    for (size_t i = 0; i < lista.size(); i++)
    {
        cout<<
        "\n***** Persona #"<<i+1<<" *****"<<endl<<
        "Carne: "<<lista[i].carne<<endl<<
        "Nombre : "<<lista[i].nombre<<endl<<
        "Apellido : "<<lista[i].apellido<<endl<<
        "Edad: "<<lista[i].edad<<endl<<
        "Telefono : "<<lista[i].telefono<<endl<<
        "Correo : "<<lista[i].correo<<endl;
    }
    
}
int main(){

    do
    {
        cout<<
        "\n\t1)Agregar persona\n\t"<<
        "2)Eliminar persona\n\t"<<
        "3)Actualizar datos de persona\n\t"<<
        "4)Mostrar personas\n\t"<<
        "5)Salir\nOpcion seleccionada:";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            agregar();
            break;
        case 2:
            eliminar();
            break;
        case 3:
            actualizar();
            break;
        case 4:
            mostrar();
            break;
        case 5:
            continuar = false;
            break;
        default:
            break;
        }
    } while (continuar);
    

    return 0;
}