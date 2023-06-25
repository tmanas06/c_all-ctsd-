/*display 1,2,4,8,16,32....(2power 0 to 2power n)*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the power");
	scanf("%d",&n);
	i=0;
	while(i>=0)
	{
		n=pow(2,n);
		printf("%d",n);
		i=i+1;
	}
}
