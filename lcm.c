#include<stdio.h>
int findgcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int gcd,lcm,num1,num2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    gcd=findgcd(num1,num2);
    lcm=(num1*num2)/gcd;
    printf("The LCM of %d and %d is:%d",num1,num2,lcm);
}