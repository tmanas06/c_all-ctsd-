/*Find the reverse of a given number*/
#include<stdio.h>
int main()
{
	int n,r,i,rev;
	printf("Enter a number:");
	scanf("%d",&n);
	rev=0;
	for(i=n;i>0;i=i/10)
	{
		r=i%10;
		rev=rev*10+r;
	}
	printf("reverse=%d",rev);
}
