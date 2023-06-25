/*accept an array of n students marks display them in normal order and also display them in 
reverse order*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of the students:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter marks:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Marks in normal order");
	for(i=0;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\n Marks in reverse order");
	for(i=n;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
}
