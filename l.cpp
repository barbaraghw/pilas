#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef struct Mazo{
	char carta[2];
	char simbolo [3]; 
}Mazo;

typedef struct nodo {
	Mazo*dato;
	struct nodo*Siguiente;
}Nodo;

typedef struct pila {
	Nodo*tope;
	int total;
}Pila;
Mazo*crearMazo (char carta[2],char simbolo[3]);

Nodo*crearNodo (Mazo*mazo);

Pila*crearPila ();

int estaVacia(Pila*pila);

void insertar (Pila*pila, Nodo*nodo);

void imprimir(Pila*pila);



// MAIN

int main (){
	int f;
	Pila*p;
	Mazo*c1;
	Nodo*n;
	p=crearPila();
	insertar (p,crearNodo(crearMazo("A","\3")));
	insertar (p,crearNodo(crearMazo("2","\3")));
	insertar (p,crearNodo(crearMazo("3","\3")));
	insertar (p,crearNodo(crearMazo("4","\3")));
	insertar (p,crearNodo(crearMazo("5","\3")));
	insertar (p,crearNodo(crearMazo("6","\3")));
	insertar (p,crearNodo(crearMazo("7","\3")));
	insertar (p,crearNodo(crearMazo("8","\3")));
	insertar (p,crearNodo(crearMazo("9","\3")));
	insertar (p,crearNodo(crearMazo("10","\3")));
	insertar (p,crearNodo(crearMazo("J","\3")));
	insertar (p,crearNodo(crearMazo("Q","\3")));
	insertar (p,crearNodo(crearMazo("K","\3")));
	insertar (p,crearNodo(crearMazo("A","\4")));
	insertar (p,crearNodo(crearMazo("2","\4")));
	insertar (p,crearNodo(crearMazo("3","\4")));
	insertar (p,crearNodo(crearMazo("4","\4")));
	insertar (p,crearNodo(crearMazo("5","\4")));
	insertar (p,crearNodo(crearMazo("6","\4")));
	insertar (p,crearNodo(crearMazo("7","\4")));
	insertar (p,crearNodo(crearMazo("8","\4")));
	insertar (p,crearNodo(crearMazo("9","\4")));
	insertar (p,crearNodo(crearMazo("10","\4")));
	insertar (p,crearNodo(crearMazo("J","\4")));
	insertar (p,crearNodo(crearMazo("Q","\4")));
	insertar (p,crearNodo(crearMazo("K","\4")));
	insertar (p,crearNodo(crearMazo("A","\5")));
	insertar (p,crearNodo(crearMazo("2","\5")));
	insertar (p,crearNodo(crearMazo("3","\5")));
	insertar (p,crearNodo(crearMazo("4","\5")));
	insertar (p,crearNodo(crearMazo("5","\5")));
	insertar (p,crearNodo(crearMazo("6","\5")));
	insertar (p,crearNodo(crearMazo("7","\5")));
	insertar (p,crearNodo(crearMazo("8","\5")));
	insertar (p,crearNodo(crearMazo("9","\5")));
	insertar (p,crearNodo(crearMazo("10","\5")));
	insertar (p,crearNodo(crearMazo("J","\5")));
	insertar (p,crearNodo(crearMazo("Q","\5")));
	insertar (p,crearNodo(crearMazo("K","\5")));
	insertar (p,crearNodo(crearMazo("A","\6")));
	insertar (p,crearNodo(crearMazo("2","\6")));
	insertar (p,crearNodo(crearMazo("3","\6")));
	insertar (p,crearNodo(crearMazo("4","\6")));
	insertar (p,crearNodo(crearMazo("5","\6")));
	insertar (p,crearNodo(crearMazo("6","\6")));
	insertar (p,crearNodo(crearMazo("7","\6")));
	insertar (p,crearNodo(crearMazo("8","\6")));
	insertar (p,crearNodo(crearMazo("9","\6")));
	insertar (p,crearNodo(crearMazo("10","\6")));
	insertar (p,crearNodo(crearMazo("J","\6")));
	insertar (p,crearNodo(crearMazo("Q","\6")));
	insertar (p,crearNodo(crearMazo("K","\6")));
	imprimir(p);
	
	return 0;

};



Mazo*crearMazo (char carta [2],char simbolo[3]){
	Mazo*aux=(Mazo*)malloc(sizeof(Mazo));
	strcpy(aux->simbolo,simbolo);
	strcpy(aux->carta,carta);
	return aux;
}


Nodo*crearNodo (Mazo*mazo){
	Nodo*aux=(Nodo*)malloc (sizeof(Nodo));
	aux->dato=mazo;
	aux->Siguiente=NULL;
}

Pila*crearPila (){
	Pila*aux=(Pila*)malloc(sizeof(Pila));
	aux->tope=NULL;
	aux->total=0;
	return aux;
}
int estaVacia(Pila*Pila){
	if (Pila->total==0){
		return 1;
}else{
	return 0;
}
} 

void insertar(Pila*pila,Nodo*aux){
	if (estaVacia(pila)){
		pila->tope=aux;
	}else{
		aux->Siguiente=pila->tope;
		pila->tope=aux;
	}
	pila->total++;
}
void imprimir(Pila*pila){
	Nodo*aux=pila->tope;
	Mazo*c;
	while(aux!=NULL){
		c=aux->dato;
		printf("%s %s \n",c->carta,c->simbolo);
	aux=aux->Siguiente;
		
	}
}

