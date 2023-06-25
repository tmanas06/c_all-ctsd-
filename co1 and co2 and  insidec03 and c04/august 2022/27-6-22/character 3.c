/* To verify whether a user has given a valid number or not*/
#include<stdio.h>
int main()
{
	int n;
	char ch;
	printf("enter the number:");
	scanf("%d",&n);
	ch=n;
	if ((ch>=48)&&(ch<=57))
	{
		printf("Valid number");
	}
	else
	{
		printf("Invalid number");
	}
}


/*{
	char c;
	int x,y;
	printf("Enter the number:");
	scanf("%c",&c);
	x=c;
	if((x>=48)&&(x<=59))
	{
		y=48+x;
		printf("The number is valid");
	}
	else
	{
		printf("It is invalid");
	}
}*/
