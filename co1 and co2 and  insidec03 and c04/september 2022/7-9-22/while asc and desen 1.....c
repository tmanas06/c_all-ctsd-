/* display first n natural numbers for the given n value both in ascending order and in descending order*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
    	printf("\n%d",i);
    	i=i+1;
	}
	printf("\nNatural numbers in descending order");
	i=n;
	while(i>0)
	{
		printf("\n%d",i);
		i=i-1;
	}
}
