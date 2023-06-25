/* c program to test whether the given number is even or odd by using logical not operator */

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(!(n%2==0))
	{
		printf("%d is odd",n);
	}
	else
	{
		printf("%d is even",n);
	}
}
