//question number 6
/*A magical pond has 1 ounce of water on 1st day. On the second day,the water increases by 4 ounces,
on third day the water increases by 9 ounces,the fourth day it increases by 16 ounces and so on. How many
liters of water will be in the pond on 6th day? (1 ounce=0.03 liters)*/

#include<stdio.h>
int main()
{
	int n,op;
	printf("Enter the day:");
	scanf("%d",&n);
	op=on(n);
}
int on(int n)
{
	float wqo,wql;
	wqo=(n*(n+1)*(2*n+1))/6;
	wql=wqo*0.03;
	printf("water quantity in liters=%.3f",wql);
}
