/* find the greatest of 2 given numbers using switch case */
#include<stdio.h> 
int main()
{
	int a,b,c;
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	c=a>b;
	switch(c)
	{
		case 1:
			printf("%d is maximum",a);
			break;
		case 0:
			printf("%d is maximum",b);
			break;
	}
}
