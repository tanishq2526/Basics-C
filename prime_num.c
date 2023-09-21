#include <stdio.h>


int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    i = 2;
    do
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number.\n", num);
                   }
        i++;
    } while (i <= num / 2);

    if (i > num / 2)
    {
        printf("%d is a prime number.\n", num);
    }

    return 0;
}
