#include <stdio.h>
#include<stdlib.h>

void main(){
    int a,b,valor;

printf("inserte el valor de inicio:\n");
scanf("%d",&a);
printf("inserte el valor final:\n");
scanf("%d",&b);
printf("inserte 1 para nones y 2 para pares\n");
scanf("%d",&valor);
system("cls");
if (valor == 1){
    for (a;a<b;a++){
        if (a%2 != 0){
        printf("%d\n",a);
    }}}
else{
for (a; a < b; a++){
    if (a%2 ==0 ){
        printf("%d\n",a);
    }}}}
