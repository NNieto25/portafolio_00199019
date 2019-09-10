#include <iostream>
using namespace std;

struct Tpila{
	float elements[100];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, float e){
	if(s->top < 99){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, float *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

float obtener2do(Pila *s){
	if(empty(s))
		return -1;
	float a = 0, b = 0;
	pop(s, &a);
	if(empty(s))
		return -1;
	pop(s, &b);
	push(s, b);
	push(s, a);
	return b;
}
float vaciar(Pila *s){
	if(empty(s))
		return -1;
	float datos=0;
	int limite = s->top;
	for(int i = 0;i<=limite;i++){
		pop(s,&datos);
	}
	return datos;
}

int main()
{
	Pila unaPila;
	initialize(&unaPila);
	push(&unaPila, 9.2);	
	push(&unaPila, 1.2);
	push(&unaPila, 2.6);
	push(&unaPila, 5.6);
	push(&unaPila, 5.2);
	push(&unaPila, 4.2);
	float ultimo = vaciar(&unaPila);
	cout << "ultimo : " << ultimo<< endl;
	if(empty(&unaPila))
	cout<<"esta vacia";
}
