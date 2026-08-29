#include<stdio.h>
int main(){
    char c;
    printf("Enter any letter:");
    scanf("%s",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("The letter is vowel");
    }
    else {
        printf("The letter is not a vowel");
    }
    return 0;
}