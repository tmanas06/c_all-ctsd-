/*c program to find sum and average of 3 given numbers*/

#include<stdio.h>
int main()
{
	int a,b,c,s;
	float n;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	s=a+b+c;
    n=s/3.0; 
/*	n=(float)s/3; */         
	printf("sum is %d and average is %f",s,n);
	
}

/* writing 3.0 may be annouying sometimes so we can us float directly to take it directly*/
