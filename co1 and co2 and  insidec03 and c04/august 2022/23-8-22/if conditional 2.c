/* write a c program to check if the given number is even or odd */
#include<stdio.h>
int main()
{
	int n,r;
	printf("Enter n value:");
	scanf("%d",&n);
	r=n%2;
	if(r==0)
	//if(n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
}
