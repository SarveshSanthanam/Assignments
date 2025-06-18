#include<stdio.h>

int main()
{
	int a,i;
	printf("Enter the number");
	scanf("%d",&a);
	for( i=1 ; i*i<a ;i++)
	{		if (a%i == 0) 
			printf("%d , %d ,", i, a/i);
	}
	if(a%i == 0)
		printf("%d",i);
}
