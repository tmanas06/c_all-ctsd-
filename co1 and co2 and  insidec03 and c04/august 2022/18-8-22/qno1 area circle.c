/*program to find area of a circle*/
#include<stdio.h>
float area(float r)
{
	float a;
	a=3.14*pow(r,2);
	return a;
}
int main()
{
	float r,a;
	printf("Enter the radius of circle: ");
	scanf("%f",&r);
	
	a=area(r);
	printf("The area of circle is %f",a);
}



