/* Test whether the given number is prime number or not*/
#include<stdio.h>
int main()
{
	int n,i,r;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		r=n%i;
		if(r==0)
		{
			break;
		}
	}
	if(i<=n/2)
	{
		printf("%d is not prime",n);
	}
	else
	{
		printf("%d is prime",n);
	}
}
