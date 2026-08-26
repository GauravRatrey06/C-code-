#include<stdio.h>
int main(){
    char c;
    printf("Enter any character for its ASCII value:");
    scanf("%c",&c);
    printf("The ASCII value is %c=%d",c,c);
    return 0;
}