/* c program to accept a alphabet in uppercase from the user and display the character in 
a)given form
b)in ascii value
c)in lower case*/
#include<stdio.h>
int main()
{
	char ch;
	int x,y;
	printf("Enter an alphabet in upper case:");
	scanf("%c",&ch);
	printf("Given character is %c",ch);
	x=ch; //by storing in x which is an integer type it stores the alphabet in ascii value
	printf("\nASCII value is %d",x);
	y=x+32;
	printf("\nGiven character in lower case ASCII value is %d",y);
	printf("\nGiven character in lower case %c",y);
}
