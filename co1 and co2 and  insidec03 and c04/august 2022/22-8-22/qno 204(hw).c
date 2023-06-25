//question number 24
/*Mohit is a very lazy person. Whatever work is supposed to be finished in x=2 days, he finishes it in m*x 
days where m=2. But there is always a limit to laziness, so he delays the work by at max d=3 days. Find the 
maximum days taken by Mohit to complete the work*/
#include<stdio.h>
int main()
{
	int x,m,days;
	printf("Enter the expected days:");
	scanf("%d",&x);
	printf("Enter the days delayed:");
	scanf("%d",&m);
	days=calctot(x,m);
}
int calctot(int x,int m)
{
	int s;	    
    s=(m*x);
    printf("The maximum number of days taken is %d",s);
    
    return s;
}
