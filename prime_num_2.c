#include<stdio.h>
int main()
{
	int n,i,f=0;
	for (i=1; i<= n; i++)
	{
		for (n=1; n<=i; n++)
		{
		if (n%i==0)
		{
			 f++;
		}
		n++;
		}
	}
	if (f==2)
	{
		printf("%d prime number ",n);
	}
	else
	{
		printf("%d not prime num ");
	}
	return 0;
}

