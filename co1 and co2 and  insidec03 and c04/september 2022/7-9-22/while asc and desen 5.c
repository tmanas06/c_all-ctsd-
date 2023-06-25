/* display output for the following sequence for the given n value*/
#include<stdio.h>
int main()
{
	int i,n,s;
	printf("Enter the numebr:");
	scanf("%d",&n);
	i=1;
	s=0;
	while(i<=n)
	{
		s=s+i;
		printf("\t%d",s);
		i=i+1;
	}
}
