#include<stdio.h>
int main()
{
	int a,b,c,x,y,bal;
	printf("enter the amount of money taken by raj to the market");
	scanf("%d",&a);
	printf("enter the no of kgs of potato");
	scanf("%d",&x);
	printf("enter the price of each kg of potato");
	scanf("%d",&b);
	printf("enter the no of kgs of tomato");
	scanf("%d",&y);
	printf("enter the price of each kg of tomato");
	scanf("%d",&c);
	bal=a-((x*b)+(y*c));
	printf("the balance left with raj is %d",bal);
}
	
	

