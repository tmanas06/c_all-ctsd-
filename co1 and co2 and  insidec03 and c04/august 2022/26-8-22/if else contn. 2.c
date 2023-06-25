/* to display all 2 numbers except the smallest number from the giving 3 numbers */
#include<stdio.h>
int main()
{
	int a,b,c,min;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	min=minimum(a,b,c);
}
int minimum(int a,int b,int c)
{
	if((a>b)&&(a>c))
	{
		if(b>c)
		{
			printf("%d %d",a,b);
		}
		else
		{
			printf("%d %d",a,c);
		}
    }
	else
	{
		printf("%d %d",b,c);
	}
}
