/* program to accept a characterr and display the character in opposite case*/
#include<stdio.h>
int main()
{
	char ch;
	int x,y,z;
	printf("enter the character:");
	scanf("%c",&ch);
	x=ch;
	if((x>=65)&&(x<=90))
	{
		y=ch+32;
		printf("The character in lower case is %c",y);
	}
	else if((x>=97)&&(x<=122))
	{
		z=ch-32;
		printf("The character in lower case is %c",z);	
	}
	else
	{
		printf("invalid");
	}
}


	
/*
	if (x<=90) 
	{
		y=ch+32;
		printf("The character in lower case is %c",y);
	}
	else
	{
		z=ch-32;
		printf("The character in lower case is %c",z);	
	}
	
}*/
