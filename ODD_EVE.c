#include<Stdio.h>
int main()
{
    int a;

    printf("Enter number: ");
    scanf("%d",&a);

    if (a%2==0){
        printf("odd");
    }
    else {
        printf("even");
    }
    return 0;

}
