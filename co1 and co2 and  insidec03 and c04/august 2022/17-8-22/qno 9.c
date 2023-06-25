//question number 9
/* Neha is very conscious about number of hours she spent on problem solving.If she solves one problem
on first day, on second day she solves one more than more than first day count and so on. 
Find the number of problems she solves on the nth day. If she takes x minutes to solve each problem, 
find the total hours she spent on problem solving in that week. */

#include<stdio.h>
int main()
{
	int x,n,we;
	
	printf("Enter the numberth day:");
	scanf("%d",&n);
	printf("Enter the time taken per question:");
	scanf("%d",&x);
	we=calc(n,x);
}
int calc(int n,int x)
{
    float d,h;
	d=(n*(n+1))/2;
	h=(d*x)/60;
	
	printf("she solved %.3f number of problems",d);
	printf("\nThe total time it took for her to solve the problem is %.4f hours",h);
}
