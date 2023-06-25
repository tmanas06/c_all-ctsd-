/*write a c program to define a structure height having two members feet and inches where feet is 
integers and inches are float ,accept 2 heights and find the sum of 2 heights covert this into cms.
convert feet and inches to cms.(feet*30+inches*2.54)   */
#include<stdio.h>
struct rational
{
	int ft;
	float ins;
};
struct height sum_height(struct sum_height r1,struct sum_height r2);
struct height conv_height(struct conv_height r1,struct conv_height r2);
int main()
{
	struct height r1,r2,r3,r4;
	printf("Enter r1");
	scanf("%d%f",&r1.ft,&r1.ins);
	printf("Enter r2");
	scanf("%d%f",&r2.ft,&r2.ins);
	r3=sum_height(r1,r2);
	r4=conv_height(r1,r2);
	printf("\nheight is");
	display(r3);
	printf("\nheight is");
	display(r4);
}
struct height sum_height(struct sum_height r1,struct sum_height r2)
{
	struct h;
	h=(r1.ft+r1.ins)+(r2.ft+r2.ins);
}
struct height conv_height(struct conv_height r1,struct conv_height r2)
{
	struc h;
	h=(r1.ft*30+r1.ins*2.5)+(r2.ft*30+r2.ins*2.5);	
}void display(struct height h)
{
	printf("\nHeight is %d",h);
}

