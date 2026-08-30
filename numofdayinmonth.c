#include<stdio.h>
int main(){
    int week;
    printf("Enter month number (1-12):");
    scanf("%d",&week);
    if(week==1){
        printf("January has 31 days");
    }
    else if (week==2)
    {
        printf("Feburary has 28 days");
    }
    else if (week==3)
    {
        printf("March has 31 days");
    }
    else if (week==4)
    {
        printf("April has 30 days");
    }
    else if (week==5)
    {
        printf("May has 31 days");
    }
    else if (week==6)
    {
        printf("June has 30 days");
    }
    else if (week==7)
    {
        printf("July has 31 days");
    }
    else if (week==8)
    {
        printf("August has 31 days");
    }
    else if (week==9)
    {
        printf("September has 30 days");
    }
    else if (week==10)
    {
        printf("October has 31 days");
    }
    else if (week==11)
    {
        printf("November has 30 days");
    }
    else if (week==12)
    {
        printf("December has 31 days");
    }
    return 0;
}