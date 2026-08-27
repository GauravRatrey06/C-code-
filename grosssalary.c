#include<stdio.h>
int main(){
    int gs,bs,hra,oa,b,ot;
    printf("Enter your Base Salary:");
    scanf("%d",&bs);
    printf("Enter your House Rent Allowance:");
    scanf("%d",&hra);
    printf("Enter your Other Allowance:");
    scanf("%d",&oa);
    printf("Enter your Bounes:");
    scanf("%d",&b);
    printf("Enter your OverTime:");
    scanf("%d",&ot);
    gs=bs+hra+oa+b+ot;
    printf("Gross Salary:%d",gs);
    return 0;
}