#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter all sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    int d=a+b+c;
    printf("Perimeter of triangle is %d",d);

    return(0);
}
