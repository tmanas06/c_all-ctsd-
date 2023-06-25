/*write recursive function to find GCD of two given numebrs */
#include<stdio.h>
int power(int a,int b);
int main(){
	int a,b,p;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the power:");
	scanf("%d",&b);
	p=gcd(a,b);
	printf("the power of %d to %d is %d",a,b,p);
}
int gcd(int a,int b)
{
	int r;
	r=a%b;
	if(r!=0)
	return gcd(b,r);
	else
	return b;
}
