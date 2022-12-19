#include<stdio.h>
int main(){
    /*
    Definindo A e B como a quantidade de 
    vezes que os interruptores A1 e B1 serao
    apertados
    */ 
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    //inicialmente apagadas
    //Se o resto da divisao for 0 entao permanecem apagadas
    //Se for 1 entao estao acesas
    if(A%2==0 && B%2==0){
        printf("0\n");
        printf("0");
    }
if (A%2==0 && B%2!=0){ 
    printf("0\n");
    printf("1");
}
if(A%2!=0 && B%2==0){
    printf("1\n");
    printf("0");
}

}