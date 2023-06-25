/* write a program to define a structure called rational having 2 members, numerator and denominator 
accept 2 structure variables from user and find
1)sum of 2
2)product of 2
and display 4 rational numbers*/
#include<stdio.h>
struct rational
{
	int num;
	int deno;
};
struct rational sum_rational(struct rational r1,struct rational r2);
struct rational mul_rational(struct rational r1,struct rational r2);
void display(struct rational);
int main()
{
	struct rational r1,r2,r3,r4;
	printf("Enter r1");
	scanf("%d%d",&r1.num,&r1.deno);
	printf("Enter r2");
	scanf("%d%d",&r2.num,&r2.deno);
	r3=sum_rational(r1,r2);
	r4=mul_rational(r1,r2);
	printf("\nr1 is");
	display(r1);
	printf("\nr1 is");
	display(r2);
	printf("\nr1 is");
	display(r3);
	printf("\nr1 is");
	display(r4);
}
struct rational sum_rational(struct rational r1,struct rational r2)
{
	struct rational r;
	r.num=r1.num*r2.deno+r1.deno*r2.num;
	r.deno=r1.deno*r2.deno;
	return r;
}
struct rational mul_rational(struct rational r1,struct rational r2)
{
	struct rational r;
	r.num=r1.num*r2.num;
	r.deno=r1.deno*r2.deno;
	return r;
}
void display(struct rational r)
{
	printf("\nNumerator is %d",r.num);
	printf("\nDenominator is %d",r.deno);
}


