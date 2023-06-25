/* develop a mini calculator that is user will enter 2 numbers and then enter operators like plus,minus,
multiplication,division and remainder */
#include<stdio.h>
int main()
{
	int a,b,res;
	char choice;
	printf("Enter operation to perform(+,-,*,/,%)");
	scanf("%c",&choice);
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
    switch(choice)
	{
		case '+':
			res=a+b;
			printf("The sum is %d",res);
			break;
		case '-':
			res=a-b;
			printf("The difference is %d",res);
			break;
		case '*':
			res=a*b;
			printf("The product is %d",res);
			break;
		case '/':
			res=a/b;
			printf("The quotient is %d",res);
			break;
		case '%':
			res=a%b;
			printf("The quotient is %d",res);
		default:
			printf("Invalid");
    }
}
