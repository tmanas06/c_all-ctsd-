#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of chapatis:");
	scanf("%d",&n);
	i=n;
	while(i>0)
	{
		printf("\nEat chap number %d",i);
		i=i-1;
	}
}
