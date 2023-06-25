/*write a c program to find maximum and minimum from the given 3 data by using a function maxmin*/
#include<stdio.h>
#include<stdlib.h>
void maxmin(int *x,int *y,int *z);
int main()
{
	int a,b,c;
	printf("Enter the 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	maxmin(&a,&b,&c);
}
void maxmin(int *x,int *y,int *z)
{
	if(*x>*y&&*x>*z){
		if(*y>*z){
		printf("%d is max\n",*x);
		printf("%d is min\n",*z);}
		else{
		printf("%d is max\n",*x);
		printf("%d is min\n",*y);}
	}
	
	else if(*y>*x&&*y>*z){
		if(*x>*z){
		printf("%d is max\n",*y);
		printf("%d is min\n",*z);}
		else{
		printf("%d is max\n",*y);
		printf("%d is min\n",*x);}
	}
	
	else{
		if(*x>*y){
		printf("%d is max\n",*z);
		printf("%d is min\n",*y);}
		else{
		printf("%d is max\n",*z);
		printf("%d is min\n",*x);}
	}
	
}

