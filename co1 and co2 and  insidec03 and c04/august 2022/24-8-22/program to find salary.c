/* write a c program to calculate net salary of an employe for the given basic salary with the help of the 
following table */
#include<stdio.h>
void calcsal(float b);
int main()
{
	float b;
	printf("Enter basic salary:");
	scanf("%f",&b);
	calcsal(b);
}
void calcsal(float b)
{
	float hra,da,ta,it,gs,ns;
	if(b<5000.00)
	{
		hra=b*0.1;
		da=b*0.25;
		ta=b*0.05;
		it=0.0;
	}
	else if(b<10000.00)
	{
	    hra=b*0.15;
		da=b*0.35;
		ta=b*0.1;
		it=b*0.08;	
	}
	else if(b<20000.00)
	{
	    hra=b*0.30;
		da=b*0.5;
		ta=b*0.15;
		it=b*0.2;	
	}
	else 
	{
	    hra=b*0.45;
		da=b*0.7;
		ta=b*0.25;
		it=b*0.3;	
	}
	gs=b+hra+da+ta;
	ns=gs-it;
	printf("Gross salary is %.2f",gs);
	printf("\nNet salary is %.2f",ns);
}
