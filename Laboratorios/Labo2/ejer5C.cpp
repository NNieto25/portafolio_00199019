/* El problema de las torres de Han�i. Consiste en mover una torre de discos, de
una aguja hacia otra, nada m�s con la ayuda de una aguja auxiliar. La torre consiste
de n discos de diferente tama�o, que van colocados uno sobre otro, iniciando en la
base con el m�s grande y terminando en la parte superior con el m�s peque�o. Solo
puede moverse un disco a la vez y en ning�n momento un disco puede estar sobre
otro m�s peque�o que �l.*/
#include <iostream>
using namespace std;
int main(){
	int a;
cout<<"Ingrese cantidad de discos : ";
cin>>a;
int b[a];
for(int i = 0;i<a;i++){
	cout<<"Ingrese el tamanio de elemento "<<i+1<<" : ";
	cin>>b[i];
}
system("cls");
cout<<"La cantidad de movimientos es : ";
	return 0;
}
