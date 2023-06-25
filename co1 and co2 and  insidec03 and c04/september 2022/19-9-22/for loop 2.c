/*Find sum of the digits*/
#include<stdio.h>
int main()
{
	int i,n,a;
	printf("Enter the number:");
	scanf("%d",&a);
	n=0;
	for(i=a;i>0;i=i/10)
	{
		n=n+i%10;
	}
	printf("Sum of digits=%d",n);
}
