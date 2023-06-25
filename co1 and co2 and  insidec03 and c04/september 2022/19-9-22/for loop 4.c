/*check whether the given number is palindrome or not*/
#include<stdio.h>
int main()
{
	int i,r,rev,a;
	printf("Enter the number:");
	scanf("%d",&r);
	rev=0;
	for(i=r;i>0;i=i/10)
	{
		a=i%10;
		rev=rev*10+a;
	}
	if(rev==r)
	{
		printf("It is a palindrom");
	}
	else
	{
		printf("It is not a palindrom");
	}
}
