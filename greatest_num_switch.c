#include<stdio.h>
int main()
{
    int a,b;
    printf("Both values: \n");
    scanf("%d %d",&a,&b);

    switch(a <= b)
    {
    case 0:
        printf("%d is max num ",a);
        break;
    case 1:
        printf("%d is max num",b);

    }

    return 0;
}
