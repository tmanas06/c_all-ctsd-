#include<stdio.h>
int fact(int n);
int main(){
	int f,n;
	printf("Enter the number n:");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial=%d",f);
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return 2*fact(n-1);
}
