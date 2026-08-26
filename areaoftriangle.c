#include<stdio.h>
int main(){
    int base,height;
    float area;
    printf("Enter base of triangle:\n");
    scanf("%d",&base);
    printf("Enter Height of triangle:\n");
    scanf("%d",&height);
    area=(base*height)/2;
    printf("Area of trinagle:%.2f",area);
    return 0;
}