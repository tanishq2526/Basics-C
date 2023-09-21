#include<stdio.h>
int main()
{

    int j,i,row,a=65 ;

    printf("Number of rows ");

    scanf("%d",&row);

    /*for (i=1; i<= row; i++ ){

        for (j=i; j <= row; ++j){

        printf("%c ",a);
        a++;

        }
         a=65;


        printf("\n");*/
      //  if want reverse pyramid
   for (i=1; i<= row; i++ ){

        for (j=1; j <= i; ++j){

        printf("%c ",a);
        a++;

        }
         a=65;


        printf("\n");

    }

    return 0;
}


