/* write a recursive function to find sum of n elements stored in an array*/
#include<stdio.h>
int sum(int a[],int n);
int main(){
	int i,n,s;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	s=sum(a,n);
	printf("the sum is %d",s);
}
int sum(int a[],int n)
{
	if(n==0)
	return 0;
	else
	return a[n-1]+sum(a,n-1);
}
