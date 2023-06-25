/* for finding just 2 numbers after decimal */
#include<stdio.h>
int main()
{
	int a,b,c,s;
	float n;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	s=a+b+c;
    n=(float)s/3;       
	printf("sum is %d and average is %.2f",s,n);
	
}
