/*write a c program to declare a m/n matrix .accept the input from user and display the data
in transpose form*/
#include<stdio.h>
int main()
{
	int m,n,i,j;
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
	printf("Matrix in transpose form is \n");
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       printf("%.2f   ",a[j][i]);
     }	
    }
}

