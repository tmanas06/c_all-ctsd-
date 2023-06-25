/* write a recursive function to find product of n elements stored in an array*/
#include<stdio.h>
int sum(int a[],int n);
int main(){
	int i,n,p;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	p=product(a,n);
	printf("the product is %d",p);
}
int product(int a[],int n)
{
	if(n==0)
	return 1;
	else
	return a[n-1]*product(a,n-1);
}
