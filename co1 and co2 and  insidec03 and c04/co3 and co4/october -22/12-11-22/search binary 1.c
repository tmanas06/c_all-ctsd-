/* search the given element x from the array having n given elements*/
#include<stdio.h>
int binarysearch(int a[],int n,int x);
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
	res=binarysearch(a,n,x);
	if(res==-1)
	printf("Data not found");
	else
	printf("Data found in index %d",res);
}
int binarysearch(int a[],int n,int x)
{
	int si,ei,mi;
	si=0;
	ei=n-1;
	while(si<=ei)
	{
		mi=(si+ei)/2;
		if(x==a[mi])
		return mi;
		else if(x<a[mi])
		ei=mi-1;
		else
		si=mi+1;
	}
	return -1;
}
