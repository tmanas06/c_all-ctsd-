/* write a c program to display the following pattern for n=4 (first line A for second line AB 
for third line ABC and fourth line ABCD) in reverse */
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=65;i<=65+n;i++)
	{
		for(j=i;j<=65+n;j++)
		{
		    printf("%c",j);
		}
		printf("\n");
	}
	
	
}
