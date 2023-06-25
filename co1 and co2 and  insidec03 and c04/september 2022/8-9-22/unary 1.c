/* count number of even numbers given by user (when user presses -999 the program should stop and display the
number of even numbers given by user) */
#include<stdio.h>
int main()
{
	int num,crt;
	printf("Enter the number.press -999 to stop:");
	scanf("%d",&num);
	while(num != -999)
	{
		if(num%2==0)
		{
			crt++;
		}
		printf("Enter the number.press -999 to stop:");
	    scanf("%d",&num);
	}
	printf("Number of even numbers given by user is=%d",crt);
}
