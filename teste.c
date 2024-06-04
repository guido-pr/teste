#include <stdio.h>
#include <stdlib.h>

typedef struct No No;

typedef struct No{
    No *prox;
    int valor;
} No;

typedef struct Fila{
    No *inicio;
    No *fim;
}Fila;


Fila *criaFila(){

    Fila *f = (Fila*) malloc(sizeof(Fila));
    if(f == NULL){
        printf()

    }

}


int main(){



}