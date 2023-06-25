/*question no 2*/
/* write a c program to find height of a person in form of cm for the  given height in form of feet and 
inches (1feet = 30cm and 1inch = 2.5)*/

#include<stdio.h>
float calc(int f,int i);
int main()
{
	float f,i,cmf;
	printf("Enter your height in feet and inches: ");
	scanf("%f%f",&f,&i);
	cmf=calc(f,i);
}
float calc(int f,int i)
{
    float cm;
	cm=f*30+i*2.5;
	printf("the height is %.2fcm",cm);
}

