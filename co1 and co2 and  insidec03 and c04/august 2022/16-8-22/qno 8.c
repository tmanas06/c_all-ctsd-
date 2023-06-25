//Problem 8:
/*Anshu moved to a new house in Vijayawada from Hyderabad. She was arranging
her things in the shelves provided. She has a box that has a mass of 12.786
pounds. She lifted the box and placed it on shelf. If the box gains 145J of
potential energy, how high is the shelf?
HINT: Acceleration due to gravity g=9.8m/sec2 and P.E.=mass*g*height
HINT: 1 kg = 2.2046 pounds*/
#include<stdio.h>
int main()
{
	int pe,s;
	printf("Enter the potential energy:");
	scanf("%d",&pe);
	s=calc(pe);
}
int calc(int pe)
{
    float m=12.786,g=9.8,h;
	h=pe*2.2046/(m*g);
	printf("The height of the shelf is %f",h);
	
}
