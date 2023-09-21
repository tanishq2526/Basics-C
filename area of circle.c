#include<stdio.h>
int main()
{
    float r;

    printf("Value of Radius: ");
    scanf("%f",&r);

    float ar= 3.14159265359*r*r;
    printf("Area of circle is: %f",ar);

    return 0;
}
