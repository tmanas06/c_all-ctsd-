/* write a c program to display the following pattern for n=4 (first line * for second line ** 
for third line *** and fourth line ****) in reverse */
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(j<=n-1)
			printf(" ");
			else
			printf("*");
		}
		
	}
}
