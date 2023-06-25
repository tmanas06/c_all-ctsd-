/*write a recursive function to find a to the power of b*/
#include<stdio.h>
int power(int a,int b);
int main(){
	int a,b,p;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the power:");
	scanf("%d",&b);
	p=power(a,b);
	printf("the power of %d to %d is %d",a,b,p);
}
int power(int a,int b)
{
	if(b==0)
	return 1;
	else
	return a*power(a,b-1);
}
