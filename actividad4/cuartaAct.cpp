//Nestor Eduardo Nieto Alas 00199019
#include <iostream>
#include <string>
using namespace std;
bool seguir =true;
struct pais{
	int habitantes;
	string capital;
	string nombre;
};
pais continente[6][5];
int main(){
	for (int i = 0;i<5;i++){
		cout<<"Ingrese el nombre del continente " << (i+1 )<< " : ";
		cin>>continente[0][i].nombre;
		for(int j = 0; j<5;j++){
			system("cls");
			cout <<"Ingrese el nombre del pais "<<(j+1) << " : ";
			cin>>continente[j+1][i].nombre;
			cout<<"Ingrese el nombre de la capital de "+continente[j+1][i].nombre +" :";
			cin>>continente[j+1][i].capital;
			cout<<"Ingrese la cantidad de habitantes de " + continente[j+1][i].nombre+" : "; 
			cin>>continente[j+1][i].habitantes;
		}
	}
	int cont=0,opc=0,suma=0;
	string letra="";
	int pi=0;
	int pj=0;
	int mayors = continente[1][0].habitantes;
	string capital ="";
	do{
	cout <<capital<<endl<<
	"1)Calcular poblacion total de un continente "<<endl<<
	"2)Capital con mayor poblacion"<<endl<<
	"Ingrese una opcion : ";
	cin>>opc;
	switch(opc){
		
		case 1: 
		suma=0;
		cout<< "Seleccione un continente: "<<endl;
		for(int k =0;k<5;k++)
			cout<< k+1 <<")"<<continente[0][k].nombre<<endl;
		cin>>cont;
		for(int l = 0; l <5;l++)
			suma += continente[l+1][cont-1].habitantes;
			cout<<"La cantidad de habitantes de "<<continente[0][cont-1].nombre<<" es de : "<<suma<<endl;
			system("pause");
			system("cls");
			cout<<"¿Desea continuar?(s/n)";
			cin>>letra;
			(letra=="n"||letra=="N")?(::seguir=false):(::seguir =true);
		break;
		case 2:
			for (int a = 1; a<6;a++){
				for(int b = 0 ; b<5;b++){
				
				 if(mayors < (continente[a][b].habitantes)){
				pi=a;
				pj=b;
				mayors = continente[a][b].habitantes;
				 }
				 }
				 }
cout <<"La capital con mayor numero de habitantes es "<<continente[pi][pj].capital<<"con "<<mayors << " habitantes"<<endl;
			system("pause");
			system("cls");
			cout<<"¿Desea continuar?(s/n)";
			cin>>letra;
			(letra=="n"||letra=="N")?(::seguir=false):(::seguir =true);
		break;
		default: 
		system("cls");
		cout<<"imposible :v";
		::seguir = false;
		break;
			
	}
	}while(seguir);
	return 0;
}
