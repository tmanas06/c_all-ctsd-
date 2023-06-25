/* write a c program to find sum of each row in the given m by n matrix*/
#include<stdio.h>
int main()
{
	int m,n,i,j,max;
	printf("Enter number of rows and columns in the matrix:");
	scanf("%d%d",&m,&n);
	float a[m][n];
	printf("Enter the data in the %d*%d matrix",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	printf("Matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%.2f   ",a[i][j]);
		}
		printf("\n");
	}	
	
	for(i=0;i<m;i++)
	{
		max=a[i][0];
		for(j=1;j<n;j++){
			if(a[i][j]>max)
			max=a[i][j];
		}
		
	}
	printf("\nSum of column %d is %d",i,max);
}
