#include <stdio.h>
int main()
{
    int i, j ,a=65;
    for (i = 1; i<=5; i++)
    {
        for (j = i; j<=5; j++)
        {
            printf("  ");
        }

        for (j =1; j<=i; j++)
        {
            printf("%c ",a);
            a++;
        }
       for (j = 1; j <i; j++)
        {
            printf("%c ",a);
            a++;
        }
        a=65;
        printf("\n");

    }
    return 0;
}

/*-if want decreasing pyramid :)

for (i = 1; i<=5; i++)
    {
        for (j = i; j<=5; j++)
        {
            printf("  ");
        }

        for (j =i; j<=5; j++)
        {
            printf("%c ",a);
            a++;
        }
       for (j = i; j <5; j++)
        {
            printf("%c ",a);
            a++;
        }
        a=65;
        printf("\n");

    }//
