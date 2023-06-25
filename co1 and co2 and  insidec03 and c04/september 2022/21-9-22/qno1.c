/*write a c program to develop 1 over cricket match where -1 is out ,-2 is wide,-3 is no ball if it is
a no ball ask user to enter the runs and then free hit*/
#include<stdio.h>
int main()
{
	int i,s,a,t;
	printf("Enter the balls:");
	scanf("%d",&a);
	s=0;
	for(i=1;i<=a;)
	{
		printf("Enter runs for ball number %d:",i);
		scanf("%d",&t);
	    if(t==-1)
		{
	       break;
	    }
       if(t==-2)
	    { 
	        s=s+1;
	        continue;
     	}
        if(t==-3)
        {
        	printf("no ball");
        	continue;
		}
		s=s+t;
        i++;
    }
    printf("%d",s);
}
