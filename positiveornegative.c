#include<stdio.h>
int main(){
    int a;
    printf("Enter a numbers:");
    scanf("%d",&a);
    if(a>0){
        printf("The number is Positive(+ve)");
    }
    else if(a<0){
        printf("The number is Negative(-ve)");
    }
    else{
        printf("The  number is Zero");
    }
    return 0;
}