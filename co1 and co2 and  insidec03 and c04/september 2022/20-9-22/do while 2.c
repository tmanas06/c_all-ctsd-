/*Find a to the power of b using do while loop*/
#include<stdio.h>
int main()
{
	int i,a,b,p;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Powerth:");
	scanf("%d",&b);
	p=1;
	i=1;
	do
	{
		p=p*a;
	    i=i+1;
	}
	while(i<=b);
	printf("Power of %d is %d",a,p);
}
