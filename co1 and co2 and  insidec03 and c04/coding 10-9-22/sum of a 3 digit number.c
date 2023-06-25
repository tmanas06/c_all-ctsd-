#include<stdio.h>
int main()
{
	int g,m,h,j,k,l;
	printf("enter a 3 digit number");
	scanf("%d",&g);
	l=g/100;
	h=g%100;
	m=h/10;
	j=g%10;
	
	k=m+j+l;
	printf("The value of all is %d",k);
}
