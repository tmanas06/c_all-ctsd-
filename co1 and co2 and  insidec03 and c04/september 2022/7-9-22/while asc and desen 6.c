/* find factorial of a given numebr*/
#include<stdio.h>
int main()
{
	int n,i,f;
	printf("enter a number:");
	scanf("%d",&n);
	f=n;
	i=n+1;
	while(i>0)
	{
		f=f*i;
		i=i-1;
	}
	printf("factorial=%d",f);
}
