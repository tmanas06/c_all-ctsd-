/* write a c program to accept a float number as an input and show whole part and fraction part seperately*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	float x,fr;
	int w;
	printf("Enter a float number:");
	scnaf("%f",&x);
	fun1(x,&w,&fr);
	printf("Whole part is %d",w);
	printf("fraction part is %d",fr);
}
void fun1(float x,int *p,float *q)
{
	*p=(int)x;
	*q=x-*p;
}
