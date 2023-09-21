#include<stdio.h>
int main()
{
    int i,n=2;

    if (n % i == 0){
        printf("prime");
        i++;
    }while (i <= n / 2);
 if (i > n / 2)
    {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}
