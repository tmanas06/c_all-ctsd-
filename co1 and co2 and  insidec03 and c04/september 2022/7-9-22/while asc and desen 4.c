/* display the power of the nth value*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,p;
	printf("the number is between 1 and 9");
	printf("\nEnter the number:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		p=pow(i,i);
		printf("\n%d",p);
		i=i+1;
	}
/*	
	i=1;
    while(i=pow(n,n))
    {
    	printf("\n%d",i);
    	break;
	}
*/	
}
