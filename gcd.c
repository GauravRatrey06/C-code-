#include<stdio.h>
int findgcd(int a,int b){
    while (b!=0){
    int temp=b;
    b=a%b;
    a=temp;
    }
    return a;
}
int main(){
    int num1,num2,gcd,temp;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    gcd=findgcd(num1,num2);
    printf("The GCD is:%d",gcd);
}