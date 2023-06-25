/* display upto n even numbers for the given n value*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	i=3;
	while(i<=n)
	{
		printf("\n%d",i);
		i=i+3;
	}
}
