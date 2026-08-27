#include<stdio.h>
int main(){
    float si,p,t,r;
    printf("Enter Principal amount:");
    scanf("%f",&p);
    printf("Enter Time period(in years):");
    scanf("%f",&t);
    printf("Enter Interest rate:");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("Your Simple Interest is:%.2f",si);
    return 0;    
}