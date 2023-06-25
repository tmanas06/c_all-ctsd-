/* Display the following pattern for the given n number of lines (if n=4 then display 1111 
2222 3333 4444 4 times*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
