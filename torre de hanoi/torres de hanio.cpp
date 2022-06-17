#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define TAMPILA 10

using namespace std; 

struct pila{
	int dato [TAMPILA];
	int alto;
};
typedef struct pila TodaPila;

int push(TodaPila &p, int n);
int pop(TodaPila &p, int &n);
int stacktop(TodaPila p, int &n);
int empty(TodaPila p);
void comPila(TodaPila &p);

void HanoiT(int n, TodaPila &original, TodaPila &aux, TodaPila &fin, TodaPila *a, TodaPila *b, TodaPila *c );
void mostrarPila(TodaPila fin);

int main(){
	
	int n = 7;
	TodaPila original, aux, fin;
	comPila(original);
	comPila(aux);
	comPila(fin);
	
	TodaPila *a = &original;
	TodaPila *b = &aux;
	TodaPila *c = &fin;
	
	cout<<"Torre de hanoi\n";
	for(int i = n; i>0; i--)
	push(original, i);
	cout<<"Los datos de la pila de origen son:";
	mostrarPila(original);
	
	HanoiT (n, original, aux, fin, a, b, c);
	cout<<"\nDiscos movidos exitosamente"<<endl;
	cout<<"Los datos de la pila fin son:";
	mostrarPila(fin);

	
	cout<<"\nMAPM";
	return 0;
}

int push(TodaPila &p, int n){
	if(p.alto == TAMPILA-1)
		return 0;
		p.dato[++p.alto] = n;
		return 1;
	}

int pop(TodaPila &p, int &n){
	if(empty(p))
		return 0;
	n = p.dato[p.alto--];
	return 1;
}
int stacktop(TodaPila p, int &n){
	if(empty(p))
		return 0;
	n = p.dato[p.alto];
	return 0;
}
int empty(TodaPila p){
	if(p.alto == -1)
		return 1;
	return 0;
}
void comPila(TodaPila &p){
	p.alto = -1;
}
void HanoiT(int n, TodaPila &original, TodaPila &aux, TodaPila &fin,
TodaPila *a, TodaPila *b, TodaPila *c ){

	int e;
	char aux1, aux2;
	
	if (a == &original){
		aux1 = 'A';
	}else if(b == &original){
		aux1 = 'B';
	}else if (c == &original){
		aux1 = 'C';
	}

	if (a == &fin){
		aux2 = 'A';
	}else if(b == &fin){
		aux2 = 'B';
	}else if (c == &fin){
		aux2 = 'C';	
	}
	//Comienzo de recursividad 
	for(int i =0; i<=e;i++)	{
	int cont=0;
	cont++;
	if(n == 1){
		pop(original, e);
		push(fin, e);
		cout<<"\nDisco "<<n<<" movido de la Torre "<<aux1<<" a la Torre "<<aux2<<"";
	}else{
		HanoiT(n - 1, original, fin, aux, a, b, c);
		pop(original, e);
		push(fin, e);
		cout<<"\nDisco "<<n<<" movido de la Torre "<<aux1<<" a la Torre "<<aux2<<"";
		HanoiT(n - 1, aux, original, fin, a, b, c);
	}
	cout<<i;
}

}
void mostrarPila(TodaPila fin){
	int n;
	while (pop(fin, n)){
		cout<< n;
	}
}
