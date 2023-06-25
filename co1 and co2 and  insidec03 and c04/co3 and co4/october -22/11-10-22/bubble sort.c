/* sort the given array of elements in ascending order by using bubble sort */
#include<stdio.h>
void bubblesort(int a[],int n);
void display(int a[],int n);
int main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter elements in the array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Before sorting");
	display(a,n);
	bubblesort(a,n);
	printf("\n After sorting");
	display(a,n);
}
void display(int a[],int n)
{
	int i;
	printf("Array elements");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
}
void bubblesort(int a[],int n)
{
	int s,c,temp;
	for(s=1;s<=n;s++)
	{
		for(c=0;c<=n-s-1;c++)
		{
			if(a[c]>a[c+1]) //for descending order a[c] < a[c+1]
			{
				temp=a[c];
				a[c]=a[c+1];
				a[c+1]=temp;
			}
		}
	}
}
