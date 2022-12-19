#include<stdio.h>
int main(){
    int X;
    scanf("%d", &X);

    switch(X){
        case 1:
        printf("papel");
        break;
        
        case 2:
        printf("tesoura");
        break;

        default:
        printf("identificador invalido");

    }




}