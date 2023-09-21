#include<stdio.h>
int main()
{
    char Note[20] ;
    printf(
        "Write your Note here: "
    );
    scanf(
        "%c ",&Note
    );
    printf(
        "%s %c",Note
    );

    return 0;
}