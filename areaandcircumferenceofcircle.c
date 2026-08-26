#include<stdio.h>
int main(){
    int r;
    float area,c;
    printf("Enter radius of circle:");
    scanf ("%d",&r);
    area=3.14*r*r;
    printf("Area of cirlce is:%.2f \n",area);
    c=2*3.14*r;
    printf("Circumference of cirlce is:%.2f",c);
    return 0;
}