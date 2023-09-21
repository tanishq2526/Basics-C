#include<stdio.h>
int main()
{
	int a , m ,r=0;
	printf("Enter num ") ;
	scanf("%d",&a);
	while (a != 0)
	{
	m=(a%10);
   r=r*10+m;
   a /= 10;
	}
	printf("%d ",r);
	return 0;

}
