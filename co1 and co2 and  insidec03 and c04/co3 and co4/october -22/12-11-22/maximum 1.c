/* find maximum element from the array of n given elements */
#include<stdio.h>
int findmax(int a[],int n);
int main()
{
	int n,max;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the elements in array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=findmax(a,n);
	printf("Maximum=%d",max);
}
int findmax(int a[],int n)
{
	int max,i;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
