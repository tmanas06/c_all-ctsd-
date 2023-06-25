//question 1
/* program to find average of 3 given numbers by using a function called average.*/

#include<stdio.h>
int main()
{
	int a,b,c,s;
	float avg;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c);
	avg=average(a,b,c);
	printf("average is %.3f",avg);
}
int average(int x,int y,int z)
{
	float avg;
	avg=(x+y+z)/3;
	return avg;
}
