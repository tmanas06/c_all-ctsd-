/* write a c program to calculate the electricity bill for the given cmr and pmr with the help of following 
table */
#include<stdio.h>
void calcbill(int n);
int main()
{
	int n,cmr,pmr;
	printf("Enter your cmr:");
	scanf("%d",&cmr);
	printf("Enter your pmr:");
	scanf("%d",&pmr);
	
	if(cmr<pmr)
	{
		printf("\nIt is invalid");
	}

	else
	{
		n=cmr-pmr;
		calcbill(n);
			
	}
	
}
void calcbill(int n)
{
	float bl,tot;
	if(n<100)
	{
		bl=n*1.00;
	}
	else if(n<200)
	{
		bl=n*2.00;
	}
	else if(n<400)
	{
		bl=n*5.00;
	}
	else if(n<700)
	{
		bl=n*8.00;
	}
	else 
	{
		bl=n*10.00;
	}
	tot=bl+(bl*0.08);
	printf("\nThe electricity bill for this month is %.2f",tot);
}
