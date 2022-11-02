#include <stdio.h>

void main(){
int n;
printf("\tescribe un numero real\n");
scanf("%d",&n);
while (n!=1){
    if (n%2 ==1){
        n=(n*3)+1;
    }
    else
        n/=2;   
    printf("%d\n",n);
}
}