/* calculate mean,median and mode for the given array of n elements*/
#include<stdio.h>
void main(int n)
{
	int max,x,c,j,y;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the elements in array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		x=a[1]; //count / median
		c=1;
		for(j=i;j<n;j++)
		{
			if((i!=j)&&(x==a[j]))
			c=c+1;
		}
		if(a[i]!=0)
		printf("%d occured %d times \n",a[i],c);
		if(c>max)
		{
			y=x;
			max=c;
		}
	}
	printf("%d occured %d no.of times \n",y,max);
}
