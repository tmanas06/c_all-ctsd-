//question number 11
/*Raju started learning programming and tries to solve at least one problem on his own. He started
solving the problem at 15:10 and completed it at 16:05. How long did he take to solve the
problem? (Give your answer in minutes).*/

#include<stdio.h>
int main()
{
	int h1,m1,h2,m2,tm;
	printf("Enter the hour:");
	scanf("%d",&h1);
	printf("Enter the minute:");
	scanf("%d",&m1);
	printf("Enter the end hour:");
	scanf("%d",&h2);
	printf("Enter the end minute:");
	scanf("%d",&m2);
	
	
	tm=timeminute(h1,m1,h2,m2);
	printf("He took %d minutes to complete the problem",tm);
}
int timeminute(int h1,int m1,int h2,int m2)
{
	int t1,t2,tm;
	t1=h1*60+m1;
	t2=h2*60+m2;
	tm=t2-t1;
	return tm;
	
}

