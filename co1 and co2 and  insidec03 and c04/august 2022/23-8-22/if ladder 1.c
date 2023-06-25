/* write a c program to find if the given number is positive or negative or neutral */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is positive number",n);
	}
	else if(n<0)
	{
		printf("%d is negative",n);
	}
	else 
	{
		printf("%d is zero or neutral",n);
	}
	
}
