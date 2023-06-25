/*#include<stdio.h>
int binarysearch(int a[],int n,int x);
int main()
{
	int n,x,i,res;
	printf("Enter the size :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element u want to find:");
	scanf("%d",&x);
	res=binarysearch(a,n,x);
	if(res==-1)
	printf("The data not found");
	else
	printf("The data is found in index %d",res);
}
int binarysearch(int a[],int n,int x)
{
	int e,s,m;
	s=0;
	e=n-1;
	while(s<=e)
	{
		m=(s+e)/2;
		if(x==a[m])
		return m;
		else if(x<a[m])
		e=m-1;
		else
		s=m+1;
	}
	return -1;
}
#include<stdio.h>
#include<stdlib.h>
void linearsearch(int a[],int n,int x);
int main()
{
	int x,n,i;
	printf("Enter the size:");
	scanf("%d",&n);
	int a[n],res;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to find:");
	scanf("%d",&x);
	res=linearsearch(a,n,x);
	if(res==-1)
	printf("Element not found");
	else
	printf("The element is in index %d",res);
}
void linearsearch(int a[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
	  if(x==a[i])
	return i;
	}
	return -1;
}
#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("Enter the size:");
	scanf("%d%d",&a,&b);
	int c[a][b];
	printf("Enter data:");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++){
			scanf("%d",&c[i][j]);
		}
	}
	printf("The matrix is\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++){
			printf("%d   ",c[i][j]);
		}
		printf("\n");
	}
}
#include<stdio.h>
int main()
{
	int a,b,i,j,e,f;
	printf("Enter the size matrix 1:");
	scanf("%d%d",&a,&b);
	printf("Enter the size matrix 2:");
	scanf("%d%d",&e,&f);
	int c[a][b];
	int d[e][f];
	if(a==e && b==f){
	printf("Enter data matrix1:");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++){
			scanf("%d",&c[i][j]);
		}
	}
	printf("Enter data matrix 2:");
	for(i=0;i<e;i++)
	{
		for(j=0;j<f;j++){
			scanf("%d",&d[i][j]);
		}
	}
	int g[i][j];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++){
			g[i][j]=c[i][j]*d[i][j];
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++){
			printf("%d   ",g[i][j]);
		}
		printf("\n");
	}
	return 0;
    }     
	else
	printf("Matrix is not possible");
}*/
#include<stdio.h>
int sum(int a,int b);
int main()
{
	int a,b,sumk;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sumk=sum(a,b);
	printf("sum is=%d",sumk);
}
int sum(int a,int b)
{
	
	return a+b(a);
}
