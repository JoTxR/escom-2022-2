#include <stdio.h>
#include <stdlib.h>
#define L 1000

void mostrar(char* mapa,int);
void movizq(int mapa[][L],int cursor[][L],int);
void movder(int mapa[][L],int cursor[][L],int);
void movarr(int mapa[][L],int cursor[][L],int);
void movabj(int mapa[][L],int cursor[][L],int);

int main(){
char mapa[L][L];
int a=0,i=0,j=0;
int cursor[L][L];
printf("inserte el tamano de la mapa: \n");
scanf("%d",&a);
system("pause");
system("cls");
while(i != a){
    j=0;
    while (j != a){
        if (i== 0 && j== 0){
                mapa[i][j]='I';
            }
            else if (i==(a-1) && j==(a-1)){
                mapa[i][j]='F';
            }
            else{
            mapa[i][j] = '0';
            }
        j++;    
        }
    i++;      
}
cursor[0][0]=0;
mostrar(mapa,a);
return 0;
}

void mostrar(char mapa[][L],int a){
int i=0,j=0;
while (i!= a){
    j=0;
    while (j != a){
        if (mapa[i][j] == cursor[i][j])
            printf("x");
        else
            printf("\t%d",mapa[i][j]);
        j++;
    }
    i++;
    printf("\n");
}}
