/* write a c program to develop one over cricket match score user presses -1 to indicate output*/
#include<stdio.h>
int main()
{
	int runs,i,total=0;
	for(i=1;i<=6;i++)
	{
		printf("Enter runs for ball number %d:",i);
		scanf("%d",&runs);
		if(runs==-1)
		{
			break;
        }
        total=total+runs;
	}
	printf("Total runs scored=%d",total);
}
