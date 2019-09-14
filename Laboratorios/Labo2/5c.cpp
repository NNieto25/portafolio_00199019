#include <iostream>
#include <string>
using namespace std;
int b = 0;
void torres(int numero,string origen,string destino,string auxiliar){
int movimientos = 0;
if(numero == 1){
cout<<"Mover el disco "<<numero << " desde "<<origen<<" hacia "
<<destino<<endl;
movimientos++;
}
else{
	torres(numero -1,origen,auxiliar,destino);
	cout<<"Mover el disco "<< numero << " desde "<<origen<<" hacia "
<<destino<<endl;
movimientos++;
torres(numero-1,auxiliar,destino,origen);
}
b+=movimientos;
}
int main(){
	string origen = "origen",destino = "destino", auxiliar ="auxiliar";
	cout<<"Ingrese numero de discos : ";
	int a;
	cin>>a;
	torres(a,origen,destino,auxiliar);
	cout<<"Numero de movimientos : "<<b;
return 0;
}
