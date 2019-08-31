#include <iostream>
using namespace std;
void mediana(int p[],int tamanio){
	int aux=0;
for (int i = 0;i<tamanio;i++){
	cout<<"Ingresa el elemento "<< i+1<<" : ";
	cin>>p[i];
	system("cls");
}
for(int j = 0; j<tamanio;j++){
	for(int k =0; k<tamanio-1;k++)
	if(p[k]>p[k+1]){
		aux = p[k];
		p[k] = p[k+1];
		p[k+1] = aux;
	}
}
cout<<"El arreglo ordenado: "<<endl;
for (int a = 0; a<tamanio;a++)
cout<<p[a]<<"\t";
float xa;
if(tamanio%2==0){
	int suma = p[(tamanio/2)-1] + p[tamanio/2];
	cout<<endl<<suma;
	xa = suma/2.0;
}
else
	xa = p[int(tamanio/2)];
cout<<"\nLa mediana es: "<<xa;
}
int main(){
	int tam;
	cout<<"Ingrese el tamanio del arreglo: ";
	cin>>tam;
	int arreglo[tam];
	mediana(arreglo,tam);
	return 0;
}
