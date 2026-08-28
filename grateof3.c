#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        printf("A is grater");
    }
    else if (b>c){
        printf("B is greater");
    }
    else{
        printf("C is greater");
    }
    return 0;
}