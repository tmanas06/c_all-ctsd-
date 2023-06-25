#include<stdio.h>
int sum(int x,int y) //function prototype (currently not required)
{
	int s;
	s=x+y;
	return s;
}
int main()
{
	int a,b,s;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
	printf("Sum = %d",s);
}



