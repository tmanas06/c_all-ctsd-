/* find area of a triangle for the given 3 sides*/
#include<stdio.h>
#include<math.h>
int areaa(int a,int b,int c);
int main()
{
	int a,b,c,area;
	printf("Enter the side 1:");
	scanf("%d",&a);
	printf("Enter the side 2:");
	scanf("%d",&b);
	printf("Enter the side 3:");
	scanf("%d",&c);
	area=areaa(a,b,c);
	printf("The area of triangle is %.2f",area);
}
int areaa(int a,int b,int c)
{
	float s,r,ar;
	s=(a+b+c)/2;
	r=(float) sqrt(s*(s-a)*(s-b)*(s-c));
	//ar=(float)pow(r,0.5);
    return r;
	
}
