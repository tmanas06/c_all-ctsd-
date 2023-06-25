#include<stdio.h>
int main()
{
	int n,i,s;
	printf("Enter the nth value:");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			continue;
		}
		s=s+1;
	}
	printf("%d",s);
}
