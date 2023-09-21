#include <stdio.h>

int main() {
	//code
	int a,b,c;

	printf("value of a ");
	scanf("%d",&a);

	printf("value of b ");
	scanf("%d",&b);

	printf("value of a and b before swap %d %d \n",a,b);

	c=b;
	b=a;
	printf("values are swapped \n");

	printf("value of c %d \n",c);
	printf("value of b %d \n",b);



	return 0;
}
