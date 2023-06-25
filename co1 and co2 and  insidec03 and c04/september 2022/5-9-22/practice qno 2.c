/* Find the discount for the given customer type and bill amount with the help of the following table*/
#include<stdio.h>
int main()
{
	char t,r,n,s;
	int b;
	float d;
	printf("if regular then r \nif new then n \nif both new and regular then s");
	printf("\nEnter the customer type:");
	scanf("%c",&t);
	printf("Enter the bill amount:");
	scanf("%d",&b);
	
	if(t=r||b>1000)
	{
	d=b*0.15;
	printf("%.2f",d);
	}
	else if(t=r||b<1000)
	{
	printf("No discount");
	}
		
	else if(t=n||b>500)
	{
	d=b*0.2;
	printf("%.2f",d);
	}
	else if(t=n||b<500)
	{
	printf("No discount");
	}
	else if(t=s||b>2000)
	{
	d=b*0.1;
	printf("%.2f",d);
	}
	else
	{
	printf("No discount");
	}
	
}
