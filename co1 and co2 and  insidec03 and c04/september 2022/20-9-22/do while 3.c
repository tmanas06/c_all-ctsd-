/* Find GCD(greates common divisor) or HCF of two numbers */
#include<stdio.h>
int main()
{
	int a,b,r,divdnt,divsor;
	printf("ENter 2 numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		divdnt=a;
		divsor=b;
	}
	else
	{
		divdnt=b;
		divsor=a;
	}
	do
	{
		r=divdnt%divsor;
		if(r!=0)
		{
			divdnt=divsor;
			divsor=r;
		}
		
	}
	while(r!=0);
	printf("The GCD is %d",divsor);
}
