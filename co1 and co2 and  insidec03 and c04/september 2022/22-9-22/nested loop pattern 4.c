/*Display the following pattern for the given n number of lines (if n=4 then display 4321 
4 times*/

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
