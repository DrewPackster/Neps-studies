#include<stdio.h>
float main(){
    float a,b,media;
    media=(a+b)/2;

    scanf("%f", &a);
    scanf("%f", &b);
    
    if(media>=7){
        printf("Aprovado");
    }

    if(media<7 && media>=4){
        printf("Recuperação");
    }

    if(media<4){
        printf("Reprovado");
    }
}