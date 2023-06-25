/* Find the second max*/
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
	int sec_max,i;
	sec_max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>sec_max)
		sec_max=a[i]-a[i+i];
	}
	return sec_max;
}
