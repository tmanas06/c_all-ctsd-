//question number 15
/* Anuj takes a loan of Rs.7,00,000 to pay his B.Tech fees from his friend at 12.5% rate of
interest. He needs to clear the dues to get the No Objection Certificate. Help him in
finding out the amount to be paid with interest to the bank. Interest is computed using
Simple Interest for a period of 4 Years. */

#include<stdio.h>
int SI(int x,float y, int z)
{
    float s_i;
	s_i=(x*y*z)/100;
	return s_i;
}
int main()
{
	int p,t;
	float r,si;
	
    printf("Enter the principle:");
    scanf("%d",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time:");
    scanf("%d",&t);
    
    si=SI(p,r,t);
    printf("the simple interest is %f",si);
}

