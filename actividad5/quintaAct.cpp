#include <iostream>
using namespace std;

int multiplicacion(int a,int b){
	if (b == 1)
		return a;
		else
		return a+multiplicacion(a,b-1);
}

int main(){
	int x, y;
	cout <<"Primer numero : ";
	cin>>x;
	cout <<"Segundo numero : ";
	cin>>y;
	cout << "La multiplicacion de "<<x << " * "<<y<<" es igual a: "<<multiplicacion(x,y);
}
