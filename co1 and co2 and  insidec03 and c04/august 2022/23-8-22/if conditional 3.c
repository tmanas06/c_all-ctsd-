/* write a c program to add 2 numbers when the first number is less than or  equal to 2nd number or else
find the product*/

#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter the two numbers n1 and n2:");
	scanf("%d%d",&n1,&n2);
	if(n1<=n2)
	{
		int s;
		s=n1+n2;
		printf("The sum of the numbers is %d",s);
	}
	else
	{
		int m;
		m=n1*n2;
		printf("The product of the numbers is %d",m);
	}
}
