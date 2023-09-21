#include<stdio.h>
int main()
{
    int month;
    printf("Enter month ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d Month have 31 days:)",month);
        break;

    case 2:
        printf("it have 28 or 29 days: ");

    default:
        printf("&d MOnth have 30 days:) ",month);
    }
    return 0;
}
