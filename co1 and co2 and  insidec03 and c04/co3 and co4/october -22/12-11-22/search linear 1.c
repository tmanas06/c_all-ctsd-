/* search the given element x from the array having n given elements*/
#include<stdio.h>
int linearsearch(int a[],int n,int x);
int main()
{
	int x,res,n;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter elements in the array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the data you want to search:");
	scanf("%d",&x);
	res=linearsearch(a,n,x);
	if(res==-1)
	printf("Data not found");
	else
	printf("Data found in index %d",res);
}
int linearsearch(int a[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		return i;
	}
	return -1;
}
