#include <stdio.h>
        
void main(){
int matriz[3][3];
int total=0;
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("inserte el valor para la posicion de la matriz [%d][%d] : ",i,j);
        scanf("%d",&matriz[i][j]);
    }
}

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++)
        printf("[%d][%d] : %d ",i,j,matriz[i][j]);
    printf("\n");
}

total=(matriz[0][0]*matriz[1][1]*matriz[2][2]) + (matriz[1][0]*matriz[2][1]*matriz[0][2]) + (matriz[2][0]*matriz[0][1]*matriz[1][2]);
printf("%d",total);
total=total+(matriz[0][2]*matriz[1][1]*matriz[2][0])*-1 + (matriz[1][2]*matriz[2][1]*matriz[0][0])*-1 + (matriz[2][2]*matriz[0][1]*matriz[1][0])*-1;
printf("%d",total);

if (total !=0)
printf("el resultado del determinante es: %d",total);
else
printf("error: el resultado es 0");
}