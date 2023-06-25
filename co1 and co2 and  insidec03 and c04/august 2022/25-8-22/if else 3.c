/* find the nature of a triangle for the given three sides */
#include<stdio.h>
void findtriangle(int a,int b,int c);
int main()
{
	int a,b,c;
	printf("Enter the 3 sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	findtriangle(a,b,c);	
}
void findtriangle(int a,int b,int c)
{
	if((a==b)&&(b==c)&&(c==a))
	{
		printf("It is an equilateral triangle");
	}
	else if((a==b)||(a==c)||(b==c))
	{
		printf("It is an isosceles triangle");
	}
	else
	{
		printf("It is scalene triangle");
	}
}
