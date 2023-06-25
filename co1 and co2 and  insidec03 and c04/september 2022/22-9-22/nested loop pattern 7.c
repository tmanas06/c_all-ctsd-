/* write a c program to display the following pattern for n=4 (first line 1 for second line 12 
for third line 123 and fourth line 1234)  */
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
