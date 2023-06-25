/*display all elements from even indices(index numbers) */

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the total number:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the list of numbers:");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i]%2==0)
		{
			printf("%d\t",a[i]);
		}
	}
}
