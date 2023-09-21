#include<stdio.h>
int main(){
    int j,i;

    printf("Enter num: ");
    scanf("%d",&j);

    for ( i=1 ; i<=10 ; i++)
    {
        int h=j*j*j;
        int k=i*h;

        printf("%d \n",k);
    }
    return 0;
}

