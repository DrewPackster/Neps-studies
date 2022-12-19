#include<stdio.h>
int main(){
    int P,R;
    scanf("%d\n", &P);
    scanf("%d", &R);
    if(P==0){
        printf("C");
    }
if(P==1 && R==1){
    printf("A");
}
if(P==1 && R==0){
    printf("B");
}


}