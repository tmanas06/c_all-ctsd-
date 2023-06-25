/* Display numbers between -n to +n for the given n value */
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	i=-n;
	while(i<=n)
	{
		printf("\n%d",i);
		i=i+1;
	}
	
}
