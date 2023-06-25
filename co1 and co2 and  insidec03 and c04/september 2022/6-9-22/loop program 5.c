/* display upto n even numbers in decreasing order for the given n value*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	i=n;
	while(i>=0)
	{
		printf("\n%d",i);
		i=i-2;
	}
}

