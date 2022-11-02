#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int quicksort(int*,int,int);
void imprimir(int*,int);

int main(){
    int A[TAM];
    char op;
    int ini=0;
    int i=0;

    while(op != 'n'){
        printf("inserte un numero: \n");
        scanf("%d",&A[i]);
        fflush(stdin);
        printf("desea agregar otro numero\n");
        scanf ("%c",&op);
        i++;
    }
    quicksort(A,ini,i);
    imprimir(A,i);
    return 0;
}

int quicksort(int *A,int izq,int der){
int i,j,x,aux;
i=izq;
j=der;
x=A[izq+der/2];

do{
while ((A[i]<x) && (j<=der))  i++;
    while ((x<A[j]) && (j>izq))   j--;
    if (i<=j){
        aux=A[i];A[i]=A[j];A[j]=aux;
        i++;
        j--;
        }   
}while (i<=j);
if(izq <j)
    quicksort(A,izq,j);
if(i<der)
    quicksort(A,i,der);
}

void imprimir(int *A,int i){
   int cout=0;
    while (i != 0){
        printf("%d \t",A[cout]);
        cout++;
        i--;
}}
