/* write a c program to find the nature of the person for the given weight*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter your weight:");
	scanf("%d",&n);
	if(n>80)
	{
		printf("%d is obesity",n);
	}
	else if(n>60)
	{
		printf("%d is over weight",n);
	}
	else if(n>40)
	{
		printf("%d is normal weight",n);
	}
	else 
	{
		printf("%d is under weight",n);
	}
}
