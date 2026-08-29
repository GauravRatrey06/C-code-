#include<stdio.h>
int main(){
    char c;
    printf("Enter any letter:");
    scanf("%s",&c);
    if(c>='a'&&c<='z'||c>='A'&&c<='Z'){
        printf("Alphabet");
    }
    else{
        printf("Not an Alphabet");
    }
    return 0;
}