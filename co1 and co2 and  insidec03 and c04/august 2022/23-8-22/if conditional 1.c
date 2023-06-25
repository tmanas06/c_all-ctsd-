/* write a c program to find the greatest of 2 numbers */
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter 2 numbers:");
	scanf("%d%d",&n1,&n2);
	if (n1>n2)
	{
		printf("%d is big",n1);
	}
	else
	{
		printf("%d is big",n2);
	}
}
