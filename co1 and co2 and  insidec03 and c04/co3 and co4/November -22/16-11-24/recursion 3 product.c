/* write a c program to find product of 2 number using recursive function*/
#include<stdio.h>
int product(int a,int b);
int main(){
	int a,b,p;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the power:");
	scanf("%d",&b);
	p=product(a,b);
	printf("the power of %d to %d is %d",a,b,p);
}
int product(int a,int b)
{
	if(b==0)
	return 0;
	else
	return a+product(a,b-1);
}
