#include<stdio.h>

int main()
{
    int b,h,a;

    printf("Enter the base value: ");
    scanf("%d",&b);

    printf("Enter the height value: ");
    scanf("%d",&h);

    a= b*h*1/2;

    printf("Area of triangle is %d: ",a);

    return(0);
}
