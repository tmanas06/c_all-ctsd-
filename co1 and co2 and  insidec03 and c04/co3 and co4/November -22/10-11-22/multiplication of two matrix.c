/*Multiplication of two matrices*/
#include <stdio.h>
int main(){
	int m1,m2,n1,n2;
		
	printf("enter the size of matrix 1\n");
	scanf("%d%d",&m1,&n1);
	printf("Enter the size of matrix 2\n");
	scanf("%d%d",&m2,&n2);
	
	int arr1[m1][n1];
	int arr2[m2][n2];
	int arr3[m1][n2];
	
	if (n1 == m2){
		
		int i,j,k;
		
		// matrix 1 inps 
		printf("\n Enter the Elements in matrix 1\n");
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				scanf("%d",&arr1[i][j]);
			}
		}
		
		//matrix 2 inps 
		printf("\n Enter the Elements in matrix 2\n");
		for(i=0;i<m2;i++){
			for(j=0;j<n2;j++){
				scanf("%d",&arr2[i][j]);
			}
		}
		
		//printing matrix 1
		printf("\n --Matrix 1-- \n");
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				printf("%d  ",arr1[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		//printing matrix 2
		printf("\n --Matrix 2-- \n");
		for(i=0;i<m2;i++){
			for(j=0;j<n2;j++){
				printf("%d  ",arr2[i][j]);
			}
			printf("\n");
		}
		
		// main multiplication 
		
		for(i=0;i<m1;i++){
			for(j=0;j<n2;j++){
				arr3[i][j]=0;
				for(k=0;k<n1;k++){
					arr3[i][j]+=arr1[j][k] * arr2[k][j];
				}
				
			}
			
		}
		
		// disp multiplied matrix 
		printf("\n --Multiplied matrix is-- \n");
		for(i=0;i<m1;i++){
			for(j=0;j<n2;j++){
				printf("%d  ",arr3[i][j]);
			}
			printf("\n");
		}
			
	}
	else{
		printf("Multiplication is  not possible , Enter Valid sizes again");
	}
	
}
/* got deleted so have to redo
#include<stdio.h>
int main(){
	int m1,n1,i,j,k;
	printf("Enter the number of rows and columns of matrix 1:");
	scanf("%d%d",&m1,&n1);
	int a[m1][n1];
	printf("Data of matrix 1:");
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			scanf("%d",&a[m1][n1]);
		}
	}
	int m2,n2;
	printf("Enter the number of rows and columns of matrix 2:");
	scanf("%d%d",&m2,&n2);
	int b[m2][n2];
	printf("Data of matrix 1:");
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			scanf("%d",&b[m2][n2]);
		}
	}
	printf("\nFirst matrix is \n");
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			printf("   %d  ",a[m1][n1]);
		}
		printf("\n");
	}
	printf("Second matrix is \n");
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			printf("  %d   ",&b[m2][n2]);
		}
		printf("\n");
	}
}*/
