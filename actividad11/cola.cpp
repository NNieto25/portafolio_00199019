/*Cola circular ; Nestor Eduardo Nieto Alas 00199019 
***Reemplazar comando linea 15 ***
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
void errorc(){
cout<<"La cola no ha sido creada"<<endl;  
}
int main(){
    bool creado = false,vacia = true;
    string caracter;
    const char* comando = "cls"; // {Linux ==> clear ; Windows ==> cls}
    int opcion=0,disyuncion,tamanio,frente=0,elementos=0,deseo,*c,auxiliar;
    system(comando);
     do
     {
    cout<<endl<<
    "1) Crear/Borrar cola"<<endl<<
    "2) Insertar elemento en cola"<<endl<<
    "3) Remover elemento de la cola"<<endl<<
    "4) Leer frente"<<endl<<
    "5) Verificar vacio"<<endl<<
    "6) Mostrar cola"<<endl<<
    "7) Salir"<<endl <<
    "Seleccione la operacion a realizar : ";
    cin>>opcion;
    switch (opcion)
    {
     //-------------------------------------------------------
    case 1:
    if(creado){
    cout<<"La cola ya ha sido creada. Desea borrarla? (s/n)";
    cin>>caracter;
    system(comando);
    if(caracter=="s"||caracter=="S"){
    delete c;
    elementos=0;
    frente=0;
    creado=false;
    }
    }
    else{
    cout<<"Ingrese el tamanio: "<<endl;
    cin>>tamanio;
    system(comando);
    cout<<"Cola creada con exito!"<<endl;
    c = new int[tamanio];
    creado = true;
    }
    
    break;
    //-------------------------------------------------------
    case 2: 
        system(comando);
        if (creado)
    {
        if(elementos==tamanio)cout<<"Se alcanzo el maximo de elementos!";else{
    cout<<"Ingrese el valor del elemento : ";
    cin>>auxiliar;
        system(comando);
    c[(frente + elementos)%tamanio] = auxiliar;
    elementos++; 
    vacia = false;
    cout<<"El elemento ha sido ingresado con valor = "<<auxiliar<<endl;
    }
    }
    else{
        errorc();
    }

    break;
    //-------------------------------------------------------
    case 3:
    system(comando);
        if (creado)
    {
    if(vacia||(frente-elementos)==0)
    vacia = true;
    else{
    ++frente%=tamanio;
    elementos--;
    elementos==0?vacia=true:vacia=false;
    }}
    else{
        errorc();
    }
    break;
    //-------------------------------------------------------
    case 4:
        system(comando);
        if (creado)   {
    if(!vacia){
    cout <<"Front : " <<c[frente]<<endl;
    }else{
    cout<<"La pila esta vacia";
    }}else{
        errorc();
    }

    break;
    //-------------------------------------------------------
    case 5:
    system(comando);
    if (creado)
    {
    if (abs(frente-elementos)==0){
    cout<<"La cola esta vacia"<<endl;
    vacia = true;
    }else{
    cout<<"La cola NO esta vacia"<<endl;
    vacia = false;
   } }else{
    errorc();
    }
    break;
    //-------------------------------------------------------
    case 6: 
    system(comando);
     if (creado)
    {
    cout<<"Cola : \n{";
    for(int i = 0;i<elementos;i++){
        cout<<"\t"<<c[(frente+i)%tamanio];
    }
    cout<<"\t}\n";
    }
    else{
        errorc();
    }
    break;
    //-------------------------------------------------------
    case 7: 
    break;
    //-------------------------------------------------------
    default:
    cout<<"Ingrese una opcion valida!";
        break;
    }
     } while (opcion!=7);
}
