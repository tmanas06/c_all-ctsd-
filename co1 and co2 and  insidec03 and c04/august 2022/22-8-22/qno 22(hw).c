//question number 22
/* The solubility of sugar in 1 litre of water at X =35 degree is A = 120 grams. For unit rise in temperature
,the solubility of sugar in water increases by B= 2 grams. We can increase the temperature to at most100??. 
Find the maximum amount of sugar in grams that can be dissolved in 1 litre of water*/

#include<stdio.h>
int main()
{
	int t,total;
	printf("Enter the temperature:");
	scanf("%d",&t);
	total=calctemp(t);
}
int calctemp(int t)
{
	float x,xt;
	x=(t*35*2)/120;
	xt=x+120;
	printf("The amount of suger that can be dissolved in 1 liter of water is %.2f grams",xt);
}
