#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of chapatis:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\nEat chapati number %d",i);
		i=i+1;
	}
}
