/* write a c program to check whether student passed in intermediate or not for the given inter 1 and inter
2 marks */
#include<stdio.h>
int main()
{
	int i1,i2;
	printf("Enter I1 and I2 marks:");
	scanf("%d\n%d",&i1,&i2);
	if(i1>50)
	{
		if(i2>50)
		{
			printf("passed in Intermediate");
		}
		else
		{
			printf("Passed in intermediate 1,but failed in intermediate 2");
		}
	}
	else
	{
		printf("failed in intermediate 1");
	}
}
