/* Given an input positive integer, identify whether the number is odd or even*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a%2==0)
	printf("It is even");
	else
	printf("It is odd");
}
