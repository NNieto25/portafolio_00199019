#include <stack>
#include <iostream>
using namespace std;
int devolver(stack<int> pila){
pila.push(1);
	pila.push(2);
	pila.push(3);
	if(pila.empty())
	return -1;	
	pila.pop();
	if(pila.empty())
	return -1;
	int i = pila.top();
	pila.pop();
	return i;
}
int main(){
	stack<int> a;
	cout<<"El segundo elemento es: "<<devolver(a);	
}
