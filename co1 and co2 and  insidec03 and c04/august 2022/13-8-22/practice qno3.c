/*Krishna’s livelihood depends on selling milk. Every day he brings x gallons of milk from his
village to Vijayawada. In Vijayawada, he pours 1 liter of milk to each of 36 households.
Find the number of liters of milk left with him? (HINT: 1 gallon = 3.785 liters). Assume
that Krishna has adequate amount of milk.*/
#include<stdio.h>
float calc(float g);
int main()
{
	float g,conv;
	printf("enter the amount of milk in gallons:");
	scanf("%f",&g);
	conv=calc(g);
}
float calc(float g)
{
	float l,m;
	m=g*3.785;
	l=m-36;
	printf("total milk from gallons to liters is %.2f liters",m);
	printf("\nThe milk left after delivering %.2f liters",l);
	
	
	
	
	
	printf("\n                \n ");
	printf("\n                |         | ");
	printf("\n                |         | ");
	printf("\n                |  MILK   | ");
	printf("\n                |         | ");
	printf("\n                |         | ");
	printf("\n                ###########");
}
