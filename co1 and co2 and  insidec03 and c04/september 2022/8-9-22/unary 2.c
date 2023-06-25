/* accept n numbers and count number of positive numbers and number of negative numbers in the given n 
numbers*/
#include<stdio.h>
int main()
{
	int n,i,pctr,nctr,num;
	printf("How many numbers to enter:");
	scanf("%d",&n);
	i=1;
	pctr=0;
	nctr=0;
	while(i<=n)
	{
		printf("Enter a number:");
	    scanf("%d",&num);
	    if(num>0)
	    {
	    	pctr++;
		}
		else
		{
			nctr++;
		}
	i++;
	}
	printf("\nNumber of positive numebr=%d",pctr);
	printf("\nNumber of negative numebr=%d",nctr);
}
