/* Nestor Eduardo Nieto Alas 00199019
Funcion que reciba lista simple y un numero entero
Eliminar todas las ocurrencias de ese numero
*/
#include <vector>
#include <iostream>
using namespace std;
vector<int> lista;
bool continuar = true;
int iterador =0;
void mostrar(vector<int> list){
cout<<"Lista de numeros : \n{\t";
for(int i = 0;i<list.size();i++)
cout<<list[i]<<"\t";
cout<<"}"<<endl;
}
void borrar(vector<int> listas,int numero){
    int constante=listas.size(),coincidencias=0;
    for (int i = 0; i <constante; i++)
    {
        if(listas[i-coincidencias]==numero){ 
        listas.erase(listas.begin()+(i-coincidencias));
        coincidencias++;
        }
    }
    mostrar(listas);
}
int main(){
    int n = 0,l=0;
    char letra;
do
{   cout<<"Ingrese un numero : ";
    cin>>n;
    lista.push_back(n);
    cout<<"Desea incluir otro numero?(s/n) : ";
    cin>>letra;
    if (!(letra=='s'||letra =='S'))
    continuar=false;
} while (continuar);
mostrar(lista);
cout<<"Ingrese numero a eliminar : ";cin>>l;
borrar(lista,l);

    return 0;
}