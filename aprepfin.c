#include<stdio.h>
int main(){
    float a,b,c;  
    scanf("%f", &a);
    scanf("%f", &b);
    
    if((((2*a)+(3*b))/5)>=7){
        printf("Aprovado");
    }
    if((((2*a)+(3*b))/5)<7 && ((((2*a)+(3*b))/5))>=3){
        printf("Final");
    }
    if((((2*a)+(3*b))/5)<3){
        printf("Reprovado");
    }
}