#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    float percentage;
    printf("Enter marks of 5 Subject(out of 100):");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    percentage=(s1+s2+s3+s4+s5)/5;
    printf("Percentage of 5 Subjects:%.2f",percentage);
    return 0;
}