//question number 16
/* Manisha works in a supermarket in billing. A customer bought 10 pens and 5 chocolates.
Each pen costs Rs. 1.5 and each chocolate costs Rs. 10. Help Manisha to calculate the total
bill amount and remaining change to be returned if the customer pays Rs. 100.*/

#include<stdio.h>
#include<math.h>
int total(int x,int y,int s,float m,float n)
{
	float p;
	p=s-(x*m+y*n);
	return p;

}
int main()
{
	int x,y,s;
	float m,n,calctot;
	printf("Enter the number of pens:");
	scanf("%d",&x);
	printf("Enter the number of chocolate:");
	scanf("%d",&y);
	printf("cost of pens:");
	scanf("%f",&m);
	printf("cost of chocolate:");
	scanf("%f",&n);
	printf("Enter your spending money:");
	scanf("%d",&s);
	calctot=total(x,y,s,m,n);
	printf("the remaining change money is %f",calctot);
}

