#include<stdio.h>
#include<stdlib.h>
#define L 100

void mostrar(char** mapa);
void crearmatriz(char **mapa);

int main(){
srand(time(NULL));
char mapa[L][L];
char **pmapa;
crearmatriz(pmapa);
mostrar(pmapa);
}


void crearmatriz(char **mapa){
int i,j,tam,a;
printf("define el tamano del laberinto cuadrado:");
scanf("%d",&tam);
system("pause");
system("cls");
for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
        if (i== 0 && j==0)
            mapa[0][0]= 'I';
        else if(i==(tam-1)&& j == (tam-1))
            mapa[tam-1][tam-1]='F';
        else{
            a=rand()%2;
            if (a==1)
                mapa[i][j]='+';
            else
                mapa[i][j] ='X';            
}}
}

for (i=0;i<tam;i++){
    for(j=0;j<tam;j++){
        printf("%c",mapa[i][j]);
    }   
        printf("\n");
    }
system("pause");
}

void mostrar(char **mapa){
int i,j,tam;    
for (i=0;i<tam;i++){
    for(j=0;j<tam;j++){
        printf("%c",mapa[i][j]);
    }   
        printf("\n");
    }
system("pause");

}