#include<stdio.h>
    float main(){
        float nota1,nota2;
        scanf("%f", &nota1);
        scanf("%f", &nota2);
    if((nota1+nota2)/2>=7){
        printf("Aprovado");
    }
    if((nota1+nota2)/2<7 && (nota1+nota2)/2>=4){
        printf("Recuperação");
    }
    if((nota1+nota2)/2<4){
        printf("Reprovado");
    }


    }