/* El problema de las torres de Hanói. Consiste en mover una torre de discos, de
una aguja hacia otra, nada más con la ayuda de una aguja auxiliar. La torre consiste
de n discos de diferente tamaño, que van colocados uno sobre otro, iniciando en la
base con el más grande y terminando en la parte superior con el más pequeño. Solo
puede moverse un disco a la vez y en ningún momento un disco puede estar sobre
otro más pequeño que él.*/
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
