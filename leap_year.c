#include<stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d",&year);

    if (year%4==0)
    {
        printf("LEAP YEAR!!");
    }
    else {
        printf("Not a leap year:")  ;
    }

    return 0;
}
