
#include <stdio.h>

int main() {
    int O , n2 , n3;

    printf("Enter  number: ");
    scanf("%d", &n2);

    printf("Enter  number: ");
    scanf("%d", &n3);

    printf("Enter a operator: ");
    scanf("%d", &O);

    do {
        if (O == "+") {
            printf("%d addition .\n",n2+n3);
        } else if (O == "-") {
            printf("%d Subtraction.\n", n2-n3);
        } else if (O == "*") {
            printf("%d MULTIPLE.\n", n2*n3);
        }else if (O == "/") {
            printf("%d DIVISION.\n", n2/n3);
        }
        else {
            printf("ITS A BASIC CALCULATOR.\n");
        }

        printf("Enter another number (or 0 to quit): ");
        scanf("%d", &O);
    } while (O != 0);

    return 0;
}
