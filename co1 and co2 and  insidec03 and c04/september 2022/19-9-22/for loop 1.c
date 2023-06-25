/*count number of digits for the given number */

#include<stdio.h>
int main()
{
	int i,n,nd;
	printf("enter a number:");
	scanf("%d",&n);
	nd=0;
	for(i=n;i>0;i=i/10)
	{
		nd=nd+1;
	}
	printf("Number of digits=%d",nd);
}
