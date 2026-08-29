#include<stdio.h>
int main(){
    char c;
    printf("Enter any letter:");
    scanf("%c",&c);
    if(c>='0'&&c<='9'){
        printf("Digit");
    }
    else if(c>='a'&&c<='z'){
        printf("Lowercase");
    }
    else if(c>='A'&&c<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Special Character");
    }
    return 0;
}