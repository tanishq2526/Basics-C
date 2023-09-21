#include<stdio.h>
int main(){

    int j,i,row ;

    printf("Number of rows ");

    scanf("%d",&row);

    for (i=1; i<= row; i++ ){

        for (j=i; j <= row; ++j){

        printf("* ");

    }
        printf("\n");

    }
    return 0;
}


