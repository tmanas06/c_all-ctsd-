/*find product of two numbers without multiplication operator*/
#include<stdio.h>
int main()
{
	int a,b,i,p;
	printf("Enter a,b:");
	scanf("%d%d",&a,&b);
	p=0;
	i=1;
	while(i<=b)
	{
		p=p+a;
		i++;
	}
	printf("Product is %d",p);
}
