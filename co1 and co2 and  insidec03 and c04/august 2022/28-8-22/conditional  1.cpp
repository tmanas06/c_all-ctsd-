/* to test the given number is even or odd using the conditional operator */
#include<stdio.h>
int main()
{
	int n,t;
	printf("Enter the number:");
	scanf("%d",&n);
	(n%2==0)?(printf("%d is even",n)):(printf("%d is odd",n));
}
