#include<stdio.h>
int main(){
    int D;
    scanf("%d", &D);
    if(D<=800){
        printf("1");
    }
    if(D>800 && D<=1400){
        printf("2");
    }
    if(D>1400 && D<=2000){
        printf("3");
    }

}