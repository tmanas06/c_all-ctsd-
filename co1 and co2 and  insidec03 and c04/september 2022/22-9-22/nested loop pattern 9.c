/*Display the following pattern for the given n number of lines (if n=4 then display ABCD 
4 times*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=65;j<65+n;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
