#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d", &A); 
    scanf("%d", &B);
    scanf("%d", &C);
    if(A==B && B==C){
        printf("*");
    }
    if(A==B && B!=C){
        printf("C");
    }
    if(A==C && C!=B){
        printf("B");
    }
    if(B==C && C!=A){
        printf("A");
    }

}