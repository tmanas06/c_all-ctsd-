/* to display excellent number if the number is divisible by 3 and also even number and display the number is
a good number if it is only divisible by 3 but not a even number and display the number as a lucky number if
it is even but not divisible by 3 and display the number as a bad number if it is not divisible by 3 and not
an even number */
#include<stdio.h>
int main()
{
	int a,nat;
	printf("Enter the number:");
	scanf("%d",&a);
	
	nat=nature(a);
}
int nature(int a)
{
	if(a/3)
	{
		if((a/3)%2==0)
		{
			printf("It is an Excellent number");
		}
		else
		{
			printf("It is Good number");
		}
	}
	else
	{
		if(a%2==0)
		{
			printf("It is Lucky number");
		}
		else
		{
			printf("It is a Bad number");
		}
	}
}
