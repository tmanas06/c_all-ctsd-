/* find whether the person is eligible for marriage or not for the given gender and age(m-male,f-female)
(m-age >21)(f-age >18) display eligible for marriage*/
#include <stdio.h>
int main()
{
	char g;
	int m,s,f;
	printf("if male then m \nif female then f");
	printf("\nEnter your gender:");
	scanf("%c",&g);
	printf("Enter your age:");
	scanf("%d",&s);

	if(m&&s>21)
	{
	printf("Eligible for marriage");
	}
	else if(m&&s<21)
	{
	printf("Not Eligible");
	}
	else if(f&&s>18)
	{
	printf("Eligible for marriage");	
	}
	else if(f&&s<18)
	{
	printf("Not Eligible");
    }
    else
    {
    	printf("....");
	}
}
