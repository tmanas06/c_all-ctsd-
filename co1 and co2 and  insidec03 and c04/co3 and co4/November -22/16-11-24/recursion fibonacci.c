/*write a recursive program to find the fibonacci series*/
#include<stdio.h>
int fib(int n,int n1,int n2)
{
	int n3;
	if(n>0)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		fib(n-1,n2,n3);
	}
}
int main(){
	int f,n;
	printf("Enter the number n:");
	scanf("%d",&n);
	printf("0\n1\n");
	fib(n-2,0,1);
	return 1;
	
}

