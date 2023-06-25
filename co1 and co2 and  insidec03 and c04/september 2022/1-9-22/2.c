/* find roots of the quadratic equation for the given a,b,c value */
#include<stdio.h>
#include<math.h>
void findroots(int a,int b,int c);
int main()
{
	int a,b,c;
	printf("Enter a,b,c values:");
	scanf("%d%d%d",&a,&b,&c);
	findroots(a,b,c);
}
void findroots(int a,int b,int c)
{
	int res1;
	float root,sqr,r1,r2;
	res1=b*b-4*a*c;
	if(res1==0)
	{
		printf("Roots are equal");
		root=(float)(-b/(2*a));
		printf("\nroot is %.2f",root);
	}
	else if(res1>0)
	{
		printf("Roots are real and distinct");
		sqr=(float)sqrt(res1);
		r1=(-b+sqr)/2*a;
		r2=(-b-sqr)/2*a;
		printf("r1 is %.2f and r2 is %.2f",r1,r2);
	}
	else
	{
	printf("Roots are imagionary and distinct");
		res1=abs(res1);
		sqr=(float)sqrt(res1);
		r1=(-b+sqr)/2*a;
		r2=(-b-sqr)/2*a;
		printf("r1 is %.2f and r2 is %.2f",r1,r2);
	}
}
