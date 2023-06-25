/* Generate the following * pattern for the given n number of lines*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the nuber of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
