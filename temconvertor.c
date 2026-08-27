#include<stdio.h>
int main(){
    float f,c;
    printf("Enter temperature in Celsius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Fehrenheit:%.2f",f);
    return 0;
}