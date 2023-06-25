/* write a c program to display first n natural numbers uding do while loop*/
#include<stdio.h>
int main()
{
	int n,i; 
	printf("Enter the number:");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\n%d",i);
		i=i+1;
	}
	while(i<=n);
	//using while
	/*
	while(1<=n)
	{
	printf("\n%d",i);
	i=i+1;
    }*/
}

