#include<stdio.h>
void main()
{
	printf("//program for finding area and perimeter of a circle//\n");
	int r;
	float a,p;
	printf("Enter the radius=");
	scanf("%d",&r);
	a=3.14*pow(r,2);
	p=3.14*2*r;
	printf("the area of circle is %f",a);
	printf("\nthe perimeter of circle is %f",p);
}
/* the math operation used here is pow(a,b) where a is raised to b */
