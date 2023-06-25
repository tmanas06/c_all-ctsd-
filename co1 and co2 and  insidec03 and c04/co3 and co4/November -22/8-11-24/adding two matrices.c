/*write a c program to find sum of 2 given matrices*/
// sum of 2 given matrices 
#include <stdio.h>
int main(){
  int m1,m2,n1,n2;
  
  printf("enter the size of matrix 1\n");
  scanf("%d%d",&m1,&n1);
  printf("Enter the size of matrix 2\n");
  scanf("%d%d",&m2,&n2);
  int arr1[m1][n1];
  int arr2[m2][n2];
  if(m1==m2 && n1==n2){
    
    int i,j;
      // loop de loop for inputs
      printf("Enter the values for matrix 1\n\n"); 
      for (i=0 ; i<m1 ; i++)
	  {
        for(j=0 ; j<n1 ; j++)
		{
          scanf("%d",&arr1[i][j]);
        }
      }
      printf("Enter the values for matrix 2\n\n");
      for (i=0 ; i<m2 ; i++)
	  {
        for(j=0 ; j<n2 ; j++)
		{
          scanf("%d",&arr2[i][j]);
        }
      }
      
      // the adding part 
      int sum[m1][n1];
      
      for(i = 0;i<m1; i++)
	  {
        for( j = 0; j<n1 ; j++)
		{
          sum[i][j]= arr1[i][j] + arr2[i][j];
        }
      }
    
      
      
      printf("\n\n --  matrix  -- \n\n");
      // loop de loop for printing sum 
      
      for(i=0;i<m1;i++)
	  {
        for(j=0;j<n1;j++)
		{
          printf("%d  ",sum[i][j]);
        }
        printf("\n");
      }
      return 0;
    }
    else{
      printf("matrix addition is not possible ");
    }
    return 0;    
}
