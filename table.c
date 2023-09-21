#include<stdio.h>
int main(){
    int j,i;

    printf("Enter num: ");
    scanf("%d",&j);

    for ( i=1 ; i<=10 ; i++)
    {
        int k=i*j;
        printf("%d * %d = %d \n",j,i,k);
    }
    return 0;
}
