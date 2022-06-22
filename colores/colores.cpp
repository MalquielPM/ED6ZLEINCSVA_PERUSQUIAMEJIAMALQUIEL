#include <iostream>
#include <string.h>

using namespace std;

struct nodo{
string color;
struct nodo *siguiente;
};

struct cola{
nodo *delantera;
nodo *atras;
};

void encolar(struct cola &q, string valor){
struct nodo *aux = new (struct nodo);

aux->color= valor;
aux->siguiente= NULL;

if(q.delantera==NULL){
q.delantera=aux;
}else{
(q.atras)->siguiente=aux;
}
q.atras = aux;

}

int desencolar(struct cola &q){
string col;
struct nodo *aux;

aux = q.delantera;
col = aux->color;
q.delantera = (q.delantera)->siguiente;

delete(aux);

}

void muestraCola(struct cola q){
struct nodo *aux;
aux=q.delantera;
while(aux!=NULL){
cout<<" "<<aux->color;
aux= aux->siguiente;
}
}

void vaciaCola(struct cola &q){
struct nodo *aux;
while(q.delantera !=NULL){
aux = q.delantera;
q.delantera = aux->siguiente;
delete(aux);
}
q.delantera = NULL;
q.atras = NULL;
}

void menu(){
cout<<"Ejemplo de cola\n";
cout<<"1.- Encolar\n";
cout<<"2.- Desencolar\n";
cout<<"3.- Mostrar cola\n";
cout<<"4.- Vaciar cola\n";
cout<<"1.- SALIR\n";

}
int main(){
struct cola q;
q.delantera = NULL;
q.atras = NULL;

int op;
string dato, x;

do{
menu();
cin>>op;
switch(op){
case 1:
cout<<"\nColor a encolar\n";
cin>>dato;
encolar(q, dato);
cout<<"\n Color :"<<dato<<" encolado.\n";
break;
case 2:
x = desencolar(q);
cout<<"\n Color :"<<x<<" Desencolada\n";
break;
case 3:
cout<<"\n Mostrar cola\:";
if(q.delantera != NULL) muestraCola(q);
else cout<<"\n Cola vacia\n";
break;
case 4:
vaciaCola(q);
cout<<"\nCola vacia ";
break;
}
}while(op !=5);
return 0;
}
