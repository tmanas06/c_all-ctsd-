/*write a program to test the Given input number is a prime number or not*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n%2==0)
	printf("It is not a prime number");
	else
	printf("It is a prime number");
} 
